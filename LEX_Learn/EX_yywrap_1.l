
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
	char *file2 = "input_file_2.l";
	newfile_pointer = fopen("input_file_2.l","r");
	if(strcmp(file1,file2)!=0){
		file1=file2;
		yyin = newfile_pointer;
		return 0;
	}
	else
		return 1;

}

int main(int argc, char* argv[]){
	file1 = "console";
	yylex();
	return 1;
}















