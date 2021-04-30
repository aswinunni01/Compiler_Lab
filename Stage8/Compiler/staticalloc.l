%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
#include "staticalloc.h"
#define intType 21
#define boolType 22
#define strType 23

int c=0;
int number;
char*  var;
struct Gsymbol *Gentry;
%}

%%

[0-9]+	{ number = atoi(yytext); yylval.no = createTree(number, TLookup("INT"), NULL,0, NULL,NULL, NULL, NULL); return NUM; }
"begin" { return BEG; }
"end"	{ return END; }
"write"	{ return WRITE; }
"read"	{ return READ; }
"if"	{ return IF; }
"else"  { return ELSE; }
"then"	{ return THEN; }
"endif"	{ return ENDIF; }
"while" { return WHILE; }
"endwhile" { return ENDWHILE; }
"do"	{ return DO; }
"break"	{ return BREAK; }
"continue" { return CONTINUE; }
"int"	{ return INT; }
"str"	{ return STR; }
"null"	{ return NUL; }
"void"  { return VOID; }
"decl"	{ return DECL; }
"type"	{ return TYPES; }
"main"	{ return MAIN; }
"return" { return RET; }
"enddecl" { return ENDDECL; }
"endtype" { return ENDTYPE; }
"alloc()" { return ALLOC; }
"free"  { return FREE; }
"initialize()" { return INIT; }
"new"	{ return NEW; }
"class" { return CLASS; }
"endclass" { return ENDCLASS; }
"self"	{ return SELF; }
"delete" { return DELETE; }
"extends" { return EXTENDS; }
[a-zA-Z]+[a-zA-Z0-9_]* { var = strdup(yytext); yylval.no = createTree(NULL, NULL, var, 4, NULL, NULL, NULL, NULL);   return ID; }
[\"][^"]*[\"] { var = strdup(yytext); yylval.no = createTree(NULL, TLookup("STR"), var, 0, NULL, NULL, NULL, NULL); return LIT; }
"+"	{ return PLUS; }
"-"	{ return MINUS; }
"*"	{ return MUL; }
"/"	{ return DIV; }
"="	{ return EQ; }
"<"	{ return LT; }
">"	{ return GT; }
"<="	{ return LTE; }
">="	{ return GTE; }
"!="	{ return NE; }
"=="	{ return EQU; }
"["	{ return *yytext; }
"]"	{ return *yytext; } 
"{" 	{ return *yytext; }
"}" 	{ return *yytext; }
[ \t]	{}
[\n]	;
[,]	{ return *yytext; }
[;]	{ return *yytext; }
[.]	{ return *yytext; }
[()]	{ return *yytext; }
.	{ yyerror("unknown character\n");exit(1);}

%%

int yywrap(void){
  	return 1;

}
