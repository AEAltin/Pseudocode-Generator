#ifndef _yy_defines_h_
#define _yy_defines_h_

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
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union YYSTYPE
{
	char *str;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE yylval;

#endif /* _yy_defines_h_ */
