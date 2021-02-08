#include<stdlib.h>
#include<stdio.h>
typedef struct tnode{
	int val;
	int type;
	char* varname;
	struct tnode *left, *right;

}tnode;
struct tnode* createTree(int val, int type, char* c, struct tnode* l, struct tnode* r);
void writeheader(FILE *fptr);
int getReg();
void freeReg();
void makepgrm (struct tnode*  t, FILE *fptr);
