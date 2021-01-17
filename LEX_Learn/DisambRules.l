
/*	DECLARATIONS	*/


/*	AUXILIARY DECLARATIONS	*/


%{
	
#include<stdio.h>
int global_variable;
%}


/*	REGULAR DEFINITIONS	*/



/* 	RULES	*/

%%


"break"   { printf( "BREAK");}

[a-zA-Z][a-zA-Z0-9]*	{ printf ("IDENTIFIER");}
%%


/*	AUXILIARY FUNCTIONS	*/









