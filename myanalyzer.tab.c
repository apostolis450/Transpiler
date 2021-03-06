/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "myanalyzer.y" /* yacc.c:339  */

  #include <stdio.h>
  #include "cgen.h"
  
  extern int yylex(void);
  extern int lineNum;

#line 74 "myanalyzer.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "myanalyzer.tab.h".  */
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
#line 10 "myanalyzer.y" /* yacc.c:355  */

  char* str;
  //int intNum; //boolean -> integer
  //double doubleNum;

#line 170 "myanalyzer.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MYANALYZER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 187 "myanalyzer.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   310

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  194

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   120,   120,   130,   131,   132,   133,   140,   141,   145,
     146,   150,   151,   152,   153,   157,   158,   162,   163,   167,
     168,   176,   177,   181,   182,   186,   187,   191,   192,   196,
     197,   202,   203,   204,   208,   212,   213,   217,   218,   219,
     220,   221,   222,   226,   227,   228,   229,   236,   237,   241,
     242,   246,   247,   248,   249,   250,   251,   252,   253,   257,
     258,   259,   262,   266,   270,   274,   279,   283,   287,   288,
     289,   293,   294,   298,   299,   303,   304,   305,   306,   307,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   330,   331
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INT", "REAL", "STRING",
  "KW_NUMB", "KW_BOOLEAN", "KW_STRING", "KW_VOID", "KW_VAR", "KW_CONST",
  "KW_FOR", "KW_WHILE", "KW_FUNCTION", "KW_BREAK", "KW_CONTINUE",
  "KW_START", "KW_AND", "KW_OR", "KW_RETURN", "KW_NULL", "KW_IF",
  "KW_ELSE", "KW_TRUE", "KW_FALSE", "KW_NOT", "OP_ADD", "OP_SUB",
  "OP_MULT", "OP_DIV", "OP_MOD", "EQUAL_OP", "NOT_EQ_OP", "GREATER_OP",
  "LESS_OP", "EXP_OP", "LTE_OP", "GTE_OP", "DEL_SEMICOLON", "DEL_COLON",
  "DEL_LEFT_PAR", "DEL_RIGHT_PAR", "DEL_COMMA", "DEL_LEFT_BRA",
  "DEL_RIGHT_BRA", "DEL_LEFT_CBRA", "DEL_RIGHT_CBRA", "ASSIGN_OP",
  "$accept", "input", "main_program", "start_func", "func_declaration",
  "func_declaration_types", "func_param_decl",
  "func_declarations_main_body", "func_main_body", "declaration_main_body",
  "var_declaration", "var_multiple", "var_initialize", "declaration_ids",
  "constant_multiple", "constant_declaration", "constant_initialize",
  "data_type", "type", "complex_statements", "statements_list",
  "statements", "func_call_list", "func_call", "assign_cmd",
  "continue_cmd", "break_cmd", "for_cmd", "while_cmd", "if_cmd",
  "return_cmd", "expression_list", "expression_type", "expression",
  "signed_exp", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304
};
# endif

#define YYPACT_NINF -102

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-102)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,    15,     5,    36,  -102,  -102,    23,  -102,     4,    30,
    -102,    -1,    10,    45,    52,  -102,  -102,  -102,    53,  -102,
      23,    90,  -102,   251,   252,    -2,    59,    58,     9,  -102,
      56,  -102,    53,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,    73,    74,    71,    76,    81,   121,
     252,    53,   251,    14,  -102,   252,    86,   252,   252,    87,
      89,  -102,  -102,   252,    85,   252,    97,    98,  -102,  -102,
      94,    83,   106,    53,    95,  -102,    37,   100,   216,   114,
     117,   211,   216,  -102,  -102,   107,   154,   118,   287,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,   142,  -102,   123,  -102,
    -102,   135,   216,    53,    39,   216,   221,   221,   216,  -102,
     250,   171,  -102,  -102,  -102,  -102,  -102,   129,   171,  -102,
    -102,   216,  -102,   183,  -102,   147,  -102,   -15,  -102,   216,
     206,   216,  -102,  -102,  -102,   134,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     287,  -102,   287,  -102,  -102,  -102,   216,  -102,  -102,   138,
     216,    53,  -102,   136,   143,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
     159,   171,  -102,  -102,   148,  -102,  -102,   141,   166,   171,
    -102,   171,  -102,  -102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      31,     0,     0,     0,     2,     3,     0,     9,     0,    21,
      32,    35,     0,     0,     0,     1,     5,    10,     0,     4,
       0,    22,    33,     0,     0,     0,     0,    29,     0,    25,
      27,     6,     0,    37,    38,    39,    40,    41,    42,    36,
      45,    44,    46,    43,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,    26,    28,     0,     0,     0,    15,     0,    30,    23,
       0,    31,     0,     0,    31,    24,    29,     0,     0,     0,
       0,    73,     0,    11,    19,    31,    17,     0,    18,    49,
      52,    51,    53,    54,    56,    55,    57,    58,    31,    16,
       7,    31,    59,     0,    37,     0,     0,     0,     0,    75,
      80,     0,    96,    65,    64,    71,    72,     0,     0,    13,
      20,    73,    50,     0,    12,    31,     8,     0,    61,     0,
       0,     0,    95,    97,    98,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    47,    74,    68,    63,     0,    69,    14,     0,
       0,     0,    77,     0,     0,    79,    93,    94,    81,    82,
      83,    84,    85,    91,    92,    87,    88,    86,    90,    89,
       0,     0,    62,    60,     0,    76,    78,     0,    68,     0,
      48,     0,    66,    70
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,     6,   185,     7,   125,   -80,   -68,   201,
    -102,   170,   152,   -16,  -102,   196,  -102,   -19,   -11,   -98,
    -101,   -88,  -102,  -102,  -100,  -102,  -102,  -102,  -102,  -102,
    -102,   -97,   -44,   -71,  -102
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,     7,    46,    84,    85,    86,
      21,    28,    29,    87,     9,    10,    12,   109,    44,   151,
      88,    89,   127,    90,    91,    92,    93,    94,    95,    96,
      97,   116,   110,   117,   112
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     122,    27,    30,   129,    39,   120,   101,   111,    13,    47,
     152,   118,    16,    17,    19,    18,    30,   152,    11,     2,
     154,   120,   152,    14,   155,   157,    31,    17,   159,   160,
     125,   128,   161,    62,   132,    30,    15,   135,     2,    60,
       1,    45,     1,     2,    64,   120,    66,    67,    23,   180,
      50,    24,    70,    51,    72,    63,    27,    47,    51,   163,
     164,   184,   133,   134,   122,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   102,
     152,   130,    49,   188,   131,   181,    76,    25,   152,   183,
     152,   192,   122,   193,    26,     1,    77,    78,    76,    79,
      80,    32,    48,    49,    81,    52,    82,     1,    77,    78,
      76,    79,    80,    54,    56,    55,    81,    57,    82,     1,
      77,    78,    58,    79,    80,    59,    76,    65,    81,    69,
      82,    83,    71,    68,    75,     1,    77,    78,    76,    79,
      80,    73,   103,   100,    81,    74,    82,     1,    77,    78,
      76,    79,    80,    98,   113,   119,    81,   114,    82,     1,
      77,    78,    76,    79,    80,    18,   123,   121,    81,   153,
      82,   124,    77,    78,    76,    79,    80,   165,   182,   185,
      81,   190,    82,   126,    77,    78,    76,    79,    80,   186,
     191,   189,    81,    20,    82,   158,    77,    78,    99,    79,
      80,     8,    53,    61,    81,    22,   156,   187,     0,   104,
      34,    35,    36,     0,   104,    34,    35,    36,   150,   104,
      34,    35,    36,     0,   104,    34,    35,    36,     0,     0,
     150,    37,    38,   105,   106,   107,    37,    38,   105,   106,
     107,    37,    38,   105,   106,   107,    37,    38,   108,   162,
       0,   115,     0,   108,    33,    34,    35,    36,   108,    40,
      41,    42,    43,   108,     0,     0,     0,     0,     0,   136,
     137,     0,     0,     0,     0,     0,    37,    38,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    78,     0,    79,    80,     0,     0,     0,    81,     0,
      82
};

static const yytype_int16 yycheck[] =
{
      88,     3,    18,   103,    23,    85,    74,    78,     3,    25,
     111,    82,     6,     6,     8,    11,    32,   118,     3,    15,
     118,   101,   123,    18,   121,   123,    20,    20,    43,    44,
      98,   102,   129,    52,   105,    51,     0,   108,    15,    50,
      12,    43,    12,    15,    55,   125,    57,    58,    49,   150,
      41,    41,    63,    44,    65,    41,     3,    73,    44,   130,
     131,   161,   106,   107,   152,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,    42,
     181,    42,    45,   181,    45,   156,     3,    42,   189,   160,
     191,   189,   180,   191,    42,    12,    13,    14,     3,    16,
      17,    11,    43,    45,    21,    49,    23,    12,    13,    14,
       3,    16,    17,    40,    43,    41,    21,    41,    23,    12,
      13,    14,    41,    16,    17,     4,     3,    41,    21,    40,
      23,    48,    47,    46,    40,    12,    13,    14,     3,    16,
      17,    44,    42,    48,    21,    47,    23,    12,    13,    14,
       3,    16,    17,    47,    40,    48,    21,    40,    23,    12,
      13,    14,     3,    16,    17,    11,    24,    49,    21,    40,
      23,    48,    13,    14,     3,    16,    17,    43,    40,    43,
      21,    40,    23,    48,    13,    14,     3,    16,    17,    46,
      24,    43,    21,     8,    23,    48,    13,    14,    73,    16,
      17,     0,    32,    51,    21,     9,    23,    48,    -1,     3,
       4,     5,     6,    -1,     3,     4,     5,     6,    47,     3,
       4,     5,     6,    -1,     3,     4,     5,     6,    -1,    -1,
      47,    25,    26,    27,    28,    29,    25,    26,    27,    28,
      29,    25,    26,    27,    28,    29,    25,    26,    42,    43,
      -1,    40,    -1,    42,     3,     4,     5,     6,    42,     7,
       8,     9,    10,    42,    -1,    -1,    -1,    -1,    -1,    19,
      20,    -1,    -1,    -1,    -1,    -1,    25,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    14,    -1,    16,    17,    -1,    -1,    -1,    21,    -1,
      23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    12,    15,    51,    52,    53,    54,    55,    59,    64,
      65,     3,    66,     3,    18,     0,    53,    55,    11,    53,
      54,    60,    65,    49,    41,    42,    42,     3,    61,    62,
      63,    53,    11,     3,     4,     5,     6,    25,    26,    67,
       7,     8,     9,    10,    68,    43,    56,    63,    43,    45,
      41,    44,    49,    61,    40,    41,    43,    41,    41,     4,
      68,    62,    67,    41,    68,    41,    68,    68,    46,    40,
      68,    47,    68,    44,    47,    40,     3,    13,    14,    16,
      17,    21,    23,    48,    57,    58,    59,    63,    70,    71,
      73,    74,    75,    76,    77,    78,    79,    80,    47,    56,
      48,    58,    42,    42,     3,    27,    28,    29,    42,    67,
      82,    83,    84,    40,    40,    40,    81,    83,    83,    48,
      57,    49,    71,    24,    48,    58,    48,    72,    83,    74,
      42,    45,    83,    82,    82,    83,    19,    20,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      47,    69,    70,    40,    69,    81,    23,    69,    48,    43,
      44,    81,    43,    83,    83,    43,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      70,    83,    40,    83,    74,    43,    46,    48,    69,    43,
      40,    24,    69,    69
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    52,    52,    53,    53,    54,
      54,    55,    55,    55,    55,    56,    56,    57,    57,    58,
      58,    59,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    64,    65,    66,    66,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    68,    69,    69,    70,
      70,    71,    71,    71,    71,    71,    71,    71,    71,    72,
      72,    72,    73,    74,    75,    76,    77,    78,    79,    79,
      79,    80,    80,    81,    81,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    84,    84
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     3,     8,     9,     1,
       2,     8,     9,     9,    10,     3,     5,     1,     1,     1,
       2,     1,     2,     5,     6,     1,     3,     1,     3,     1,
       4,     0,     1,     2,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     1,     5,     3,     2,     2,     7,     3,     3,     3,
       7,     2,     2,     0,     2,     1,     4,     3,     4,     3,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     1,     2,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 121 "myanalyzer.y" /* yacc.c:1646  */
    { 
  if (yyerror_count == 0) {
    puts(c_prologue);
    printf("%s\n", (yyvsp[0].str)); 
  }
}
#line 1435 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 130 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str));}
#line 1441 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 131 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n\n%s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1447 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 132 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s",(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1453 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 133 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n\n%s\n\n%s",(yyvsp[-2].str),(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1459 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 140 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s  main() {\n}" ,(yyvsp[-2].str)); }
#line 1465 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 141 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s  main() {\n%s\n}" ,(yyvsp[-3].str),(yyvsp[-1].str)); }
#line 1471 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 146 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1477 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 150 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s  %s() {}" ,(yyvsp[-2].str),(yyvsp[-6].str)); }
#line 1483 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 151 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s  %s(%s) {}",(yyvsp[-2].str),(yyvsp[-7].str),(yyvsp[-5].str)); }
#line 1489 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 152 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s() {%s}" ,(yyvsp[-3].str),(yyvsp[-7].str),(yyvsp[-1].str)); }
#line 1495 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 153 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s  %s(%s) {%s\n}",(yyvsp[-3].str),(yyvsp[-8].str),(yyvsp[-6].str),(yyvsp[-1].str)); }
#line 1501 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 157 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s ",(yyvsp[0].str),(yyvsp[-2].str)); }
#line 1507 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 158 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s, %s",(yyvsp[-2].str),(yyvsp[-4].str),(yyvsp[0].str)); }
#line 1513 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 167 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str));}
#line 1519 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 168 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("\n%s\n%s",(yyvsp[-1].str),(yyvsp[0].str));}
#line 1525 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 177 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s",(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1531 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 181 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s %s;",(yyvsp[-1].str),(yyvsp[-3].str)); }
#line 1537 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 182 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n  %s %s;",(yyvsp[-5].str),(yyvsp[-1].str),(yyvsp[-3].str)); }
#line 1543 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 187 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s, %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1549 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 192 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s = %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1555 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 196 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str));}
#line 1561 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 197 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s[%s]",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1567 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 202 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1573 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 203 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("const %s",(yyvsp[0].str));}
#line 1579 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 204 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n%s",(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1585 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 208 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s %s;",(yyvsp[-1].str),(yyvsp[-3].str)); }
#line 1591 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 212 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s",(yyvsp[0].str));}
#line 1597 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 213 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s = %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1603 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 217 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1609 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 218 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1615 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 219 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1621 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 220 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str)); }
#line 1627 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 221 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = "1"; }
#line 1633 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 222 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = "0"; }
#line 1639 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 226 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", "void"); }
#line 1645 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 227 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", "int"); }
#line 1651 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 228 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", "double"); }
#line 1657 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 229 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", "char *"); }
#line 1663 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 236 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("\n\t%s",(yyvsp[0].str)); }
#line 1669 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 237 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("{%s\n }",(yyvsp[-2].str)); }
#line 1675 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 242 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("\n\t%s\n\t%s",(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1681 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 246 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s",(yyvsp[0].str)); }
#line 1687 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 247 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s",(yyvsp[0].str)); }
#line 1693 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 248 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s",(yyvsp[0].str)); }
#line 1699 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 249 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s",(yyvsp[0].str)); }
#line 1705 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 250 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s",(yyvsp[0].str)); }
#line 1711 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 251 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s",(yyvsp[0].str)); }
#line 1717 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 252 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s",(yyvsp[0].str)); }
#line 1723 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 253 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(" %s",(yyvsp[0].str)); }
#line 1729 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 257 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("");}
#line 1735 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 258 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s , %s", (yyvsp[-2].str),(yyvsp[0].str)); }
#line 1741 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 259 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s", (yyvsp[0].str));}
#line 1747 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 262 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s(%s);",(yyvsp[-4].str),(yyvsp[-2].str)); }
#line 1753 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 266 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s = %s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1759 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 270 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("continue;"); }
#line 1765 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 274 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("break;"); }
#line 1771 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 279 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("for (%s %s %s) {\n  %s\n }",(yyvsp[-4].str),(yyvsp[-3].str),(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1777 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 283 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("while %s %s",(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1783 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 287 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("if %s %s",(yyvsp[-1].str),(yyvsp[0].str)); }
#line 1789 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 288 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\nelse\n%s",(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1795 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 289 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s\n else if %s %s\n else %s ",(yyvsp[-6].str),(yyvsp[-3].str),(yyvsp[-2].str),(yyvsp[0].str)); }
#line 1801 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 293 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("\n\treturn ;"); }
#line 1807 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 294 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("\n\treturn %s",(yyvsp[0].str)); }
#line 1813 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 298 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template(""); }
#line 1819 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 299 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s;",(yyvsp[-1].str)); }
#line 1825 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 304 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s(%s) ",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1831 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 305 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s() ",(yyvsp[-2].str));}
#line 1837 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 306 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s[%s] ",(yyvsp[-3].str),(yyvsp[-1].str));}
#line 1843 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 307 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("(%s)",(yyvsp[-1].str)); }
#line 1849 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 312 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s + %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1855 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 313 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s - %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1861 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 314 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s * %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1867 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 315 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s / %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1873 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 316 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("(int) %s %% (int)%s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1879 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 317 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s ** %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1885 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 318 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s > %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1891 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 319 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s < %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1897 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 320 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s >= %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1903 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 321 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s <= %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1909 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 322 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s == %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1915 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 323 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s != %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1921 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 324 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s && %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1927 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 325 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("%s || %s",(yyvsp[-2].str),(yyvsp[0].str));}
#line 1933 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 326 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("!%s",(yyvsp[0].str)); }
#line 1939 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 330 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("+%s",(yyvsp[0].str)); }
#line 1945 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 331 "myanalyzer.y" /* yacc.c:1646  */
    { (yyval.str) = template("-%s",(yyvsp[0].str)); }
#line 1951 "myanalyzer.tab.c" /* yacc.c:1646  */
    break;


#line 1955 "myanalyzer.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 335 "myanalyzer.y" /* yacc.c:1906  */

int main () {
  if ( yyparse() == 0 )
    printf("/* \nAccepted!\n */");
  else
    printf(" \nRejected!\n");
}
