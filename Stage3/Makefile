file = staticalloc

all : out

yacc :
	yacc -d $(file).y

lex : yacc
	lex $(file).l

out: lex
	gcc -w -g y.tab.c lex.yy.c -o $(file).exe

clean:
	rm lex.yy.c y.tab.c y.tab.h
