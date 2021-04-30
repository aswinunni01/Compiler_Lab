#include<stdlib.h>
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
#define AllocNode 19
#define FreeNode 20
#define InitNode 50
#define ClNode 51
#define ClBlock 52
#define SelfNode 53
#define SelfFnNode 54
#define MethodCall 55
#define Cobj 56
#define NewNode 57
#define MethodNode 58
#define MethodBlock 59
#define ClassEQNode 60
#define SelfMethodCall 61



int ifcount=0;
int count=0;
int label;
int varstart = 4096;
int address = 4095;
int flabel = 0;
int Findex = 0;
int Cindex = 0;		// Index of class
int CFindex = 0;	// Index of class fields
int CMindex = 0;	// Index of class method
struct Gsymbol *st = NULL;
struct Lsymbol *Lhead = NULL;
struct stack* Breakhead=NULL;
struct stack* Continuehead=NULL;
struct Fieldlist * Fhead = NULL;
struct Typetable * Thead = NULL;
struct Classtable * Chead = NULL;

struct tnode* createTree(int val, struct Typetable  *type, char* c,int nodetype, struct Gsymbol *Gentry, struct tnode* l,struct tnode*m, struct tnode* r){

	struct tnode* temp;
	temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = val;
	temp->type = type;
	if(c!=NULL)
		temp->varname=strdup(c);
	else
		temp->varname = NULL;
	temp->nodetype = nodetype;
	temp->Gentry = Gentry;
	temp->Lentry = NULL;
	temp->middle = m;
	temp->left = l;
	temp->right = r;
	return temp;
}

struct tnode* createNewNode(struct tnode*t, char *cname){
	struct Classtable * Ctemp = CLookup(cname);
	if(Ctemp == NULL){
		yyerror("Class not defined");
		exit(1);
	}
	if(t->nodetype !=Cobj){
		yyerror("Only Class variables can be allocated\n");
		exit(1);
		}
	struct tnode* temp = createTree(NULL, NULL, "New", NewNode, NULL, NULL, t, NULL);
	temp->Ctype = Ctemp;
	temp->val = 4096 + (Ctemp->Class_index *8); 
	return temp;


}

struct tnode* createAllocNode(struct tnode* t){
	if(t->nodetype != 4){
		yyerror("Only variables can be allocated\n");
		exit(1);
	}
	return createTree(NULL, TLookup("INT"), "Alloc", AllocNode, NULL, NULL, t, NULL);
}

struct tnode* createDelNode(struct tnode* t){
	

}


struct tnode* createFreeNode(struct tnode* t){
        return createTree(NULL, TLookup("INT"), "Free", FreeNode, NULL, NULL, t, NULL);
}


struct tnode* createInitNode(struct tnode* t){
        return createTree(NULL, TLookup("INT"), "Heapset", InitNode, NULL, NULL, t, NULL);
}

int validClassEQ(struct tnode*l, struct tnode*r){
	struct Classtable *parenttype = l->Ctype;
	struct Classtable *temptype = r->Ctype;
	while(temptype != NULL){
		if(parenttype == temptype)
			return 1;
		temptype = temptype->Parentptr;
	}
	return 0;
}
struct tnode* createEQNode(struct tnode* l, struct tnode*r){
	if(l->Ctype!=NULL && r->Ctype!=NULL){
		if(validClassEQ(l,r) == 1)
			return createTree(NULL, 1, "EQU", ClassEQNode, NULL, l, NULL, r);
		else{
			yyerror("Not a valid class assignment");
			exit(1);
		}
	}
	else{
	if(l->type != r->type){
		if(l->type == TLookup("VOID") | r->type == TLookup("VOID"))
			 return createTree(NULL, 1, "EQU", 1, NULL, l, NULL, r);
		printf("%s, %s", l->type->name, r->type->name);
		yyerror("Equation LHS and RHS donot match types");
		exit(1);
	}
	return createTree(NULL, 1, "EQU", 1, NULL, l, NULL, r);}
}
struct tnode* createIfNode(struct tnode* l, struct tnode* m, struct tnode* r){
	struct Typetable *temp;
       temp	= TLookup("BOOL");

	if(l->type == temp)
		return createTree(NULL, NULL, NULL, 5,NULL, l, m, r);
	else{
		yyerror("Type mismatch");
		exit(1);
	}
}

struct tnode* createWhileNode(struct tnode* l, struct tnode* r){
        struct Typetable *temp;
       temp	= TLookup("BOOL");
	if(l->type == temp)
		return createTree(NULL, NULL, NULL,6,NULL, l, NULL, r); 
	else{
		yyerror("Type mismatch");
		exit(1);
	}
}

struct tnode* createOpNode(char *c, int type, struct tnode* l, struct tnode* r){
        struct Typetable *temp_int, *temp_void;
      temp_int	= TLookup("INT");
      temp_void = TLookup("VOID");
	if(((l->type == temp_int ) && (r->type == temp_int)) || (r->type == temp_void)){
		if(type == intType)
			return createTree(NULL, TLookup("INT"), c, 1, NULL, l, NULL, r);
		else	
			return createTree(NULL, TLookup("BOOL"), c, 1, NULL, l, NULL, r);
	}
	else{
		yyerror("Cannot operate on boolType objects");
		exit(1);
	}
}

struct tnode* createVarNode(char *c){
	struct tnode* temp;
	struct Typetable *temp_int;
	temp_int = TLookup("INT");	
	temp =  createTree(NULL, temp_int, c, 4, NULL, NULL, NULL, NULL);
	return temp;
}

struct tnode* createIONode(int val, char *c, struct tnode* r){
        struct Typetable *temp = TLookup("BOOL");
	if(r->type == temp||r->type == NULL){
		printf("%d",r->type);
		yyerror("Invalid type for read/write operation\n");
		exit(1);
	}
	
	else{
		return  createTree(val,NULL, c, 2, NULL, NULL, NULL, r);
	}
}

int getReg(){
	count ++;
	return count-1;
}

void freeReg(){
	count --;
}

void freeAllReg(){
        count =0;

}

int getLabel(){

        return label++;
}

void addBreakLabel(int l){

	struct stack* temp;
	temp = (struct stack*)malloc(sizeof(struct stack));
	temp->labelno = l;
	temp->next = Breakhead;
	Breakhead = temp;

}

int getBreakLabel(){
	if(Breakhead==NULL)
		return -1;
	int l= Breakhead->labelno;
	Breakhead = Breakhead->next;
	return l;
}
void addContinueLabel(int l){

        struct stack* temp;
        temp = (struct stack*)malloc(sizeof(struct stack));
        temp->labelno = l;
        temp->next = Continuehead;
        Continuehead = temp;

}

int getContinueLabel(){
	if(Continuehead==NULL)
		return -1;
        int l= Continuehead->labelno;
        Continuehead = Continuehead->next;
        return l;
}

void writeheader(FILE *fptr){

        fprintf(fptr,"0\n2056\n0\n0\n0\n0\n0\n0\nBRKP\n");
        struct Classtable *temp = Chead;
        int stkloc = 4096;
        while(temp!=NULL){
                int i = 0;
                struct Memberfunclist *Mtemp = temp->Vfuncptr;
                while(i<8){
                        if(Mtemp != NULL){
                                fprintf(fptr, "MOV [%d] , F%d\n", stkloc, Mtemp->Flabel);	
                        Mtemp = Mtemp->next;
			}        /* MOV [4096], F1 */
                        else{
                                fprintf(fptr, "MOV [%d], -1\n", stkloc);                          /* MOV [4097], -1  -- If less than 8 member functions*/
                        }
			stkloc++;
                        i++;
                }
                temp = temp->next;
        }






}

void writeheader2(FILE *fptr){
	fprintf(fptr, "MOV SP, %d\nMOV BP, 4096\nPUSH R0\nCALL MAIN\nINT 10\n", address+1);
}

void writefooter(FILE *fptr){
	fprintf(fptr, "INT 10");
}

void helperfunction(struct tnode*t, FILE *fptr){
	makepgrm(t,fptr);
	writeheader(fptr);

}

void  makepgrm(struct tnode *t, FILE *fptr){
	if(t==NULL)
		return;
	makepgrm(t->left,fptr);
	makepgrm(t->right,fptr);

 if(t->type == 0){
		int d = getReg();
		fprintf(fptr, "MOV R%d, %d\n",d,t->val);

	}

	else 	if(t->type == 1){
		if(strcmp(t->varname,"EQU")==0){
			int d = getReg();
			fprintf(fptr, "MOV R%d, %d\n",d, *t->left->varname+4096-'a');
			fprintf(fptr, "MOV [R%d], R%d\n",d,count-2);
			freeReg();
		}
		else{
		fprintf(fptr, "%s R%d, R%d \n", t->varname, count-2, count-1);
		}
		freeReg();
	}
	else if(t->type == 4){
		 int d=getReg();
		 fprintf(fptr, "MOV R%d, [%d]\n",d,t->Gentry->binding);	
		 freeReg();
	}
	else if(t->type ==  2){
		int d = getReg();
	//	if(strcmp(t->varname,"Read")==0)
			fprintf(fptr, "MOV SP, 4121\n");
		fprintf(fptr, "MOV R%d, \"%s\"\n",d, t->varname);
		fprintf(fptr, "PUSH R%d\n",d);
		fprintf(fptr, "MOV R%d, %d\n",d,t->val);
		fprintf(fptr, "PUSH R%d\n",d);

                if(strcmp(t->varname,"Read")==0){
	       		 fprintf(fptr, "MOV R%d,%d\n",d,4096+*t->right->varname-'a');
			 fprintf(fptr, "PUSH R%d\n",d);
		}
		else{

			fprintf(fptr, "MOV R%d, %d\n",d+1, 4096+*t->right->varname-'a');
			fprintf(fptr, "MOV R%d, [R%d]\n",d,d+1);
			fprintf(fptr, "PUSH R%d\n",d);

		}
		fprintf(fptr, "PUSH R%d\n",d);
		fprintf(fptr, "PUSH R%d\n",d);
		fprintf(fptr, "CALL 0\n");
		fprintf(fptr, "POP R%d\n",d);
		fprintf(fptr, "POP R%d\n",d);
		fprintf(fptr, "POP R%d\n",d);
		fprintf(fptr, "POP R%d\n",d);
		fprintf(fptr, "POP R%d\n",d);
		freeReg();
	}
	        else if (t->type == 10){
                int     d= getReg();
                fprintf(fptr, "MOV R%d, \"Exit\"\n", d);
                fprintf(fptr, "PUSH R%d\n",d);
                fprintf(fptr, "PUSH R%d\n",d);
                fprintf(fptr, "PUSH R%d\n",d);
                fprintf(fptr, "PUSH R%d\n",d);
                fprintf(fptr, "PUSH R%d\n",d);
                fprintf(fptr, "CALL 0\n",d);
                freeReg();


        }

 else if(t->type == 6){
	if(strcmp(t->varname, "Then") == 0){
		fprintf(fptr, "JMP L%d\n",(2*ifcount)-1);

	}
	else{
		fprintf(fptr, "L%d:\n",(2*ifcount)-1);
		ifcount --;
	}

 }
	else if(t->type == 7){
		if(strcmp(t->varname,"then") == 0){
			fprintf(fptr,"JZ R%d, L%d\n",count-1,2*ifcount);
			ifcount++;
		}
		else{
			fprintf(fptr,"L%d:\n",2*(ifcount-1));
		}
	}



}

int  codeGen(struct tnode *t, FILE *fptr){
	if(t==NULL){
		return -1;
	}
	int reg_1, reg_2;
	switch((t->nodetype)){

		case 0:{
			if(t->type == TLookup("INT") || t->type == TLookup("VOID")){
                        reg_1 = getReg();
                        fprintf(fptr, "MOV R%d, %d\n", reg_1, t->val);
                        return reg_1;
                        }
                        else{
                        reg_1 = getReg();
                        fprintf(fptr, "MOV R%d, %s\n", reg_1, t->varname);
                        return reg_1;
                        }
		       }

		case 4:
			reg_1 = getReg();
			fprintf(fptr,"MOV R%d, [R%d]\n", reg_1,getLoc(t,fptr));
			return reg_1;
		case FieldNode: {
					reg_1 = getLoc(t,fptr);
					fprintf(fptr, "MOV R%d, [R%d]\n",reg_1, reg_1);
					return reg_1;
				}
		case AllocNode: {	
					int n_reg = -1;
	        	                for(int i=0; i<count; i++){
        	        	                fprintf(fptr, "PUSH R%d\n",i);
		                                n_reg++;
                		        }
					reg_1 = getReg();
					fprintf(fptr, "MOV R%d, \"Alloc\"\n", reg_1);
					fprintf(fptr, "PUSH R%d\n", reg_1);
					fprintf(fptr, "MOV R%d, %d\n", reg_1, 8);
					fprintf(fptr, "PUSH R%d\n",reg_1);
					fprintf(fptr, "PUSH R%d\n",reg_1);				
					fprintf(fptr, "PUSH R%d\n",reg_1);				
					fprintf(fptr, "PUSH R%d\n",reg_1);				
					fprintf(fptr, "CALL 0\n");
					fprintf(fptr, "POP R%d\n",reg_1	);
					reg_2 = getReg();
					fprintf(fptr, "POP R%d\n",reg_2);
                                        fprintf(fptr, "POP R%d\n",reg_2);
                                        fprintf(fptr, "POP R%d\n",reg_2);
                                        fprintf(fptr, "POP R%d\n",reg_2);
					fprintf(fptr, "MOV R%d, %d\n",reg_2, -1);
                                        fprintf(fptr, "EQ R%d, R%d\n",reg_2, reg_1);
                                        int label_1 = getLabel();
                                        fprintf(fptr, "JZ R%d, L%d\n",reg_2, label_1);
                                        fprintf(fptr, "INT 10\n");
                                        fprintf(fptr, "L%d:\n",label_1);
					freeReg();
					for(int j=n_reg; j>=0; j--){
                		                fprintf(fptr, "POP R%d\n",j);
		                        }

					reg_2 = getLoc(t->middle, fptr);
					fprintf(fptr, "MOV [R%d], R%d\n",reg_2, reg_1);
					freeReg();
					return -1;
				}
		case NewNode: {
				int n_reg = -1;
                                        for(int i=0; i<count; i++){
                                                fprintf(fptr, "PUSH R%d\n",i);
                                                n_reg++;
                                        }
                                        reg_1 = getReg();
                                        fprintf(fptr, "MOV R%d, \"Alloc\"\n", reg_1);
                                        fprintf(fptr, "PUSH R%d\n", reg_1);
                                        fprintf(fptr, "MOV R%d, %d\n", reg_1, 8);
                                        fprintf(fptr, "PUSH R%d\n",reg_1);
                                        fprintf(fptr, "PUSH R%d\n",reg_1);
                                        fprintf(fptr, "PUSH R%d\n",reg_1);
                                        fprintf(fptr, "PUSH R%d\n",reg_1);
                                        fprintf(fptr, "CALL 0\n");
                                        fprintf(fptr, "POP R%d\n",reg_1 );
                                        reg_2 = getReg();
                                        fprintf(fptr, "POP R%d\n",reg_2);
                                        fprintf(fptr, "POP R%d\n",reg_2);
                                        fprintf(fptr, "POP R%d\n",reg_2);
                                        fprintf(fptr, "POP R%d\n",reg_2);
                                        fprintf(fptr, "MOV R%d, %d\n",reg_2, -1);
                                        fprintf(fptr, "EQ R%d, R%d\n",reg_2, reg_1);
                                        int label_1 = getLabel();
                                        fprintf(fptr, "JZ R%d, L%d\n",reg_2, label_1);
                                        fprintf(fptr, "INT 10\n");
                                        fprintf(fptr, "L%d:\n",label_1);
                                        freeReg();
                                        for(int j=n_reg; j>=0; j--){
                                                fprintf(fptr, "POP R%d\n",j);
                                        }

                                        reg_2 = getLoc(t->middle, fptr);
                                        fprintf(fptr, "MOV [R%d], R%d\n",reg_2, reg_1);
					if(strcmp(t->middle->varname, "self") !=0){
					fprintf(fptr, "MOV [%d], %d \n", t->middle->Gentry->vfuncbinding, t->val);}
					else{
					fprintf(fptr, "ADD R%d, 1\n", reg_2);
					fprintf(fptr, "MOV [R%d], %d \n", reg_2, t->val); }
					
                                        freeReg();
                                        return -1;




			      }
		case InitNode: {	
				       int n_reg = -1;
                                        for(int i=0; i<count; i++){
                                                fprintf(fptr, "PUSH R%d\n",i);
                                                n_reg++;
                                        }

			       		reg_1 = getReg();
                                        fprintf(fptr, "MOV R%d, \"Heapset\"\n", reg_1);
                                        fprintf(fptr, "PUSH R%d\n", reg_1);
                                        fprintf(fptr, "MOV R%d, %d\n", reg_1, 8);
                                        fprintf(fptr, "PUSH R%d\n",reg_1);
                                        fprintf(fptr, "PUSH R%d\n",reg_1);
                                        fprintf(fptr, "PUSH R%d\n",reg_1);
                                        fprintf(fptr, "PUSH R%d\n",reg_1);

                                        fprintf(fptr, "CALL 0\n");
                                        fprintf(fptr, "POP R%d\n",reg_1 );
                                        reg_2 = getReg();
                                        fprintf(fptr, "POP R%d\n",reg_2);
                                        fprintf(fptr, "POP R%d\n",reg_2);
                                        fprintf(fptr, "POP R%d\n",reg_2);
                                        fprintf(fptr, "POP R%d\n",reg_2);
					for(int j=n_reg; j>=0; j--){
                                                fprintf(fptr, "POP R%d\n",j);
                                        }

					reg_2 = getLoc(t->middle, fptr);
					fprintf(fptr, "MOV [R%d], R%d\n",reg_2, reg_1);
					freeReg();
                                        return -1;
			       }
		case FreeNode: {
				       int n_reg = -1;
                                        for(int i=0; i<count; i++){
                                                fprintf(fptr, "PUSH R%d\n",i);
                                                n_reg++;
                                        }

					reg_1 = getReg();
					fprintf(fptr, "MOV R%d, \"Free\"\n", reg_1);
					reg_2 = getLoc(t->middle, fptr);
					fprintf(fptr, "MOV R%d, [R%d]\n",reg_1, reg_2);
					fprintf(fptr, "PUSH R%d\n", reg_1);
					fprintf(fptr, "PUSH R%d\n", reg_1);
					fprintf(fptr, "PUSH R%d\n", reg_1);
					fprintf(fptr, "CALL 0\n");
					fprintf(fptr, "POP R%d\n",reg_1);
					fprintf(fptr, "POP R%d\n",reg_1);
					fprintf(fptr, "POP R%d\n",reg_1);
					fprintf(fptr, "POP R%d\n",reg_1);
					fprintf(fptr, "POP R%d\n",reg_1);
					for(int j=n_reg; j>=0; j--){
                                                fprintf(fptr, "POP R%d\n",j);
                                        }

					freeReg();
					return -1;

			       }
		case 2:
			if(strcmp(t->varname,"Read")==0){
                                reg_2 = getLoc(t->right, fptr);
                        }
                        else{
                                reg_2 = codeGen(t->right, fptr);
                        }

			reg_1 = getReg();
			fprintf(fptr, "MOV R%d, \"%s\"\n",reg_1, t->varname);
			fprintf(fptr, "PUSH R%d\n",reg_1);
			fprintf(fptr, "MOV R%d, %d\n",reg_1,t->val);
			fprintf(fptr, "PUSH R%d\n",reg_1);
			if(strcmp(t->varname,"Read")==0){
			    	fprintf(fptr, "MOV R%d, R%d\n",reg_1,reg_2);
				fprintf(fptr, "PUSH R%d\n",reg_1);
				

			}
			else{
				fprintf(fptr, "MOV R%d, R%d\n",reg_1,reg_2);
				fprintf(fptr, "PUSH R%d\n",reg_1);
				
			}
			fprintf(fptr, "PUSH R%d\n",reg_1);
			fprintf(fptr, "PUSH R%d\n",reg_1);
			fprintf(fptr, "CALL 0\n");
			fprintf(fptr, "POP R%d\n",reg_1);
			fprintf(fptr, "POP R%d\n",reg_1);
			fprintf(fptr, "POP R%d\n",reg_1);
			fprintf(fptr, "POP R%d\n",reg_1);
			fprintf(fptr, "POP R%d\n",reg_1);
			freeReg();
			freeReg();
			return -1;

		case 3:
			codeGen(t->left, fptr);
			freeAllReg();
			codeGen(t->right, fptr);
			freeAllReg();
			return -1;

		case 5:{
			int label_1 = getLabel();
			int label_2 = getLabel();
			reg_1 = codeGen(t->left, fptr);
			fprintf(fptr, "JZ R%d, L%d\n",reg_1,label_1);
			freeReg();	//trial
			int tcount;
		        tcount	= count;
			codeGen(t->middle,fptr);
			while(count>tcount){
				freeReg();
			}
			if(t->right==NULL){
				fprintf (fptr, "L%d:\n", label_1);
				fprintf("%d",label_2);
				return -1;
			}
			else{
			fprintf (fptr, "JMP L%d\n", label_2);
			
			fprintf (fptr, "L%d:\n", label_1);
			while(count>tcount){ //trial
                                freeReg();
                        }
			codeGen(t->right,fptr);
			fprintf (fptr, "L%d:\n", label_2);
			}
			return -1;
			}

		case 6: {
			 int label_1 = getLabel();
			 int label_2 = getLabel();
			 addBreakLabel(label_2);
			 addContinueLabel(label_1);
			 fprintf(fptr, "L%d:\n",label_1);
			 reg_1 = codeGen(t->left, fptr);
			 fprintf(fptr,"JZ R%d, L%d\n",reg_1,label_2);
			 codeGen(t->right, fptr);
			 fprintf(fptr, "JMP L%d\n",label_1);
			 fprintf(fptr, "L%d:\n", label_2);
			 return -1;
			}

		case 10:{

			int break_label = getBreakLabel();
			if(break_label!=-1)
				fprintf(fptr, "JMP L%d\n",break_label);
			return -1;
			}

		case 11: {
			int continue_label = getContinueLabel();
			if(continue_label !=-1)
				fprintf(fptr, "JMP L%d\n",continue_label);
			return -1;
			 }

		case arType: {
                        reg_1 = getReg();
			int locReg = getLoc(t, fptr);
			fprintf(fptr,"MOV R%d, [R%d]\n", reg_1 ,locReg);	
			return reg_1;
			     }

		case matType: {
			reg_1 = getReg();
			int locReg = getLoc(t,fptr);
			fprintf(fptr,"MOV R%d, [R%d]\n",reg_1,locReg);
			return reg_1;
			      }
		case MethodBlock: {
			codeGen(t->left, fptr);
			freeAllReg();
			codeGen(t->right, fptr);
			freeAllReg();
			return -1;
				  }
		case FnBlock: {
			codeGen(t->left,fptr);
			freeAllReg();
			codeGen(t->right,fptr);
			freeAllReg();
			return -1;
			      }
		case MethodNode: {
			fprintf(fptr, "F%d:\n",t->val);
                        fprintf(fptr, "PUSH BP\n");
                        fprintf(fptr, "MOV BP, SP\n");
                        struct Lsymbol *Ltemp = t->Lentry;
                        while(Ltemp!=NULL){
                                if(Ltemp->binding>0)
                                        fprintf(fptr, "PUSH R0\n");
                        Ltemp = Ltemp->next;
                        }
                        codeGen(t->left, fptr);
                        freeAllReg();
                        reg_1 = codeGen(t->right, fptr);
                        reg_2 = getReg();
                        fprintf(fptr, "MOV R%d, -2\n", reg_2);
                        fprintf(fptr, "ADD R%d, BP\n", reg_2);
                        fprintf(fptr, "MOV [R%d], R%d\n", reg_2, reg_1);
                        freeReg();
                        Ltemp = t->Lentry;
                        reg_2 = getReg();
                        while(Ltemp!=NULL){
                                if(Ltemp->binding>0)
                                        fprintf(fptr, "POP R%d\n", reg_2);
                                Ltemp = Ltemp->next;
                        }
                        freeReg();

                        fprintf(fptr, "POP BP\n");
                        fprintf(fptr, "RET\n");
                        freeAllReg();
                        return -1;



				}
		case FnNode: {
			fprintf(fptr, "F%d:\n",t->Gentry->flabel);
			fprintf(fptr, "PUSH BP\n");
			fprintf(fptr, "MOV BP, SP\n");
			struct Lsymbol *Ltemp = t->Lentry;
			while(Ltemp!=NULL){
				if(Ltemp->binding>0)
					fprintf(fptr, "PUSH R0\n");
			Ltemp = Ltemp->next;
			}
			codeGen(t->left, fptr);
			freeAllReg();
			reg_1 = codeGen(t->right, fptr);
			reg_2 = getReg();
			fprintf(fptr, "MOV R%d, -2\n", reg_2);
			fprintf(fptr, "ADD R%d, BP\n", reg_2);
			fprintf(fptr, "MOV [R%d], R%d\n", reg_2, reg_1);
			freeReg();
                        Ltemp = t->Lentry;
                        reg_2 = getReg();
                        while(Ltemp!=NULL){
                                if(Ltemp->binding>0)
                                        fprintf(fptr, "POP R%d\n", reg_2);
                                Ltemp = Ltemp->next;
                        }
                        freeReg();

			fprintf(fptr, "POP BP\n");
			fprintf(fptr, "RET\n");
			freeAllReg();
			return -1;
			     }
		case RetNode: {
			reg_1 = codeGen(t->right, fptr);
			return reg_1;
			      }
		case MnNode: {
			fprintf(fptr, "MAIN:\n");
			fprintf(fptr, "PUSH BP\n");
			fprintf(fptr, "MOV BP, SP\n");
			struct Lsymbol *Ltemp = t->Lentry;
			 while(Ltemp!=NULL){
                                if(Ltemp->binding>0)
                                        fprintf(fptr, "PUSH R0\n");
                        Ltemp = Ltemp->next;
                        }
			codeGen(t->left, fptr);
			freeAllReg();
			reg_1 = codeGen(t->right, fptr);
			reg_2 = getReg();
                        fprintf(fptr, "MOV R%d, -2\n", reg_2);
                        fprintf(fptr, "ADD R%d, BP\n", reg_2);
                        fprintf(fptr, "MOV [R%d], R%d\n", reg_2, reg_1);
			freeReg();
			Ltemp = t->Lentry;
		        reg_2 = getReg();
                        while(Ltemp!=NULL){
                                if(Ltemp->binding>0)
                                        fprintf(fptr, "POP R%d\n", reg_2);
                                Ltemp = Ltemp->next;
                        }
                        freeReg();
			fprintf(fptr, "POP BP\n");
			fprintf(fptr, "RET\n");
			freeAllReg();
			return -1;
			     }
		case FnCall: {
			int n_reg = -1;
			for(int i=0; i<count; i++){
				fprintf(fptr, "PUSH R%d\n",i);
				n_reg++;
			}
			struct tnode* temp = t->middle;
			while(temp!=NULL){
				reg_1 = codeGen(temp, fptr);
				fprintf(fptr, "PUSH R%d\n",reg_1);
				freeReg();
				temp = temp->middle;
			}
			fprintf(fptr, "PUSH R0\n"); 	//Empty Space for return value
			fprintf(fptr, "CALL F%d\n", t->Gentry->flabel);
			reg_1 = getReg();
			fprintf(fptr, "POP R%d\n",reg_1);
			reg_2 = getReg();
			temp = t->middle;
                        while(temp!=NULL){
                                fprintf(fptr, "POP R%d\n",reg_2);
                                temp = temp->middle;
                        }
			freeReg();
			for(int j=n_reg; j>=0; j--){
				fprintf(fptr, "POP R%d\n",j);
			}
			return reg_1;
			    }
		
		case ClBlock: {
				codeGen(t->left,fptr);
	                        freeAllReg();
        	                codeGen(t->right,fptr);
                	        freeAllReg();
                        	return -1;
		
		
			      }

		case ClNode: {
				codeGen(t->right, fptr);
				freeAllReg();
				return -1;
			     }
		
		case SelfNode: {
				reg_1 = getLoc(t, fptr);
				fprintf(fptr, "MOV R%d, [R%d]\n", reg_1, reg_1);

				return reg_1;
						
			       }
		case MethodCall:	       
		case SelfFnNode: {		//self.method_name()  - method call node
				int n_reg = -1;
	                        for(int i=0; i<count; i++){
        	                        fprintf(fptr, "PUSH R%d\n",i);
	                                n_reg++;
        	                }
				//PUSH ADDRESS OF SELF
				reg_1 = getLoc(t, fptr);	// Gets BP-k in reg_1
				fprintf(fptr, "MOV R%d, [R%d]\n",reg_1,reg_1);	// reg1 = [BP-k]
				fprintf(fptr, "PUSH R%d\n",reg_1);
				freeReg();
				// PUSH VIRTUAL TABLE POINTER 
				int vfuncbinding = 0;
				if(t->nodetype == MethodCall){
					vfuncbinding = t->Gentry->vfuncbinding;		// if obj.method_name(); or object.field_name.method_name(); get loc of pointer to Virtual Table;
					reg_1 = getReg();
					fprintf(fptr, "MOV R%d, [%d]\n", reg_1, vfuncbinding);	
					fprintf(fptr, "PUSH R%d\n", reg_1);
					freeReg();}
				else{
					
					reg_1 = getLoc(t, fptr);
					fprintf(fptr, "ADD R%d, 1\n", reg_1);
					fprintf(fptr, "MOV R%d, [R%d]\n", reg_1, reg_1);
					fprintf(fptr, "PUSH R%d\n", reg_1);
				}
				while(t->right != NULL){
					t = t->right;}

                	        struct tnode* temp = t->middle;		// Push the other arguments
	                        while(temp!=NULL){
	                                reg_2 = codeGen(temp, fptr);
	                                fprintf(fptr, "PUSH R%d\n",reg_2);
        	                        freeReg();
	                                temp = temp->middle;
        	                }
                	        fprintf(fptr, "PUSH R0\n");     //Empty Space for return value
			
				if(t->nodetype == MethodCall){
				reg_1 = getReg();
				fprintf(fptr, "MOV R%d, [%d]\n",reg_1,  vfuncbinding);
				fprintf(fptr, "ADD R%d, %d\n",reg_1, t->val);
				fprintf(fptr, "MOV R%d, [R%d]\n", reg_1, reg_1);
	                        fprintf(fptr, "CALL R%d\n", reg_1);}
				else{
					fprintf(fptr, "ADD R%d, %d\n", reg_1, t->val);
					fprintf(fptr, "MOV R%d, [R%d]\n", reg_1, reg_1);
					fprintf(fptr, "CALL R%d\n",reg_1);
				}
	                        fprintf(fptr, "POP R%d\n",reg_1);
	                        reg_2 = getReg();
	                        temp = t->middle;
        	                while(temp!=NULL){
	                                fprintf(fptr, "POP R%d\n",reg_2);
	                                temp = temp->middle;
	                        }
				fprintf(fptr, "POP R%d\n",reg_2);	//POP Vfuncptr
				fprintf(fptr, "POP R%d\n", reg_2);	// POP SELF
				freeReg();
	                        for(int j=n_reg; j>=0; j--){
	                                fprintf(fptr, "POP R%d\n",j);
	                        }
	                        return reg_1;
				 }


		case ClassEQNode: {
				fprintf(fptr, "MOV [%d], [%d] \n", t->left->Gentry->binding , t->right->Gentry->binding);
				fprintf(fptr, "MOV [%d], [%d] \n", t->left->Gentry->vfuncbinding, t->right->Gentry->vfuncbinding);
				return -1;
				  }		  
		default:
			if(strcmp(t->varname,"EQU")==0){
				reg_1 = codeGen(t->right, fptr);
				reg_2 = getLoc(t->left, fptr);
				fprintf(fptr, "MOV [R%d], R%d\n",reg_2,reg_1);
				return -1;
			}
			else{
				reg_1 = codeGen(t->left, fptr);
				reg_2 = codeGen(t->right, fptr);
				fprintf(fptr, "%s R%d, R%d \n", t->varname, reg_1, reg_2);
				freeReg();
				return reg_1;
			}
	}
}

int getLoc(struct tnode* t, FILE *fptr){
	if(t->Lentry!=NULL){
		switch(t->nodetype){

			case 4:{
				int loc = t->Lentry->binding;
				int reg = getReg();
				fprintf(fptr, "MOV R%d, BP\n", reg);
				fprintf(fptr, "ADD R%d, %d\n",reg, loc);
				return reg;
			       }
			case FieldNode: {
				int loc = t->Lentry->binding;
				int reg=getReg();
				fprintf(fptr, "MOV R%d, BP\n",reg);
				fprintf(fptr, "ADD R%d, %d\n",reg,loc);
				fprintf(fptr, "MOV R%d, [R%d]\n", reg, reg);
				struct Typetable *Ttemp = t->type;
				t=t->right;
				while(t->right!=NULL){
					fprintf(fptr, "ADD R%d, %d\n",reg,t->val);
					fprintf(fptr, "MOV R%d, [R%d]\n",reg,reg);
					t=t->right;
				}
				fprintf(fptr, "ADD R%d, %d\n",reg,t->val);
				return reg;
					}
			case SelfNode: {
				int loc = t->Lentry->binding;
				int reg = getReg();
				fprintf(fptr, "MOV R%d, BP\n",reg);
				fprintf(fptr, "ADD R%d, %d\n", reg,loc);
				fprintf(fptr, "MOV R%d, [R%d]\n",reg,reg);
				t = t->right;
				while(t->right!=NULL){
					fprintf(fptr, "ADD R%d, %d\n",reg,t->val);
					fprintf(fptr, "MOV R%d, [R%d]\n",reg,reg);
					t = t->right;
				}
				fprintf(fptr, "ADD R%d, %d\n",reg,t->val);
				return reg;
			       }
			case SelfFnNode: {
				int loc = t->Lentry->binding;
				int reg = getReg();
				fprintf(fptr, "MOV R%d, BP\n",reg);
				fprintf(fptr, "ADD R%d, %d\n",reg,loc);
				t = t->right;
				while(t->right!=NULL && t->nodetype != SelfMethodCall){
					fprintf(fptr, "MOV R%d, [R%d]\n",reg,reg);
					fprintf(fptr, "ADD R%d, %d\n", reg, t->val);
					t=t->right;
				}
				return reg;
				}
			case Cobj :{
				int loc =  t->Lentry->binding;
				int reg = getReg();
				fprintf(fptr, "MOV R%d, BP\n",reg);
				fprintf(fptr, "ADD R%d, %d\n",reg, loc);
				fprintf(fptr, "MOV R%d, [R%d]\n",reg,reg);
				t=t->right;
				while(t->right!=NULL){
					fprintf(fptr, "ADD R%d, %d\n", reg,t->val);
					fprintf(fptr, "MOV R%d, [R%d]\n", reg,reg);
					t=t->right;
				}
                                fprintf(fptr, "ADD R%d, %d\n", reg, t->val);
                                return reg;


			}

		}
	}
	else{

	int loc = t->Gentry->binding;

	switch(t->nodetype){

		case 4:{
				int reg = getReg();
				fprintf(fptr,"MOV R%d, %d\n",reg, loc);
				return reg;

		       }
		case arType: {
				int offset = codeGen(t->left, fptr);
				fprintf(fptr, "ADD R%d, %d\n",offset, loc);
				return offset;
				
			}
		case matType: {
				int offset_1 = codeGen(t->left, fptr);
				int offset_2 = codeGen(t->right, fptr);
				int offset = offset_1*t->Gentry->size[1] + offset_2;
				fprintf(fptr,"MUL R%d, %d\n", offset_1, t->Gentry->size[1]);
				fprintf(fptr, "ADD R%d, R%d\n",  offset_1, offset_2);
				fprintf(fptr, "ADD R%d, %d\n", offset_1, loc);
				return offset_1;			
			      }
		case FieldNode: {
				int reg = getReg();
				fprintf(fptr, "MOV R%d, %d\n",reg,loc);
				fprintf(fptr, "MOV R%d, [R%d]\n",reg, reg);
				struct Typetable *Ttemp = t->type;
				t=t->right;
				while(t->right!=NULL){
					fprintf(fptr, "ADD R%d, %d\n",reg,t->val);
					fprintf(fptr, "MOV R%d, [R%d]\n",reg,reg);
					t=t->right;

				}
				fprintf(fptr, "ADD R%d, %d\n",reg,t->val);
				return reg;
				}
		case MethodCall: {
				int reg = getReg();
				fprintf(fptr, "MOV R%d, %d\n",reg,loc);
				t=t->right;
				while(t->right != NULL && t->nodetype != MethodCall){
					fprintf(fptr, "MOV R%d, [R%d]\n",reg, reg);
					fprintf(fptr, "ADD R%d, %d\n", reg, t->val);
					t=t->right;

				}
				return reg;
				 }
		case Cobj: {
				int reg = getReg();
				fprintf(fptr, "MOV R%d, %d\n", reg, loc);
				return reg;

			   }

	}
}
}
int getnextadd(){
	address++;
	return address;
}
void Install(char *name, struct Typetable *type, int size_0, int size_1, struct Paramstruct *p, int Flabel){
	struct Gsymbol* temp;
        temp = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
	temp->name = name;
	temp->type = type;
	temp->size[0] = size_0;
	temp->size[1] = size_1;
	temp->vfuncbinding = 0;
	if(Flabel== NULL){
		temp->binding = getnextadd();}
	else{
		temp->binding = NULL;}
	temp->paramlist = p;
	temp->flabel = Flabel;
	temp->next = st;
	st = temp;	
}
struct Lsymbol * SelfLentry(char *name, int binding){
	struct Lsymbol *temp;
	temp = (struct Lsymbol*)malloc(sizeof(struct Gsymbol));
	temp->name = name;
	temp->type = TLookup("VOID");
	temp->binding = binding;
	return temp;
}
void Linstall(char *name, struct Typetable * type, int binding){
	struct Lsymbol* temp;
	temp = (struct Lsymbol*)malloc(sizeof(struct Gsymbol));
	temp->name = name;
	temp->type = type;
	temp->binding = binding;
	temp->next = Lhead;
	Lhead = temp;
}

struct Lsymbol* Llookup(char *name){
	struct Lsymbol* temp = Lhead;
	while(temp!=NULL){
		if(strcmp(temp->name, name)==0)
			return temp;
		temp = temp->next;}
	return NULL;

}
struct Gsymbol* Lookup(char *name){
	struct Gsymbol* head = st;
	while(head!=NULL ){
		if(strcmp(head->name, name)==0)
			return head;
		head=head->next;
	}
	return NULL;
}

void printtable(){
	struct Gsymbol *head = st;
	while(head!=NULL){
		printf("name : %s, binding : %d, type : %s \n",head->name, head->binding, head->type->name);
		printparams(head->paramlist);
		head = head->next;
	}


}

struct Paramstruct* Pinstall(char* name, struct Typetable * type, struct Paramstruct* next){
	struct Paramstruct *temp;
	temp = (struct Paramstruct*)malloc(sizeof(struct Paramstruct));
	temp->name = name;
	temp->type = type;
	temp->next = next;
	return temp;
}

int getFlabel(){
	flabel++;
	return flabel-1;
}

void printparams(struct Paramstruct *paramlist){

	while(paramlist!=NULL){
	printf("name : %s type : %s\n",paramlist->name, paramlist->type->name);
	paramlist = paramlist->next;}
}

void checkvalid(struct Typetable * type, struct Paramstruct *paramlist, char* name, struct Classtable *cptr){
	if(cptr==NULL){

		struct  Gsymbol *Gentry = Lookup(name);
	if(Gentry==NULL){
		yyerror("Function not declared");
		exit(1);
	}
	if( type != Gentry->type){
		yyerror("Function return type doesnot match with declaration");
		exit(1);}
	struct Paramstruct *Gparam = Gentry->paramlist;
	while(paramlist!=NULL){
		if((strcmp(paramlist->name, Gparam->name)==1) ||(paramlist->type  != Gparam->type)){
			yyerror("Function parameter type/name doesnot match with declaration");
			exit(1);
			}
		paramlist = paramlist->next;
		Gparam = Gparam->next;
	}
	if(paramlist!=NULL || Gparam!=NULL){
		yyerror("Number of function parameters in definition doesnot match declaration\n");
		exit(1);
	}
	}
	else{
		struct Memberfunclist * CMEntry = CMLookup(cptr, name);
		if(CMEntry== NULL){
			yyerror("Class method not declared");
			exit(1);
		}
		if( type != CMEntry->type ){
			yyerror("Class method return type doesnot match with declaration");
			exit(1);
		}
		struct Paramstruct *CMParam = CMEntry->paramlist;
		while(paramlist!=NULL && CMParam!=NULL){
			if((strcmp(paramlist->name, CMParam->name)==1) ||(paramlist->type  != CMParam->type)){
                        yyerror("Function parameter type/name doesnot match with declaration");
                        exit(1);
                        }
                paramlist = paramlist->next;
                CMParam = CMParam->next;
		}
		if(paramlist!=NULL || CMParam!=NULL){
			yyerror("Number of method parameters in definition doesnot match function definition\n");
			exit(1);	
		}

	}
}

void AddParamToLocal(struct Paramstruct *plist , struct Lsymbol* Lhead){
	struct Lsymbol *temp;
	while(plist!=NULL){
//		Linstall(plist->name, plist->type);
		plist= plist->next;
	}


}


void checkvalidfncall(struct Gsymbol* Gentry, struct tnode* arg){
	struct Paramstruct* temp1 = Gentry->paramlist;
	int count1=0;
	struct tnode* temp2 = arg;
        int count2=0;
	while(temp1!=NULL && temp2!=NULL){
		 if(temp1->type!=temp2->type){
                 	yyerror("Function call arguments type error");
                        exit(1);
                }
		temp1 = temp1->next;
		temp2 = temp2->middle;
	}
	if(temp1!=NULL || temp2!=NULL){
		yyerror("Number of arguments to function call doesnot match definition");
		exit(1);
	}
}
void Pcheck(struct Paramstruct *p1, struct Paramstruct *p2){
	while(p1!=NULL){
		if(strcmp(p1->name, p2->name)==0){
			yyerror("Function parameter cannot have same name");
			exit(1);
		}
		p1 = p1->next;
	}

}


void TypeTableCreate(){
	
	Tinstall("INT", 1, NULL);
	Tinstall("STR", 1, NULL);
	Tinstall("BOOL",1, NULL);
	Tinstall("VOID", 1, NULL);
	
}

void  Tinstall(char *name, int size, struct Fieldlist *fields){
        struct Typetable *temp;
        temp = (struct Typetable*)malloc(sizeof(struct Typetable));
	temp->name = name;
	temp->size = size;
	temp-> fields = fields;
	temp->next = Thead;
	Thead = temp;
}
struct Typetable *TLookup(char *name){
        struct Typetable* temp = Thead;
        while(temp!=NULL){
                if(strcmp(temp->name, name)==0)
                        return temp;
                temp = temp->next;}
        return NULL;
}

struct FieldList *  Finstall(char *name, char* temp_type){
	struct Fieldlist *temp;
	temp = (struct Fieldlist*)malloc(sizeof(struct Fieldlist));
	temp->name = name;
	temp->fieldIndex = Findex++;
	temp->temp_type = temp_type;
	temp->Ctype = NULL;
	temp->next = NULL;
	return temp;	
}	

int GetSize(struct Typetable *Tentry){
	struct Fieldlist *temp=Tentry->fields;
	int size=0;
	while(temp!=NULL){

		size = size + temp->type->size;
		temp = temp->next;

	}
	return size;
	
}
struct Typetable * checkvalidfieldandType(struct Typetable *ttemp, struct tnode* Node){
	struct Fieldlist *Flist = ttemp->fields;
	while(Flist!=NULL){
		if(strcmp(Node->varname, Flist->name)==0){
			return	Flist->type;
		}
		Flist = Flist->next;
	}
	yyerror("Field not member of the datatype");
	exit(1);
	return;
}

struct Fieldlist * FLookup(struct Typetable *type, struct Classtable *Ctype, char *name){
	struct Fieldlist *field;
	if(type !=NULL){
		field = type->fields;}
	else{	
	field = Ctype->MemberField;}
	while(field!=NULL){
		if(strcmp(name, field->name)==0){
			return field;
		}
		field = field->next;
	}
	return NULL;
		
}

struct Classtable *CInstall(char *name, char *parent_class_name){
	

	if(CLookup(name)!=NULL){
		yyerror("Class name already defined");
		exit(1);
	}


	struct Classtable * temp;
        temp = (struct Classtable*)malloc(sizeof(struct Classtable));
	temp ->name = name;
	temp->Class_index = Cindex ++;
	temp->Fieldcount = 0;
	temp->Methodcount = 0;
	struct Classtable * parent_class_ptr = NULL;
	if(parent_class_name!=NULL){
		parent_class_ptr = CLookup(parent_class_name);
		installParentToChild(temp, parent_class_ptr);
	}

	temp ->Parentptr = parent_class_ptr;		
	temp->next = Chead;
	Chead = temp;	
	return temp;
}

void installParentToChild(struct Classtable *temp, struct Classtable *parent){
	struct Fieldlist *parentField = parent->MemberField;
	while(parentField!=NULL){
		Class_PFinstall(temp, parentField);
		parentField = parentField->next;
	}
	struct Memberfunclist *memberFunc = parent->Vfuncptr;
	while(memberFunc !=NULL){
		Class_PMinstall(temp, memberFunc);
		memberFunc = memberFunc->next;
	}
	memberFunc = temp->Vfuncptr;
}


struct Classtable *CLookup(char *name){
	struct Classtable *temp = Chead;
	while(temp!=NULL){
		if(strcmp(temp->name, name)==0)
				return temp;
		temp = temp->next;
	}
	return NULL;
}


void Class_PFinstall(struct Classtable *cptr, struct Fieldlist *field){
	if(cptr->Fieldcount>=8){
		yyerror("There cannot be more than 8 class fields \n");
		exit(1);
	}
	if(CFLookup(cptr, field->name)!=NULL){
		yyerror("Class Field already declared\n");
		exit(1);
	}
	
	struct Fieldlist *Fhead = cptr->MemberField;
	struct Fieldlist *temp;
	temp = (struct Fieldlist*)malloc(sizeof(struct Fieldlist));
	*temp = *field;
	CFindex++;
	temp->next = Fhead;
	cptr->MemberField = temp;
	cptr->Fieldcount++;
	
}
void Class_Finstall(struct Classtable *cptr, char *typename, char *name){
		
	if(cptr->Fieldcount>=8){
		yyerror("There cannot be more than 8 class fields \n");
		exit(1);
	}
		if(CFLookup(cptr, name)!=NULL){
			yyerror("Class Field already declared\n");
			exit(1);
		}
		
		struct Fieldlist * Fhead = cptr->MemberField;
		struct Fieldlist *temp;
	        temp = (struct Fieldlist*)malloc(sizeof(struct Fieldlist));
	        temp->name = name;
	        temp->fieldIndex = CFindex++;
		temp->type = TLookup(typename);
		temp->Ctype = CLookup(typename);
		if(temp->Ctype != NULL){
			cptr->Fieldcount++;
		}
	        temp->next = Fhead;
		cptr->MemberField = temp;
		cptr->Fieldcount++;
		
}

void Class_PMinstall(struct Classtable *cptr, struct Memberfunclist *Mfunc){
	if(cptr->Methodcount>=8){
		yyerror("There cannot be more than 8 class methods \n");
		exit(1);
	}
	if(CMLookup(cptr, Mfunc->name) !=NULL){
		yyerror("Class member function already declared\n");
		exit(1);
	}

	struct Memberfunclist *Mhead = cptr->Vfuncptr;
	struct Memberfunclist *temp;
	temp = (struct Memberfunclist*)malloc(sizeof(struct Memberfunclist));
	*temp = *Mfunc;
	if(Mhead == NULL){
		Mhead = temp;
		Mhead ->next = NULL;
	}
	else{
		struct Memberfunclist *ttemp = Mhead;
		while(ttemp->next != NULL){
			ttemp = ttemp->next;
		}
	temp->next = NULL;
	ttemp->next = temp;
	}
	cptr->Vfuncptr = Mhead;
	cptr->Methodcount++;
	CMindex ++;
}

void Class_Minstall(struct Classtable *cptr, char *name, struct Typetable *type, struct Paramstruct *Paramlist){
	if(cptr->Methodcount>=8){
		yyerror("There cannot be more than 8 class methods \n");
		exit(1);
	}
	struct Memberfunclist *Mhead = cptr->Vfuncptr;
	struct Memberfunclist *temp;
	if(CMLookup(cptr, name) !=NULL){
		if(CMLookup(cptr->Parentptr, name) == NULL){
		yyerror("Class member function already declared \n");
		exit(1);}
		temp = CMLookup(cptr, name);
		temp->name = name;
		temp->type = type;
		temp->Flabel = getFlabel();
		temp->paramlist = Paramlist;
	}
	else{
		temp = (struct Memberfunclist*)malloc(sizeof(struct Memberfunclist));
		temp->name = name;
		temp->type = type;
		temp->Funcposition = CMindex++;
		temp->Flabel = getFlabel();
		temp->paramlist = Paramlist;
		if(Mhead == NULL){
                Mhead = temp;
                Mhead ->next = NULL;
        	}
	        else{
                struct Memberfunclist *ttemp = Mhead;
                while(ttemp->next != NULL){
                        ttemp = ttemp->next;
                }
		temp->next = NULL;
	        ttemp->next = temp;
	        }
		cptr->Vfuncptr = Mhead;
		cptr->Methodcount++;
	}
		
}

struct Memberfunclist *CMLookup(struct Classtable *cptr, char *name){
		if(cptr == NULL){
			return NULL;
		}
		struct Memberfunclist *Mhead = cptr->Vfuncptr;
		while(Mhead!=NULL){
			if(strcmp(Mhead->name, name)==0){
				return Mhead;
			}
			Mhead = Mhead->next;
		
		}
		return NULL;
}

struct Fieldlist *CFLookup(struct Classtable *cptr, char *name){
		struct Fieldlist *Fhead = cptr->MemberField;
		while(Fhead!=NULL){
			if(strcmp(Fhead->name, name)==0){
				return Fhead;

			}
			Fhead = Fhead->next;
		}
		return NULL;
}

void printclasstable(){
	struct Classtable *Cheadtemp = Chead;
	while(Cheadtemp!=NULL){
		printf("%s, %d, %d",Cheadtemp->name, Cheadtemp->Fieldcount, Cheadtemp->Methodcount);
		Cheadtemp = Cheadtemp->next;

	}

}

void checkvalidmethodcall(char *name, struct tnode *arg, struct Memberfunclist *Mtemp){
	
		struct Paramstruct* temp1 = Mtemp->paramlist;
        	int count1=0;
	        struct tnode* temp2 = arg;
	        int count2=0;
	        while(temp1!=NULL && temp2!=NULL){
	                 if(temp1->type!=temp2->type){
	                        yyerror("Method call arguments type error");
	                        exit(1);
	                }
	                temp1 = temp1->next;
	                temp2 = temp2->middle;
	        }
	        if(temp1!=NULL || temp2!=NULL){
	                yyerror("Number of arguments to method call doesnot match definition");
        	        exit(1);
	        }

}

void debugfn(){

}

void debugfn1(struct Typeholder *tt){


}

struct Typeholder *createTypeholder(struct Typetable *Ttype , struct Classtable *Ctype){
	struct Typeholder *temp;
	temp = (struct Typeholder*)malloc(sizeof(struct Typeholder));
	temp->Ttype = Ttype;
	temp->Ctype =Ctype;
	return temp;

}

void printVirtualTable( struct Classtable *Cptr){
	FILE *fptr = fopen("out.xsm", "a");
	struct Classtable *temp = Cptr;
	int stkloc = 4096;
	int i = 0;
	struct Memberfunclist *Mtemp = temp->Vfuncptr;
	while(i<8){
		if(Mtemp != NULL){
			fprintf(fptr, "MOV [%d], F%d\n", getnextadd(), Mtemp->Flabel);
			Mtemp = Mtemp->next;
		}
		else{
		fprintf(fptr, "MOV [%d], -1\n",getnextadd());}
		i++;
	}
	fclose(fptr);
}

void checkifFieldisClass(struct tnode* t){
	struct tnode* temp = t;
	while(temp->right != NULL){
		if(temp->right->right == NULL)
			break;
		temp = temp->right;
	}
	if(temp->Ctype != NULL){
		yyerror("Cannot access member fields of class variables defined inside a class");
		exit(1);

	}




}
