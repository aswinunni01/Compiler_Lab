
/*	DECLARATIONS	*/


/*	AUXILIARY DECLARATIONS	*/


%{
	
#include<stdio.h>
char *file1;
%}


/*	REGULAR DEFINITIONS	*/

number	[0-9]+
op	[-|+|*|/|^|=]


/* 	RULES	*/

%%


{number}   {printf("number");}

%%


/*	AUXILIARY FUNCTIONS	*/


int yywrap(){

	FILE *newfile_pointer;
	char *file2 = "console2";
	if(strcmp(file1,file2)!=0){
		file1=file2;
		char c;
		clearerr(yyin);
		yyin = yyin ;
		return 0;
	}
	else
		return 1;

}

int main(int argc, char* argv[]){
	file1 = "console1";
	yyin = stdin;
	yylex();
	return 1;
}















