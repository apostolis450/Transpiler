%{
  #include <stdio.h>
  #include "cgen.h"
  
  extern int yylex(void);
  extern int lineNum;
%}

%union
{
  char* str;
  //int intNum; //boolean -> integer
  //double doubleNum;
}

// %define parse.trace
// %debug

%token <str> IDENTIFIER
%token <str> INT 
//%token <double> DECIMAL 
%token <str> REAL 
%token <str> STRING
//%token <str> NUMBER

//keywords
%token KW_NUMB
%token <str> KW_BOOLEAN
%token KW_STRING
%token KW_VOID
%token <str> KW_VAR  
%token KW_CONST 
%token KW_FOR 
%token KW_WHILE 
%token <str> KW_FUNCTION 
%token KW_BREAK 
%token KW_CONTINUE 
%token KW_START

 

%token KW_AND 
%token KW_OR
%token KW_RETURN
%token KW_NULL
%token KW_IF
%token KW_ELSE
%token KW_TRUE
%token KW_FALSE

%right KW_NOT

//ops
%right OP_ADD OP_SUB
%left  OP_MULT OP_DIV OP_MOD

%left  EQUAL_OP NOT_EQ_OP
%left  GREATER_OP LESS_OP
%left  EXP_OP
%left  LTE_OP GTE_OP
//delimiters
%left  DEL_SEMICOLON DEL_COLON
%left  DEL_LEFT_PAR DEL_RIGHT_PAR
%left  DEL_COMMA
%left  DEL_LEFT_BRA DEL_RIGHT_BRA
%left  DEL_LEFT_CBRA DEL_RIGHT_CBRA  
 
%left ASSIGN_OP


%type <str> main_program
%type <str> start_func
%type <str> func_param_decl
%type <str> func_declaration
%type <str> func_declaration_types
%type <str> func_declarations_main_body 
%type <str> func_main_body

%type <str> declaration_main_body
%type <str> declaration_ids
%type <str> var_declaration 
%type <str> var_initialize
%type <str> var_multiple

%type <str> constant_declaration
%type <str> constant_multiple
%type <str> constant_initialize

%type <str> type
%type <str> data_type

%type <str> assign_cmd
%type <str> complex_statements
%type <str> if_cmd
%type <str> while_cmd
%type <str> func_call
%type <str> func_call_list
%type <str> for_cmd
%type <str> break_cmd
%type <str> continue_cmd
%type <str> return_cmd

%type <str> expression_list
%type <str> expression_type
%type <str> expression
%type <str> signed_exp
%type <str> statements
%type <str> statements_list
/* %type <str>  */
/* %type <str>  */
/* %type <str>  */
/* %type <str>  */


%start input

%%

input:     
 main_program
{ 
  if (yyerror_count == 0) {
    puts(c_prologue);
    printf("%s\n", $1); 
  }
}
;

main_program:
  start_func { $$ = template("%s",$1);}
  | declaration_main_body start_func { $$ = template("%s\n\n%s",$1,$2);}
  | func_declaration start_func { $$ = template("%s\n%s",$1,$2); }
  | declaration_main_body func_declaration start_func  { $$ = template("%s\n\n%s\n\n%s",$1,$2,$3); }
;

/*----------------------------------------------
              functions rules
 ----------------------------------------------*/
start_func: 
    KW_FUNCTION KW_START DEL_LEFT_PAR DEL_RIGHT_PAR DEL_COLON type DEL_LEFT_CBRA DEL_RIGHT_CBRA { $$ = template("%s  main() {\n}" ,$6); }
  | KW_FUNCTION KW_START DEL_LEFT_PAR DEL_RIGHT_PAR DEL_COLON type DEL_LEFT_CBRA func_main_body DEL_RIGHT_CBRA { $$ = template("%s  main() {\n%s\n}" ,$6,$8); }
; 

func_declaration:
  func_declaration_types
  | func_declaration func_declaration_types { $$ = template("%s\n%s",$1,$2);}
;

func_declaration_types:
    KW_FUNCTION IDENTIFIER DEL_LEFT_PAR DEL_RIGHT_PAR DEL_COLON type DEL_LEFT_CBRA DEL_RIGHT_CBRA { $$ = template("%s  %s() {}" ,$6,$2); }
  | KW_FUNCTION IDENTIFIER DEL_LEFT_PAR func_param_decl DEL_RIGHT_PAR DEL_COLON type DEL_LEFT_CBRA DEL_RIGHT_CBRA { $$ = template("%s  %s(%s) {}",$7,$2,$4); }
  | KW_FUNCTION IDENTIFIER DEL_LEFT_PAR DEL_RIGHT_PAR DEL_COLON type DEL_LEFT_CBRA func_main_body DEL_RIGHT_CBRA { $$ = template("%s() {%s}" ,$6,$2,$8); }
  | KW_FUNCTION IDENTIFIER DEL_LEFT_PAR func_param_decl  DEL_RIGHT_PAR DEL_COLON type DEL_LEFT_CBRA func_main_body DEL_RIGHT_CBRA { $$ = template("%s  %s(%s) {%s\n}",$7,$2,$4,$9); }
;

func_param_decl:
   declaration_ids DEL_COLON type { $$ = template("%s %s ",$3,$1); }
  | declaration_ids DEL_COLON type DEL_COMMA func_param_decl { $$ = template("%s %s, %s",$3,$1,$5); }
;

func_declarations_main_body:
   declaration_main_body      
  | statements_list 
;

func_main_body:
  func_declarations_main_body                    { $$ = template("%s",$1);}
  | func_main_body func_declarations_main_body   { $$ = template("\n%s\n%s",$1,$2);}
;

/*---------------------------------------------- 
        variables-constants rules
 ----------------------------------------------*/
 /*var and consts declaration*/
declaration_main_body:
   constant_multiple      
  |declaration_main_body var_declaration { $$ = template("%s\n%s",$1,$2); }
;

var_declaration:
    KW_VAR var_multiple DEL_COLON type DEL_SEMICOLON { $$ = template(" %s %s;",$4,$2); }
   | var_declaration KW_VAR var_multiple DEL_COLON type DEL_SEMICOLON { $$ = template("%s\n  %s %s;",$1,$5,$3); }
  ;

var_multiple:
  var_initialize
  | var_multiple DEL_COMMA var_initialize  { $$ = template("%s, %s",$1,$3); }
;

var_initialize:
    declaration_ids
  | declaration_ids ASSIGN_OP data_type { $$ = template("%s = %s",$1,$3); }
;
                 
declaration_ids:
    IDENTIFIER                                 { $$ = template("%s",$1);}
  | IDENTIFIER DEL_LEFT_BRA INT DEL_RIGHT_BRA  { $$ = template("%s[%s]",$1,$3);}
;
/*---------------------------------------------------------------------------------------*/
/* one or many line of constants declarations */
constant_multiple:
  %empty                                   { $$ = template("");}
  |constant_declaration                    { $$ = template("const %s",$1);}
  |constant_multiple constant_declaration  { $$ = template("%s\n%s",$1,$2); }
;

constant_declaration:
   KW_CONST constant_initialize DEL_COLON type DEL_SEMICOLON { $$ = template("%s %s;",$4,$2); }
;

constant_initialize:
     IDENTIFIER                     { $$ = template("%s",$1);}
   | IDENTIFIER ASSIGN_OP data_type { $$ = template("%s = %s",$1,$3); }
;

data_type: 
    IDENTIFIER  { $$ = template("%s", $1); }
  | INT         { $$ = template("%s", $1); }
  | REAL        { $$ = template("%s", $1); }
  | STRING      { $$ = template("%s", $1); }
  | KW_TRUE     { $$ = "1"; }
  | KW_FALSE    { $$ = "0"; }
;

type: 
    KW_VOID           { $$ = template("%s", "void"); }
  | KW_BOOLEAN        { $$ = template("%s", "int"); }
  | KW_NUMB           { $$ = template("%s", "double"); }
  | KW_STRING         { $$ = template("%s", "char *"); }
;

/********************************************* 
       expressions/statements rules
 ********************************************/
complex_statements:
  statements_list                                   { $$ = template("\n\t%s",$1); }
  | DEL_LEFT_CBRA statements_list DEL_RIGHT_CBRA DEL_SEMICOLON    { $$ = template("{%s\n }",$2); }
;

statements_list:
  statements                    
  | statements_list statements  { $$ = template("\n\t%s\n\t%s",$1,$2); }
 ;
 
statements: 
    assign_cmd      { $$ = template(" %s",$1); }
  | func_call       { $$ = template(" %s",$1); }
  | continue_cmd    { $$ = template(" %s",$1); }
  | break_cmd       { $$ = template(" %s",$1); }
  | while_cmd       { $$ = template(" %s",$1); }
  | for_cmd         { $$ = template(" %s",$1); }
  | if_cmd          { $$ = template(" %s",$1); }
  | return_cmd      { $$ = template(" %s",$1); }
 ;

func_call_list:
  %empty                                  { $$ = template("");}
  | func_call_list DEL_COMMA expression   { $$ = template("%s , %s", $1,$3); }
  | expression                            { $$ = template("%s", $1);}
;
func_call:
  IDENTIFIER DEL_LEFT_PAR func_call_list DEL_RIGHT_PAR DEL_SEMICOLON { $$ = template("%s(%s);",$1,$3); }
;

assign_cmd:
  declaration_ids ASSIGN_OP expression_list   { $$ = template("%s = %s",$1,$3); }
;

continue_cmd:
  KW_CONTINUE DEL_SEMICOLON { $$ = template("continue;"); }
;

break_cmd:
  KW_BREAK DEL_SEMICOLON  { $$ = template("break;"); }
;


for_cmd:
  KW_FOR DEL_LEFT_PAR assign_cmd expression_list assign_cmd DEL_RIGHT_PAR complex_statements { $$ = template("for (%s %s %s) {\n  %s\n }",$3,$4,$5,$7); }
;

while_cmd:
  KW_WHILE expression complex_statements { $$ = template("while %s %s",$2,$3); }
 ;

if_cmd:
  KW_IF  expression  complex_statements { $$ = template("if %s %s",$2,$3); }
  | if_cmd KW_ELSE complex_statements { $$ = template("%s\nelse\n%s",$1,$3); }
  | if_cmd KW_ELSE KW_IF expression complex_statements KW_ELSE complex_statements { $$ = template("%s\n else if %s %s\n else %s ",$1,$4,$5,$7); }
 ;

return_cmd:
    KW_RETURN DEL_SEMICOLON  { $$ = template("\n\treturn ;"); }
  | KW_RETURN expression_list { $$ = template("\n\treturn %s",$2); }
;
/*---------------------------------------------------------------*/
expression_list:
  %empty                         { $$ = template(""); }
  |expression DEL_SEMICOLON      { $$ = template("%s;",$1); }
;

expression_type:
    data_type
  | IDENTIFIER DEL_LEFT_PAR expression DEL_RIGHT_PAR { $$ = template("%s(%s) ",$1,$3);}
  | IDENTIFIER DEL_LEFT_PAR DEL_RIGHT_PAR { $$ = template("%s() ",$1);}
  | IDENTIFIER DEL_LEFT_BRA expression DEL_RIGHT_BRA { $$ = template("%s[%s] ",$1,$3);}
  | DEL_LEFT_PAR expression DEL_RIGHT_PAR { $$ = template("(%s)",$2); }
;

expression:  
  expression_type
  | expression_type OP_ADD     expression        { $$ = template("%s + %s",$1,$3);}
  | expression_type OP_SUB     expression        { $$ = template("%s - %s",$1,$3);}
  | expression_type OP_MULT    expression        { $$ = template("%s * %s",$1,$3);}
  | expression_type OP_DIV     expression        { $$ = template("%s / %s",$1,$3);}
  | expression_type OP_MOD     expression        { $$ = template("(int) %s %% (int)%s",$1,$3);}
  | expression_type EXP_OP     expression        { $$ = template("%s ** %s",$1,$3);}
  | expression_type GREATER_OP expression        { $$ = template("%s > %s",$1,$3);}
  | expression_type LESS_OP    expression        { $$ = template("%s < %s",$1,$3);}
  | expression_type GTE_OP     expression        { $$ = template("%s >= %s",$1,$3);}
  | expression_type LTE_OP     expression        { $$ = template("%s <= %s",$1,$3);}
  | expression_type EQUAL_OP   expression        { $$ = template("%s == %s",$1,$3);}
  | expression_type NOT_EQ_OP  expression        { $$ = template("%s != %s",$1,$3);}
  | expression_type KW_AND     expression        { $$ = template("%s && %s",$1,$3);}
  | expression_type KW_OR      expression        { $$ = template("%s || %s",$1,$3);}
  | KW_NOT expression                            { $$ = template("!%s",$2); }
  | signed_exp
;
signed_exp:
  OP_ADD expression_type                         { $$ = template("+%s",$2); }
  | OP_SUB expression_type                       { $$ = template("-%s",$2); }
;

/*---------------------------------------------------------------*/
%%
int main () {
  if ( yyparse() == 0 )
    printf("/* \nAccepted!\n */");
  else
    printf(" \nRejected!\n");
}
