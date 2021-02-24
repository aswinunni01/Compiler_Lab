#include<stdlib.h>
#define intType 21
#define boolType 22
#define strType 23
#define arType 24
int ifcount=0;
int count=0;
int label;
int varstart = 4096;
int address = 4095;
struct Gsymbol *st = NULL;
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
	temp->middle = m;
	temp->left = l;
	temp->right = r;
	return temp;
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
	if(r->type == intType || r->type == arType){
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

        fprintf(fptr,"0\n2056\n0\n0\n0\n0\n0\n0\nBRKP\n");

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
			fprintf(fptr,"MOV R%d, [%d]\n", reg_1, t->Gentry->binding);
			return reg_1;
		case 2:
			reg_1 = getReg();
			reg_2 = getLoc(t->right, fptr);
			fprintf(fptr, "MOV SP, 4121\n");
			fprintf(fptr, "MOV R%d, \"%s\"\n",reg_1, t->varname);
			fprintf(fptr, "PUSH R%d\n",reg_1);
			fprintf(fptr, "MOV R%d, %d\n",reg_1,t->val);
			fprintf(fptr, "PUSH R%d\n",reg_1);
			if(strcmp(t->varname,"Read")==0){
			    	fprintf(fptr, "MOV R%d, R%d\n",reg_1,reg_2);
				fprintf(fptr, "PUSH R%d\n",reg_1);

			}
			else{

				fprintf(fptr, "MOV R%d, [R%d]\n",reg_1,reg_2);
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
				int offset = offset_1*t->Gentry->size[0] + offset_2;
				fprintf(fptr,"MUL R%d, %d\n", offet_1, t->Gentry->size[0]);
				fprintf(fptr, "ADD R%d, R%d\n",  offset_1, offset_2);
				fprintf(fptr, "ADD R%d, %d\n", offset_1, loc);
				return offset_1;			
			      }
	}

}
int getnextadd(){
	address++;
	return address;
}
void Install(char *name, int type, int size_0, int size_1){
	struct Gsymbol* temp;
        temp = (struct Gsymbol*)malloc(sizeof(struct Gsymbol));
	temp->name = name;
	temp->type = type;
	temp->size[0] = size_0;
	temp->size[1] = size_1;
	temp->binding = getnextadd();
	temp->next = st;
	st = temp;	
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
		printf("%s, %d",head->name, head->binding);
		head = head->next;
	}


}
