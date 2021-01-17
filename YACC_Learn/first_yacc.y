%{

#include<stdio.h>
#include<stdlib.h>

int pos=0;

%}

%token DIGIT
%left '+'
%left '*'
%%

start : expr '\n'	{ exit(1); }
      ;

expr  : expr '+' expr	{ printf("+"); }
      | expr '*' expr	{ printf("*"); }
      | '(' expr ')'
      | DIGIT		{ printf("NUM%d",pos); }
      ;
%%

yyerror(char const *s){
	printf("yyerror %s",s);
}

yylex(){

	char c;
	c = getchar();
	if(isdigit(c)){
		pos++;
		return DIGIT;
	}

	else{
		return c;
}
}
main(){
	yyparse();
	return 1;
}

