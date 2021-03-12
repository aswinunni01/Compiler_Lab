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

int ifcount=0;
int count=0;
int label;
int varstart = 4096;
int address = 4095;
int flabel = 0;

struct Gsymbol *st = NULL;
struct Lsymbol *Lhead = NULL;
struct stack* Breakhead=NULL;
struct stack* Continuehead=NULL;


struct tnode* createTree(int val, int type, char* c,int nodetype, struct Gsymbol *Gentry, struct tnode* l,struct tnode*m, struct tnode* r){

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

struct tnode* createEQNode(struct tnode* l, struct tnode*r){
	if(l->type != r->type){
		yyerror("Equation LHS and RHS donot match types");
		exit(1);
	}
	return createTree(NULL, 1, "EQU", 1, NULL, l, NULL, r);
}
struct tnode* createIfNode(struct tnode* l, struct tnode* m, struct tnode* r){
	if(l->type == boolType)
		return createTree(NULL, NULL, NULL, 5,NULL, l, m, r);
	else{
		yyerror("Type mismatch");
		exit(1);
	}
}

struct tnode* createWhileNode(struct tnode* l, struct tnode* r){
	if(l->type == boolType)
		return createTree(NULL, NULL, NULL,6,NULL, l, NULL, r); 
	else{
		yyerror("Type mismatch");
		exit(1);
	}
}

struct tnode* createOpNode(char *c, int type, struct tnode* l, struct tnode* r){
	if((l->type == intType) && (r->type == intType)){
		if(type == intType)
			return createTree(NULL, intType, c, 1, NULL, l, NULL, r);
		else	
			return createTree(NULL, boolType, c, 1, NULL, l, NULL, r);
	}
	else{
		yyerror("Cannot operate on boolType objects");
		exit(1);
	}
}

struct tnode* createVarNode(char *c){
	struct tnode* temp;
	
	temp =  createTree(NULL, intType, c, 4, NULL, NULL, NULL, NULL);
	return temp;
}

struct tnode* createIONode(int val, char *c, struct tnode* r){
	if(r->type == intType || r->type == arType || r->type == matType || r->type  == strType){
		return	createTree(val,NULL, c, 2, NULL, NULL, NULL, r);
	}
	else{
		printf("%d",r->type);
		yyerror("Cannot read/write boolean values\n");
		exit(1);
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

        fprintf(fptr,"0\n2056\n0\n0\n0\n0\n0\n0\nBRKP\nMOV SP, %d\nMOV BP, 4096\nPUSH R0\nCALL MAIN\nINT 10\n", address+1);

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

	int reg_1, reg_2;
	switch((t->nodetype)){

		case 0:
			reg_1 = getReg();
			fprintf(fptr, "MOV R%d, %d\n", reg_1, t->val);
			return reg_1;

		case 4:
			reg_1 = getReg();
			fprintf(fptr,"MOV R%d, [R%d]\n", reg_1,getLoc(t));
			return reg_1;
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
			codeGen(t->middle,fptr);
			if(t->right==NULL){
				fprintf (fptr, "L%d:\n", label_1);
				fprintf("%d",label_2);
				return -1;
			}
			else{
			fprintf (fptr, "JMP L%d\n", label_2);
			fprintf (fptr, "L%d:\n", label_1);
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
		case FnBlock: {
			codeGen(t->left,fptr);
			freeAllReg();
			codeGen(t->right,fptr);
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
	}

	}
}
int getnextadd(){
	address++;
	return address;
}
void Install(char *name, int type, int size_0, int size_1, struct Paramstruct *p, int Flabel){
	struct Gsymbol* temp;
        temp = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
	temp->name = name;
	temp->type = type;
	temp->size[0] = size_0;
	temp->size[1] = size_1;
	if(Flabel== NULL){
		temp->binding = getnextadd();}
	else{
		temp->binding = NULL;}
	temp->paramlist = p;
	temp->flabel = Flabel;
	temp->next = st;
	st = temp;	
}

void Linstall(char *name, int type, int binding){
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
		printf("name : %s, binding : %d, type : %d \n",head->name, head->binding, head->type);
		printparams(head->paramlist);
		head = head->next;
	}


}

struct Paramstruct* Pinstall(char* name, int type, struct Paramstruct* next){
	struct Paramstruct *temp;
	temp = (struct Paramstruct*)malloc(sizeof(struct Paramstruct));
	temp->name = name;
	temp->type = type;
	temp->next = next;
	return temp;
}

int getFlabel(){
	flabel++;
	return flabel;
}

void printparams(struct Paramstruct *paramlist){

	while(paramlist!=NULL){
	printf("name : %s type : %d\n",paramlist->name, paramlist->type);
	paramlist = paramlist->next;}
}

void checkvalid(int type, struct Paramstruct *paramlist, struct Gsymbol* Gentry){
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
