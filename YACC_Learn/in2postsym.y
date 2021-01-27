%{

#include<stdio.h>
int yyerror();
%}

%union{
	char *c;
};

%token OP
%token string
%token newline
%type <c> string
%type <c> OP

%%

start : expr newline { printf("Completed"); exit(1);}

;


expr :  expr OP expr { printf("%s", $<c>2); }
     | '(' expr ')'	
	| string	{ printf("%s", $<c>1); }
;

%%

yyerror(char * const s){
	printf("yyerror %s\n",s);
	return 1;


}

int main(){
	yyparse();
	return 1;
}
