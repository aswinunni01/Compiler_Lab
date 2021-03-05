#include<stdlib.h>
#include<stdio.h>

typedef struct tnode{
	int val;
	int type;
	char* varname;
	int nodetype;
	struct Gsymbol *Gentry;
	struct Lsymbol *Lentry;
	struct tnode *left, *right, *middle;

}tnode;

typedef struct stack{

	int labelno;
	struct stack* next;
};

typedef struct Gsymbol{

	char *name;
	int type;
	int size[2];
	int binding;
	struct Paramstruct *paramlist;
	int flabel;
	struct Gsymbol *next;

};

typedef struct Lsymbol{
	char *name;
	int type;
	int binding;
	struct Lsymbol *next;

};

typedef struct Paramstruct{
	char *name;
	int type;
	struct Paramstruct *next;

};


struct tnode* createTree(int val, int type, char* c,int nodetype, struct Gsymbol* Gentry, struct tnode* l, struct tnode* m, struct tnode* r);
struct Paramstruct *Pinstall(char *name, int type, struct Paramstruct *next);
int getReg();
void freeReg();
void makepgrm (struct tnode*  t, FILE *fptr);
void freeAllReg();
int getlabel();
int codeGen(struct tnode*  t, FILE *fptr);

