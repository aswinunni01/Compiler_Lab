

/*	AUXILIARY DECLARATIONS	*/

%{

#include<stdio.h>

#define ID 1  // Identifier token
#define ER 2  // Error token

%}

/*	REGULAR DEFINITIONS	*/


low	[a-z]
up	[A-Z]
number	[0-9]

%option noyywrap


/*	RULES	*/

%%

({low}|{up})({low}|{up})*{number}	{ return ID; }

(.)*					{ return ER; }

%%


int main(){

	int token = yylex();
	if ( token == ID )
		printf("Acceptable\n");
	else if ( token == ER )
		printf("Unacceptable\n");
	return 1;
}








