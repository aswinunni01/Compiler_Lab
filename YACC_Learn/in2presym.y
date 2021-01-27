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

start : expr newline { printf("\n%s",$<c>1); exit(1);}

;


expr :  expr OP expr { strcpy($<c>$,strcat($<c>2,strcat($<c>1,$<c>3))); }
     | '(' expr ')'  {strcpy($<c>$,$<c>2); }	
	| string	{ strcpy($<c>$,$<c>1);}
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
