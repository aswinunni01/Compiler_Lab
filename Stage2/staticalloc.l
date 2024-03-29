%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
#include "staticalloc.h"
int c=0;
int number;
char*  var;
%}

%%

[0-9]+	{ number = atoi(yytext); yylval.no = createTree(number, 0, NULL, NULL, NULL); return NUM; }

[a-z]	{ var = strdup(yytext); yylval.no = createTree(NULL,4,var,NULL,NULL);   return ID; }
"write"	{ return WRITE; }
"read"	{ return READ; }
"+"	{ return PLUS; }
"-"	{ return MINUS; }
"*"	{ return MUL; }
"/"	{ return DIV; }
"="	{ return EQ; }
[ \t]	{}
[()]	{ return *yytext; }
"end"	{ return END; }
"begin" { return BEG; }
[;]	{ return *yytext; }
.	{ yyerror("unknown character\n");exit(1);}



%%

int yywrap(void){
	return 1;

}
