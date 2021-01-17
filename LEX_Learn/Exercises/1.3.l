/*	AUXILIARY DEFINITIONS	*/

%{
#include<stdio.h>
#include<string.h>
char out[100];
%}

words	[\AA][a-zA-Z]*

%option noyywrap

%%

{words}	{	char* s = yytext;
		 while(*s){
		*s = toupper((unsigned char) *s);
		s++;
	  }
		printf(yytext);
	// strcat(out,toupper(yytext));
	 }


%%

int main(){
	yyin = fopen("inputfile3.l","r");
	yylex();
//	printf(out);
	return 1;
	
}
