/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "staticalloc.y"

#include "staticalloc.h"
#include <stdio.h>
#include <stdlib.h>
#include "staticalloc.c"

#define intType 21
#define boolType 22
#define strType 23
#define arType 24
#define matType 25

#define FnNode 12
#define FnBlock 13
#define MnNode 14
#define FnCall 15
#define ArgType 16
#define RetNode 17
#define FieldNode 18
#define ClNode 51
#define ClBlock 52
#define SelfNode 53
#define SelfFnNode 54
#define MethodCall 55
#define Cobj 56
#define NewNode 57
#define MethodNode 58
#define MethodBlock 59
#define ClassEQNode 60
#define SelfMethodCall 61


int yylex(void);
FILE *input_file;
struct tnode* end_node;
int ploc=-3;
int lloc=0;
int size=0;
int FieldNo=0;
struct Classtable *Cptr = NULL;

#line 113 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
    NUL = 288,                     /* NUL  */
    VOID = 289,                    /* VOID  */
    DECL = 290,                    /* DECL  */
    ENDDECL = 291,                 /* ENDDECL  */
    MAIN = 292,                    /* MAIN  */
    RET = 293,                     /* RET  */
    TYPES = 294,                   /* TYPES  */
    ENDTYPE = 295,                 /* ENDTYPE  */
    LIT = 296,                     /* LIT  */
    INIT = 297,                    /* INIT  */
    ALLOC = 298,                   /* ALLOC  */
    FREE = 299,                    /* FREE  */
    NEW = 300,                     /* NEW  */
    CLASS = 301,                   /* CLASS  */
    ENDCLASS = 302,                /* ENDCLASS  */
    SELF = 303,                    /* SELF  */
    DELETE = 304,                  /* DELETE  */
    EXTENDS = 305                  /* EXTENDS  */
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
#define NUL 288
#define VOID 289
#define DECL 290
#define ENDDECL 291
#define MAIN 292
#define RET 293
#define TYPES 294
#define ENDTYPE 295
#define LIT 296
#define INIT 297
#define ALLOC 298
#define FREE 299
#define NEW 300
#define CLASS 301
#define ENDCLASS 302
#define SELF 303
#define DELETE 304
#define EXTENDS 305

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 43 "staticalloc.y"

	struct Typetable *Tentry;
	struct tnode *no;
	struct Paramstruct *np;
	struct Fieldlist *fl;
	struct Typeholder *th;

#line 273 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_WRITE = 3,                      /* WRITE  */
  YYSYMBOL_READ = 4,                       /* READ  */
  YYSYMBOL_EQ = 5,                         /* EQ  */
  YYSYMBOL_PLUS = 6,                       /* PLUS  */
  YYSYMBOL_MINUS = 7,                      /* MINUS  */
  YYSYMBOL_MUL = 8,                        /* MUL  */
  YYSYMBOL_DIV = 9,                        /* DIV  */
  YYSYMBOL_ID = 10,                        /* ID  */
  YYSYMBOL_NUM = 11,                       /* NUM  */
  YYSYMBOL_END = 12,                       /* END  */
  YYSYMBOL_BEG = 13,                       /* BEG  */
  YYSYMBOL_IF = 14,                        /* IF  */
  YYSYMBOL_ENDIF = 15,                     /* ENDIF  */
  YYSYMBOL_Else = 16,                      /* Else  */
  YYSYMBOL_then = 17,                      /* then  */
  YYSYMBOL_NE = 18,                        /* NE  */
  YYSYMBOL_EQU = 19,                       /* EQU  */
  YYSYMBOL_LT = 20,                        /* LT  */
  YYSYMBOL_LTE = 21,                       /* LTE  */
  YYSYMBOL_GT = 22,                        /* GT  */
  YYSYMBOL_GTE = 23,                       /* GTE  */
  YYSYMBOL_ELSE = 24,                      /* ELSE  */
  YYSYMBOL_THEN = 25,                      /* THEN  */
  YYSYMBOL_WHILE = 26,                     /* WHILE  */
  YYSYMBOL_ENDWHILE = 27,                  /* ENDWHILE  */
  YYSYMBOL_DO = 28,                        /* DO  */
  YYSYMBOL_BREAK = 29,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 30,                  /* CONTINUE  */
  YYSYMBOL_INT = 31,                       /* INT  */
  YYSYMBOL_STR = 32,                       /* STR  */
  YYSYMBOL_NUL = 33,                       /* NUL  */
  YYSYMBOL_VOID = 34,                      /* VOID  */
  YYSYMBOL_DECL = 35,                      /* DECL  */
  YYSYMBOL_ENDDECL = 36,                   /* ENDDECL  */
  YYSYMBOL_MAIN = 37,                      /* MAIN  */
  YYSYMBOL_RET = 38,                       /* RET  */
  YYSYMBOL_TYPES = 39,                     /* TYPES  */
  YYSYMBOL_ENDTYPE = 40,                   /* ENDTYPE  */
  YYSYMBOL_LIT = 41,                       /* LIT  */
  YYSYMBOL_INIT = 42,                      /* INIT  */
  YYSYMBOL_ALLOC = 43,                     /* ALLOC  */
  YYSYMBOL_FREE = 44,                      /* FREE  */
  YYSYMBOL_NEW = 45,                       /* NEW  */
  YYSYMBOL_CLASS = 46,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 47,                  /* ENDCLASS  */
  YYSYMBOL_SELF = 48,                      /* SELF  */
  YYSYMBOL_DELETE = 49,                    /* DELETE  */
  YYSYMBOL_EXTENDS = 50,                   /* EXTENDS  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '}'  */
  YYSYMBOL_53_ = 53,                       /* ';'  */
  YYSYMBOL_54_ = 54,                       /* '('  */
  YYSYMBOL_55_ = 55,                       /* ')'  */
  YYSYMBOL_56_ = 56,                       /* ','  */
  YYSYMBOL_57_ = 57,                       /* '['  */
  YYSYMBOL_58_ = 58,                       /* ']'  */
  YYSYMBOL_59_ = 59,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 60,                  /* $accept  */
  YYSYMBOL_start = 61,                     /* start  */
  YYSYMBOL_ClassDefBlock = 62,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 63,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 64,                  /* ClassDef  */
  YYSYMBOL_Cname = 65,                     /* Cname  */
  YYSYMBOL_Fieldlists = 66,                /* Fieldlists  */
  YYSYMBOL_FId = 67,                       /* FId  */
  YYSYMBOL_MethodDecl = 68,                /* MethodDecl  */
  YYSYMBOL_MDecl = 69,                     /* MDecl  */
  YYSYMBOL_MethodDefns = 70,               /* MethodDefns  */
  YYSYMBOL_TypeDefBlock = 71,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 72,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 73,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 74,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 75,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 76,                  /* TypeName  */
  YYSYMBOL_GdeclBlock = 77,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 78,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 79,                     /* Gdecl  */
  YYSYMBOL_Type = 80,                      /* Type  */
  YYSYMBOL_GidList = 81,                   /* GidList  */
  YYSYMBOL_FdefBlock = 82,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 83,                      /* Fdef  */
  YYSYMBOL_ParamList = 84,                 /* ParamList  */
  YYSYMBOL_Param = 85,                     /* Param  */
  YYSYMBOL_Body = 86,                      /* Body  */
  YYSYMBOL_Retstmt = 87,                   /* Retstmt  */
  YYSYMBOL_MainBlock = 88,                 /* MainBlock  */
  YYSYMBOL_LdeclBlock = 89,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 90,                  /* LDecList  */
  YYSYMBOL_LDecl = 91,                     /* LDecl  */
  YYSYMBOL_IdList = 92,                    /* IdList  */
  YYSYMBOL_Ifstmt = 93,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 94,                 /* Whilestmt  */
  YYSYMBOL_Stlist = 95,                    /* Stlist  */
  YYSYMBOL_Stmt = 96,                      /* Stmt  */
  YYSYMBOL_InputStmt = 97,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 98,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 99,                   /* AsgStmt  */
  YYSYMBOL_E = 100,                        /* E  */
  YYSYMBOL_ArgList = 101,                  /* ArgList  */
  YYSYMBOL_Method = 102,                   /* Method  */
  YYSYMBOL_Field = 103                     /* Field  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   501

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  122
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  280

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   305


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      54,    55,     2,     2,    56,     2,    59,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    53,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,     2,    52,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    63,    63,    73,    84,    95,   107,   120,   130,   142,
     143,   146,   147,   150,   157,   158,   161,   162,   165,   168,
     169,   172,   179,   185,   194,   207,   210,   210,   213,   220,
     227,   230,   236,   237,   238,   239,   247,   247,   250,   250,
     253,   267,   268,   269,   270,   284,   290,   296,   302,   312,
     318,   325,   331,   342,   343,   345,   355,   359,   362,   365,
     368,   369,   372,   373,   381,   386,   393,   400,   401,   404,
     413,   423,   436,   437,   440,   443,   444,   447,   448,   449,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   461,
     464,   468,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   503,   512,   525,   526,   527,   528,
     541,   553,   554,   557,   558,   562,   581,   601,   643,   670,
     699,   711,   743
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "WRITE", "READ", "EQ",
  "PLUS", "MINUS", "MUL", "DIV", "ID", "NUM", "END", "BEG", "IF", "ENDIF",
  "Else", "then", "NE", "EQU", "LT", "LTE", "GT", "GTE", "ELSE", "THEN",
  "WHILE", "ENDWHILE", "DO", "BREAK", "CONTINUE", "INT", "STR", "NUL",
  "VOID", "DECL", "ENDDECL", "MAIN", "RET", "TYPES", "ENDTYPE", "LIT",
  "INIT", "ALLOC", "FREE", "NEW", "CLASS", "ENDCLASS", "SELF", "DELETE",
  "EXTENDS", "'{'", "'}'", "';'", "'('", "')'", "','", "'['", "']'", "'.'",
  "$accept", "start", "ClassDefBlock", "ClassDefList", "ClassDef", "Cname",
  "Fieldlists", "FId", "MethodDecl", "MDecl", "MethodDefns",
  "TypeDefBlock", "TypeDefList", "TypeDef", "FieldDeclList", "FieldDecl",
  "TypeName", "GdeclBlock", "GdeclList", "Gdecl", "Type", "GidList",
  "FdefBlock", "Fdef", "ParamList", "Param", "Body", "Retstmt",
  "MainBlock", "LdeclBlock", "LDecList", "LDecl", "IdList", "Ifstmt",
  "Whilestmt", "Stlist", "Stmt", "InputStmt", "OutputStmt", "AsgStmt", "E",
  "ArgList", "Method", "Field", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   123,   125,    59,    40,    41,    44,    91,    93,    46
};
#endif

#define YYPACT_NINF (-229)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     132,   -26,   262,    -3,    -6,    66,    35,   -25,   105,  -229,
      21,  -229,  -229,  -229,  -229,  -229,   324,  -229,    70,    34,
    -229,    52,  -229,    37,  -229,    57,  -229,    51,  -229,    83,
      35,   191,  -229,  -229,  -229,  -229,   108,   191,  -229,    72,
    -229,  -229,    22,    33,   105,  -229,  -229,   128,  -229,  -229,
     117,  -229,   191,   -26,   191,  -229,   101,  -229,  -229,   111,
     105,   153,  -229,   158,     8,  -229,   164,  -229,  -229,   191,
    -229,  -229,   105,   145,   167,    53,  -229,   124,    39,  -229,
    -229,   133,   105,  -229,   136,   408,   176,  -229,  -229,   105,
     160,   105,   225,  -229,  -229,   415,  -229,   192,   173,  -229,
     232,   424,  -229,   155,   195,  -229,   233,   142,   201,   105,
    -229,   250,   157,   145,  -229,    69,  -229,  -229,   209,   224,
      67,  -229,   228,   229,  -229,  -229,  -229,    58,  -229,   237,
     220,   243,    58,   300,  -229,  -229,   155,  -229,   266,   268,
     274,   456,  -229,   261,  -229,   270,  -229,   276,    13,  -229,
     293,  -229,   105,   176,  -229,   338,    58,    58,    62,    58,
     339,    58,    58,   373,    58,   347,    -2,   267,  -229,   349,
    -229,  -229,  -229,  -229,   387,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,   352,  -229,   348,  -229,  -229,
     165,   318,  -229,   295,   317,  -229,   462,   183,     6,   315,
     323,   345,  -229,   367,   329,   312,   325,   -39,  -229,  -229,
     346,   350,   351,   462,   478,   478,   288,   288,   462,   462,
     462,   462,   462,   462,   353,   319,   356,  -229,  -229,  -229,
    -229,    58,   344,    87,   377,   376,   358,   216,   396,   402,
     360,   404,  -229,  -229,   405,    58,  -229,  -229,   462,    58,
    -229,   185,   251,   251,  -229,  -229,   211,  -229,  -229,  -229,
    -229,   362,   213,   125,  -229,   146,   202,  -229,   366,  -229,
    -229,   368,   251,   370,  -229,  -229,   204,  -229,   371,  -229
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     8,
       0,    44,    41,    42,    43,    37,     0,    39,     0,     0,
      25,     0,    27,    14,    10,     0,    12,     0,     1,     0,
       0,     0,    35,    32,    33,    34,     0,     0,    54,     0,
      36,    38,    51,     0,     0,    24,    26,     0,     9,    11,
       0,     6,     0,    32,     0,     4,     0,    53,     7,     0,
      58,     0,    40,     0,     0,    30,     0,    15,    17,     0,
       3,     5,    58,    66,     0,     0,    57,     0,    45,    28,
      29,     0,     0,     2,     0,     0,     0,    59,    52,     0,
      49,    58,     0,    31,    16,     0,    20,     0,     0,    65,
       0,     0,    68,     0,     0,    56,     0,     0,     0,     0,
      19,     0,     0,    66,    71,     0,    64,    67,     0,     0,
     103,   106,     0,     0,    82,    83,   108,     0,   107,     0,
       0,     0,     0,     0,    80,    81,     0,    76,     0,     0,
       0,     0,   112,   111,    63,     0,    48,    46,     0,    23,
       0,    18,    58,     0,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    61,     0,
      75,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    50,     0,    13,    22,
       0,     0,    70,     0,     0,   109,   114,     0,     0,   121,
       0,     0,    62,     0,   122,     0,     0,     0,   102,    60,
       0,     0,     0,    91,    92,    94,    93,    95,   101,    96,
      97,    99,    98,   100,   120,     0,     0,    55,    90,    89,
     110,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,    84,     0,     0,    47,    21,   113,     0,
     119,     0,     0,     0,    86,   116,     0,   121,   122,    88,
     120,     0,     0,     0,   118,     0,     0,   115,     0,   117,
     105,     0,     0,     0,    87,    73,     0,    74,     0,    72
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -229,  -229,   420,  -229,   411,  -229,  -229,  -229,  -229,   342,
    -229,  -229,  -229,   417,  -229,   381,    -1,    71,  -229,   427,
    -229,  -229,    30,   -35,   -69,   361,   299,   321,   379,   340,
    -229,   365,  -229,  -229,  -229,   -99,  -136,  -229,  -229,  -229,
    -126,  -228,  -229,   301
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    25,    26,    27,    82,    94,    95,    96,
     148,     7,    21,    22,    64,    65,    36,     8,    16,    17,
      18,    43,    37,    38,    75,    76,   104,   133,     9,    86,
     101,   102,   115,   134,   135,   136,   137,   138,   139,   140,
     141,   197,   142,   143
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     170,   163,    57,    84,    23,   251,   167,    19,   205,   256,
       2,    10,   175,   176,   177,   178,   240,   262,    32,    57,
     241,     4,   107,    32,   179,   180,   181,   182,   183,   184,
     193,   194,   196,   198,    57,   200,   201,    20,   203,    33,
      34,    24,    35,    66,    33,    34,   206,    35,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,    74,
      79,    54,    19,    66,   232,   188,    28,    23,   120,   121,
       2,    74,   120,   121,   149,    39,    60,    29,    31,    61,
      42,    97,    69,   190,   100,    44,    62,    47,    74,    63,
      74,   126,    45,    91,   111,   126,    92,   120,   121,   128,
     100,    52,    50,   128,    48,   248,   130,   196,    88,    89,
     130,   196,   132,   189,     1,    32,   132,   195,    56,   196,
     126,   158,   154,   263,   159,   155,   160,    59,   128,   170,
     170,   175,   176,   177,   178,   130,    33,    34,    67,    35,
     170,   132,   250,   179,   180,   181,   182,   183,   184,   118,
     119,    74,    68,   265,   266,    72,   120,   121,   118,   119,
     122,   271,    73,     1,    77,   120,   121,     2,    78,   122,
     272,     3,   123,   276,    81,   124,   125,    87,     4,   126,
      85,   123,    90,   270,   124,   125,    93,   128,   126,   103,
     129,    98,    89,   127,   130,   131,   128,   146,    89,   129,
     132,    32,   112,   130,   131,   118,   119,   118,   119,   132,
     151,   152,   120,   121,   120,   121,   122,   106,   122,   278,
     226,    89,    53,    34,   113,    35,   120,   121,   123,   273,
     123,   124,   125,   124,   125,   126,   108,   126,   230,   231,
     264,   231,   114,   128,   145,   128,   129,   144,   129,   126,
     130,   131,   130,   131,   118,   119,   132,   128,   132,   147,
     150,   120,   121,   156,   130,   122,   267,   231,   269,   231,
     132,   255,    11,   175,   176,   177,   178,   123,   157,   165,
     124,   125,   161,   162,   126,   179,   180,   181,   182,   183,
     184,   164,   128,    12,    13,   129,    14,   166,    15,   130,
     131,   175,   176,   177,   178,   132,   179,   180,   181,   182,
     183,   184,   168,   179,   180,   181,   182,   183,   184,   171,
     185,   172,   208,   175,   176,   177,   178,   173,   186,   175,
     176,   177,   178,   187,    11,   179,   180,   181,   182,   183,
     184,   179,   180,   181,   182,   183,   184,   152,   192,   199,
     228,   175,   176,   177,   178,    12,    13,   204,    14,   225,
      40,   209,   224,   179,   180,   181,   182,   183,   184,   233,
     227,   238,   229,   175,   176,   177,   178,   246,   234,   175,
     176,   177,   178,   237,   239,   179,   180,   181,   182,   183,
     184,   179,   180,   181,   182,   183,   184,   120,   121,   242,
     235,   249,   252,   243,   253,   244,   257,   245,    51,   247,
      55,   254,   258,   259,   260,   261,    58,   268,    32,   274,
     126,   275,   236,   277,   279,    32,   202,    30,   128,   210,
     211,    70,   212,    71,    32,   130,    49,   110,    46,    33,
      34,   132,    35,    41,    99,    80,    33,    34,    83,    35,
     105,   109,   191,   153,     0,    33,    34,   169,    35,     0,
     116,   174,   175,   176,   177,   178,   117,   207,   175,   176,
     177,   178,     0,     0,   179,   180,   181,   182,   183,   184,
     179,   180,   181,   182,   183,   184,   177,   178,     0,     0,
       0,     0,     0,     0,     0,     0,   179,   180,   181,   182,
     183,   184
};

static const yytype_int16 yycheck[] =
{
     136,   127,    37,    72,    10,   233,   132,    10,    10,   237,
      35,    37,     6,     7,     8,     9,    55,   245,    10,    54,
      59,    46,    91,    10,    18,    19,    20,    21,    22,    23,
     156,   157,   158,   159,    69,   161,   162,    40,   164,    31,
      32,    47,    34,    44,    31,    32,    48,    34,   174,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,    60,
      52,    31,    10,    64,    58,    52,     0,    10,    10,    11,
      35,    72,    10,    11,   109,    54,    54,     6,     7,    57,
      10,    82,    52,   152,    85,    51,    53,    50,    89,    56,
      91,    33,    40,    54,    95,    33,    57,    10,    11,    41,
     101,    30,    51,    41,    47,   231,    48,   233,    55,    56,
      48,   237,    54,   148,    31,    10,    54,    55,    10,   245,
      33,    54,    53,   249,    57,    56,    59,    55,    41,   265,
     266,     6,     7,     8,     9,    48,    31,    32,    10,    34,
     276,    54,    55,    18,    19,    20,    21,    22,    23,     3,
       4,   152,    35,   252,   253,    54,    10,    11,     3,     4,
      14,    15,    51,    31,    11,    10,    11,    35,    10,    14,
      24,    39,    26,   272,    10,    29,    30,    10,    46,    33,
      35,    26,    58,    58,    29,    30,    53,    41,    33,    13,
      44,    55,    56,    38,    48,    49,    41,    55,    56,    44,
      54,    10,    10,    48,    49,     3,     4,     3,     4,    54,
      53,    54,    10,    11,    10,    11,    14,    57,    14,    15,
      55,    56,    31,    32,    51,    34,    10,    11,    26,    27,
      26,    29,    30,    29,    30,    33,    11,    33,    55,    56,
      55,    56,    10,    41,    11,    41,    44,    52,    44,    33,
      48,    49,    48,    49,     3,     4,    54,    41,    54,    58,
      10,    10,    11,    54,    48,    14,    55,    56,    55,    56,
      54,    55,    10,     6,     7,     8,     9,    26,    54,    59,
      29,    30,    54,    54,    33,    18,    19,    20,    21,    22,
      23,    54,    41,    31,    32,    44,    34,    54,    36,    48,
      49,     6,     7,     8,     9,    54,    18,    19,    20,    21,
      22,    23,    12,    18,    19,    20,    21,    22,    23,    53,
      59,    53,    55,     6,     7,     8,     9,    53,    58,     6,
       7,     8,     9,    57,    10,    18,    19,    20,    21,    22,
      23,    18,    19,    20,    21,    22,    23,    54,    10,    10,
      55,     6,     7,     8,     9,    31,    32,    10,    34,    11,
      36,    12,    10,    18,    19,    20,    21,    22,    23,    54,
      52,    59,    55,     6,     7,     8,     9,    58,    55,     6,
       7,     8,     9,    54,    59,    18,    19,    20,    21,    22,
      23,    18,    19,    20,    21,    22,    23,    10,    11,    53,
      55,    57,    25,    53,    28,    54,    10,    54,    29,    53,
      31,    53,    10,    53,    10,    10,    37,    55,    10,    53,
      33,    53,    55,    53,    53,    10,    53,     7,    41,    42,
      43,    52,    45,    54,    10,    48,    25,    95,    21,    31,
      32,    54,    34,    16,    36,    64,    31,    32,    69,    34,
      89,    36,   153,   113,    -1,    31,    32,   136,    34,    -1,
      36,     5,     6,     7,     8,     9,   101,   166,     6,     7,
       8,     9,    -1,    -1,    18,    19,    20,    21,    22,    23,
      18,    19,    20,    21,    22,    23,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    31,    35,    39,    46,    61,    62,    71,    77,    88,
      37,    10,    31,    32,    34,    36,    78,    79,    80,    10,
      40,    72,    73,    10,    47,    63,    64,    65,     0,    77,
      62,    77,    10,    31,    32,    34,    76,    82,    83,    54,
      36,    79,    10,    81,    51,    40,    73,    50,    47,    64,
      51,    88,    77,    31,    82,    88,    10,    83,    88,    55,
      54,    57,    53,    56,    74,    75,    76,    10,    35,    82,
      88,    88,    54,    51,    76,    84,    85,    11,    10,    52,
      75,    10,    66,    88,    84,    35,    89,    10,    55,    56,
      58,    54,    57,    53,    67,    68,    69,    76,    55,    36,
      76,    90,    91,    13,    86,    85,    57,    84,    11,    36,
      69,    76,    10,    51,    10,    92,    36,    91,     3,     4,
      10,    11,    14,    26,    29,    30,    33,    38,    41,    44,
      48,    49,    54,    87,    93,    94,    95,    96,    97,    98,
      99,   100,   102,   103,    52,    11,    55,    58,    70,    83,
      10,    53,    54,    89,    53,    56,    54,    54,    54,    57,
      59,    54,    54,   100,    54,    59,    54,   100,    12,    87,
      96,    53,    53,    53,     5,     6,     7,     8,     9,    18,
      19,    20,    21,    22,    23,    59,    58,    57,    52,    83,
      84,    86,    10,   100,   100,    55,   100,   101,   100,    10,
     100,   100,    53,   100,    10,    10,    48,   103,    55,    12,
      42,    43,    45,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,    10,    11,    55,    52,    55,    55,
      55,    56,    58,    54,    55,    55,    55,    54,    59,    59,
      55,    59,    53,    53,    54,    54,    58,    53,   100,    57,
      55,   101,    25,    28,    53,    55,   101,    10,    10,    53,
      10,    10,   101,   100,    55,    95,    95,    55,    55,    55,
      58,    15,    24,    27,    53,    53,    95,    53,    15,    53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    61,    61,    61,    61,    61,    61,    62,
      62,    63,    63,    64,    65,    65,    66,    66,    67,    68,
      68,    69,    70,    70,    71,    71,    72,    72,    73,    74,
      74,    75,    76,    76,    76,    76,    77,    77,    78,    78,
      79,    80,    80,    80,    80,    81,    81,    81,    81,    81,
      81,    81,    81,    82,    82,    83,    84,    84,    84,    85,
      86,    86,    87,    88,    89,    89,    89,    90,    90,    91,
      92,    92,    93,    93,    94,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    97,
      98,    99,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   101,   101,   102,   102,   102,   102,   102,
     103,   103,   103
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     4,     3,     3,     1,     3,
       2,     2,     1,     8,     1,     3,     2,     0,     3,     2,
       1,     6,     2,     1,     3,     2,     2,     1,     4,     2,
       1,     3,     1,     1,     1,     1,     3,     2,     2,     1,
       3,     1,     1,     1,     1,     3,     6,     9,     6,     4,
       7,     1,     4,     2,     1,     9,     3,     1,     0,     2,
       4,     3,     3,     8,     3,     2,     0,     2,     1,     3,
       3,     1,    10,     8,     8,     2,     1,     2,     2,     2,
       1,     1,     1,     1,     4,     4,     5,     7,     5,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     4,     7,     1,     1,     1,     3,
       4,     1,     1,     3,     1,     6,     5,     6,     6,     5,
       3,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* start: TypeDefBlock ClassDefBlock GdeclBlock FdefBlock MainBlock  */
#line 63 "staticalloc.y"
                                                                        {
                                                printf("Completed - TypeDef , ClassDef, Gdecl, Fdef, Main\n");
                                                FILE *fptr = fopen("out.xsm", "a");
//                                                writeheader(fptr);
                                                writeheader2(fptr);
						codeGen((yyvsp[-3].no), fptr);
						codeGen((yyvsp[-1].no), fptr);
                                        	codeGen((yyvsp[0].no),fptr);
                                                exit(1);
                                        }
#line 1591 "y.tab.c"
    break;

  case 3: /* start: TypeDefBlock ClassDefBlock GdeclBlock MainBlock  */
#line 73 "staticalloc.y"
                                                           {
						printf("Completed - TypeDef, ClassDef, Gdecl, Main\n");
						FILE *fptr = fopen("out.xsm", "a");
  //                                              writeheader(fptr);
                                                writeheader2(fptr);
						codeGen((yyvsp[-2].no), fptr);
						codeGen((yyvsp[0].no), fptr);
						fclose(fptr);
                                                exit(1);
						}
#line 1606 "y.tab.c"
    break;

  case 4: /* start: TypeDefBlock GdeclBlock MainBlock  */
#line 84 "staticalloc.y"
                                            {

						printf("Completed - TypeDef, Gdecl, Main\n");
                                                FILE *fptr = fopen("out.xsm", "a");
    //                                            writeheader(fptr);
                                                writeheader2(fptr);
                                                codeGen((yyvsp[0].no), fptr);
						fclose(fptr);
                                                exit(1);

						}
#line 1622 "y.tab.c"
    break;

  case 5: /* start: TypeDefBlock GdeclBlock FdefBlock MainBlock  */
#line 95 "staticalloc.y"
                                                      {
						printf("Completed - TypeDef,  Gdecl, Fdef,  Main\n");
                                                FILE *fptr = fopen("out.xsm", "a");
      //                                          writeheader(fptr);
                                                writeheader2(fptr);
                                                codeGen((yyvsp[-1].no), fptr);
                                                codeGen((yyvsp[0].no), fptr);
						fclose(fptr);
                                                exit(1);


						}
#line 1639 "y.tab.c"
    break;

  case 6: /* start: ClassDefBlock GdeclBlock MainBlock  */
#line 107 "staticalloc.y"
                                             {
						printf("Completed - ClassDef, Gdecl, Main\n");
                                                FILE *fptr = fopen("out.xsm", "a");
        //                                        writeheader(fptr);
                                                writeheader2(fptr);
                                                codeGen((yyvsp[-2].no), fptr);
                                                codeGen((yyvsp[0].no), fptr);
						fclose(fptr);
                                                exit(1);


						}
#line 1656 "y.tab.c"
    break;

  case 7: /* start: GdeclBlock FdefBlock MainBlock  */
#line 120 "staticalloc.y"
                                         {
      						printf("Completed - Gdecl, Fdef, Main\n");
	      					FILE *fptr = fopen("out.xsm", "a");
	//					writeheader(fptr);
                                                writeheader2(fptr);
						codeGen((yyvsp[-1].no), fptr);
						codeGen((yyvsp[0].no), fptr);
						fclose(fptr);
      						exit(1); 
					}
#line 1671 "y.tab.c"
    break;

  case 8: /* start: MainBlock  */
#line 130 "staticalloc.y"
                                        { 	printf("Completed -  Main\n");
                                                FILE *fptr = fopen("out.xsm", "a");
          //                                      writeheader(fptr);
                                                writeheader2(fptr);
                                                codeGen((yyvsp[0].no), fptr);
						fclose(fptr);
                                                exit(1);
 }
#line 1684 "y.tab.c"
    break;

  case 9: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 142 "staticalloc.y"
                                                {  (yyval.no) = (yyvsp[-1].no);    }
#line 1690 "y.tab.c"
    break;

  case 10: /* ClassDefBlock: CLASS ENDCLASS  */
#line 143 "staticalloc.y"
                                                {  (yyval.no) = NULL;  }
#line 1696 "y.tab.c"
    break;

  case 11: /* ClassDefList: ClassDefList ClassDef  */
#line 146 "staticalloc.y"
                                                { (yyval.no) = createTree(NULL, NULL, NULL, ClBlock,NULL, (yyvsp[-1].no), NULL, (yyvsp[0].no)); }
#line 1702 "y.tab.c"
    break;

  case 12: /* ClassDefList: ClassDef  */
#line 147 "staticalloc.y"
                                                { (yyval.no) = (yyvsp[0].no); }
#line 1708 "y.tab.c"
    break;

  case 13: /* ClassDef: Cname '{' DECL Fieldlists MethodDecl ENDDECL MethodDefns '}'  */
#line 150 "staticalloc.y"
                                                                               { CFindex = 0; CMindex = 0;		/* CFindex for FieldIndex of class , CMindex for MethodIndex*/
					   	          			(yyval.no) = createTree( NULL, NULL, (yyvsp[-7].no)->varname, ClNode, NULL , NULL, NULL, (yyvsp[-1].no));	/* Create class node with method at right*/
										printVirtualTable(Cptr);
										Cptr = NULL;				/* Clear class pointer after a class is parsed */
										}
#line 1718 "y.tab.c"
    break;

  case 14: /* Cname: ID  */
#line 157 "staticalloc.y"
                        { Cptr = CInstall((yyvsp[0].no)->varname, NULL); (yyval.no)=(yyvsp[0].no); }
#line 1724 "y.tab.c"
    break;

  case 15: /* Cname: ID EXTENDS ID  */
#line 158 "staticalloc.y"
                                { Cptr = CInstall((yyvsp[-2].no)->varname, (yyvsp[0].no)->varname); (yyval.no)=(yyvsp[-2].no);}
#line 1730 "y.tab.c"
    break;

  case 16: /* Fieldlists: Fieldlists FId  */
#line 161 "staticalloc.y"
                                 {}
#line 1736 "y.tab.c"
    break;

  case 18: /* FId: TypeName ID ';'  */
#line 165 "staticalloc.y"
                                        { Class_Finstall(Cptr, (yyvsp[-2].Tentry), (yyvsp[-1].no)->varname); }
#line 1742 "y.tab.c"
    break;

  case 19: /* MethodDecl: MethodDecl MDecl  */
#line 168 "staticalloc.y"
                                        {}
#line 1748 "y.tab.c"
    break;

  case 20: /* MethodDecl: MDecl  */
#line 169 "staticalloc.y"
                                        {}
#line 1754 "y.tab.c"
    break;

  case 21: /* MDecl: TypeName ID '(' ParamList ')' ';'  */
#line 172 "staticalloc.y"
                                                    { //if(CMLookup(Cptr, $2->varname)!=NULL){
	       						//yyerror("Method Aleady declared");	/* Install class method to classtable entry */
						//		exit(1);}
							ploc = -3; lloc = 0; Lhead=NULL;
							Class_Minstall(Cptr, (yyvsp[-4].no)->varname, TLookup((yyvsp[-5].Tentry)), (yyvsp[-2].np));}
#line 1764 "y.tab.c"
    break;

  case 22: /* MethodDefns: MethodDefns Fdef  */
#line 179 "staticalloc.y"
                                                { struct Memberfunclist *Mtemp = CMLookup(Cptr, (yyvsp[0].no)->varname);  /* Looking up from classtable and assigning Flabel to the node for codeGen purposes*/
	    					  (yyvsp[0].no)->nodetype = MethodNode; 
 						  (yyvsp[0].no)->val = Mtemp->Flabel; 
						  (yyval.no) = createTree(NULL,FnBlock, NULL,MethodBlock, NULL, (yyvsp[-1].no),NULL, (yyvsp[0].no)); 
						}
#line 1774 "y.tab.c"
    break;

  case 23: /* MethodDefns: Fdef  */
#line 185 "staticalloc.y"
                                                { struct Memberfunclist *Mtemp = CMLookup(Cptr, (yyvsp[0].no)->varname);  
						  (yyvsp[0].no)->nodetype = MethodNode; 
						  (yyvsp[0].no)->val = Mtemp->Flabel; 
						  (yyval.no) = (yyvsp[0].no); 
						}
#line 1784 "y.tab.c"
    break;

  case 24: /* TypeDefBlock: TYPES TypeDefList ENDTYPE  */
#line 194 "staticalloc.y"
                                                { struct Typetable *temp = Thead;
	     					  while(temp!=NULL){					/* Checking valid and assigning Types to Fields of all user defined types */
							struct Fieldlist *Ftemp = temp->fields;
							while(Ftemp !=NULL){				
								struct Typetable *tttemp = TLookup(Ftemp->temp_type);
								if(tttemp == NULL){
									yyerror("Type of member not defined");
								}
								Ftemp->type = tttemp;
								Ftemp = Ftemp->next;}
							
							temp = temp->next;}
						}
#line 1802 "y.tab.c"
    break;

  case 25: /* TypeDefBlock: TYPES ENDTYPE  */
#line 207 "staticalloc.y"
                                                {}
#line 1808 "y.tab.c"
    break;

  case 27: /* TypeDefList: TypeDef  */
#line 210 "staticalloc.y"
                                                {}
#line 1814 "y.tab.c"
    break;

  case 28: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 213 "staticalloc.y"
                                                { 
	                                         Tinstall((yyvsp[-3].no)->varname, size, (yyvsp[-1].fl)); 	/* Create TypeTable entry for user defined type */
	 					 size = 0;
  					   	 Findex=0;
						}
#line 1824 "y.tab.c"
    break;

  case 29: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 220 "staticalloc.y"
                                                { (yyvsp[0].fl)->next = (yyvsp[-1].fl);
		      				  (yyval.fl) = (yyvsp[0].fl);				/* Linking fields of user defined types */
						  FieldNo++;
						  if(FieldNo>=8){
							yyerror("Number of fields cannot exceed 8\n");	/* Checking max number of fields = 8 */
							exit(1);}}
#line 1835 "y.tab.c"
    break;

  case 30: /* FieldDeclList: FieldDecl  */
#line 227 "staticalloc.y"
                                                {  FieldNo = 0; (yyval.fl)=(yyvsp[0].fl); }
#line 1841 "y.tab.c"
    break;

  case 31: /* FieldDecl: TypeName ID ';'  */
#line 230 "staticalloc.y"
                                 { 

				size=size+1;
				(yyval.fl) = Finstall((yyvsp[-1].no)->varname, (yyvsp[-2].Tentry)); }
#line 1850 "y.tab.c"
    break;

  case 32: /* TypeName: INT  */
#line 236 "staticalloc.y"
                    { (yyval.Tentry) = "INT"; }
#line 1856 "y.tab.c"
    break;

  case 33: /* TypeName: STR  */
#line 237 "staticalloc.y"
                    { (yyval.Tentry) = "STR"; }
#line 1862 "y.tab.c"
    break;

  case 34: /* TypeName: VOID  */
#line 238 "staticalloc.y"
                     { (yyval.Tentry) = "VOID"; }
#line 1868 "y.tab.c"
    break;

  case 35: /* TypeName: ID  */
#line 239 "staticalloc.y"
                    {  (yyval.Tentry) = (yyvsp[0].no)->varname; }
#line 1874 "y.tab.c"
    break;

  case 37: /* GdeclBlock: DECL ENDDECL  */
#line 247 "staticalloc.y"
                                                   {}
#line 1880 "y.tab.c"
    break;

  case 39: /* GdeclList: Gdecl  */
#line 250 "staticalloc.y"
                                    {}
#line 1886 "y.tab.c"
    break;

  case 40: /* Gdecl: Type GidList ';'  */
#line 253 "staticalloc.y"
                                        { 
     						while((yyvsp[-1].no) != NULL) {
			     				struct Gsymbol* temp = Lookup((yyvsp[-1].no)->varname);
							temp->type = (yyvsp[-2].th)->Ttype;
							temp->Ctype = (yyvsp[-2].th)->Ctype;
							if(temp->Ctype != NULL){
								temp->vfuncbinding = getnextadd();;
							}
							(yyvsp[-1].no) = (yyvsp[-1].no)->left;}
					}
#line 1901 "y.tab.c"
    break;

  case 41: /* Type: INT  */
#line 267 "staticalloc.y"
                                        { (yyval.th) = createTypeholder(TLookup("INT"), NULL); }
#line 1907 "y.tab.c"
    break;

  case 42: /* Type: STR  */
#line 268 "staticalloc.y"
                                        { (yyval.th)= createTypeholder(TLookup("STR"), NULL) ; }
#line 1913 "y.tab.c"
    break;

  case 43: /* Type: VOID  */
#line 269 "staticalloc.y"
                                        { (yyval.th)=createTypeholder(TLookup("VOID"),NULL); }
#line 1919 "y.tab.c"
    break;

  case 44: /* Type: ID  */
#line 270 "staticalloc.y"
                                        { struct Typetable *Ttemp = TLookup((yyvsp[0].no)->varname);
					  if(Ttemp == NULL){
						struct Classtable *Ctemp = CLookup((yyvsp[0].no)->varname);
						(yyval.th)= createTypeholder(NULL, Ctemp);
						
					  }
					  else{
						(yyval.th) = createTypeholder(Ttemp, NULL);
						
						}
						}
#line 1935 "y.tab.c"
    break;

  case 45: /* GidList: GidList ',' ID  */
#line 284 "staticalloc.y"
                                        {
       						if(Lookup((yyvsp[0].no)->varname) != NULL){
			                                yyerror("Variable already declared");   
			                                exit(1);}     
					  	Install((yyvsp[0].no)->varname, NULL, 1,1, NULL, NULL); (yyvsp[0].no)->left = (yyvsp[-2].no); (yyval.no)=(yyvsp[0].no); }
#line 1945 "y.tab.c"
    break;

  case 46: /* GidList: GidList ',' ID '[' NUM ']'  */
#line 290 "staticalloc.y"
                                        {
						 if(Lookup((yyvsp[-3].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                         Install((yyvsp[-3].no)->varname, NULL,(yyvsp[-1].no)->val, 1, NULL, NULL); (yyvsp[-3].no)->left = (yyvsp[-5].no); (yyval.no)=(yyvsp[-3].no);
						 address= address + ((yyvsp[-1].no)->val-1);}
#line 1956 "y.tab.c"
    break;

  case 47: /* GidList: GidList ',' ID '[' NUM ']' '[' NUM ']'  */
#line 296 "staticalloc.y"
                                              { 
						if(Lookup((yyvsp[-6].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-6].no)->varname, NULL, (yyvsp[-4].no)->val, (yyvsp[-1].no)->val, NULL, NULL); (yyvsp[-6].no)->left = (yyvsp[-8].no); (yyval.no)=(yyvsp[-6].no);
                        			address= address + (((yyvsp[-4].no)->val*(yyvsp[-1].no)->val)-1);}
#line 1967 "y.tab.c"
    break;

  case 48: /* GidList: GidList ',' ID '(' ParamList ')'  */
#line 302 "staticalloc.y"
                                                {
                                                if(Lookup((yyvsp[-3].no)->varname)!=NULL){
                                                        yyerror("Function name already declared");
                                                        exit(1);}
                                                Install((yyvsp[-3].no)->varname, NULL, 1, 1,(yyvsp[-1].np), getFlabel()); (yyvsp[-3].no)->left = (yyvsp[-5].no);  (yyval.no) = (yyvsp[-3].no);
						ploc=-3; lloc=0; Lhead=NULL;
						 }
#line 1979 "y.tab.c"
    break;

  case 49: /* GidList: ID '[' NUM ']'  */
#line 312 "staticalloc.y"
                                        { 
						if(Lookup((yyvsp[-3].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-3].no)->varname, NULL,(yyvsp[-1].no)->val, 1, NULL, NULL); (yyval.no) = (yyvsp[-3].no);
						address = address + ((yyvsp[-1].no)->val-1); }
#line 1990 "y.tab.c"
    break;

  case 50: /* GidList: ID '[' NUM ']' '[' NUM ']'  */
#line 318 "staticalloc.y"
                                        {
						if(Lookup((yyvsp[-6].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-6].no)->varname, NULL,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val, NULL, NULL); (yyval.no) = (yyvsp[-6].no);
			                        address = address + (((yyvsp[-4].no)->val*(yyvsp[-1].no)->val)-1); }
#line 2001 "y.tab.c"
    break;

  case 51: /* GidList: ID  */
#line 325 "staticalloc.y"
                                        {
						 if(Lookup((yyvsp[0].no)->varname) != NULL){
							yyerror("Variable name already declared");
							exit(1);}	
						Install((yyvsp[0].no)->varname, NULL,1, 1, NULL, NULL); (yyval.no) = (yyvsp[0].no); }
#line 2011 "y.tab.c"
    break;

  case 52: /* GidList: ID '(' ParamList ')'  */
#line 331 "staticalloc.y"
                                        {
						if(Lookup((yyvsp[-3].no)->varname)!=NULL){
							yyerror("Function name already declared");
							exit(1);}
						Install((yyvsp[-3].no)->varname, NULL, 1, 1,(yyvsp[-1].np), getFlabel()); (yyval.no) = (yyvsp[-3].no);
						ploc=-3; lloc=0; Lhead=NULL;
					}
#line 2023 "y.tab.c"
    break;

  case 53: /* FdefBlock: FdefBlock Fdef  */
#line 342 "staticalloc.y"
                                                                { (yyval.no) = createTree(NULL,FnBlock, NULL,FnBlock, NULL, (yyvsp[-1].no),NULL, (yyvsp[0].no));}
#line 2029 "y.tab.c"
    break;

  case 54: /* FdefBlock: Fdef  */
#line 343 "staticalloc.y"
                                                                { (yyval.no) = (yyvsp[0].no); }
#line 2035 "y.tab.c"
    break;

  case 55: /* Fdef: TypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 345 "staticalloc.y"
                                                                { checkvalid(TLookup((yyvsp[-8].Tentry)), (yyvsp[-5].np), (yyvsp[-7].no)->varname, Cptr); 
      								  ploc=-3; lloc=0; 
								  struct tnode *temp = (yyvsp[-1].no)->left;
								  (yyvsp[-1].no)->left = NULL;
								  (yyval.no) = createTree( NULL, NULL, (yyvsp[-7].no)->varname, FnNode, Lookup((yyvsp[-7].no)->varname), temp, NULL, (yyvsp[-1].no));
								  (yyval.no)->Lentry = Lhead;
								  Lhead = NULL;
								}
#line 2048 "y.tab.c"
    break;

  case 56: /* ParamList: ParamList ',' Param  */
#line 355 "staticalloc.y"
                                        { 	Pcheck((yyvsp[-2].np), (yyvsp[0].np));
						(yyvsp[0].np)->next = (yyvsp[-2].np); (yyval.np) = (yyvsp[0].np); Linstall((yyvsp[0].np)->name, (yyvsp[0].np)->type, ploc--); 
					}
#line 2056 "y.tab.c"
    break;

  case 57: /* ParamList: Param  */
#line 359 "staticalloc.y"
                                        { 
					  (yyval.np) = (yyvsp[0].np); Linstall((yyvsp[0].np)->name, (yyvsp[0].np)->type, ploc--); 
					}
#line 2064 "y.tab.c"
    break;

  case 58: /* ParamList: %empty  */
#line 362 "staticalloc.y"
                                        { (yyval.np) = NULL; }
#line 2070 "y.tab.c"
    break;

  case 59: /* Param: TypeName ID  */
#line 365 "staticalloc.y"
                                                { (yyval.np) = Pinstall((yyvsp[0].no)->varname, TLookup((yyvsp[-1].Tentry)), NULL); }
#line 2076 "y.tab.c"
    break;

  case 60: /* Body: BEG Stlist Retstmt END  */
#line 368 "staticalloc.y"
                                        { (yyvsp[-1].no)->left=(yyvsp[-2].no); (yyval.no) = (yyvsp[-1].no); }
#line 2082 "y.tab.c"
    break;

  case 61: /* Body: BEG Retstmt END  */
#line 369 "staticalloc.y"
                                        { (yyvsp[-1].no)->left = NULL; (yyval.no) = (yyvsp[-1].no); }
#line 2088 "y.tab.c"
    break;

  case 62: /* Retstmt: RET E ';'  */
#line 372 "staticalloc.y"
                                        { (yyval.no) = createTree(NULL, RetNode, NULL, RetNode, NULL, NULL, NULL, (yyvsp[-1].no)); }
#line 2094 "y.tab.c"
    break;

  case 63: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 373 "staticalloc.y"
                                                                { 	ploc=-3; lloc=0;
	  								struct tnode* temp = (yyvsp[-1].no)->left;
									(yyvsp[-1].no)->left = NULL;
	  								(yyval.no) = createTree(NULL, NULL, "main", MnNode, NULL, temp, NULL,(yyvsp[-1].no));
									(yyval.no)->Lentry = Lhead;
									Lhead = NULL; }
#line 2105 "y.tab.c"
    break;

  case 64: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 381 "staticalloc.y"
                                        {	if (Cptr != NULL){
	   						Linstall("Vfuncptr", TLookup("VOID"), ploc--);
	   						Linstall("self", TLookup("VOID"), ploc--);
						}
					}
#line 2115 "y.tab.c"
    break;

  case 65: /* LdeclBlock: DECL ENDDECL  */
#line 386 "staticalloc.y"
                                        {
						if (Cptr != NULL){
	   						Linstall("Vfuncptr", TLookup("VOID"), ploc--);
                                               	 	Linstall("self", TLookup("VOID"), ploc--);
                                                }

						}
#line 2127 "y.tab.c"
    break;

  case 66: /* LdeclBlock: %empty  */
#line 393 "staticalloc.y"
                                        { if (Cptr != NULL){
	   						Linstall("Vfuncptr", TLookup("VOID"), ploc--);
                                                        Linstall("self", TLookup("VOID"), ploc--);
                                                }
					}
#line 2137 "y.tab.c"
    break;

  case 67: /* LDecList: LDecList LDecl  */
#line 400 "staticalloc.y"
                                        {}
#line 2143 "y.tab.c"
    break;

  case 68: /* LDecList: LDecl  */
#line 401 "staticalloc.y"
                                        {}
#line 2149 "y.tab.c"
    break;

  case 69: /* LDecl: TypeName IdList ';'  */
#line 404 "staticalloc.y"
                                                {	struct tnode* ttemp = (yyvsp[-1].no);
                                                while(ttemp != NULL) {
							struct Lsymbol* Ltemp = Llookup(ttemp->varname);
							if(Ltemp->binding>0){
                                                        Ltemp->type = TLookup((yyvsp[-2].Tentry));}
                                                        ttemp=ttemp->left;}
                                        }
#line 2161 "y.tab.c"
    break;

  case 70: /* IdList: IdList ',' ID  */
#line 413 "staticalloc.y"
                                        { if(Llookup((yyvsp[0].no)->varname)!=NULL){
       						yyerror("Local variable already declared");
						exit(1);}
				          if(Cptr != NULL){
						if(CFLookup(Cptr, (yyvsp[0].no)->varname) != NULL){
							yyerror("Local variables cannot be class variables");
							exit(1);
						}	
					  }
					  Linstall((yyvsp[0].no)->varname, NULL, ++lloc); (yyvsp[0].no)->left = (yyvsp[-2].no); (yyval.no)=(yyvsp[0].no); }
#line 2176 "y.tab.c"
    break;

  case 71: /* IdList: ID  */
#line 423 "staticalloc.y"
                                        { if(Llookup((yyvsp[0].no)->varname)!=NULL){
                                                yyerror("Local variable already declared");
                                                exit(1);} 
					  if(Cptr != NULL){
						if(CFLookup(Cptr, (yyvsp[0].no)->varname) != NULL){
							yyerror("Local variables cannot be class variables");
						}
		
					 }
					  Linstall((yyvsp[0].no)->varname, NULL, ++lloc); (yyval.no)=(yyvsp[0].no); }
#line 2191 "y.tab.c"
    break;

  case 72: /* Ifstmt: IF '(' E ')' THEN Stlist ELSE Stlist ENDIF ';'  */
#line 436 "staticalloc.y"
                                                              {  (yyval.no) = createIfNode((yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no)); }
#line 2197 "y.tab.c"
    break;

  case 73: /* Ifstmt: IF '(' E ')' THEN Stlist ENDIF ';'  */
#line 437 "staticalloc.y"
                                                              { (yyval.no) = createIfNode((yyvsp[-5].no), (yyvsp[-2].no), NULL); }
#line 2203 "y.tab.c"
    break;

  case 74: /* Whilestmt: WHILE '(' E ')' DO Stlist ENDWHILE ';'  */
#line 440 "staticalloc.y"
                                                          { (yyval.no) = createWhileNode((yyvsp[-5].no), (yyvsp[-2].no)); }
#line 2209 "y.tab.c"
    break;

  case 75: /* Stlist: Stlist Stmt  */
#line 443 "staticalloc.y"
                        { (yyval.no) = createTree(NULL,3, NULL,3, NULL, (yyvsp[-1].no),NULL, (yyvsp[0].no)); }
#line 2215 "y.tab.c"
    break;

  case 76: /* Stlist: Stmt  */
#line 444 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 2221 "y.tab.c"
    break;

  case 77: /* Stmt: InputStmt ';'  */
#line 447 "staticalloc.y"
                        { (yyval.no) = (yyvsp[-1].no); }
#line 2227 "y.tab.c"
    break;

  case 78: /* Stmt: OutputStmt ';'  */
#line 448 "staticalloc.y"
                           {(yyval.no) = (yyvsp[-1].no); }
#line 2233 "y.tab.c"
    break;

  case 79: /* Stmt: AsgStmt ';'  */
#line 449 "staticalloc.y"
                        { (yyval.no) = (yyvsp[-1].no); }
#line 2239 "y.tab.c"
    break;

  case 80: /* Stmt: Ifstmt  */
#line 450 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 2245 "y.tab.c"
    break;

  case 81: /* Stmt: Whilestmt  */
#line 451 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 2251 "y.tab.c"
    break;

  case 82: /* Stmt: BREAK  */
#line 452 "staticalloc.y"
                       { (yyval.no) = createTree(NULL, NULL, NULL, 10,NULL, NULL, NULL, NULL); }
#line 2257 "y.tab.c"
    break;

  case 83: /* Stmt: CONTINUE  */
#line 453 "staticalloc.y"
                       { (yyval.no) = createTree(NULL, NULL, NULL, 11,NULL, NULL, NULL, NULL); }
#line 2263 "y.tab.c"
    break;

  case 84: /* Stmt: E EQ ALLOC ';'  */
#line 454 "staticalloc.y"
                                { (yyval.no) = createAllocNode((yyvsp[-3].no)); }
#line 2269 "y.tab.c"
    break;

  case 85: /* Stmt: E EQ INIT ';'  */
#line 455 "staticalloc.y"
                        { (yyval.no) = createInitNode((yyvsp[-3].no)); }
#line 2275 "y.tab.c"
    break;

  case 86: /* Stmt: FREE '(' E ')' ';'  */
#line 456 "staticalloc.y"
                             { (yyval.no) = createFreeNode((yyvsp[-4].no)); }
#line 2281 "y.tab.c"
    break;

  case 87: /* Stmt: E EQ NEW '(' ID ')' ';'  */
#line 457 "staticalloc.y"
                                  { (yyvsp[-6].no)->nodetype = Cobj; (yyval.no) = createNewNode((yyvsp[-6].no), (yyvsp[-2].no)->varname);	}
#line 2287 "y.tab.c"
    break;

  case 88: /* Stmt: DELETE '(' Field ')' ';'  */
#line 458 "staticalloc.y"
                                   { (yyval.no) = createDelNode((yyvsp[-2].no)); }
#line 2293 "y.tab.c"
    break;

  case 89: /* InputStmt: READ '(' E ')'  */
#line 461 "staticalloc.y"
                           { (yyval.no) =createIONode(-1,"Read",(yyvsp[-1].no));}
#line 2299 "y.tab.c"
    break;

  case 90: /* OutputStmt: WRITE '(' E ')'  */
#line 464 "staticalloc.y"
                             { (yyval.no) = createIONode(-2,"Write",(yyvsp[-1].no)); }
#line 2305 "y.tab.c"
    break;

  case 91: /* AsgStmt: E EQ E  */
#line 468 "staticalloc.y"
                  { (yyval.no) = createEQNode((yyvsp[-2].no), (yyvsp[0].no)); }
#line 2311 "y.tab.c"
    break;

  case 92: /* E: E PLUS E  */
#line 471 "staticalloc.y"
                { (yyval.no) = createOpNode("ADD",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2317 "y.tab.c"
    break;

  case 93: /* E: E MUL E  */
#line 472 "staticalloc.y"
                { (yyval.no) = createOpNode("MUL",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2323 "y.tab.c"
    break;

  case 94: /* E: E MINUS E  */
#line 473 "staticalloc.y"
                { (yyval.no) = createOpNode("SUB",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2329 "y.tab.c"
    break;

  case 95: /* E: E DIV E  */
#line 474 "staticalloc.y"
                { (yyval.no) = createOpNode("DIV",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2335 "y.tab.c"
    break;

  case 96: /* E: E EQU E  */
#line 475 "staticalloc.y"
                { (yyval.no) = createOpNode("EQ",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2341 "y.tab.c"
    break;

  case 97: /* E: E LT E  */
#line 476 "staticalloc.y"
                { (yyval.no) = createOpNode("LT",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2347 "y.tab.c"
    break;

  case 98: /* E: E GT E  */
#line 477 "staticalloc.y"
                { (yyval.no) = createOpNode("GT",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2353 "y.tab.c"
    break;

  case 99: /* E: E LTE E  */
#line 478 "staticalloc.y"
                { (yyval.no) = createOpNode("LE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2359 "y.tab.c"
    break;

  case 100: /* E: E GTE E  */
#line 479 "staticalloc.y"
                { (yyval.no) = createOpNode("GE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2365 "y.tab.c"
    break;

  case 101: /* E: E NE E  */
#line 480 "staticalloc.y"
                { (yyval.no) = createOpNode("NE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2371 "y.tab.c"
    break;

  case 102: /* E: '(' E ')'  */
#line 481 "staticalloc.y"
                { (yyval.no) = (yyvsp[-1].no); }
#line 2377 "y.tab.c"
    break;

  case 103: /* E: ID  */
#line 482 "staticalloc.y"
                { 
		  if(Llookup((yyvsp[0].no)->varname)==NULL){
			if(Lookup((yyvsp[0].no)->varname) == NULL){
				printf((yyvsp[0].no)->varname);
	                        yyerror("Variable not declared\n");
        	                exit(1); }
			(yyvsp[0].no)->type = Lookup((yyvsp[0].no)->varname)->type;
			(yyvsp[0].no)->Ctype = Lookup((yyvsp[0].no)->varname)->Ctype;
                        (yyvsp[0].no)->Gentry = Lookup((yyvsp[0].no)->varname);
			(yyvsp[0].no)->Lentry = NULL;
                        (yyval.no) = (yyvsp[0].no); }
		  else{
			struct Lsymbol* Ltemp = Llookup((yyvsp[0].no)->varname);
		
			(yyvsp[0].no)->type = Ltemp->type;
			(yyvsp[0].no)->Gentry = NULL;
			(yyvsp[0].no)->Lentry = Ltemp;
		
			(yyval.no) = (yyvsp[0].no);
		   }
		}
#line 2403 "y.tab.c"
    break;

  case 104: /* E: ID '[' E ']'  */
#line 503 "staticalloc.y"
                 { if(Lookup((yyvsp[-3].no)->varname) == NULL){
                        yyerror("Variable not declared\n");
                        exit(1); }
                        (yyvsp[-3].no)->nodetype = arType;
			(yyvsp[-3].no)->type = Lookup((yyvsp[-3].no)->varname)->type;
                        (yyvsp[-3].no)->Gentry = Lookup((yyvsp[-3].no)->varname);
			(yyvsp[-3].no)->left = (yyvsp[-1].no);
                        (yyval.no) = (yyvsp[-3].no); }
#line 2416 "y.tab.c"
    break;

  case 105: /* E: ID '[' E ']' '[' E ']'  */
#line 512 "staticalloc.y"
                           { if(Lookup((yyvsp[-6].no)->varname)==NULL){

				   yyerror("Variable not declared\n");
				   exit(1);
				}
				(yyvsp[-6].no)->nodetype = matType;

				(yyvsp[-6].no)->type = Lookup((yyvsp[-6].no)->varname)->type;
				(yyvsp[-6].no)->Gentry = Lookup((yyvsp[-6].no)->varname);
				(yyvsp[-6].no)->left = (yyvsp[-4].no);
				(yyvsp[-6].no)->right = (yyvsp[-1].no);
				(yyval.no) = (yyvsp[-6].no); }
#line 2433 "y.tab.c"
    break;

  case 106: /* E: NUM  */
#line 525 "staticalloc.y"
                { (yyval.no) = (yyvsp[0].no); }
#line 2439 "y.tab.c"
    break;

  case 107: /* E: LIT  */
#line 526 "staticalloc.y"
                { (yyval.no) = (yyvsp[0].no); }
#line 2445 "y.tab.c"
    break;

  case 108: /* E: NUL  */
#line 527 "staticalloc.y"
                { (yyval.no) = createTree(0, TLookup("VOID"), NULL, 0, NULL, NULL, NULL, NULL); }
#line 2451 "y.tab.c"
    break;

  case 109: /* E: ID '(' ')'  */
#line 528 "staticalloc.y"
                        {
				if(Lookup((yyvsp[-2].no)->varname) == NULL){
                                        yyerror("Function not declared before calling \n");
                                        exit(1);
                                }
				(yyvsp[-2].no)->nodetype = FnCall;
				(yyvsp[-2].no)->Gentry = Lookup((yyvsp[-2].no)->varname);
				checkvalidfncall((yyvsp[-2].no)->Gentry, NULL);
				(yyvsp[-2].no)->type = (yyvsp[-2].no)->Gentry->type;
				(yyvsp[-2].no)->left = NULL;
				(yyval.no) = (yyvsp[-2].no);
}
#line 2468 "y.tab.c"
    break;

  case 110: /* E: ID '(' ArgList ')'  */
#line 541 "staticalloc.y"
                                { 
				if(Lookup((yyvsp[-3].no)->varname) == NULL){
					yyerror("Function not declared before calling \n");
					exit(1);
				}	
				(yyvsp[-3].no)->nodetype = FnCall;
				(yyvsp[-3].no)->Gentry = Lookup((yyvsp[-3].no)->varname);
				checkvalidfncall((yyvsp[-3].no)->Gentry, (yyvsp[-1].no));
				(yyvsp[-3].no)->type = (yyvsp[-3].no)->Gentry->type;
				(yyvsp[-3].no)->middle = (yyvsp[-1].no);
				(yyval.no) = (yyvsp[-3].no);
				}
#line 2485 "y.tab.c"
    break;

  case 111: /* E: Field  */
#line 553 "staticalloc.y"
                                { checkifFieldisClass((yyvsp[0].no)); (yyval.no) = (yyvsp[0].no); }
#line 2491 "y.tab.c"
    break;

  case 112: /* E: Method  */
#line 554 "staticalloc.y"
                                { (yyval.no) = (yyvsp[0].no); }
#line 2497 "y.tab.c"
    break;

  case 113: /* ArgList: ArgList ',' E  */
#line 557 "staticalloc.y"
                                { (yyvsp[0].no)->middle = (yyvsp[-2].no); (yyval.no)=(yyvsp[0].no);}
#line 2503 "y.tab.c"
    break;

  case 114: /* ArgList: E  */
#line 558 "staticalloc.y"
                                { (yyval.no)=(yyvsp[0].no); }
#line 2509 "y.tab.c"
    break;

  case 115: /* Method: SELF '.' ID '(' ArgList ')'  */
#line 562 "staticalloc.y"
                                     {
       					if(Cptr == NULL){
                                        yyerror("Self cannot be used outside a class");
                                        exit(1);}
					
	                                struct Memberfunclist * Mtemp = CMLookup(Cptr, (yyvsp[-3].no)->varname);
	                                if(Mtemp == NULL){
                	                                yyerror("Function not a member function of the class \n");
                        	                        exit(1);
                                	        }
					(yyvsp[-3].no)->middle = (yyvsp[-1].no);
					(yyvsp[-3].no)->val = Mtemp->Funcposition;
					(yyvsp[-3].no)->nodetype = SelfMethodCall;
					checkvalidmethodcall((yyvsp[-3].no)->varname, (yyvsp[-1].no), Mtemp);
        	                        (yyval.no) = createTree(NULL, NULL, "self", SelfFnNode, NULL, NULL, NULL, (yyvsp[-3].no));   
					(yyval.no)->Lentry = Llookup("self");
                                        	(yyval.no)->type = Mtemp->type;
					
	                                }
#line 2533 "y.tab.c"
    break;

  case 116: /* Method: SELF '.' ID '(' ')'  */
#line 581 "staticalloc.y"
                              {
					if(Cptr == NULL){
                                        yyerror("Self cannot be used outside a class");
                                        exit(1);}
					struct Memberfunclist * Mtemp = CMLookup(Cptr, (yyvsp[-2].no)->varname);
                                        if(Mtemp == NULL){
                                                        yyerror("Function not a member function of the class \n");
                                                        exit(1);
                                                }
					(yyvsp[-2].no)->middle = NULL;
					(yyvsp[-2].no)->val = Mtemp->Funcposition;
					(yyvsp[-2].no)->nodetype = SelfMethodCall;
					checkvalidmethodcall((yyvsp[-2].no)->varname, NULL, Mtemp);
                                        (yyval.no) = createTree(NULL, NULL, "self", SelfFnNode, NULL, NULL, NULL, (yyvsp[-2].no));
                                        (yyval.no)->Lentry = Llookup("self");
					
                                                (yyval.no)->type = Mtemp->type;


				}
#line 2558 "y.tab.c"
    break;

  case 117: /* Method: Field '.' ID '(' ArgList ')'  */
#line 601 "staticalloc.y"
                                       {	if((yyvsp[-5].no)->nodetype = FieldNode){
							if(Cptr == NULL){
								if((yyvsp[-5].no)->varname == "self"){
									yyerror("Self cannot be used outside a class\n");
									exit(1);}
							(yyvsp[-5].no)->nodetype = MethodCall;}
							else{
							(yyvsp[-5].no)->nodetype = SelfFnNode;
							}
						}
						struct tnode* temp = (yyvsp[-5].no);
                                                        while(temp->right!=NULL){
                                                                temp = temp->right;}
						temp->right = (yyvsp[-3].no);
					if(temp->Ctype == NULL){
						printf(temp->varname);
						yyerror("Variable not a class object\n");
						exit(1);
					}
					struct Gsymbol *Gtemp = NULL;
					if((yyvsp[-5].no)->nodetype  == MethodCall){
						Gtemp = Lookup(temp->varname);
			
					}
					struct Memberfunclist *Mtemp = CMLookup(temp->Ctype, (yyvsp[-3].no)->varname);
					if(Mtemp == NULL){
						yyerror("Method not a member of class\n");
						exit(1);
					}
					(yyvsp[-5].no)->type = Mtemp->type;
					(yyvsp[-3].no)->middle = (yyvsp[-1].no);
					if((yyvsp[-5].no)->nodetype == SelfFnNode){
					(yyvsp[-3].no)->val = Mtemp->Funcposition;
					(yyvsp[-3].no)->nodetype = SelfMethodCall;}
					else{
					(yyvsp[-3].no)->val = Mtemp->Funcposition;
					(yyvsp[-3].no)->nodetype = MethodCall;
					}
					checkvalidmethodcall((yyvsp[-3].no)->varname, (yyvsp[-1].no), Mtemp);
					(yyval.no) = (yyvsp[-5].no);
					}
#line 2604 "y.tab.c"
    break;

  case 118: /* Method: ID '.' ID '(' ArgList ')'  */
#line 643 "staticalloc.y"
                                    { 
					(yyvsp[-5].no)->right = (yyvsp[-3].no); 
					struct Gsymbol *Gtemp = Lookup((yyvsp[-5].no)->varname);
					if(Gtemp == NULL){
						printf((yyvsp[-5].no)->varname);
						yyerror("Variable not declared \n");
						exit(1);
					}
					(yyvsp[-5].no)->type = Gtemp->type;
					(yyvsp[-5].no)->Ctype = Gtemp->Ctype;
					(yyvsp[-5].no)->Gentry = Gtemp;
					(yyvsp[-5].no)->Lentry = NULL;
	
					struct Memberfunclist *Mtemp = CMLookup((yyvsp[-5].no)->Ctype, (yyvsp[-3].no)->varname);
					if(Mtemp == NULL){
						yyerror("Method not a member of class\n");
						exit(1);
					}
					(yyvsp[-5].no)->type = Mtemp->type;
					(yyvsp[-5].no)->nodetype = MethodCall;
					(yyvsp[-3].no)->val = Mtemp->Funcposition;
					checkvalidmethodcall((yyvsp[-3].no)->varname, (yyvsp[-1].no), Mtemp);
					(yyvsp[-3].no)->middle = (yyvsp[-1].no);
					(yyvsp[-5].no)->right = (yyvsp[-3].no);
					(yyvsp[-3].no)->nodetype = MethodCall;
					(yyval.no) = (yyvsp[-5].no);
					}
#line 2636 "y.tab.c"
    break;

  case 119: /* Method: ID '.' ID '(' ')'  */
#line 670 "staticalloc.y"
                            {
					(yyvsp[-4].no)->right = (yyvsp[-2].no);
                                        struct Gsymbol *Gtemp = Lookup((yyvsp[-4].no)->varname);
                                        if(Gtemp == NULL){
						printf((yyvsp[-4].no)->varname);
                                                yyerror("Variable not declared \n");
                                                exit(1);
                                        }
                                        (yyvsp[-4].no)->type = Gtemp->type;
                                        (yyvsp[-4].no)->Ctype = Gtemp->Ctype;
                                        (yyvsp[-4].no)->Gentry = Gtemp;
                                        (yyvsp[-4].no)->Lentry = NULL;

                                        struct Memberfunclist *Mtemp = CMLookup((yyvsp[-4].no)->Ctype, (yyvsp[-2].no)->varname);
                                        if(Mtemp == NULL){
                                                yyerror("Method not a member of class\n");
                                                exit(1);
                                        }
                                        (yyvsp[-4].no)->type = Mtemp->type;
                                        (yyvsp[-4].no)->nodetype = MethodCall;
					(yyvsp[-2].no)->middle = NULL;
					(yyvsp[-2].no)->val = Mtemp->Funcposition;
					checkvalidmethodcall((yyvsp[-2].no)->varname, NULL, Mtemp);
					(yyvsp[-4].no)->right = (yyvsp[-2].no);
					(yyvsp[-2].no)->nodetype = MethodCall;
                                        (yyval.no) = (yyvsp[-4].no);

				}
#line 2669 "y.tab.c"
    break;

  case 120: /* Field: Field '.' ID  */
#line 699 "staticalloc.y"
                        { 				struct tnode* temp = (yyvsp[-2].no); 
							while(temp->right!=NULL){
 								temp = temp->right;}
							struct Fieldlist *Ftemp = FLookup(temp->type, temp->Ctype, (yyvsp[0].no)->varname);
							if(Ftemp == NULL){
								yyerror("Field is not a member of the datatype");
								exit(1);}
							(yyvsp[0].no)->type = Ftemp->type;
							(yyvsp[0].no)->val = Ftemp->fieldIndex;
							(yyvsp[-2].no)->type = Ftemp->type;
							temp->right = (yyvsp[0].no);
							 (yyval.no) =  (yyvsp[-2].no);}
#line 2686 "y.tab.c"
    break;

  case 121: /* Field: ID '.' ID  */
#line 711 "staticalloc.y"
                        { (yyvsp[-2].no)->right = (yyvsp[0].no); 
					
				struct Gsymbol *Gtemp = Lookup((yyvsp[-2].no)->varname);
				struct Lsymbol *Ltemp = Llookup((yyvsp[-2].no)->varname);
				if(Ltemp==NULL){
					if(Gtemp==NULL){
						printf("%s - ", (yyvsp[-2].no)->varname);
		                                yyerror("Variable not declared\n");
	        	                        exit(1); }
					(yyvsp[-2].no)->type = Gtemp->type;
					(yyvsp[-2].no)->Ctype = Gtemp->Ctype;
					(yyvsp[-2].no)->Gentry= Gtemp;
					(yyvsp[-2].no)->Lentry= NULL;}	
				else{
	                        struct Lsymbol* Ltemp = Llookup((yyvsp[-2].no)->varname);

	                        (yyvsp[-2].no)->type = Ltemp->type;
				(yyvsp[-2].no)->Ctype = NULL;
	                        (yyvsp[-2].no)->Gentry = NULL;
	                        (yyvsp[-2].no)->Lentry = Ltemp;
				}	

				struct Fieldlist *Ftemp = FLookup((yyvsp[-2].no)->type,(yyvsp[-2].no)->Ctype, (yyvsp[0].no)->varname);
				if(Ftemp==NULL){
					yyerror("Field is not a member of the datatype\n");
					exit(1);}
				(yyvsp[-2].no)->type = Ftemp->type;
				(yyvsp[0].no)->type = Ftemp->type;
				(yyvsp[0].no)->Ctype = Ftemp->Ctype;
				(yyvsp[0].no)->val = Ftemp->fieldIndex;
				(yyvsp[-2].no)->nodetype = FieldNode;
				(yyval.no) = (yyvsp[-2].no); }
#line 2723 "y.tab.c"
    break;

  case 122: /* Field: SELF '.' ID  */
#line 743 "staticalloc.y"
                        {
				if(Cptr == NULL){
					yyerror("Self cannot be used outside a class");
					exit(1);}
				(yyval.no) = createTree(NULL, NULL, "self", SelfNode, NULL, NULL, NULL, (yyvsp[0].no));
				(yyval.no)->Lentry = Llookup("self");
				struct Fieldlist * Ftemp = CFLookup(Cptr, (yyvsp[0].no)->varname);
				if(Ftemp == NULL){
						
						yyerror("Variable not a memberfield\n");
						exit(1);
					}
					(yyval.no)->type = Ftemp->type;
					(yyvsp[0].no)->type = Ftemp->type;
					(yyvsp[0].no)->Ctype = Ftemp->Ctype;
					(yyvsp[0].no)->val = Ftemp->fieldIndex;
				(yyval.no)->val = Ftemp->fieldIndex;
						
			}
#line 2747 "y.tab.c"
    break;


#line 2751 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 764 "staticalloc.y"


yyerror(char const* s){
	printf("yyerror %s\n", s);
}

int main(int argc, char *argv[]){
        extern FILE *yyin;
        if(argc<2){
                yyerror("Not enough arguments");
                return 1;
        }
        input_file = fopen(argv[1], "r");
        yyin = input_file;
	TypeTableCreate();
	FILE *fptr = fopen("out.xsm", "w");
	writeheader(fptr);
	fclose(fptr);
        yyparse();

}

