#include<stdlib.h>
int ifcount=0;
int count=0;

struct tnode* createTree(int val, int type, char* c, struct tnode* l, struct tnode* r){

	struct tnode* temp;
	temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->val = val;
	temp->type = type;
	if(c!=NULL)
		temp->varname=strdup(c);
	else
		temp->varname = NULL;
	temp->left = l;
	temp->right = r;
	return temp;
}

int getReg(){
	count ++;
	return count-1;
}

void freeReg(){
	count --;
}

void writeheader(FILE *fptr){

        fprintf(fptr,"0\n2056\n0\n0\n0\n0\n0\n0\nBRKP\n");

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
			fprintf(fptr, "MOV R%d, %d\n",d, t->left->val+4096);
			fprintf(fptr, "MOV [R%d], R%d\n",d,count-2);
			freeReg();
		}
		else{
		fprintf(fptr, "%s R%d, R%d \n", t->varname, count-2, count-1);
		}
		freeReg();
	}
	else if(t->type == 4){
		 t->val = (int)*t->varname-97;
		 int d=getReg();
		 fprintf(fptr, "MOV R%d, [%d]\n",d,t->val+4096);	
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
	       		 fprintf(fptr, "MOV R%d,%d\n",d,4096+t->right->val);
			 fprintf(fptr, "PUSH R%d\n",d);
		}
		else{

			fprintf(fptr, "MOV R%d, %d\n",d+1, 4096+t->right->val);
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
