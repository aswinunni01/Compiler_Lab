%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
#include "staticalloc.h"
#define intType 21
#define boolType 22
int c=0;
int number;
char*  var;
%}

%%

[0-9]+	{ number = atoi(yytext); yylval.no = createTree(number, intType, NULL,0,NULL, NULL, NULL); return NUM; }

[a-z]	{ var = strdup(yytext); yylval.no = createTree(NULL, intType, var, 4, NULL, NULL, NULL);   return ID; }
"write"	{ return WRITE; }
"read"	{ return READ; }
"if"	{ return IF; }
"else"  { return ELSE; }
"then"	{ return THEN; }
"endif"	{ return ENDIF; }
"while" { return WHILE; }
"endwhile" { return ENDWHILE; }
"do"	{ return DO; }
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
