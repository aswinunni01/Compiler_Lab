
/*	AUXILIARY DEFINITIONS	*/
%{
#include<stdio.h>
int nline;
int nword;
int nchar;

%}

newline	"\n"

word	[a-zA-z]*


%option noyywrap

%%

{newline}	{ nline++; }
{word}	{ nword++; nchar+=yyleng; }


%%



int main(){
	
	yyin = fopen("inputfile.l","r");
	yylex();
	printf("The number of lines is: %d \n",nline);
	printf("The number of words is: %d \n",nword);
	printf("The number of characters is: %d \n",nchar);
	return 1;

}
