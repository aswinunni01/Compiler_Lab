/*	AUXILIARY DECLARATIONS	*/

%{
#include<stdio.h>
int nint;
int nfloats;

%}

integer	[0-9]*
floats	[0-9]*[.][0-9]*


%option noyywrap


%%

{integer}	{ nint++; }
{floats}	{ nfloats++; }


%%



int main(){
	
	yyin = fopen("inputfile2.l","r");
	yylex();
	printf("The number of integers is: %d\n",nint);
	printf("The number of floats is: %d\n",nfloats);
	return 1;
}
