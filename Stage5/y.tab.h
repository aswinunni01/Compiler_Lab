/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    WRITE = 258,                   /* WRITE  */
    READ = 259,                    /* READ  */
    EQ = 260,                      /* EQ  */
    PLUS = 261,                    /* PLUS  */
    MINUS = 262,                   /* MINUS  */
    MUL = 263,                     /* MUL  */
    DIV = 264,                     /* DIV  */
    ID = 265,                      /* ID  */
    NUM = 266,                     /* NUM  */
    END = 267,                     /* END  */
    BEG = 268,                     /* BEG  */
    IF = 269,                      /* IF  */
    ENDIF = 270,                   /* ENDIF  */
    Else = 271,                    /* Else  */
    then = 272,                    /* then  */
    NE = 273,                      /* NE  */
    EQU = 274,                     /* EQU  */
    LT = 275,                      /* LT  */
    LTE = 276,                     /* LTE  */
    GT = 277,                      /* GT  */
    GTE = 278,                     /* GTE  */
    ELSE = 279,                    /* ELSE  */
    THEN = 280,                    /* THEN  */
    WHILE = 281,                   /* WHILE  */
    ENDWHILE = 282,                /* ENDWHILE  */
    DO = 283,                      /* DO  */
    BREAK = 284,                   /* BREAK  */
    CONTINUE = 285,                /* CONTINUE  */
    INT = 286,                     /* INT  */
    STR = 287,                     /* STR  */
    DECL = 288,                    /* DECL  */
    ENDDECL = 289,                 /* ENDDECL  */
    MAIN = 290,                    /* MAIN  */
    Retstmt = 291                  /* Retstmt  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define WRITE 258
#define READ 259
#define EQ 260
#define PLUS 261
#define MINUS 262
#define MUL 263
#define DIV 264
#define ID 265
#define NUM 266
#define END 267
#define BEG 268
#define IF 269
#define ENDIF 270
#define Else 271
#define then 272
#define NE 273
#define EQU 274
#define LT 275
#define LTE 276
#define GT 277
#define GTE 278
#define ELSE 279
#define THEN 280
#define WHILE 281
#define ENDWHILE 282
#define DO 283
#define BREAK 284
#define CONTINUE 285
#define INT 286
#define STR 287
#define DECL 288
#define ENDDECL 289
#define MAIN 290
#define Retstmt 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 22 "staticalloc.y"

	int num;
	struct tnode *no;
	struct Paramstruct *np;

#line 144 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
