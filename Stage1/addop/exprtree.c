FILE *fptr;
int count=0;

struct tnode* makeLeafNode(int n){

	struct tnode* temp;
	temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->op = malloc(sizeof(char));
	temp->op = NULL;
	temp->val = n;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}


struct tnode* makeOperatorNode(char c, struct tnode* l, struct tnode* r){

	struct tnode* temp;
	temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp-> op = malloc(sizeof(char));
	*(temp->op) = c;
	temp->left = l;
	temp->right = r;

	return temp;

}

int evaluate(struct tnode* t){


	if(t->op == NULL){

		return t->val;
	}
	else{
		switch(*(t->op)){

			case '+' : return evaluate(t->left) + evaluate(t->right);	break;

			case '-' : return evaluate(t->left) - evaluate(t->right); break;

			case '*' : return evaluate(t->left) * evaluate(t->right);	break;
			case '/' : return evaluate(t->left) / evaluate(t->right);	break;

		}
	}
}

void preorder(struct tnode* t){
	if(t == NULL)
		return;
	if(t->op==NULL){
		printf("%d", t->val);
	}
	else{
		printf("%s",t->op);
	}
	preorder(t->left);
	preorder(t->right);
	
}

int getReg(){

	count++;
	return count-1;

}
int freeReg(){

	count--;

}
void makexexe(struct tnode* t, FILE *fptr){
	if(t==NULL)
		return;

	makexexe(t->left,fptr);
	makexexe(t->right,fptr);

	if(t->op==NULL){

	        int d = getReg();
		fprintf(fptr,"MOV R%d, %d\n",d,t->val);
	}
	else{
		fprintf(fptr,"ADD R%d,R%d\n", count-2, count-1);
		freeReg();
	}
}

void helperfunction(struct tnode* t){
	fptr = fopen("out.xexe","w");
	makexexe(t,fptr);
	return ;
}

