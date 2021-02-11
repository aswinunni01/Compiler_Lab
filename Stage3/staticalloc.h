#include<stdlib.h>
#include<stdio.h>

typedef struct tnode{
	int val;
	int type;
	char* varname;
	int nodetype;
	struct tnode *left, *right, *middle;

}tnode;

struct tnode* createTree(int val, int type, char* c,int nodetype, struct tnode* l, struct tnode* m, struct tnode* r);

int getReg();
void freeReg();
void makepgrm (struct tnode*  t, FILE *fptr);
void freeAllReg();
int getlabel();
int codeGen(struct tnode*  t, FILE *fptr);

