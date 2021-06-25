%{
  #include <stdio.h>
  #include <string.h>
  int lineNum = 1;
  #include "cgen.h"
  #include  "myanalyzer.tab.h"
  
%}

ID      [a-zA-Z][0-9a-zA-Z_]*
DIGIT   [0-9]
NUMBER  [+-]?{DIGIT}{DIGIT}*
INTEGER 0|[1-9]{DIGIT}*
DECIMAL ([+-]?"."{NUMBER})|([+-]?{NUMBER}("."{NUMBER}?)?)  
REAL    {DECIMAL}([eE][+-]?{NUMBER})?
STRING  \"[^\n]*\"|\'[^\n]*\'

%x comment 
%x line_comment

%%
if          { return KW_IF;};
else        { return KW_ELSE;};

true	      { return KW_TRUE;};
false	      { return KW_FALSE;};

number      { return KW_NUMB;}
boolean     { return KW_BOOLEAN;} 
string      { return KW_STRING;}
void        { return KW_VOID;}

var         { return KW_VAR;}
const       { return KW_CONST;}

for         { return KW_FOR;}
while       { return KW_WHILE;}
function    { return KW_FUNCTION;}
break       { return KW_BREAK;}
continue    { return KW_CONTINUE;}
not         { return KW_NOT;}
and         { return KW_AND;}
or          { return KW_OR;}
return      { return KW_RETURN;}
null        { return KW_NULL;}
start       { return KW_START;}


{ID}        {  yylval.str = strdup(yytext);  return IDENTIFIER; }
{INTEGER}   {  yylval.str = strdup(yytext);  return INT; }
{REAL}      {  yylval.str = strdup(yytext);  return REAL; }
{STRING}    {  yylval.str = strdup(yytext);  return STRING; }

"="        { return ASSIGN_OP ;}
"+"        { return OP_ADD ;}
"-"        { return OP_SUB ;}
"*"        { return OP_MULT;}
"%"        { return OP_MOD ;}
"**"       { return EXP_OP ;}
"=="       { return EQUAL_OP ;} 
"<="       { return LTE_OP ;}
">="       { return GTE_OP ;} 
"!="       { return NOT_EQ_OP ;}
"<"        { return LESS_OP ;}      
">"        { return GREATER_OP ;}     
"/"        { return OP_DIV ;}

";"        { return DEL_SEMICOLON ;} //delimiters
"("        { return DEL_LEFT_PAR ;}
")"        { return DEL_RIGHT_PAR ;}
","        { return DEL_COMMA ;}
"["        { return DEL_LEFT_BRA ;}
"]"        { return DEL_RIGHT_BRA ;}
"{"        { return DEL_LEFT_CBRA ;}
"}"        { return DEL_RIGHT_CBRA ;}
":"        { return DEL_COLON ;}

"//"         {BEGIN(line_comment);} 
<line_comment>[^\n]*    /*Eat all one line comments*/
<line_comment>\n {++lineNum;BEGIN(INITIAL);}

"/*"                    { BEGIN(comment);}
<comment>[^*\n]*        /* eat anything that's not a '*' */
<comment>"*"+[^*/\n]*   /* eat up '*'s not followed by '/'s */
<comment>\n             ++lineNum;
<comment>"*"+"/"        { BEGIN(INITIAL);} /*http://dinosaur.compilertools.net/flex/manpage.html HELPER*/

[ \r\t]			/* skip whitespace */
\n 					 ++lineNum;

<<EOF>> 	return EOF;
.           { printf("Line %d Lexical Error: Unrecognized literal %s\n", lineNum, yytext); }


%%
/* int main ()
{
   int token;
   while ( (token = yylex()) != EOF )
      printf("Line %d Token %d: %s\n", lineNum, token, yytext);
} 
      not used
{DECIMAL}   {  yylval.str = strdup(yytext); return DECIMAL; }

*/