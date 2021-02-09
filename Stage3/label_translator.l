%{

#include<stdio.h>
#include<stdlib.h>
FILE *input_file;
%}


labels	[\AL][0-9]*[:]

%%
{labels}	{ printf("label detected"); }

(.)*		;
%%


int  yywrap(){
	return 1;

} 
int main(int argc, char *argv[]){
	if(argc<2){
                printf("Not enough arguments");
                return 1;
        }
        input_file = fopen(argv[1], "r");
        yyin = input_file;
	yylex();
}



