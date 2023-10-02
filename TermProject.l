/*** Definition section ***/


%{
#include <stdio.h>
#include <iostream>
#include <string.h>
#include "y.tab.h"
using namespace std;
int linenum = 0;
int indent = 0;

void printToken(const char* token);
%}

letter [a-zA-Z]
digit [0-9]

%%

"printf"                    { return PRINTF; }
"scanf"                     { return SCANF; }
"int"                       { return INT; }
"char"                      { return CHAR; }
"void"                      { return VOID; }
"return"                    { return RETURN; }
"for"	                    { return FOR; }
"if"	                    { return IF; }
"else"	                    { return ELSE; }
"#include"                  { return INCLUDE; }
-?{digit}+                  { yylval.str = strdup(yytext); return NUMBER; }
{letter}({letter}|{digit})* { yylval.str = strdup(yytext); return IDENT; }
\".*\"                      { yylval.str = strdup(yytext); return STRING; }
"<="                        { return LE; }
">="                        { return GE; }
"=="                        { return EQ; }
"!="                        { return NE; }
">"	                        { return GT; }
"<"	                        { return LT; }
"+"                         { yylval.str = strdup(yytext); return ADD; }
"-"                         { yylval.str = strdup(yytext); return SUB; }
"/"                         { yylval.str = strdup(yytext); return DIV; }
"*"                         { yylval.str = strdup(yytext); return MUL; }
"{"                         { indent++; return *yytext; }
"}"                         { indent--; return *yytext; }
[ \t]+                      { ; }
"\n"                        { linenum++; }
"\r"                        { ; }
['].[']                     { yylval.str = strdup(yytext); return CHARACTER; }
.	                        { return *yytext; }

%%

void printToken(const char* token) {
    printf("%s", token);
}