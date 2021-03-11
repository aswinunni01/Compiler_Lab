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

#define FnNode 12
#define FnBlock 13
#define MnNode 14
#define FnCall 15
#define ArgType 16
#define RetNode 17

int yylex(void);
FILE *input_file;
struct tnode* end_node;
int ploc=-3;
int lloc=0;
%}

%union{
	int num;
	struct tnode *no;
	struct Paramstruct *np;
}


%type <no> E PLUS MINUS MUL DIV Stmt Stlist InputStmt OutputStmt AsgStmt ID NUM Ifstmt NE EQU LT LTE GT GTE Whilestmt GidList FdefBlock Fdef Body MainBlock ArgList Retstmt
%type <np> ParamList Param
%type <num> Type
%token WRITE READ EQ PLUS MINUS MUL DIV ID NUM END BEG IF ENDIF Else then NE EQU LT LTE GT GTE ELSE THEN WHILE ENDWHILE DO BREAK CONTINUE INT STR DECL ENDDECL MAIN RET
%left PLUS MINUS
%left MUL DIV

%%

start	: GdeclBlock FdefBlock MainBlock 	{
                                                printf("Completed\n");
                                                FILE *fptr = fopen("out.xsm", "w");
						printtable();
                                                writeheader(fptr);
						codeGen($2, fptr);
                                        	codeGen($3,fptr);
 //                                               writefooter(fptr);
                                                exit(1);
                                        }

      	| BEG GdeclBlock MainBlock END
					 {
      						printf("Completed\n");
	      					FILE *fptr = fopen("out.xsm", "w");
						writeheader(fptr);
	  					//codeGen($2,fptr);
//						writefooter(fptr); 
      						exit(1); 
					}
	| BEG MainBlock END			{ exit(1); }
	| GdeclBlock FdefBlock 		{ printf("Completed now \n"); printtable(); exit(1); }
	;


GdeclBlock : DECL GdeclList ENDDECL | DECL ENDDECL {}
	     ;

GdeclList : GdeclList Gdecl | Gdecl {}
	 ;

Gdecl : Type GidList ';' 		{ 
     						while($2 != NULL) {
			     				struct Gsymbol* temp = Lookup($2->varname);
							temp->type = $1;
							$2 = $2->left;}
					}
				
     ;


Type : INT  				{ $$ = intType; }
     | STR  				{ $$ = strType; }
     ;


GidList : GidList ',' ID		{
       						if(Lookup($3->varname) != NULL){
			                                yyerror("Variable already declared");   
			                                exit(1);}     
					  	Install($3->varname, NULL, 1,1, NULL, NULL); $3->left = $1; $$=$3; }

	| GidList ',' ID '[' NUM ']' 	{
						 if(Lookup($3->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                         Install($3->varname, NULL,$5->val, 1, NULL, NULL); $3->left = $1; $$=$3;
						 address= address + ($5->val-1);}
        | GidList ',' ID '[' NUM ']''['NUM']' { 
						if(Lookup($3->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install($3->varname, NULL, $5->val, $8->val, NULL, NULL); $3->left = $1; $$=$3;
                        			address= address + (($5->val*$8->val)-1);}
	| GidList ',' ID '(' ParamList ')'	{
                                                if(Lookup($3->varname)!=NULL){
                                                        yyerror("Function name already declared");
                                                        exit(1);}
                                                Install($3->varname, NULL, 1, 1,$5, getFlabel()); $3->left = $1;  $$ = $3;
						ploc=-3; lloc=0; Lhead=NULL;
						 }



	| ID '[' NUM ']'		{ 
						if(Lookup($1->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install($1->varname, NULL,$3->val, 1, NULL, NULL); $$ = $1;
						address = address + ($3->val-1); }
        | ID '[' NUM ']''['NUM']' 	{
						if(Lookup($1->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install($1->varname, NULL,$3->val,$6->val, NULL, NULL); $$ = $1;
			                        address = address + (($3->val*$6->val)-1); }

	| ID				{
						 if(Lookup($1->varname) != NULL){
							yyerror("Variable name already declared");
							exit(1);}	
						Install($1->varname, NULL,1, 1, NULL, NULL); $$ = $1; }
	
	| ID '(' ParamList ')'		{
						if(Lookup($1->varname)!=NULL){
							yyerror("Function name already declared");
							exit(1);}
						Install($1->varname, NULL, 1, 1,$3, getFlabel()); $$ = $1;
						ploc=-3; lloc=0; Lhead=NULL;
					}
					
	;


FdefBlock	: FdefBlock Fdef				{ $$ = createTree(NULL,FnBlock, NULL,FnBlock, NULL, $1,NULL, $2);}
	  	| Fdef						{ $$ = $1; }
;
Fdef 	: Type ID '(' ParamList ')' '{' LdeclBlock Body '}'	{ checkvalid($1, $4, Lookup($2->varname)); 
      								  ploc=-3; lloc=0; 
								  struct tnode *temp = $8->left;
								  $8->left = NULL;
								  $$ = createTree( NULL, NULL, $2->varname, FnNode, Lookup($2->varname), temp, NULL, $8);
								  $$->Lentry = Lhead;
								  Lhead = NULL;
								}
      ;

ParamList : ParamList',' Param 		{ $3->next = $1; $$ = $3; Linstall($3->name, $3->type, ploc--); }
	  | Param			{ $$ = $1; Linstall($1->name, $1->type, ploc--); }
	  | 				{ $$ = NULL; }
	  ;

Param : Type ID				{ $$ = Pinstall($2->varname, $1, NULL); }
      ;

Body : BEG Stlist Retstmt END		{ $3->left=$2; $$ = $3; }
     ;

Retstmt : RET E ';'			{ $$ = createTree(NULL, RetNode, NULL, RetNode, NULL, NULL, NULL, $2); }
MainBlock : INT MAIN '(' ')'  '{'LdeclBlock Body '}'		{ 	ploc=-3; lloc=0;
	  								struct tnode* temp = $7->left;
									$7->left = NULL;
	  								$$ = createTree(NULL, NULL, "main", MnNode, NULL, temp, NULL,$7);
									$$->Lentry = Lhead;
									Lhead = NULL; }
	  ;

LdeclBlock : DECL LDecList ENDDECL	{}
	   | DECL ENDDECL		{}
	;	

LDecList : LDecList LDecl		{}
	 | LDecl 			{}
	 ;

LDecl    : Type IdList ';'			{	struct Lsymbol *Ltemp = Lhead;
                                                while(Ltemp != NULL) {
                                                        Ltemp->type = $1;
                                                        Ltemp = Ltemp->next;}
                                        }
	 ;

IdList : IdList',' ID			{ Linstall($3->varname, NULL, ++lloc); }
       | ID				{ Linstall($1->varname, NULL, ++lloc); }
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
     	| OutputStmt';'    {$$ = $1; }
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
  | ID		{ 
		  if(Llookup($1->varname)==NULL){
			if(Lookup($1->varname) == NULL){
	                        yyerror("Variable not declared\n");
        	                exit(1); }
			$1->type = Lookup($1->varname)->type;
                        $1->Gentry = Lookup($1->varname);
			$1->Lentry = NULL;
                        $$ = $1; }
		  else{
			$1->type = Llookup($1->varname)->type;
			$1->Gentry = NULL;
			$1->Lentry = Llookup($1->varname);
			$$ = $1;
		   }
		}
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
  | ID '(' ')' 		{
				if(Lookup($1->varname) == NULL){
                                        yyerror("Function not declared before calling \n");
                                        exit(1);
                                }
				$1->nodetype = FnCall;
				$1->Gentry = Lookup($1->varname);
				$1->type = $1->Gentry->type;
				$1->left = NULL;
				$$ = $1;
}

  | ID '(' ArgList ')' 		{ 
				if(Lookup($1->varname) == NULL){
					yyerror("Function not declared before calling \n");
					exit(1);
				}	
				$1->nodetype = FnCall;
				$1->Gentry = Lookup($1->varname);
				$1->type = $1->Gentry->type;
				$1->middle = $3;
				$$ = $1;
				}
  ;

ArgList : ArgList',' E		{ $3->middle = $1; $$=$3;}
	| E			{ $$=$1; }

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

