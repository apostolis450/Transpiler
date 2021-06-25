/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_MYANALYZER_TAB_H_INCLUDED
# define YY_YY_MYANALYZER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INT = 259,
    REAL = 260,
    STRING = 261,
    KW_NUMB = 262,
    KW_BOOLEAN = 263,
    KW_STRING = 264,
    KW_VOID = 265,
    KW_VAR = 266,
    KW_CONST = 267,
    KW_FOR = 268,
    KW_WHILE = 269,
    KW_FUNCTION = 270,
    KW_BREAK = 271,
    KW_CONTINUE = 272,
    KW_START = 273,
    KW_AND = 274,
    KW_OR = 275,
    KW_RETURN = 276,
    KW_NULL = 277,
    KW_IF = 278,
    KW_ELSE = 279,
    KW_TRUE = 280,
    KW_FALSE = 281,
    KW_NOT = 282,
    OP_ADD = 283,
    OP_SUB = 284,
    OP_MULT = 285,
    OP_DIV = 286,
    OP_MOD = 287,
    EQUAL_OP = 288,
    NOT_EQ_OP = 289,
    GREATER_OP = 290,
    LESS_OP = 291,
    EXP_OP = 292,
    LTE_OP = 293,
    GTE_OP = 294,
    DEL_SEMICOLON = 295,
    DEL_COLON = 296,
    DEL_LEFT_PAR = 297,
    DEL_RIGHT_PAR = 298,
    DEL_COMMA = 299,
    DEL_LEFT_BRA = 300,
    DEL_RIGHT_BRA = 301,
    DEL_LEFT_CBRA = 302,
    DEL_RIGHT_CBRA = 303,
    ASSIGN_OP = 304
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 10 "myanalyzer.y" /* yacc.c:1909  */

  char* str;
  //int intNum; //boolean -> integer
  //double doubleNum;

#line 110 "myanalyzer.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */
