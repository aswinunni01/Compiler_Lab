%{

#include "staticalloc.h"
#include <stdio.h>
#include <stdlib.h>
#include "staticalloc.c"
int yylex(void);
struct tnode* end_node;
FILE *fptr;
FILE *input_file;


%}

%union{

	struct tnode *no;
}


%type <no> E PLUS MINUS MUL DIV Stmt Stlist InputStmt OutputStmt AsgStmt ID NUM
%token WRITE READ EQ PLUS MINUS MUL DIV ID NUM END BEG
%left PLUS MINUS
%left MUL DIV


%%

start : BEG Stlist END	{	
      					end_node = createTree(NULL, 10, NULL, NULL, $2);
					printf("Completed\n");
					fptr = fopen("/home/aswin/Downloads/xsm_expl/data/output.xexe","w");
					writeheader(fptr);
     					makepgrm(end_node,fptr); 
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

InputStmt : READ '(' E ')' ';' { $$ =createTree(-1, 2, "Read", NULL, $3);}
;

OutputStmt : WRITE '(' E ')' ';' { $$ = createTree(-2, 2, "Write", NULL, $3); }
	   ;


AsgStmt : E EQ E ';' { $$ = createTree(NULL, 1, "EQ", $1, $3); }
	;

E : E PLUS E	{ $$ = createTree(NULL, 1, "ADD", $1, $3); }
  | E MUL E     { $$ = createTree(NULL, 1, "MUL", $1, $3); }
  | E MINUS E   { $$ = createTree(NULL, 1, "SUB", $1, $3); }
  | E DIV E 	{ $$ = createTree(NULL, 1, "DIV", $1, $3); } 
  | '(' E ')' 	{ $$ = $2; }
  | ID		{ $$ = $1; }
  | NUM		{ $$ = $1; }
  ;


%%

yyerror(char const* s){
	printf("yyerror %s\n", s);
}

int main(int argc, char *argv[]){
	extern FILE *yyin;
	if(argc<2){
		yyerror("Not enough arguments");
		return 1;
	}
	input_file = fopen(argv[1], "r");
	yyin = input_file;
	yyparse();

}

