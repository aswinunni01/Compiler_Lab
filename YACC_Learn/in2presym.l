%{

#include "y.tab.h"

%}


string	[a-zA-z]*


%%

{string}	{ yylval.c = strdup(yytext);
			return string;
			}

[-|+|*|/]	{ yylval.c = strdup(yytext);
			return OP;	}


\n		{ return newline; }

(.)		;

%%

yywrap(){

	return 1;
}
