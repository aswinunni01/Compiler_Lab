	

%{

#include<stdio.h>

%}



multi  \/\*.*"\n"*.*\*\/

single \/\/.*

%option noyywrap

%%

({multi}|{single}) 	{ printf("%s\n", yytext); }

(.)*	;
%%


int main(){
	yyin = fopen("inputfile4.l","r");
	yylex();
	return 1;
}




