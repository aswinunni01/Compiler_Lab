

%{
#include<stdio.h>
#include"y.tab.h"

%}


char	[a-z A-Z]


%%

{char}		{ yylval.c= *yytext;

		return character; }

[-|+|*|/]	{ yylval.c = *yytext;
			return OP; }

[\n]		return newline; 

(.)	;
%%

yywrap(){

	return 1;

}



