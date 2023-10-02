/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 2
#define YYMINOR 0
#define YYPATCH 20220114

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#undef YYBTYACC
#define YYBTYACC 0
#define YYDEBUGSTR YYPREFIX "debug"
#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "TermProject.y"

	#include <stdio.h>
	#include <string>
	#include "y.tab.h"
	using namespace std;

	extern FILE *yyin;
	extern int yylex();
	extern int linenum;
	extern int indent;
	void yyerror(string s);
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 14 "TermProject.y"
typedef union YYSTYPE
{
	char *str;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 48 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

#if !(defined(yylex) || defined(YYSTATE))
int YYLEX_DECL();
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define INCLUDE 257
#define IDENT 258
#define NUMBER 259
#define INT 260
#define CHAR 261
#define CHARACTER 262
#define VOID 263
#define IF 264
#define ELSE 265
#define WHILE 266
#define FOR 267
#define RETURN 268
#define SCANF 269
#define PRINTF 270
#define STRING 271
#define ADD 272
#define SUB 273
#define MUL 274
#define DIV 275
#define UNARY 276
#define LT 277
#define LE 278
#define GT 279
#define GE 280
#define EQ 281
#define NE 282
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    3,    3,    4,    4,    2,    2,    5,
    5,    6,    6,   10,   10,    7,    8,    8,   11,   11,
   13,    9,    9,   14,   14,   15,   15,   12,   12,   17,
   17,   17,   17,   17,   16,   21,   21,   21,   21,   20,
   20,   20,   20,   20,   22,   22,   23,   23,   18,   24,
   24,   24,   24,   24,   24,   25,   25,   25,   25,   25,
   19,   19,   26,   26,
};
static const YYINT yylen[] = {                            2,
    2,    2,    0,    4,    2,    3,    1,    2,    0,    9,
    9,    1,    1,    4,    2,    2,    3,    0,    2,    0,
    3,    1,    1,    3,    1,    1,    1,    2,    0,    8,
    7,    2,    1,    1,    3,    1,    1,    1,    1,    3,
    1,    1,    1,    4,    1,    0,    3,    1,   11,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    3,    1,
    8,    7,    4,    2,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    5,    0,   22,   23,    0,    1,
    0,    0,    2,    0,    0,    0,    8,    0,    0,    4,
    0,    0,    6,   12,    0,    0,   13,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   14,    0,
    0,    0,    0,    0,    0,   27,    0,    0,    0,    0,
    0,   16,    0,    0,   33,   34,   19,    0,    0,   10,
    0,   21,    0,    0,    0,    0,    0,   32,   28,   11,
   17,    0,   42,   43,    0,   24,    0,    0,    0,    0,
    0,    0,   36,   37,   38,   39,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   45,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   44,    0,    0,    0,    0,   47,    0,    0,
    0,    0,   60,    0,    0,   31,    0,   61,    0,    0,
    0,    0,    0,   30,    0,   64,   56,   58,   57,   59,
    0,    0,    0,   63,   49,
};
#if defined(YYDESTRUCT_CALL) || defined(YYSTYPE_TOSTRING)
static const YYINT yystos[] = {                           0,
  257,  284,  285,  287,  271,  277,  260,  261,  263,  286,
  289,  293,  285,  258,  288,  258,  286,  258,   46,  279,
   40,   40,  258,  263,  290,  293,  294,  290,   41,  258,
   41,  123,   44,  123,  291,  293,  295,  297,  294,  291,
  268,  292,  258,  298,  299,  300,  258,  264,  267,  269,
  270,  296,  300,  301,  302,  303,  295,  292,  258,  125,
   61,   59,   44,   40,   40,   40,   40,   59,  296,  125,
   59,  258,  259,  262,  304,  298,  304,  308,  300,  271,
  271,   40,  272,  273,  274,  275,  305,  277,  278,  279,
  280,  281,  282,   41,   59,   44,   44,  258,  306,  307,
  304,  304,  304,  304,  304,  304,  304,  123,  308,   38,
  258,   44,   41,  291,   59,  258,   41,  307,  125,  258,
  272,  273,  300,  309,   41,   59,  265,  310,  272,  273,
  272,  273,   41,   59,  123,  303,  272,  273,  258,  258,
  123,  291,  291,  125,  125,
};
#endif /* YYDESTRUCT_CALL || YYSTYPE_TOSTRING */
static const YYINT yydgoto[] = {                          2,
    3,   10,    4,   15,   11,   25,   35,   42,   36,   27,
   37,   52,   38,   44,   45,   46,   54,   55,   56,   77,
   87,   99,  100,   78,  124,  128,
};
static const YYINT yysindex[] = {                      -245,
 -217,    0, -176, -245,    0, -244,    0,    0, -224,    0,
 -176, -203,    0,   10, -216,   32,    0,   46, -167,    0,
 -171, -171,    0,    0,   52, -164,    0,   54,  -26,   55,
  -25, -238, -238, -238, -172, -158, -205, -238,    0, -172,
 -157,  -22,   41,   45,   61,    0,   41,   67,   68,   69,
   70,    0,   56, -205,    0,    0,    0,  -14,   57,    0,
 -201,    0, -158, -201, -145, -154, -153,    0,    0,    0,
    0,   74,    0,    0, -192,    0, -204,   78,   62,   76,
   79, -136,    0,    0,    0,    0, -201, -201, -201, -201,
 -201, -201, -201,    2, -201,   86, -132,   83,   87,    0,
 -192, -192, -192, -192, -192, -192, -192, -238,   71, -129,
   90, -136,    0,    7, -206,   92,   75,    0, -130,  -59,
 -134, -137,    0,   98,   81,    0, -107,    0, -131, -128,
 -116,  -99,   37,    0, -238,    0,    0,    0,    0,    0,
 -238,   40,   42,    0,    0,
};
static const YYINT yyrindex[] = {                         1,
    0,    0,  162,    1,    0,    0,    0,    0,    0,    0,
  162,    0,    0, -113,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  127,
    0, -121,    0, -121,   44,    0, -117, -121,    0,   44,
    0,    0,  -23,    0,  111,    0,    0,    0,    0,    0,
    0,    0,    0, -117,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  -41,    0,    0,  -24,    0,    0,    0,    0,    0,
    0,  130,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  131,    0,    0,
  -35,  -13,  -12,  -11,  -10,   -9,   -8, -106,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0, -114,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -106,    0,    0,    0,    0,    0,
 -106,    0,    0,    0,    0,
};
#if YYBTYACC
static const YYINT yycindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,
};
#endif
static const YYINT yygindex[] = {                         0,
  169,  163,    0,    0,    0,  153,  -29,  136,    4,  144,
  140,  125,    0,  117,    0,  -27,    0,    0,   58,  -48,
    0,    0,   72,   88,    0,    0,
};
#define YYTABLESIZE 264
static const YYINT yytable[] = {                         41,
    3,   61,   41,   20,   40,   40,   12,   29,   40,   53,
   62,    1,   75,   14,   12,  135,   35,   41,   20,   35,
   26,    7,    8,   40,   26,   26,   53,   52,   53,   50,
   51,   54,   55,   16,   35,   26,   26,   79,  101,  102,
  103,  104,  105,  106,  107,   52,   53,   50,   51,   54,
   55,  120,   47,    5,   18,   19,   72,   73,   48,    6,
   74,   49,   20,   50,   51,  121,  122,   83,   84,   85,
   86,   21,   88,   89,   90,   91,   92,   93,  114,   83,
   84,   85,   86,    7,    8,   22,    9,  123,    7,    8,
   23,   24,   29,   30,   31,   41,   32,   34,   33,   43,
   59,   61,   60,   62,   63,  142,   64,   65,   66,   67,
   70,  143,   47,   82,   68,   71,   80,   81,   94,   96,
   95,   98,   97,  110,  108,  111,  112,  113,  116,  115,
  117,  119,  125,  126,  127,  132,   20,  131,  133,  134,
  137,  139,   20,   62,  138,   20,   20,   20,   20,   62,
   29,   20,   62,   62,   62,   62,   48,   20,  140,  141,
   20,    9,   20,   20,  144,    7,  145,   15,   18,   25,
   46,   48,   13,   17,   28,   58,   39,   57,   69,   76,
    0,    0,  109,  118,  136,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  129,  130,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   41,   41,   41,   41,    0,   41,   41,   41,   41,   41,
   41,   40,   40,   40,   40,   40,   40,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    3,    3,    0,    3,
};
static const YYINT yycheck[] = {                         41,
    0,   61,   44,  125,   34,   41,    3,  125,   44,   37,
  125,  257,   61,  258,   11,  123,   41,   59,  125,   44,
   44,  260,  261,   59,   21,   22,   54,   41,   41,   41,
   41,   41,   41,  258,   59,   59,   33,   65,   87,   88,
   89,   90,   91,   92,   93,   59,   59,   59,   59,   59,
   59,  258,  258,  271,  258,   46,  258,  259,  264,  277,
  262,  267,  279,  269,  270,  272,  273,  272,  273,  274,
  275,   40,  277,  278,  279,  280,  281,  282,  108,  272,
  273,  274,  275,  260,  261,   40,  263,  115,  260,  261,
  258,  263,   41,  258,   41,  268,  123,  123,   44,  258,
  258,   61,  125,   59,   44,  135,   40,   40,   40,   40,
  125,  141,  258,   40,   59,   59,  271,  271,   41,   44,
   59,  258,   44,   38,  123,  258,   44,   41,  258,   59,
   41,  125,   41,   59,  265,  273,  258,  272,   41,   59,
  272,  258,  264,  258,  273,  267,  268,  269,  270,  264,
  268,  258,  267,  268,  269,  270,  264,  264,  258,  123,
  267,    0,  269,  270,  125,  279,  125,   41,  125,   59,
   41,   41,    4,   11,   22,   40,   33,   38,   54,   63,
   -1,   -1,   95,  112,  127,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  272,  273,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  272,  273,  274,  275,   -1,  277,  278,  279,  280,  281,
  282,  277,  278,  279,  280,  281,  282,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  260,  261,   -1,  263,
};
#if YYBTYACC
static const YYINT yyctable[] = {                        -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,
};
#endif
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 282
#define YYUNDFTOKEN 311
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"$end",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,"'&'",0,"'('","')'",0,0,"','",0,"'.'",0,0,0,0,0,0,0,0,0,0,0,0,"';'",0,"'='",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"error","INCLUDE","IDENT","NUMBER","INT","CHAR","CHARACTER","VOID","IF","ELSE",
"WHILE","FOR","RETURN","SCANF","PRINTF","STRING","ADD","SUB","MUL","DIV",
"UNARY","LT","LE","GT","GE","EQ","NE","$accept","program","include_lib",
"func_defs","include","library","func_def","func_parameter","body","return",
"var_type","parameter_list","declerations","statements","decleration",
"decleration_list","single_decleration","assignment","statement","for","if",
"expr","arithmetic","arguments","var_list","comparison","increment","else",
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : include_lib func_defs",
"include_lib : include include_lib",
"include_lib :",
"include : INCLUDE LT library GT",
"include : INCLUDE STRING",
"library : IDENT '.' IDENT",
"library : IDENT",
"func_defs : func_def func_defs",
"func_defs :",
"func_def : VOID IDENT '(' func_parameter ')' '{' body return '}'",
"func_def : var_type IDENT '(' func_parameter ')' '{' body return '}'",
"func_parameter : VOID",
"func_parameter : parameter_list",
"parameter_list : var_type IDENT ',' parameter_list",
"parameter_list : var_type IDENT",
"body : declerations statements",
"return : RETURN IDENT ';'",
"return :",
"declerations : decleration declerations",
"declerations :",
"decleration : var_type decleration_list ';'",
"var_type : INT",
"var_type : CHAR",
"decleration_list : single_decleration ',' decleration_list",
"decleration_list : single_decleration",
"single_decleration : IDENT",
"single_decleration : assignment",
"statements : statement statements",
"statements :",
"statement : SCANF '(' STRING ',' '&' IDENT ')' ';'",
"statement : PRINTF '(' STRING ',' IDENT ')' ';'",
"statement : assignment ';'",
"statement : for",
"statement : if",
"assignment : IDENT '=' expr",
"arithmetic : ADD",
"arithmetic : SUB",
"arithmetic : MUL",
"arithmetic : DIV",
"expr : expr arithmetic expr",
"expr : IDENT",
"expr : NUMBER",
"expr : CHARACTER",
"expr : IDENT '(' arguments ')'",
"arguments : var_list",
"arguments :",
"var_list : IDENT ',' var_list",
"var_list : IDENT",
"for : FOR '(' assignment ';' comparison ';' increment ')' '{' body '}'",
"comparison : expr GT expr",
"comparison : expr GE expr",
"comparison : expr LT expr",
"comparison : expr LE expr",
"comparison : expr EQ expr",
"comparison : expr NE expr",
"increment : IDENT ADD ADD",
"increment : ADD ADD IDENT",
"increment : IDENT SUB SUB",
"increment : SUB SUB IDENT",
"increment : assignment",
"if : IF '(' comparison ')' '{' body '}' else",
"if : IF '(' comparison ')' '{' body '}'",
"else : ELSE '{' body '}'",
"else : ELSE if",

};
#endif

#if YYDEBUG
int      yydebug;
#endif

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;
int      yynerrs;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
YYLTYPE  yyloc; /* position returned by actions */
YYLTYPE  yylloc; /* position from the lexer */
#endif

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
#ifndef YYLLOC_DEFAULT
#define YYLLOC_DEFAULT(loc, rhs, n) \
do \
{ \
    if (n == 0) \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 0).last_line; \
        (loc).first_column = YYRHSLOC(rhs, 0).last_column; \
        (loc).last_line    = YYRHSLOC(rhs, 0).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, 0).last_column; \
    } \
    else \
    { \
        (loc).first_line   = YYRHSLOC(rhs, 1).first_line; \
        (loc).first_column = YYRHSLOC(rhs, 1).first_column; \
        (loc).last_line    = YYRHSLOC(rhs, n).last_line; \
        (loc).last_column  = YYRHSLOC(rhs, n).last_column; \
    } \
} while (0)
#endif /* YYLLOC_DEFAULT */
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#if YYBTYACC

#ifndef YYLVQUEUEGROWTH
#define YYLVQUEUEGROWTH 32
#endif
#endif /* YYBTYACC */

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#ifndef YYINITSTACKSIZE
#define YYINITSTACKSIZE 200
#endif

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  *p_base;
    YYLTYPE  *p_mark;
#endif
} YYSTACKDATA;
#if YYBTYACC

struct YYParseState_s
{
    struct YYParseState_s *save;    /* Previously saved parser state */
    YYSTACKDATA            yystack; /* saved parser stack */
    int                    state;   /* saved parser state */
    int                    errflag; /* saved error recovery status */
    int                    lexeme;  /* saved index of the conflict lexeme in the lexical queue */
    YYINT                  ctry;    /* saved index in yyctable[] for this conflict */
};
typedef struct YYParseState_s YYParseState;
#endif /* YYBTYACC */
/* variables for the parser stack */
static YYSTACKDATA yystack;
#if YYBTYACC

/* Current parser state */
static YYParseState *yyps = 0;

/* yypath != NULL: do the full parse, starting at *yypath parser state. */
static YYParseState *yypath = 0;

/* Base of the lexical value queue */
static YYSTYPE *yylvals = 0;

/* Current position at lexical value queue */
static YYSTYPE *yylvp = 0;

/* End position of lexical value queue */
static YYSTYPE *yylve = 0;

/* The last allocated position at the lexical value queue */
static YYSTYPE *yylvlim = 0;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
/* Base of the lexical position queue */
static YYLTYPE *yylpsns = 0;

/* Current position at lexical position queue */
static YYLTYPE *yylpp = 0;

/* End position of lexical position queue */
static YYLTYPE *yylpe = 0;

/* The last allocated position at the lexical position queue */
static YYLTYPE *yylplim = 0;
#endif

/* Current position at lexical token queue */
static YYINT  *yylexp = 0;

static YYINT  *yylexemes = 0;
#endif /* YYBTYACC */
#line 422 "TermProject.y"


void yyerror(string s){
	printf("error at line %d", linenum);
}
int yywrap(){
	return 1;
}

int main(int argc, char *argv[])
{
    /* Call the lexer, then quit. */

    yyin=fopen(argv[1],"r");

    yyparse();


    fclose(yyin);

    return 0;
}
#line 566 "y.tab.c"

/* For use in generated program */
#define yydepth (int)(yystack.s_mark - yystack.s_base)
#if YYBTYACC
#define yytrial (yyps->save)
#endif /* YYBTYACC */

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE *newps;
#endif

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    newps = (YYLTYPE *)realloc(data->p_base, newsize * sizeof(*newps));
    if (newps == 0)
        return YYENOMEM;

    data->p_base = newps;
    data->p_mark = newps + i;
#endif

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;

#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%sdebug: stack size increased to %d\n", YYPREFIX, newsize);
#endif
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    free(data->p_base);
#endif
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif /* YYPURE || defined(YY_NO_LEAKS) */
#if YYBTYACC

static YYParseState *
yyNewState(unsigned size)
{
    YYParseState *p = (YYParseState *) malloc(sizeof(YYParseState));
    if (p == NULL) return NULL;

    p->yystack.stacksize = size;
    if (size == 0)
    {
        p->yystack.s_base = NULL;
        p->yystack.l_base = NULL;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        p->yystack.p_base = NULL;
#endif
        return p;
    }
    p->yystack.s_base    = (YYINT *) malloc(size * sizeof(YYINT));
    if (p->yystack.s_base == NULL) return NULL;
    p->yystack.l_base    = (YYSTYPE *) malloc(size * sizeof(YYSTYPE));
    if (p->yystack.l_base == NULL) return NULL;
    memset(p->yystack.l_base, 0, size * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    p->yystack.p_base    = (YYLTYPE *) malloc(size * sizeof(YYLTYPE));
    if (p->yystack.p_base == NULL) return NULL;
    memset(p->yystack.p_base, 0, size * sizeof(YYLTYPE));
#endif

    return p;
}

static void
yyFreeState(YYParseState *p)
{
    yyfreestack(&p->yystack);
    free(p);
}
#endif /* YYBTYACC */

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab
#if YYBTYACC
#define YYVALID        do { if (yyps->save)            goto yyvalid; } while(0)
#define YYVALID_NESTED do { if (yyps->save && \
                                yyps->save->save == 0) goto yyvalid; } while(0)
#endif /* YYBTYACC */

int
YYPARSE_DECL()
{
    int yym, yyn, yystate, yyresult;
#if YYBTYACC
    int yynewerrflag;
    YYParseState *yyerrctx = NULL;
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    YYLTYPE  yyerror_loc_range[3]; /* position of error start/end (0 unused) */
#endif
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
    if (yydebug)
        fprintf(stderr, "%sdebug[<# of symbols on state stack>]\n", YYPREFIX);
#endif
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    memset(yyerror_loc_range, 0, sizeof(yyerror_loc_range));
#endif

#if YYBTYACC
    yyps = yyNewState(0); if (yyps == 0) goto yyenomem;
    yyps->save = 0;
#endif /* YYBTYACC */
    yym = 0;
    /* yyn is set below */
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base;
#endif
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
#if YYBTYACC
        do {
        if (yylvp < yylve)
        {
            /* we're currently re-reading tokens */
            yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc = *yylpp++;
#endif
            yychar = *yylexp++;
            break;
        }
        if (yyps->save)
        {
            /* in trial mode; save scanner results for future parse attempts */
            if (yylvp == yylvlim)
            {   /* Enlarge lexical value queue */
                size_t p = (size_t) (yylvp - yylvals);
                size_t s = (size_t) (yylvlim - yylvals);

                s += YYLVQUEUEGROWTH;
                if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL) goto yyenomem;
                if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL) goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL) goto yyenomem;
#endif
                yylvp   = yylve = yylvals + p;
                yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp   = yylpe = yylpsns + p;
                yylplim = yylpsns + s;
#endif
                yylexp  = yylexemes + p;
            }
            *yylexp = (YYINT) YYLEX;
            *yylvp++ = yylval;
            yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *yylpp++ = yylloc;
            yylpe++;
#endif
            yychar = *yylexp++;
            break;
        }
        /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
        yychar = YYLEX;
#if YYBTYACC
        } while (0);
#endif /* YYBTYACC */
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, " <%s>", YYSTYPE_TOSTRING(yychar, yylval));
#endif
            fputc('\n', stderr);
        }
#endif
    }
#if YYBTYACC

    /* Do we have a conflict? */
    if (((yyn = yycindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
        yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        YYINT ctry;

        if (yypath)
        {
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: CONFLICT in state %d: following successful trial parse\n",
                                YYDEBUGSTR, yydepth, yystate);
#endif
            /* Switch to the next conflict context */
            save = yypath;
            yypath = save->save;
            save->save = NULL;
            ctry = save->ctry;
            if (save->state != yystate) YYABORT;
            yyFreeState(save);

        }
        else
        {

            /* Unresolved conflict - start/continue trial parse */
            YYParseState *save;
#if YYDEBUG
            if (yydebug)
            {
                fprintf(stderr, "%s[%d]: CONFLICT in state %d. ", YYDEBUGSTR, yydepth, yystate);
                if (yyps->save)
                    fputs("ALREADY in conflict, continuing trial parse.\n", stderr);
                else
                    fputs("Starting trial parse.\n", stderr);
            }
#endif
            save                  = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (save == NULL) goto yyenomem;
            save->save            = yyps->save;
            save->state           = yystate;
            save->errflag         = yyerrflag;
            save->yystack.s_mark  = save->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (save->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            save->yystack.l_mark  = save->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (save->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            save->yystack.p_mark  = save->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (save->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            ctry                  = yytable[yyn];
            if (yyctable[ctry] == -1)
            {
#if YYDEBUG
                if (yydebug && yychar >= YYEOF)
                    fprintf(stderr, "%s[%d]: backtracking 1 token\n", YYDEBUGSTR, yydepth);
#endif
                ctry++;
            }
            save->ctry = ctry;
            if (yyps->save == NULL)
            {
                /* If this is a first conflict in the stack, start saving lexemes */
                if (!yylexemes)
                {
                    yylexemes = (YYINT *) malloc((YYLVQUEUEGROWTH) * sizeof(YYINT));
                    if (yylexemes == NULL) goto yyenomem;
                    yylvals   = (YYSTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYSTYPE));
                    if (yylvals == NULL) goto yyenomem;
                    yylvlim   = yylvals + YYLVQUEUEGROWTH;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpsns   = (YYLTYPE *) malloc((YYLVQUEUEGROWTH) * sizeof(YYLTYPE));
                    if (yylpsns == NULL) goto yyenomem;
                    yylplim   = yylpsns + YYLVQUEUEGROWTH;
#endif
                }
                if (yylvp == yylve)
                {
                    yylvp  = yylve = yylvals;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp  = yylpe = yylpsns;
#endif
                    yylexp = yylexemes;
                    if (yychar >= YYEOF)
                    {
                        *yylve++ = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                        *yylpe++ = yylloc;
#endif
                        *yylexp  = (YYINT) yychar;
                        yychar   = YYEMPTY;
                    }
                }
            }
            if (yychar >= YYEOF)
            {
                yylvp--;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp--;
#endif
                yylexp--;
                yychar = YYEMPTY;
            }
            save->lexeme = (int) (yylvp - yylvals);
            yyps->save   = save;
        }
        if (yytable[yyn] == ctry)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                                YYDEBUGSTR, yydepth, yystate, yyctable[ctry]);
#endif
            if (yychar < 0)
            {
                yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylpp++;
#endif
                yylexp++;
            }
            if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                goto yyoverflow;
            yystate = yyctable[ctry];
            *++yystack.s_mark = (YYINT) yystate;
            *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            *++yystack.p_mark = yylloc;
#endif
            yychar  = YYEMPTY;
            if (yyerrflag > 0) --yyerrflag;
            goto yyloop;
        }
        else
        {
            yyn = yyctable[ctry];
            goto yyreduce;
        }
    } /* End of code dealing with conflicts */
#endif /* YYBTYACC */
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: state %d, shifting to state %d\n",
                            YYDEBUGSTR, yydepth, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yylloc;
#endif
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;
#if YYBTYACC

    yynewerrflag = 1;
    goto yyerrhandler;
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */

yyerrlab:
    /* explicit YYERROR from an action -- pop the rhs of the rule reduced
     * before looking for error recovery */
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif

    yynewerrflag = 0;
yyerrhandler:
    while (yyps->save)
    {
        int ctry;
        YYParseState *save = yyps->save;
#if YYDEBUG
        if (yydebug)
            fprintf(stderr, "%s[%d]: ERROR in state %d, CONFLICT BACKTRACKING to state %d, %d tokens\n",
                            YYDEBUGSTR, yydepth, yystate, yyps->save->state,
                    (int)(yylvp - yylvals - yyps->save->lexeme));
#endif
        /* Memorize most forward-looking error state in case it's really an error. */
        if (yyerrctx == NULL || yyerrctx->lexeme < yylvp - yylvals)
        {
            /* Free old saved error context state */
            if (yyerrctx) yyFreeState(yyerrctx);
            /* Create and fill out new saved error context state */
            yyerrctx                 = yyNewState((unsigned)(yystack.s_mark - yystack.s_base + 1));
            if (yyerrctx == NULL) goto yyenomem;
            yyerrctx->save           = yyps->save;
            yyerrctx->state          = yystate;
            yyerrctx->errflag        = yyerrflag;
            yyerrctx->yystack.s_mark = yyerrctx->yystack.s_base + (yystack.s_mark - yystack.s_base);
            memcpy (yyerrctx->yystack.s_base, yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yyerrctx->yystack.l_mark = yyerrctx->yystack.l_base + (yystack.l_mark - yystack.l_base);
            memcpy (yyerrctx->yystack.l_base, yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yyerrctx->yystack.p_mark = yyerrctx->yystack.p_base + (yystack.p_mark - yystack.p_base);
            memcpy (yyerrctx->yystack.p_base, yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yyerrctx->lexeme         = (int) (yylvp - yylvals);
        }
        yylvp          = yylvals   + save->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yylpp          = yylpsns   + save->lexeme;
#endif
        yylexp         = yylexemes + save->lexeme;
        yychar         = YYEMPTY;
        yystack.s_mark = yystack.s_base + (save->yystack.s_mark - save->yystack.s_base);
        memcpy (yystack.s_base, save->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
        yystack.l_mark = yystack.l_base + (save->yystack.l_mark - save->yystack.l_base);
        memcpy (yystack.l_base, save->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        yystack.p_mark = yystack.p_base + (save->yystack.p_mark - save->yystack.p_base);
        memcpy (yystack.p_base, save->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
        ctry           = ++save->ctry;
        yystate        = save->state;
        /* We tried shift, try reduce now */
        if ((yyn = yyctable[ctry]) >= 0) goto yyreduce;
        yyps->save     = save->save;
        save->save     = NULL;
        yyFreeState(save);

        /* Nothing left on the stack -- error */
        if (!yyps->save)
        {
#if YYDEBUG
            if (yydebug)
                fprintf(stderr, "%sdebug[%d,trial]: trial parse FAILED, entering ERROR mode\n",
                                YYPREFIX, yydepth);
#endif
            /* Restore state as it was in the most forward-advanced error */
            yylvp          = yylvals   + yyerrctx->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylpp          = yylpsns   + yyerrctx->lexeme;
#endif
            yylexp         = yylexemes + yyerrctx->lexeme;
            yychar         = yylexp[-1];
            yylval         = yylvp[-1];
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yylloc         = yylpp[-1];
#endif
            yystack.s_mark = yystack.s_base + (yyerrctx->yystack.s_mark - yyerrctx->yystack.s_base);
            memcpy (yystack.s_base, yyerrctx->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
            yystack.l_mark = yystack.l_base + (yyerrctx->yystack.l_mark - yyerrctx->yystack.l_base);
            memcpy (yystack.l_base, yyerrctx->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            yystack.p_mark = yystack.p_base + (yyerrctx->yystack.p_mark - yyerrctx->yystack.p_base);
            memcpy (yystack.p_base, yyerrctx->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
            yystate        = yyerrctx->state;
            yyFreeState(yyerrctx);
            yyerrctx       = NULL;
        }
        yynewerrflag = 1;
    }
    if (yynewerrflag == 0) goto yyinrecovery;
#endif /* YYBTYACC */

    YYERROR_CALL("syntax error");
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yyerror_loc_range[1] = yylloc; /* lookahead position is error start position */
#endif

#if !YYBTYACC
    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
#endif
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: state %d, error recovery shifting to state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* lookahead position is error end position */
                yyerror_loc_range[2] = yylloc;
                YYLLOC_DEFAULT(yyloc, yyerror_loc_range, 2); /* position of error span */
                *++yystack.p_mark = yyloc;
#endif
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    fprintf(stderr, "%s[%d]: error recovery discarding state %d\n",
                                    YYDEBUGSTR, yydepth, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                /* the current TOS position is the error start position */
                yyerror_loc_range[1] = *yystack.p_mark;
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
                if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark, yystack.p_mark);
#else
                    YYDESTRUCT_CALL("error: discarding state",
                                    yystos[*yystack.s_mark], yystack.l_mark);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
                --yystack.s_mark;
                --yystack.l_mark;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                --yystack.p_mark;
#endif
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            fprintf(stderr, "%s[%d]: state %d, error recovery discarding token %d (%s)\n",
                            YYDEBUGSTR, yydepth, yystate, yychar, yys);
        }
#endif
#if defined(YYDESTRUCT_CALL)
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval, &yylloc);
#else
            YYDESTRUCT_CALL("error: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
#endif /* defined(YYDESTRUCT_CALL) */
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
    yym = yylen[yyn];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: state %d, reducing by rule %d (%s)",
                        YYDEBUGSTR, yydepth, yystate, yyn, yyrule[yyn]);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            if (yym > 0)
            {
                int i;
                fputc('<', stderr);
                for (i = yym; i > 0; i--)
                {
                    if (i != yym) fputs(", ", stderr);
                    fputs(YYSTYPE_TOSTRING(yystos[yystack.s_mark[1-i]],
                                           yystack.l_mark[1-i]), stderr);
                }
                fputc('>', stderr);
            }
#endif
        fputc('\n', stderr);
    }
#endif
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)

    /* Perform position reduction */
    memset(&yyloc, 0, sizeof(yyloc));
#if YYBTYACC
    if (!yytrial)
#endif /* YYBTYACC */
    {
        YYLLOC_DEFAULT(yyloc, &yystack.p_mark[-yym], yym);
        /* just in case YYERROR is invoked within the action, save
           the start of the rhs as the error start position */
        yyerror_loc_range[1] = yystack.p_mark[1-yym];
    }
#endif

    switch (yyn)
    {
case 10:
#line 47 "TermProject.y"
	{
		printf("\nFUNCTION %s %s\n", yystack.l_mark[-7].str, yystack.l_mark[-5].str);
		printf("%s", yystack.l_mark[-2].str);						/*body*/
		if(strlen(yystack.l_mark[-1].str)) {
			printf("	%s=%s\n", yystack.l_mark[-7].str, yystack.l_mark[-1].str);	/*return*/
		}
		printf("END FUNCTION %s\n", yystack.l_mark[-7].str);
	}
#line 1246 "y.tab.c"
break;
case 11:
#line 55 "TermProject.y"
	{
		printf("\nFUNCTION %s %s\n", yystack.l_mark[-7].str, yystack.l_mark[-5].str);
		printf("%s\n", yystack.l_mark[-2].str);
		if(strlen(yystack.l_mark[-1].str)) {
			printf("  %s=%s\n", yystack.l_mark[-7].str, yystack.l_mark[-1].str);
		}
		printf("END FUNCTION %s\n", yystack.l_mark[-7].str);
	}
#line 1258 "y.tab.c"
break;
case 12:
#line 66 "TermProject.y"
	{ yyval.str = strdup(""); }
#line 1263 "y.tab.c"
break;
case 13:
#line 67 "TermProject.y"
	{ yyval.str = strdup(yystack.l_mark[0].str); }
#line 1268 "y.tab.c"
break;
case 14:
#line 72 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 2);
        strcpy(temp, yystack.l_mark[-2].str);
        strcat(temp, " ");
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1279 "y.tab.c"
break;
case 15:
#line 79 "TermProject.y"
	{ yyval.str = strdup(yystack.l_mark[0].str); }
#line 1284 "y.tab.c"
break;
case 16:
#line 84 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-1].str) + strlen(yystack.l_mark[0].str) + 1);
        strcpy(temp, yystack.l_mark[-1].str);
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1294 "y.tab.c"
break;
case 17:
#line 93 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[-1].str);}
#line 1299 "y.tab.c"
break;
case 18:
#line 94 "TermProject.y"
	{yyval.str = strdup("");}
#line 1304 "y.tab.c"
break;
case 19:
#line 99 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-1].str) + strlen(yystack.l_mark[0].str) + 2);
		if(strlen(yystack.l_mark[-1].str)){
        	strcpy(temp, yystack.l_mark[-1].str);
        	strcat(temp, "\n");
		}
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1317 "y.tab.c"
break;
case 20:
#line 108 "TermProject.y"
	{yyval.str = strdup("");}
#line 1322 "y.tab.c"
break;
case 21:
#line 112 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[-1].str);}
#line 1327 "y.tab.c"
break;
case 24:
#line 122 "TermProject.y"
	{
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 2);
        strcpy(temp, yystack.l_mark[-2].str);
        strcat(temp, "\n");
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1338 "y.tab.c"
break;
case 25:
#line 129 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[0].str);}
#line 1343 "y.tab.c"
break;
case 26:
#line 133 "TermProject.y"
	{yyval.str = strdup("");}
#line 1348 "y.tab.c"
break;
case 27:
#line 134 "TermProject.y"
	{ yyval.str = strdup(yystack.l_mark[0].str); }
#line 1353 "y.tab.c"
break;
case 28:
#line 139 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-1].str) + strlen(yystack.l_mark[0].str) + 2);
        strcpy(temp, yystack.l_mark[-1].str);
        strcat(temp, "\n");
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1364 "y.tab.c"
break;
case 29:
#line 146 "TermProject.y"
	{yyval.str = strdup("");}
#line 1369 "y.tab.c"
break;
case 30:
#line 151 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + 6 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "READ ");
        strcat(temp, yystack.l_mark[-2].str);
        yyval.str = temp;
	}
#line 1383 "y.tab.c"
break;
case 31:
#line 162 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + 7 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "PRINT ");
        strcat(temp, yystack.l_mark[-2].str);
        yyval.str = temp;
	}
#line 1397 "y.tab.c"
break;
case 32:
#line 172 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[-1].str);}
#line 1402 "y.tab.c"
break;
case 33:
#line 173 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[0].str);}
#line 1407 "y.tab.c"
break;
case 34:
#line 174 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[0].str);}
#line 1412 "y.tab.c"
break;
case 35:
#line 179 "TermProject.y"
	{
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 2 + indent*2);
        strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, yystack.l_mark[-2].str);
        strcat(temp, "=");
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1427 "y.tab.c"
break;
case 36:
#line 192 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[0].str);}
#line 1432 "y.tab.c"
break;
case 37:
#line 193 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[0].str);}
#line 1437 "y.tab.c"
break;
case 38:
#line 194 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[0].str);}
#line 1442 "y.tab.c"
break;
case 39:
#line 195 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[0].str);}
#line 1447 "y.tab.c"
break;
case 40:
#line 199 "TermProject.y"
	{
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 2);
        strcpy(temp, yystack.l_mark[-2].str);
        strcat(temp, yystack.l_mark[-1].str);
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1458 "y.tab.c"
break;
case 41:
#line 206 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[0].str);}
#line 1463 "y.tab.c"
break;
case 42:
#line 207 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[0].str);}
#line 1468 "y.tab.c"
break;
case 43:
#line 208 "TermProject.y"
	{yyval.str = yystack.l_mark[0].str;}
#line 1473 "y.tab.c"
break;
case 44:
#line 210 "TermProject.y"
	{
		char* temp = (char*) malloc(strlen(yystack.l_mark[-3].str) + strlen(yystack.l_mark[-1].str) + 3);
        strcpy(temp, yystack.l_mark[-3].str);
        strcat(temp, " ");
        strcat(temp, yystack.l_mark[-1].str);
        strcat(temp, " ");
        yyval.str = temp;
	}
#line 1485 "y.tab.c"
break;
case 45:
#line 221 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[0].str);}
#line 1490 "y.tab.c"
break;
case 46:
#line 222 "TermProject.y"
	{yyval.str = strdup("");}
#line 1495 "y.tab.c"
break;
case 47:
#line 227 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 2);
        strcpy(temp, yystack.l_mark[-2].str);
        strcat(temp, " ");
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1506 "y.tab.c"
break;
case 48:
#line 234 "TermProject.y"
	{ yyval.str = strdup(yystack.l_mark[0].str); }
#line 1511 "y.tab.c"
break;
case 49:
#line 239 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-8].str) + strlen(yystack.l_mark[-6].str) + strlen(yystack.l_mark[-4].str) + strlen(yystack.l_mark[-1].str) + 20 + indent*4);
        strcpy(temp, yystack.l_mark[-8].str);
		strcat(temp, "\n");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "WHILE ");
        strcat(temp, yystack.l_mark[-6].str);
		strcat(temp, "\n");

		strcat(temp, yystack.l_mark[-1].str);
		strcat(temp, "\n");
		strcat(temp, yystack.l_mark[-4].str);
		strcat(temp, "\n");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
		strcat(temp, "END WHILE");
        yyval.str = temp;
	}
#line 1536 "y.tab.c"
break;
case 50:
#line 264 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 2);
        strcpy(temp, yystack.l_mark[-2].str);
        strcat(temp, ">");
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1547 "y.tab.c"
break;
case 51:
#line 272 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 3);
        strcpy(temp, yystack.l_mark[-2].str);
        strcat(temp, ">=");
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1558 "y.tab.c"
break;
case 52:
#line 280 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 2);
        strcpy(temp, yystack.l_mark[-2].str);
        strcat(temp, "<");
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1569 "y.tab.c"
break;
case 53:
#line 288 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 3);
        strcpy(temp, yystack.l_mark[-2].str);
        strcat(temp, "<=");
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1580 "y.tab.c"
break;
case 54:
#line 296 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 3);
        strcpy(temp, yystack.l_mark[-2].str);
        strcat(temp, "==");
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1591 "y.tab.c"
break;
case 55:
#line 304 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 3);
        strcpy(temp, yystack.l_mark[-2].str);
        strcat(temp, "!=");
        strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1602 "y.tab.c"
break;
case 56:
#line 315 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(2 * strlen(yystack.l_mark[-2].str) + 4 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent+1; i++){
			strcat(temp, "  ");
		}
        strcat(temp, yystack.l_mark[-2].str);
        strcat(temp, "=");
        strcat(temp, yystack.l_mark[-2].str);
        strcat(temp, "+1");
        yyval.str = temp;
	}
#line 1618 "y.tab.c"
break;
case 57:
#line 328 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(2 * strlen(yystack.l_mark[0].str) + 4 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent+1; i++){
			strcat(temp, "  ");
		}
        strcat(temp, yystack.l_mark[0].str);
        strcat(temp, "=");
        strcat(temp, yystack.l_mark[0].str);
        strcat(temp, "+1");
        yyval.str = temp;
	}
#line 1634 "y.tab.c"
break;
case 58:
#line 341 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(2 * strlen(yystack.l_mark[-2].str) + 4 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent+1; i++){
			strcat(temp, "  ");
		}
        strcat(temp, yystack.l_mark[-2].str);
        strcat(temp, "=");
        strcat(temp, yystack.l_mark[-2].str);
        strcat(temp, "-1");
        yyval.str = temp;
	}
#line 1650 "y.tab.c"
break;
case 59:
#line 354 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(2 * strlen(yystack.l_mark[0].str) + 4 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent+1; i++){
			strcat(temp, "  ");
		}
        strcat(temp, yystack.l_mark[0].str);
        strcat(temp, "=");
        strcat(temp, yystack.l_mark[0].str);
        strcat(temp, "-1");
        yyval.str = temp;
	}
#line 1666 "y.tab.c"
break;
case 60:
#line 366 "TermProject.y"
	{yyval.str = strdup(yystack.l_mark[0].str);}
#line 1671 "y.tab.c"
break;
case 61:
#line 371 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-5].str) + strlen(yystack.l_mark[-2].str) + strlen(yystack.l_mark[0].str) + 10 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "IF ");
        strcat(temp, yystack.l_mark[-5].str);
		strcat(temp, " THEN\n");
		
		strcat(temp, yystack.l_mark[-2].str);
		
		strcat(temp, "\n");
		strcat(temp, yystack.l_mark[0].str);
        yyval.str = temp;
	}
#line 1691 "y.tab.c"
break;
case 63:
#line 392 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[-1].str) + 12 + indent*4);
		strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "ELSE\n");
		
        strcat(temp, yystack.l_mark[-1].str);
		
		strcat(temp, "\n");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
		strcat(temp, "ENDIF");
        yyval.str = temp;
	}
#line 1712 "y.tab.c"
break;
case 64:
#line 410 "TermProject.y"
	{ 	
		char* temp = (char*) malloc(strlen(yystack.l_mark[0].str) + 5 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "ELSE");
        strcat(temp, yystack.l_mark[0].str+indent*2);
        yyval.str = temp;
	}
#line 1726 "y.tab.c"
break;
#line 1728 "y.tab.c"
    default:
        break;
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark -= yym;
#endif
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
        {
            fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
            if (!yytrial)
#endif /* YYBTYACC */
                fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[YYFINAL], yyval));
#endif
            fprintf(stderr, "shifting from state 0 to final state %d\n", YYFINAL);
        }
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        *++yystack.p_mark = yyloc;
#endif
        if (yychar < 0)
        {
#if YYBTYACC
            do {
            if (yylvp < yylve)
            {
                /* we're currently re-reading tokens */
                yylval = *yylvp++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                yylloc = *yylpp++;
#endif
                yychar = *yylexp++;
                break;
            }
            if (yyps->save)
            {
                /* in trial mode; save scanner results for future parse attempts */
                if (yylvp == yylvlim)
                {   /* Enlarge lexical value queue */
                    size_t p = (size_t) (yylvp - yylvals);
                    size_t s = (size_t) (yylvlim - yylvals);

                    s += YYLVQUEUEGROWTH;
                    if ((yylexemes = (YYINT *)realloc(yylexemes, s * sizeof(YYINT))) == NULL)
                        goto yyenomem;
                    if ((yylvals   = (YYSTYPE *)realloc(yylvals, s * sizeof(YYSTYPE))) == NULL)
                        goto yyenomem;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    if ((yylpsns   = (YYLTYPE *)realloc(yylpsns, s * sizeof(YYLTYPE))) == NULL)
                        goto yyenomem;
#endif
                    yylvp   = yylve = yylvals + p;
                    yylvlim = yylvals + s;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                    yylpp   = yylpe = yylpsns + p;
                    yylplim = yylpsns + s;
#endif
                    yylexp  = yylexemes + p;
                }
                *yylexp = (YYINT) YYLEX;
                *yylvp++ = yylval;
                yylve++;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
                *yylpp++ = yylloc;
                yylpe++;
#endif
                yychar = *yylexp++;
                break;
            }
            /* normal operation, no conflict encountered */
#endif /* YYBTYACC */
            yychar = YYLEX;
#if YYBTYACC
            } while (0);
#endif /* YYBTYACC */
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                fprintf(stderr, "%s[%d]: state %d, reading token %d (%s)\n",
                                YYDEBUGSTR, yydepth, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
    {
        fprintf(stderr, "%s[%d]: after reduction, ", YYDEBUGSTR, yydepth);
#ifdef YYSTYPE_TOSTRING
#if YYBTYACC
        if (!yytrial)
#endif /* YYBTYACC */
            fprintf(stderr, "result is <%s>, ", YYSTYPE_TOSTRING(yystos[yystate], yyval));
#endif
        fprintf(stderr, "shifting from state %d to state %d\n", *yystack.s_mark, yystate);
    }
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    *++yystack.p_mark = yyloc;
#endif
    goto yyloop;
#if YYBTYACC

    /* Reduction declares that this path is valid. Set yypath and do a full parse */
yyvalid:
    if (yypath) YYABORT;
    while (yyps->save)
    {
        YYParseState *save = yyps->save;
        yyps->save = save->save;
        save->save = yypath;
        yypath = save;
    }
#if YYDEBUG
    if (yydebug)
        fprintf(stderr, "%s[%d]: state %d, CONFLICT trial successful, backtracking to state %d, %d tokens\n",
                        YYDEBUGSTR, yydepth, yystate, yypath->state, (int)(yylvp - yylvals - yypath->lexeme));
#endif
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    yylvp          = yylvals + yypath->lexeme;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yylpp          = yylpsns + yypath->lexeme;
#endif
    yylexp         = yylexemes + yypath->lexeme;
    yychar         = YYEMPTY;
    yystack.s_mark = yystack.s_base + (yypath->yystack.s_mark - yypath->yystack.s_base);
    memcpy (yystack.s_base, yypath->yystack.s_base, (size_t) (yystack.s_mark - yystack.s_base + 1) * sizeof(YYINT));
    yystack.l_mark = yystack.l_base + (yypath->yystack.l_mark - yypath->yystack.l_base);
    memcpy (yystack.l_base, yypath->yystack.l_base, (size_t) (yystack.l_mark - yystack.l_base + 1) * sizeof(YYSTYPE));
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
    yystack.p_mark = yystack.p_base + (yypath->yystack.p_mark - yypath->yystack.p_base);
    memcpy (yystack.p_base, yypath->yystack.p_base, (size_t) (yystack.p_mark - yystack.p_base + 1) * sizeof(YYLTYPE));
#endif
    yystate        = yypath->state;
    goto yyloop;
#endif /* YYBTYACC */

yyoverflow:
    YYERROR_CALL("yacc stack overflow");
#if YYBTYACC
    goto yyabort_nomem;
yyenomem:
    YYERROR_CALL("memory exhausted");
yyabort_nomem:
#endif /* YYBTYACC */
    yyresult = 2;
    goto yyreturn;

yyabort:
    yyresult = 1;
    goto yyreturn;

yyaccept:
#if YYBTYACC
    if (yyps->save) goto yyvalid;
#endif /* YYBTYACC */
    yyresult = 0;

yyreturn:
#if defined(YYDESTRUCT_CALL)
    if (yychar != YYEOF && yychar != YYEMPTY)
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval, &yylloc);
#else
        YYDESTRUCT_CALL("cleanup: discarding token", yychar, &yylval);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */

    {
        YYSTYPE *pv;
#if defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED)
        YYLTYPE *pp;

        for (pv = yystack.l_base, pp = yystack.p_base; pv <= yystack.l_mark; ++pv, ++pp)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv, pp);
#else
        for (pv = yystack.l_base; pv <= yystack.l_mark; ++pv)
             YYDESTRUCT_CALL("cleanup: discarding state",
                             yystos[*(yystack.s_base + (pv - yystack.l_base))], pv);
#endif /* defined(YYLTYPE) || defined(YYLTYPE_IS_DECLARED) */
    }
#endif /* defined(YYDESTRUCT_CALL) */

#if YYBTYACC
    if (yyerrctx)
    {
        yyFreeState(yyerrctx);
        yyerrctx = NULL;
    }
    while (yyps)
    {
        YYParseState *save = yyps;
        yyps = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
    while (yypath)
    {
        YYParseState *save = yypath;
        yypath = save->save;
        save->save = NULL;
        yyFreeState(save);
    }
#endif /* YYBTYACC */
    yyfreestack(&yystack);
    return (yyresult);
}
