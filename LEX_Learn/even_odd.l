
/*	DECLARATIONS	*/


/*	AUXILIARY DECLARATIONS	*/


%{
	
#include<stdio.h>
#include<stdlib.h>
int global_variable;
%}


/*	REGULAR DEFINITIONS	*/

number					[0-9]+
op	[-|+|*|/|^|=]


/* 	RULES	*/

%%


{number}   {if(atoi(yytext)%2 == 0)
			printf("Even");
	    else
			printf("Odd");

	   }
{op}	   {printf(" operator");}


%%


/*	AUXILIARY FUNCTIONS	*/


int main(int argc, char* argv[]){
	
	if(argc > 1){
		FILE *fp = fopen(argv[1],"r");
		if(fp)
			yyin = fp;
	}
	yylex();
	return 1;

}















