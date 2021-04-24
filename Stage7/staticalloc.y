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
#define FieldNode 18
#define ClNode 51
#define ClBlock 52
#define SelfNode 53
#define SelfFnNode 54
#define MethodCall 55
#define Cobj 56
#define NewNode 57
#define MethodNode 58
#define MethodBlock 59

int yylex(void);
FILE *input_file;
struct tnode* end_node;
int ploc=-3;
int lloc=0;
int size=0;
int FieldNo=0;
struct Classtable *Cptr = NULL;
%}

%union{
	struct Typetable *Tentry;
	struct tnode *no;
	struct Paramstruct *np;
	struct Fieldlist *fl;
	struct Typeholder *th
}


%type <no> E PLUS MINUS MUL DIV Stmt Stlist InputStmt OutputStmt AsgStmt ID NUM Ifstmt NE EQU LT LTE GT GTE Whilestmt GidList FdefBlock Fdef Body MainBlock ArgList Retstmt IdList LDecl Field LIT INIT ALLOC FREE MethodDefns Cname ClassDef ClassDefList Method ClassDefBlock
%type <np> ParamList Param
%type <Tentry> TypeName
%type <th> Type
%type <fl> FieldDecl FieldDeclList
%token WRITE READ EQ PLUS MINUS MUL DIV ID NUM END BEG IF ENDIF Else then NE EQU LT LTE GT GTE ELSE THEN WHILE ENDWHILE DO BREAK CONTINUE INT STR NUL VOID DECL ENDDECL MAIN RET TYPE ENDTYPE LIT INIT ALLOC FREE NEW CLASS ENDCLASS SELF 
%left PLUS MINUS
%left MUL DIV

%%

start	: TypeDefBlock ClassDefBlock GdeclBlock FdefBlock MainBlock 	{
                                                printf("Completed\n");
                                                FILE *fptr = fopen("out.xsm", "w");
						//printtable();
                                                writeheader(fptr);
						codeGen($2, fptr);
						codeGen($4, fptr);
                                        	codeGen($5,fptr);
 //                                               writefooter(fptr);
                                                exit(1);
                                        }
	| TypeDefBlock ClassDefBlock  GdeclBlock MainBlock {
						printf("Completed here\n");
						FILE *fptr = fopen("out.xsm", "w");
        //                                        printtable();
                                                writeheader(fptr);
						codeGen($2, fptr);
						codeGen($4, fptr);
 //                                               writefooter(fptr);
                                                exit(1);
					
	}
	| ClassDefBlock GdeclBlock MainBlock {
						printf("Completed here\n");
                                                FILE *fptr = fopen("out.xsm", "w");
        //                                        printtable();
                                                writeheader(fptr);
                                                codeGen($1, fptr);
                                                codeGen($3, fptr);
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



ClassDefBlock : CLASS ClassDefList ENDCLASS	{ printclasstable(); $$=$2; }
	      | CLASS ENDCLASS			{  $$ = NULL;}
;
ClassDefList	: ClassDefList	ClassDef	{ $$ = createTree(NULL, NULL, NULL, ClBlock,NULL, $1, NULL, $2); }
	        | ClassDef			{ $$ = $1; }
		;


ClassDef	: Cname '{' DECL Fieldlists MethodDecl ENDDECL MethodDefns '}' { CFindex = 0; CMindex = 0;
					   	          			$$ = createTree( NULL, NULL, $1->varname, ClNode, NULL , NULL, NULL, $7);
										Cptr = NULL;
										}
	        ;

Cname		: ID	{ Cptr = CInstall($1->varname, NULL); $$=$1;}
       		;

Fieldlists	: Fieldlists FId {}
	        | 
	   	;

FId		: TypeName ID ';'	{ Class_Finstall(Cptr, $1, $2->varname); }
     		;

MethodDecl	: MethodDecl MDecl	{}
	   	| MDecl			{}
		;

MDecl		: TypeName ID '(' ParamList ')' ';' { if(CMLookup(Cptr, $2->varname)!=NULL){
       							yyerror("Method Aleady declared");
							exit(1);		
						}
						ploc = -3; lloc = 0; Lhead=NULL;
						Class_Minstall(Cptr, $2->varname, TLookup($1), $4);}
       		;

MethodDefns	: MethodDefns Fdef		{  struct Memberfunclist *Mtemp = CMLookup(Cptr, $2->varname);  $2->nodetype = MethodNode; $2->val = Mtemp->Flabel; $$ = createTree(NULL,FnBlock, NULL,MethodBlock, NULL, $1,NULL, $2); }
	    	| Fdef				{ struct Memberfunclist *Mtemp = CMLookup(Cptr, $1->varname);  $1->nodetype = MethodNode; $1->val = Mtemp->Flabel; $$ = $1; }
		;



TypeDefBlock : TYPE TypeDefList ENDTYPE {struct Typetable *temp = Thead;
	     
     						while(temp!=NULL){		// Check if all members have types that exists
							struct Fieldlist *Ftemp = temp->fields;
							while(Ftemp !=NULL){
								struct Typetable *tttemp = TLookup(Ftemp->temp_type);
								if(tttemp == NULL){
									yyerror("Type of member not defined");
								}
								Ftemp->type = tttemp;
								Ftemp = Ftemp->next;}
							
							temp = temp->next;}}
	     | TYPE ENDTYPE {}
	      ;

TypeDefList : TypeDefList TypeDef | TypeDef {}
	     ;

TypeDef : ID '{' FieldDeclList '}'	{ 
					Tinstall($1->varname, size, $3); 
					size = 0;
					Findex=0;
}
	 ;

FieldDeclList : FieldDeclList FieldDecl	{ $2->next = $1;
	      				  $$ = $2; FieldNo++;if(FieldNo>=8){
							yyerror("Number of fields cannot exceed 8\n");
							exit(1);
}}
	      | FieldDecl	{  FieldNo = 0;$$=$1; }
	      ;

FieldDecl     :  TypeName ID ';' { 

				size=size+1;
				$$ = Finstall($2->varname, $1); }
	      ;

TypeName      : INT { $$ = "INT"; }
	      | STR { $$ = "STR"; }
	      | VOID { $$ = "VOID"; }
	      | ID  {  $$ = $1->varname; }
			//struct Typetable *temp = TLookup($1->varname);
			//if(temp==NULL){
		//		yyerror("Type not defined");
	//			exit(1);}
//			$$ = TLookup($1->varname); }
	      ;






GdeclBlock : DECL GdeclList ENDDECL | DECL ENDDECL {}
	     ;

GdeclList : GdeclList Gdecl | Gdecl {}
	 ;

Gdecl : Type GidList ';' 		{ 
     						while($2 != NULL) {
			     				struct Gsymbol* temp = Lookup($2->varname);
							temp->type = $1->Ttype;
							temp->Ctype = $1->Ctype;
							$2 = $2->left;}
					}
				
     ;


Type : INT  				{ $$->Ttype = TLookup("INT"); $$->Ctype = NULL; }
     | STR  				{ $$->Ttype = TLookup("STR");$$->Ctype = NULL ;}
     | VOID				{ $$->Ttype = TLookup("VOID");$$->Ctype = NULL; }
     | ID				{ struct Typetable *Ttemp = TLookup($1->varname);
					  if(Ttemp == NULL){
						struct Classtable *Ctemp = CLookup($1->varname);
						$$->Ctype = Ctemp;
						$$->Ttype = NULL;
					  }
					  else{
						$$->Ttype = Ttemp;
						$$->Ctype = NULL;
						}
						}
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
		|						{} 
;
Fdef 	: TypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'	{ checkvalid(TLookup($1), $4, $2->varname, Cptr); 
      								  ploc=-3; lloc=0; 
								  struct tnode *temp = $8->left;
								  $8->left = NULL;
								  $$ = createTree( NULL, NULL, $2->varname, FnNode, Lookup($2->varname), temp, NULL, $8);
								  $$->Lentry = Lhead;
								  Lhead = NULL;
								}
      ;

ParamList : ParamList',' Param 		{ 	Pcheck($1, $3);
						$3->next = $1; $$ = $3; Linstall($3->name, $3->type, ploc--); }
	  | Param			{ 
					  $$ = $1; Linstall($1->name, $1->type, ploc--); }
	  | 				{ $$ = NULL; }
	  ;

Param : TypeName ID				{ $$ = Pinstall($2->varname, TLookup($1), NULL); }
      ;

Body : BEG Stlist Retstmt END		{ $3->left=$2; $$ = $3; }
     | BEG Retstmt END			{ $2->left = NULL; $$ = $2; }
     ;

Retstmt : RET E ';'			{ $$ = createTree(NULL, RetNode, NULL, RetNode, NULL, NULL, NULL, $2); }
MainBlock : INT MAIN '(' ')'  '{'LdeclBlock Body '}'		{ 	ploc=-3; lloc=0;
	  								struct tnode* temp = $7->left;
									$7->left = NULL;
	  								$$ = createTree(NULL, NULL, "main", MnNode, NULL, temp, NULL,$7);
									$$->Lentry = Lhead;
									Lhead = NULL; }
	  ;

LdeclBlock : DECL LDecList ENDDECL	{	if (Cptr != NULL){
	   						Linstall("self", TLookup("VOID"), ploc--);
						}
					}
	   | DECL ENDDECL		{
						if (Cptr != NULL){
                                               	 	Linstall("self", TLookup("VOID"), ploc--);
                                                }

						}
	   |				{ if (Cptr != NULL){
                                                        Linstall("self", TLookup("VOID"), ploc--);
                                                }
					}
	;	

LDecList : LDecList LDecl		{}
	 | LDecl 			{}
	 ;

LDecl    : TypeName IdList ';'			{	struct tnode* ttemp = $2;
                                                while(ttemp != NULL) {
							struct Lsymbol* Ltemp = Llookup(ttemp->varname);
							if(Ltemp->binding>0){
                                                        Ltemp->type = TLookup($1);}
                                                        ttemp=ttemp->left;}
                                        }
	 ;

IdList : IdList',' ID			{ if(Llookup($3->varname)!=NULL){
       						yyerror("Local variable already declared");
						exit(1);}						
					  Linstall($3->varname, NULL, ++lloc); $3->left = $1; $$=$3; }
       | ID				{ if(Llookup($1->varname)!=NULL){
                                                yyerror("Local variable already declared");
                                                exit(1);} 
					  Linstall($1->varname, NULL, ++lloc); $$=$1; }
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
	| E EQ ALLOC ';'	{ $$ = createAllocNode($1); }
	| E EQ INIT ';'	{ $$ = createInitNode($1); }
	| FREE '(' E ')' ';' { $$ = createFreeNode($1); }
	| E EQ NEW '(' ID ')' ';' { $1->nodetype = Cobj; $$ = createNewNode($1, $5->varname);	}
;

InputStmt : READ '(' E ')' { $$ =createIONode(-1,"Read",$3);}
;

OutputStmt : WRITE '(' E ')' { $$ = createIONode(-2,"Write",$3); }
	   ;


AsgStmt : E EQ E  { $$ = createEQNode($1, $3); }
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
			struct Lsymbol* Ltemp = Llookup($1->varname);
		
			$1->type = Ltemp->type;
			$1->Gentry = NULL;
			$1->Lentry = Ltemp;
		
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
  | LIT 	{ $$ = $1; }
  | NUL		{ $$ = createTree(0, TLookup("VOID"), NULL, 0, NULL, NULL, NULL, NULL); }
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
				checkvalidfncall($1->Gentry, $3);
				$1->type = $1->Gentry->type;
				$1->middle = $3;
				$$ = $1;
				}
  | Field 			{ $$ = $1; }
  | Method 			{ $$ = $1; }
  ;

ArgList : ArgList',' E		{ $3->middle = $1; $$=$3;}
	| E			{ $$=$1; }

        ;

Method : SELF '.' ID '(' ArgList ')' {
       					if(Cptr == NULL){
                                        yyerror("Self cannot be used outside a class");
                                        exit(1);}
					
	                                struct Memberfunclist * Mtemp = CMLookup(Cptr, $3->varname);
	                                if(Mtemp == NULL){
                	                                yyerror("Function not a member function of the class \n");
                        	                        exit(1);
                                	        }
					$3->middle = $5;
					$3->val = Mtemp->Flabel;
					$3->nodetype = MethodCall;
        	                        $$ = createTree(NULL, NULL, "self", SelfFnNode, NULL, NULL, NULL, $3);   
					$$->Lentry = Llookup("self");
                                        	$$->type = Mtemp->type;
					
	                                }
	| SELF '.' ID '(' ')' {
					if(Cptr == NULL){
                                        yyerror("Self cannot be used outside a class");
                                        exit(1);}
					struct Memberfunclist * Mtemp = CMLookup(Cptr, $3->varname);
                                        if(Mtemp == NULL){
                                                        yyerror("Function not a member function of the class \n");
                                                        exit(1);
                                                }
					$3->middle = NULL;
					$3->val = Mtemp->Flabel;
					$3->nodetype = MethodCall;
                                        $$ = createTree(NULL, NULL, "self", SelfFnNode, NULL, NULL, NULL, $3);
                                        $$->Lentry = Llookup("self");
					
                                                $$->type = Mtemp->type;


				}
	| Field '.' ID '(' ArgList ')' {	if($1->nodetype = FieldNode){
							if(Cptr == NULL){
							$1->nodetype = MethodCall;}
							else{
							$1->nodetype = SelfFnNode;
							}
						}
						struct tnode* temp = $1;
                                                        while(temp->right!=NULL){
                                                                temp = temp->right;}
						temp->right = $3;
					if(temp->Ctype == NULL){
						yyerror("Variable not a class object\n");
					}
					struct Memberfunclist *Mtemp = CMLookup(temp->Ctype, $3->varname);
					if(Mtemp == NULL){

						yyerror("Method not a member of class\n");
						exit(1);
					}
					$1->type = Mtemp->type;
					$3->middle = $5;
					$3->val = Mtemp->Flabel;
					$3->nodetype = MethodCall;
					$$ = $1;
					}
	
	| ID '.' ID '(' ArgList ')' { 
					$1->right = $3; 
					struct Gsymbol *Gtemp = Lookup($1->varname);
					if(Gtemp == NULL){
						yyerror("Variable not declared \n");
						exit(1);
					}
					$1->type = Gtemp->type;
					$1->Ctype = Gtemp->Ctype;
					$1->Gentry = Gtemp;
					$1->Lentry = NULL;
	
					struct Memberfunclist *Mtemp = CMLookup($1->Ctype, $3->varname);
					if(Mtemp == NULL){
						yyerror("Method not a member of class\n");
						exit(1);
					}
					$1->type = Mtemp->type;
					$1->nodetype = MethodCall;
				
					$3->middle = $5;
					$3->val = Mtemp->Flabel;
					$1->right = $3;
					$3->nodetype = MethodCall;
					$$ = $1;
					}
	| ID '.' ID '(' ')' {
					$1->right = $3;
                                        struct Gsymbol *Gtemp = Lookup($1->varname);
                                        if(Gtemp == NULL){
                                                yyerror("Variable not declared \n");
                                                exit(1);
                                        }
                                        $1->type = Gtemp->type;
                                        $1->Ctype = Gtemp->Ctype;
                                        $1->Gentry = Gtemp;
                                        $1->Lentry = NULL;

                                        struct Memberfunclist *Mtemp = CMLookup($1->Ctype, $3->varname);
                                        if(Mtemp == NULL){
                                                yyerror("Method not a member of class\n");
                                                exit(1);
                                        }
                                        $1->type = Mtemp->type;
                                        $1->nodetype = MethodCall;
					$3->middle = NULL;
					$3->val = Mtemp->Flabel;
					$1->right = $3;
					$3->nodetype = MethodCall;
                                        $$ = $1;

				}
;
Field 	: Field '.' ID	{ struct tnode* temp = $1; 
							while(temp->right!=NULL){
 								temp = temp->right;}
							struct Fieldlist *Ftemp = FLookup(temp->type, temp->Ctype, $3->varname);
							if(Ftemp == NULL){
								yyerror("Field is not a member of the datatype");
								exit(1);}
							$3->type = Ftemp->type;
							$3->val = Ftemp->fieldIndex;
							$1->type = Ftemp->type;
							temp->right = $3;
							 $$ =  $1;}
	| ID  '.' ID 	{ $1->right = $3; 
					
				struct Gsymbol *Gtemp = Lookup($1->varname);
				struct Lsymbol *Ltemp = Llookup($1->varname);
				if(Ltemp==NULL){
					if(Gtemp==NULL){
		                                yyerror("Variable not declared\n");
	        	                        exit(1); }
					$1->type = Gtemp->type;
					$1->Ctype = Gtemp->Ctype;
					$1->Gentry= Gtemp;
					$1->Lentry= NULL;}	
				else{
	                        struct Lsymbol* Ltemp = Llookup($1->varname);

	                        $1->type = Ltemp->type;
				$1->Ctype = NULL;
	                        $1->Gentry = NULL;
	                        $1->Lentry = Ltemp;
				}	

				struct Fieldlist *Ftemp = FLookup($1->type,$1->Ctype, $3->varname);
				if(Ftemp==NULL){
					yyerror("Field is not a member of the datatype\n");
					exit(1);}
				$1->type = Ftemp->type;
				$3->type = Ftemp->type;
				$3->Ctype = Ftemp->Ctype;
				$3->val = Ftemp->fieldIndex;
				$1->nodetype = FieldNode;
				$$ = $1; }
	| SELF '.' ID	{
				if(Cptr == NULL){
					yyerror("Self cannot be used outside a class");
					exit(1);}
				$$ = createTree(NULL, NULL, "self", SelfNode, NULL, NULL, NULL, $3);
				$$->Lentry = Llookup("self");
				struct Fieldlist * Ftemp = CFLookup(Cptr, $3->varname);
				if(Ftemp == NULL){
						yyerror("Variable not a memberfield\n");
						exit(1);
					}
					$$->type = Ftemp->type;
					$3->type = Ftemp->type;
					$3->Ctype = Ftemp->Ctype;
					$3->val = Ftemp->fieldIndex;
				$$->val = Ftemp->fieldIndex;
						
			}
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
	TypeTableCreate();
        yyparse();

}

