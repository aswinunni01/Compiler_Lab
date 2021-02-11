%{
#include "staticalloc.h"
#include <stdio.h>
#include <stdlib.h>
#include "staticalloc.c"
#define intType 21
#define boolType 22

int yylex(void);
FILE *input_file;
struct tnode* end_node;
%}

%union{

	struct tnode *no;
}


%type <no> E PLUS MINUS MUL DIV Stmt Stlist InputStmt OutputStmt AsgStmt ID NUM Ifstmt NE EQU LT LTE GT GTE
%token WRITE READ EQ PLUS MINUS MUL DIV ID NUM END BEG IF ENDIF Else then NE EQU LT LTE GT GTE ELSE THEN
%left PLUS MINUS
%left MUL DIV


%%

start : BEG Stlist END	{	         end_node = createTree(NULL, 10, NULL,10, NULL,NULL, $2);

      					printf("Completed\n");
      					FILE *fptr = fopen("out.xexe", "w");
					 writeheader(fptr);
     					 codeGen($2,fptr); 
      					exit(1); }
      | BEG END	{ exit(1); }
;


Ifstmt	:	IF  '('E')' THEN Stlist ELSE Stlist ENDIF {  $$ = createIfNode($3,$6,$8); }
       |	IF '('E')' THEN Stlist ENDIF	    { $$ = createIfNode($3, $6, NULL); }
;

Stlist : Stlist Stmt 	{ $$ = createTree(NULL,3, NULL,3, $1,NULL, $2); }
       | Stmt		{ $$ = $1; }
;

Stmt	: InputStmt ';'	{ $$ = $1; }
     	| OutputStmt';'    { $$ = $1; }
	| AsgStmt';'	{ $$ = $1; } 
	| Ifstmt	{ $$ = $1; }
;

InputStmt : READ '(' E ')' { $$ =createIONode(-1,"Read",$3);}
;

OutputStmt : WRITE '(' E ')' { $$ = createIONode(-2,"Write",$3); }
	   ;


AsgStmt : E EQ E  { $$ = createTree(NULL, 1, "EQU",1, $1,NULL, $3); }
	;

E : E PLUS E	{ $$ = createOpNode("ADD",intType,$1, $3); }
  | E MUL E     { $$ = createTree(NULL, 1, "MUL",1, $1,NULL, $3); }
  | E MINUS E   { $$ = createTree(NULL, 1, "SUB",1, $1,NULL, $3); }
  | E DIV E 	{ $$ = createTree(NULL, 1, "DIV",1, $1,NULL, $3); } 
  | E EQU E 	{ $$ = createTree(NULL, 1, "EQ",1, $1,NULL, $3); } 
  | E LT E 	{ $$ = createTree(NULL, 1, "LT",1, $1,NULL, $3); } 
  | E GT E 	{ $$ = createTree(NULL, 1, "GT",1, $1,NULL, $3); } 
  | E LTE E 	{ $$ = createTree(NULL, 1, "LTE",1, $1,NULL, $3); } 
  | E GTE E 	{ $$ = createTree(NULL, 1, "GTE",1, $1,NULL, $3); } 
  | E NE E 	{ $$ = createTree(NULL, 1, "NE",1, $1,NULL, $3); } 
  | '(' E ')' 	{ $$ = $2; }
  | ID		{ $$ = $1; }
  | NUM		{ $$ = $1; }
  ;


%%

yyerror(char const* s){
	printf("yyerror %s", s);
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

