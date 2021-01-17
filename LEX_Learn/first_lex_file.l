
/*	DECLARATIONS	*/


/*	AUXILIARY DECLARATIONS	*/


%{
	
#include<stdio.h>
int global_variable;
%}


/*	REGULAR DEFINITIONS	*/

number					[0-9]+
op	[-|+|*|/|^|=]


%option noyywrap
/* 	RULES	*/

%%


{number}   {printf(" number");}


%%


/*	AUXILIARY FUNCTIONS	*/


int main(int argc, char* argv[]){
	
	yylex();
	return 1;
}















