file = Compiler/staticalloc

all : out clean

yacc :
	yacc -d $(file).y

lex : yacc
	lex $(file).l

out: lex
	gcc -w -g y.tab.c lex.yy.c -o $(file).exe
clean:
