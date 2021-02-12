%{

#include<stdio.h>
#include<stdlib.h>
#include "table.c"
struct node* head = NULL;
FILE *input_file;
FILE *fptr;
int c=0;
int ip=-9;
%}


labels	[\AL][0-9][0-9]*
label	[L][0-9][0-9]*

%%
({labels})([:])([\n])	{ 
			  head =  addnode(head, yytext, 2058+(2*ip));
		}
{label}		 { if(c==1){
                 int d = getadd(head, yytext);
                 fprintf(fptr,"%d",d); }
          else
                fprintf(fptr, "%s",yytext);
}

[\n]	{ fprintf(fptr, "\n"); ip+=1; }
(.)	{ fprintf(fptr, "%s", yytext); }	
%%


int  yywrap(){
        if(c==1){
                printf("Pass 2 done\n");
                return 1;
        }
        else{
                printf("Pass 1 done\n");
                fclose(fptr);
                input_file = fopen("output_translated.xsm", "r");
                yyin = input_file;
                fptr = fopen("output_labeled.xsm","w");
                c=1;
                return 0;
        }
}
int main(int argc, char *argv[]){
        if(argc<2){
                printf("Not enough arguments\n");
                return 1;
        }
        input_file = fopen(argv[1], "r");
        yyin = input_file;
        fptr = fopen("output_translated.xsm","w");
        yylex();
}

