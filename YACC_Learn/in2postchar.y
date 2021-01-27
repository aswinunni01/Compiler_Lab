

%{

#include<stdio.h>

%}

%union{

	char  c;

};


%token OP
%token character
%token newline
%type <c> character
%type <c> OP
%%


start : expr newline	{ printf("\nCompleted\n"); }
      ;

expr : expr OP expr	{ printf("%c",$<c>2); }
	| '(' expr ')'
	| character	{ printf("%c", $<c>1); }
;

%%

void yyerror(char const  *s){

	printf("yyerror %s\n",s);
	return;
}

int main(){
	yyparse();
	return 1;

}


