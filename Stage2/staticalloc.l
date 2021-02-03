%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
#include "staticalloc.h"
int c=0;
int number;
char*  var;
%}

%%

[0-9]+	{ number = atoi(yytext); yylval.no = createTree(number, 0, NULL, NULL, NULL); return NUM; }

[a-z]	{ var = strdup(yytext); yylval.no = createTree(NULL,4,var,NULL,NULL);   return ID; }
"write"	{ return WRITE; }
"read"	{ return READ; }
"+"	{ return PLUS; }
"-"	{ return MINUS; }
"*"	{ return MUL; }
"/"	{ return DIV; }
"="	{ return EQ; }
[ \t]	{}
[()]	{ return *yytext; }
"end"	{ return END; }
"begin" { return BEG; }
.	{ yyerror("unknown character\n");exit(1);}



%%

int yywrap(void){
	FILE *newfile_pointer;
	
  	newfile_pointer = fopen("input_file.txt","r");
  	if(c!=1)
  	{	c=1;
  		yyin = newfile_pointer;
    		return 0;
  	}
  	else
  		return 1;

}
