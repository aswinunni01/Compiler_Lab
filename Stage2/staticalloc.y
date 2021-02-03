%{

#include "staticalloc.h"
#include <stdio.h>
#include <stdlib.h>
#include "staticalloc.c"
int yylex(void);
%}

%union{

	struct tnode *no;
}


%type <no> E PLUS MINUS MUL DIV Stmt Stlist InputStmt OutputStmt AsgStmt ID NUM
%token WRITE READ EQ PLUS MINUS MUL DIV ID NUM END BEG
%left PLUS MINUS
%left MUL DIV


%%

start : BEG Stlist END	{	printf("Completed");
      					FILE *fptr = fopen("out.xexe", "w");
     					 makepgrm($2,fptr); 
      					exit(1); }
      | BEG END	{ exit(1); }
;

Stlist : Stlist Stmt 	{ $$ = createTree(NULL,3, NULL, $1, $2); }
       | Stmt		{ $$ = $1; }
;

Stmt	: InputStmt	{ $$ = $1; }
     	| OutputStmt    { $$ = $1; }
	| AsgStmt	{ $$ = $1; } 
;

InputStmt : READ '(' E ')' { $$ =createTree(-1, 2, "Read", NULL, $3);}
;

OutputStmt : WRITE '(' E ')' { $$ = createTree(-2, 2, "Write", NULL, $3); }
	   ;


AsgStmt : E EQ E  { $$ = createTree(NULL, 1, "EQ", $1, $3); }
	;

E : E PLUS E	{ $$ = createTree(NULL, 1, "ADD", $1, $3); }
  | E MUL E     { $$ = createTree(NULL, 1, "MUL", $1, $3); }
  | E MINUS E   { $$ = createTree(NULL, 1, "SUB", $1, $3); }
  | E DIV E 	{ $$ = createTree(NULL, 1, "DIV", $1, $3); } 
  | '(' E ')' 	{ $$ = $2; }
  | ID		{ $$ = $1; printf("ID FOuND"); }
  | NUM		{ $$ = $1; }
  ;


%%

yyerror(char const* s){
	printf("yyerror %s", s);
}

int main(void){

	yyparse();

}

