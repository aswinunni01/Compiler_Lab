
/*	DECLARATIONS	*/


/*	AUXILIARY DECLARATIONS	*/


%{
	
#include<stdio.h>
int global_variable;
%}


/*	REGULAR DEFINITIONS	*/

number					[0-9]+
op	[-|+|*|/|^|=]


/* 	RULES	*/

%%


{number}   {return atoi(yytext);}

%%


/*	AUXILIARY FUNCTIONS	*/


int main(int argc, char* argv[]){

	int num = yylex();
	printf("Found: %d",num);
	return 1;
}















