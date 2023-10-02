%{
	#include <stdio.h>
	#include <string>
	#include "y.tab.h"
	using namespace std;

	extern FILE *yyin;
	extern int yylex();
	extern int linenum;
	extern int indent;
	void yyerror(string s);
%}

%union
{
	char *str;
}
%token INCLUDE IDENT NUMBER INT CHAR CHARACTER VOID IF ELSE WHILE FOR RETURN SCANF PRINTF STRING
%token ADD SUB MUL DIV UNARY LT LE GT GE EQ NE

%%

program:
	include_lib func_defs
;

include_lib:
	include include_lib
|
;

include:
	INCLUDE LT library GT
|	INCLUDE STRING
;

library:
	IDENT '.' IDENT
|	IDENT

func_defs:
	func_def func_defs
|
;

func_def:
	VOID IDENT '(' func_parameter ')' '{' body return '}' {
		printf("\nFUNCTION %s %s\n", $2.str, $4.str);
		printf("%s", $7.str);						//body
		if(strlen($8.str)) {
			printf("	%s=%s\n", $2.str, $8.str);	//return
		}
		printf("END FUNCTION %s\n", $2.str);
	}
|	var_type IDENT '(' func_parameter ')' '{' body return '}' {
		printf("\nFUNCTION %s %s\n", $2.str, $4.str);
		printf("%s\n", $7.str);
		if(strlen($8.str)) {
			printf("  %s=%s\n", $2.str, $8.str);
		}
		printf("END FUNCTION %s\n", $2.str);
	}
;

func_parameter:
	VOID { $$.str = strdup(""); }
|	parameter_list { $$.str = strdup($1.str); }
;

parameter_list:
	var_type IDENT ',' parameter_list 
	{ 	
		char* temp = (char*) malloc(strlen($2.str) + strlen($4.str) + 2);
        strcpy(temp, $2.str);
        strcat(temp, " ");
        strcat(temp, $4.str);
        $$.str = temp;
	}
|	var_type IDENT { $$.str = strdup($2.str); }
;

body:
	declerations statements
	{ 	
		char* temp = (char*) malloc(strlen($1.str) + strlen($2.str) + 1);
        strcpy(temp, $1.str);
        strcat(temp, $2.str);
        $$.str = temp;
	}
;

return:
	RETURN IDENT ';' {$$.str = strdup($2.str);}
| {$$.str = strdup("");}
;

declerations:
	decleration declerations
	{ 	
		char* temp = (char*) malloc(strlen($1.str) + strlen($2.str) + 2);
		if(strlen($1.str)){
        	strcpy(temp, $1.str);
        	strcat(temp, "\n");
		}
        strcat(temp, $2.str);
        $$.str = temp;
	}
| {$$.str = strdup("");}
;

decleration:
	var_type decleration_list ';' {$$.str = strdup($2.str);}
;

var_type:
	INT
|	CHAR
;

decleration_list:
	single_decleration ',' decleration_list
	{
		char* temp = (char*) malloc(strlen($1.str) + strlen($3.str) + 2);
        strcpy(temp, $1.str);
        strcat(temp, "\n");
        strcat(temp, $3.str);
        $$.str = temp;
	}
|	single_decleration {$$.str = strdup($1.str);}
;

single_decleration:
	IDENT {$$.str = strdup("");}
|	assignment { $$.str = strdup($1.str); }
;

statements:
	statement statements
	{ 	
		char* temp = (char*) malloc(strlen($1.str) + strlen($2.str) + 2);
        strcpy(temp, $1.str);
        strcat(temp, "\n");
        strcat(temp, $2.str);
        $$.str = temp;
	}
| 	{$$.str = strdup("");}
;

statement:
	SCANF '(' STRING ',' '&' IDENT ')' ';'
	{ 	
		char* temp = (char*) malloc(strlen($6.str) + 6 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "READ ");
        strcat(temp, $6.str);
        $$.str = temp;
	}
|	PRINTF '(' STRING ',' IDENT ')' ';'
	{ 	
		char* temp = (char*) malloc(strlen($5.str) + 7 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "PRINT ");
        strcat(temp, $5.str);
        $$.str = temp;
	}
|	assignment ';' {$$.str = strdup($1.str);}
|	for {$$.str = strdup($1.str);}
|	if {$$.str = strdup($1.str);}
;

assignment:
	IDENT '=' expr 
	{
		char* temp = (char*) malloc(strlen($1.str) + strlen($3.str) + 2 + indent*2);
        strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, $1.str);
        strcat(temp, "=");
        strcat(temp, $3.str);
        $$.str = temp;
	}
;
arithmetic:
	ADD {$$.str = strdup($1.str);}
|	SUB {$$.str = strdup($1.str);}
|	MUL {$$.str = strdup($1.str);}
|	DIV {$$.str = strdup($1.str);}
;
expr:
	expr arithmetic expr 
	{
		char* temp = (char*) malloc(strlen($1.str) + strlen($3.str) + 2);
        strcpy(temp, $1.str);
        strcat(temp, $2.str);
        strcat(temp, $3.str);
        $$.str = temp;
	}
|	IDENT {$$.str = strdup($1.str);}
|	NUMBER {$$.str = strdup($1.str);}
|	CHARACTER {$$.str = $1.str;}
|	IDENT '(' arguments ')' 
	{
		char* temp = (char*) malloc(strlen($1.str) + strlen($3.str) + 3);
        strcpy(temp, $1.str);
        strcat(temp, " ");
        strcat(temp, $3.str);
        strcat(temp, " ");
        $$.str = temp;
	}
;

arguments:
	var_list {$$.str = strdup($1.str);}
| {$$.str = strdup("");}
;

var_list:
	IDENT ',' var_list
	{ 	
		char* temp = (char*) malloc(strlen($1.str) + strlen($3.str) + 2);
        strcpy(temp, $1.str);
        strcat(temp, " ");
        strcat(temp, $3.str);
        $$.str = temp;
	}
|	IDENT { $$.str = strdup($1.str); }
;

for:
	FOR '(' assignment ';' comparison ';' increment ')' '{' body '}'
	{ 	
		char* temp = (char*) malloc(strlen($3.str) + strlen($5.str) + strlen($7.str) + strlen($10.str) + 20 + indent*4);
        strcpy(temp, $3.str);
		strcat(temp, "\n");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "WHILE ");
        strcat(temp, $5.str);
		strcat(temp, "\n");

		strcat(temp, $10.str);
		strcat(temp, "\n");
		strcat(temp, $7.str);
		strcat(temp, "\n");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
		strcat(temp, "END WHILE");
        $$.str = temp;
	}
;

comparison:
	expr GT expr
	{ 	
		char* temp = (char*) malloc(strlen($1.str) + strlen($3.str) + 2);
        strcpy(temp, $1.str);
        strcat(temp, ">");
        strcat(temp, $3.str);
        $$.str = temp;
	}
|	expr GE expr
	{ 	
		char* temp = (char*) malloc(strlen($1.str) + strlen($3.str) + 3);
        strcpy(temp, $1.str);
        strcat(temp, ">=");
        strcat(temp, $3.str);
        $$.str = temp;
	}
|	expr LT expr
	{ 	
		char* temp = (char*) malloc(strlen($1.str) + strlen($3.str) + 2);
        strcpy(temp, $1.str);
        strcat(temp, "<");
        strcat(temp, $3.str);
        $$.str = temp;
	}
|	expr LE expr
	{ 	
		char* temp = (char*) malloc(strlen($1.str) + strlen($3.str) + 3);
        strcpy(temp, $1.str);
        strcat(temp, "<=");
        strcat(temp, $3.str);
        $$.str = temp;
	}
|	expr EQ expr
	{ 	
		char* temp = (char*) malloc(strlen($1.str) + strlen($3.str) + 3);
        strcpy(temp, $1.str);
        strcat(temp, "==");
        strcat(temp, $3.str);
        $$.str = temp;
	}
|	expr NE expr
	{ 	
		char* temp = (char*) malloc(strlen($1.str) + strlen($3.str) + 3);
        strcpy(temp, $1.str);
        strcat(temp, "!=");
        strcat(temp, $3.str);
        $$.str = temp;
	}
;

increment:
	IDENT ADD ADD
	{ 	
		char* temp = (char*) malloc(2 * strlen($1.str) + 4 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent+1; i++){
			strcat(temp, "  ");
		}
        strcat(temp, $1.str);
        strcat(temp, "=");
        strcat(temp, $1.str);
        strcat(temp, "+1");
        $$.str = temp;
	}
|	ADD ADD IDENT
	{ 	
		char* temp = (char*) malloc(2 * strlen($3.str) + 4 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent+1; i++){
			strcat(temp, "  ");
		}
        strcat(temp, $3.str);
        strcat(temp, "=");
        strcat(temp, $3.str);
        strcat(temp, "+1");
        $$.str = temp;
	}
|	IDENT SUB SUB
	{ 	
		char* temp = (char*) malloc(2 * strlen($1.str) + 4 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent+1; i++){
			strcat(temp, "  ");
		}
        strcat(temp, $1.str);
        strcat(temp, "=");
        strcat(temp, $1.str);
        strcat(temp, "-1");
        $$.str = temp;
	}
|	SUB SUB IDENT
	{ 	
		char* temp = (char*) malloc(2 * strlen($3.str) + 4 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent+1; i++){
			strcat(temp, "  ");
		}
        strcat(temp, $3.str);
        strcat(temp, "=");
        strcat(temp, $3.str);
        strcat(temp, "-1");
        $$.str = temp;
	}
|	assignment {$$.str = strdup($1.str);}
;

if:
	IF '(' comparison ')' '{' body '}' else
	{ 	
		char* temp = (char*) malloc(strlen($3.str) + strlen($6.str) + strlen($8.str) + 10 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "IF ");
        strcat(temp, $3.str);
		strcat(temp, " THEN\n");
		
		strcat(temp, $6.str);
		
		strcat(temp, "\n");
		strcat(temp, $8.str);
        $$.str = temp;
	}
|	IF '(' comparison ')' '{' body '}'
;

else:
	ELSE '{' body '}'
	{ 	
		char* temp = (char*) malloc(strlen($3.str) + 12 + indent*4);
		strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "ELSE\n");
		
        strcat(temp, $3.str);
		
		strcat(temp, "\n");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
		strcat(temp, "ENDIF");
        $$.str = temp;
	}
|	ELSE if
	{ 	
		char* temp = (char*) malloc(strlen($2.str) + 5 + indent*2);
		strcpy(temp, "");
		for(int i = 0; i < indent; i++){
			strcat(temp, "  ");
		}
        strcat(temp, "ELSE");
        strcat(temp, $2.str+indent*2);
        $$.str = temp;
	}
;

%%

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
