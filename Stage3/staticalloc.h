#include<stdlib.h>
#include<stdio.h>
typedef struct tnode{
	int val;
	int type;
	char* varname;
	struct tnode *left, *right;

}tnode;

struct tnode* createTree(int val, int type, char* c, struct tnode* l, struct tnode* r);

int getReg();
void freeReg();
void makepgrm (struct tnode*  t, FILE *fptr);
