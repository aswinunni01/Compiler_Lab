%{
#include "staticalloc.h"
#include <stdio.h>
#include <stdlib.h>
#include "staticalloc.c"

#define intType 21
#define boolType 22
#define strType 23
#define arType 24
#define matType 25

int yylex(void);
FILE *input_file;
struct tnode* end_node;
%}

%union{
	int num;
	struct tnode *no;
}


%type <no> E PLUS MINUS MUL DIV Stmt Stlist InputStmt OutputStmt AsgStmt ID NUM Ifstmt NE EQU LT LTE GT GTE Whilestmt VarList
%type <num> Type
%token WRITE READ EQ PLUS MINUS MUL DIV ID NUM END BEG IF ENDIF Else then NE EQU LT LTE GT GTE ELSE THEN WHILE ENDWHILE DO BREAK CONTINUE INT STR DECL ENDDECL
%left PLUS MINUS
%left MUL DIV

%%

start	: BEG Declarations Stlist END 	{
                                                printf("Completed\n");
                                                FILE *fptr = fopen("out.xsm", "w");
                                                writeheader(fptr);
                                                codeGen($3,fptr);
                                                writefooter(fptr);
                                                exit(1);
                                        }

      	| BEG Stlist END
					 {
      						printf("Completed\n");
	      					FILE *fptr = fopen("out.xsm", "w");
						writeheader(fptr);
	  					codeGen($2,fptr);
						writefooter(fptr); 
      						exit(1); 
					}
	| BEG END			{ exit(1); }
	;

Declarations : DECL DeclList ENDDECL | DECL ENDDECL {}
	     ;

DeclList : DeclList Decl | Decl {}
	 ;

Decl : Type VarList ';' 		{ 
     						while($2 != NULL) {
			     				struct Gsymbol* temp = Lookup($2->varname);
							temp->type = $1;
							$2 = $2->left;
						}
					}
				
     ;


Type : INT  				{ $$ = intType; }
     | STR  				{ $$ = strType; }
     ;

VarList : VarList ',' ID 		{
       						if(Lookup($3->varname) != NULL){
			                                yyerror("Variable already declared");   
			                                exit(1);}     
					  	Install($3->varname, NULL, 1,1); $3->left = $1; $$=$3; }

	| VarList ',' ID '[' NUM ']' 	{
						 if(Lookup($3->varname) != NULL){
			                                yyerror("Variable already declared");
			                                exit(1);}
			                         Install($3->varname, NULL,$5->val, 1); $3->left = $1; $$=$3;
						 address= address + ($5->val-1);}
        | VarList ',' ID '[' NUM ']''['NUM']' { 
						if(Lookup($3->varname) != NULL){
			                                yyerror("Variable already declared");
			                                exit(1);}
			                        Install($3->varname, NULL, $5->val, $8->val); $3->left = $1; $$=$3;
                        			address= address + (($5->val*$8->val)-1);}


	| ID '[' NUM ']'		{ 
						if(Lookup($1->varname) != NULL){
			                                yyerror("Variable already declared");
			                                exit(1);}
			                        Install($1->varname, NULL,$3->val, 1); $$ = $1;
						address = address + ($3->val-1); }
        | ID '[' NUM ']''['NUM']' 	{
						if(Lookup($1->varname) != NULL){
			                                yyerror("Variable already declared");
			                                exit(1);}
			                        Install($1->varname, NULL,$3->val,$6->val); $$ = $1;
			                        address = address + (($3->val*$6->val)-1); }

	| ID				{
						 if(Lookup($1->varname) != NULL){
							yyerror("Variable already declared");
							exit(1);}	
						Install($1->varname, NULL,1, 1); $$ = $1; }
	;


Ifstmt	:	IF  '('E')' THEN Stlist ELSE Stlist ENDIF ';' {  $$ = createIfNode($3,$6,$8); }
       	|	IF '('E')' THEN Stlist ENDIF ';'	      { $$ = createIfNode($3, $6, NULL); }
;

Whilestmt :	WHILE '('E')' DO Stlist ENDWHILE ';'	  { $$ = createWhileNode($3, $6); }
	;

Stlist : Stlist Stmt 	{ $$ = createTree(NULL,3, NULL,3, NULL, $1,NULL, $2); }
       | Stmt		{ $$ = $1; }
;

Stmt	: InputStmt ';'	{ $$ = $1; }
     	| OutputStmt';'    { $$ = $1; }
	| AsgStmt';'	{ $$ = $1; } 
	| Ifstmt	{ $$ = $1; }
	| Whilestmt	{ $$ = $1; }
	|  BREAK       { $$ = createTree(NULL, NULL, NULL, 10,NULL, NULL, NULL, NULL); }
	| CONTINUE     { $$ = createTree(NULL, NULL, NULL, 11,NULL, NULL, NULL, NULL); }
;

InputStmt : READ '(' E ')' { $$ =createIONode(-1,"Read",$3);}
;

OutputStmt : WRITE '(' E ')' { $$ = createIONode(-2,"Write",$3); }
	   ;


AsgStmt : E EQ E  { $$ = createTree(NULL, 1, "EQU",1,NULL, $1,NULL, $3); }
	;

E : E PLUS E	{ $$ = createOpNode("ADD",intType,$1, $3); }
  | E MUL E     { $$ = createOpNode("MUL",intType,$1, $3); }
  | E MINUS E   { $$ = createOpNode("SUB",intType,$1, $3); }
  | E DIV E 	{ $$ = createOpNode("DIV",intType,$1, $3); } 
  | E EQU E 	{ $$ = createOpNode("EQ",boolType, $1, $3); } 
  | E LT E 	{ $$ = createOpNode("LT",boolType, $1, $3); } 
  | E GT E 	{ $$ = createOpNode("GT",boolType, $1, $3); } 
  | E LTE E 	{ $$ = createOpNode("LE",boolType, $1, $3); } 
  | E GTE E 	{ $$ = createOpNode("GE",boolType, $1, $3); } 
  | E NE E 	{ $$ = createOpNode("NE",boolType, $1, $3); } 
  | '(' E ')' 	{ $$ = $2; }
  | ID		{ if(Lookup($1->varname) == NULL){
			yyerror("Variable not declared\n");
			exit(1); }
			$1->type = Lookup($1->varname)->type;
			$1->Gentry = Lookup($1->varname);
			$$ = $1; }
  | ID '[' E ']' { if(Lookup($1->varname) == NULL){
                        yyerror("Variable not declared\n");
                        exit(1); }
                        $1->nodetype = arType;
			$1->type = Lookup($1->varname)->type;
                        $1->Gentry = Lookup($1->varname);
			$1->left = $3;
                        $$ = $1; }

  | ID '[' E ']' '[' E ']' { if(Lookup($1->varname)==NULL){

				   yyerror("Variable not declared\n");
				   exit(1);
				}
				$1->nodetype = matType;

				$1->type = Lookup($1->varname)->type;
				$1->Gentry = Lookup($1->varname);
				$1->left = $3;
				$1->right = $6;
				$$ = $1; }

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

