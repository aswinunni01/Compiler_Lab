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
"if"	{ return IF; }
"else"  { yylval.no = createTree(NULL, 7, "else", NULL, NULL); return Else; }
"then"	{ 	yylval.no = createTree(NULL, 7, "then", NULL, NULL); return then; }
"endif"	{ return ENDIF; }
"+"	{ return PLUS; }
"-"	{ return MINUS; }
"*"	{ return MUL; }
"/"	{ return DIV; }
"="	{ return EQ; }
"<"	{ return LT; }
">"	{ return GT; }
"<="	{ return LTE; }
">="	{ return GTE; }
"!="	{ return NE; }
"=="	{ return EQU; }
[ \t]	{}
[;]	{ return *yytext; }
[()]	{ return *yytext; }
"end"	{ return END; }
"begin" { return BEG; }
.	{ yyerror("unknown character\n");exit(1);}



%%

int yywrap(void){
  	return 1;

}
