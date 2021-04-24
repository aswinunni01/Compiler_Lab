#include<stdlib.h>
#include<stdio.h>

typedef struct tnode{
	int val;
	struct Typetable *type;
	struct Classtable *Ctype;
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
	
	int size[2];
	int binding;
	struct Typetable *type;
	struct Classtable *Ctype;
	struct Paramstruct *paramlist;
	int flabel;
	struct Gsymbol *next;

};

typedef struct Lsymbol{
	char *name;
	struct Typetable *type;
	int binding;
	struct Lsymbol *next;

};

typedef struct Paramstruct{
	char *name;
	
	struct Typetable *type;
	struct Paramstruct *next;

};

struct Typetable{
	char *name;
	int size;
	struct Fieldlist *fields;
	struct Typetable *next;
};

struct Fieldlist{
	char *name;
	int fieldIndex;
	struct Typetable *type;
	struct Classtable *Ctype;
	char *temp_type;
	struct Fieldlist *next;

};

struct Classtable {
	char *name;
	struct Fieldlist *MemberField;
	struct Memberfunclist *Vfuncptr;
	struct Classtable *Parentptr;
	int Class_index;
	int Fieldcount;
	int Methodcount;
	struct Classtable *next;
};

struct Memberfunclist {
	char *name;
	struct Typetable *type;
	struct Paramstruct *paramlist;
	int Funcposition;
	int Flabel;
	struct Memberfunclist *next;
};

struct Typeholder {
	struct Typetable *Ttype;
	struct Classtable *Ctype;
	
};


struct tnode* createTree(int val, struct Typetable * type, char* c,int nodetype, struct Gsymbol* Gentry, struct tnode* l, struct tnode* m, struct tnode* r);
struct Paramstruct *Pinstall(char *name, struct Typetable * type, struct Paramstruct *next);
struct Fieldlist *FLookup(struct Typetable *type, struct Classtable *Ctype, char *name);
struct Typetable *TLookup(char *name);
struct Classtable *CLookup(char *name);
struct Fieldlist *CFLookup(struct Classtable *cptr, char *name);
struct Memberfunclist *CMLookup(struct Classtable *cptr, char *name);
int getReg();
void freeReg();
void makepgrm (struct tnode*  t, FILE *fptr);
void freeAllReg();
int getlabel();
int codeGen(struct tnode*  t, FILE *fptr);
int GetSize(struct Typetable *Tentry);
