all: lex yacc
	g++ lex.yy.c y.tab.c -ll -o TermProject
	./TermProject input.c

yacc: TermProject.y
	yacc -d TermProject.y

lex: TermProject.l
	lex TermProject.l
clean: 
	rm lex.yy.c y.tab.c  y.tab.h  TermProject


