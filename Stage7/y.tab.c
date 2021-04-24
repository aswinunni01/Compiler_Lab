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

int yylex(void);
FILE *input_file;
struct tnode* end_node;
int ploc=-3;
int lloc=0;
int size=0;
int FieldNo=0;
struct Classtable *Cptr = NULL;

#line 110 "y.tab.c"

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
    TYPE = 294,                    /* TYPE  */
    ENDTYPE = 295,                 /* ENDTYPE  */
    LIT = 296,                     /* LIT  */
    INIT = 297,                    /* INIT  */
    ALLOC = 298,                   /* ALLOC  */
    FREE = 299,                    /* FREE  */
    NEW = 300,                     /* NEW  */
    CLASS = 301,                   /* CLASS  */
    ENDCLASS = 302,                /* ENDCLASS  */
    SELF = 303                     /* SELF  */
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
#define TYPE 294
#define ENDTYPE 295
#define LIT 296
#define INIT 297
#define ALLOC 298
#define FREE 299
#define NEW 300
#define CLASS 301
#define ENDCLASS 302
#define SELF 303

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "staticalloc.y"

	struct Typetable *Tentry;
	struct tnode *no;
	struct Paramstruct *np;
	struct Fieldlist *fl;
	struct Typeholder *th

#line 266 "y.tab.c"

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
  YYSYMBOL_TYPE = 39,                      /* TYPE  */
  YYSYMBOL_ENDTYPE = 40,                   /* ENDTYPE  */
  YYSYMBOL_LIT = 41,                       /* LIT  */
  YYSYMBOL_INIT = 42,                      /* INIT  */
  YYSYMBOL_ALLOC = 43,                     /* ALLOC  */
  YYSYMBOL_FREE = 44,                      /* FREE  */
  YYSYMBOL_NEW = 45,                       /* NEW  */
  YYSYMBOL_CLASS = 46,                     /* CLASS  */
  YYSYMBOL_ENDCLASS = 47,                  /* ENDCLASS  */
  YYSYMBOL_SELF = 48,                      /* SELF  */
  YYSYMBOL_49_ = 49,                       /* '{'  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_51_ = 51,                       /* ';'  */
  YYSYMBOL_52_ = 52,                       /* '('  */
  YYSYMBOL_53_ = 53,                       /* ')'  */
  YYSYMBOL_54_ = 54,                       /* ','  */
  YYSYMBOL_55_ = 55,                       /* '['  */
  YYSYMBOL_56_ = 56,                       /* ']'  */
  YYSYMBOL_57_ = 57,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_start = 59,                     /* start  */
  YYSYMBOL_ClassDefBlock = 60,             /* ClassDefBlock  */
  YYSYMBOL_ClassDefList = 61,              /* ClassDefList  */
  YYSYMBOL_ClassDef = 62,                  /* ClassDef  */
  YYSYMBOL_Cname = 63,                     /* Cname  */
  YYSYMBOL_Fieldlists = 64,                /* Fieldlists  */
  YYSYMBOL_FId = 65,                       /* FId  */
  YYSYMBOL_MethodDecl = 66,                /* MethodDecl  */
  YYSYMBOL_MDecl = 67,                     /* MDecl  */
  YYSYMBOL_MethodDefns = 68,               /* MethodDefns  */
  YYSYMBOL_TypeDefBlock = 69,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 70,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 71,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 72,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 73,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 74,                  /* TypeName  */
  YYSYMBOL_GdeclBlock = 75,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 76,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 77,                     /* Gdecl  */
  YYSYMBOL_Type = 78,                      /* Type  */
  YYSYMBOL_GidList = 79,                   /* GidList  */
  YYSYMBOL_FdefBlock = 80,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 81,                      /* Fdef  */
  YYSYMBOL_ParamList = 82,                 /* ParamList  */
  YYSYMBOL_Param = 83,                     /* Param  */
  YYSYMBOL_Body = 84,                      /* Body  */
  YYSYMBOL_Retstmt = 85,                   /* Retstmt  */
  YYSYMBOL_MainBlock = 86,                 /* MainBlock  */
  YYSYMBOL_LdeclBlock = 87,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 88,                  /* LDecList  */
  YYSYMBOL_LDecl = 89,                     /* LDecl  */
  YYSYMBOL_IdList = 90,                    /* IdList  */
  YYSYMBOL_Ifstmt = 91,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 92,                 /* Whilestmt  */
  YYSYMBOL_Stlist = 93,                    /* Stlist  */
  YYSYMBOL_Stmt = 94,                      /* Stmt  */
  YYSYMBOL_InputStmt = 95,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 96,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 97,                   /* AsgStmt  */
  YYSYMBOL_E = 98,                         /* E  */
  YYSYMBOL_ArgList = 99,                   /* ArgList  */
  YYSYMBOL_Method = 100,                   /* Method  */
  YYSYMBOL_Field = 101                     /* Field  */
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   472

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   303


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
      52,    53,     2,     2,    54,     2,    57,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    51,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    60,    60,    71,    82,    95,   104,   105,   110,   111,
     113,   114,   118,   124,   127,   128,   131,   134,   135,   138,
     146,   147,   152,   165,   168,   168,   171,   178,   183,   186,
     192,   193,   194,   195,   208,   208,   211,   211,   214,   225,
     226,   227,   228,   242,   248,   254,   260,   270,   276,   283,
     289,   300,   301,   302,   304,   314,   316,   318,   321,   324,
     325,   328,   329,   337,   341,   347,   353,   354,   357,   366,
     370,   377,   378,   381,   384,   385,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   401,   404,   408,
     411,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   441,   450,   463,   464,   465,   466,   478,   490,
     491,   494,   495,   499,   517,   536,   563,   589,   616,   628,
     659
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
  "VOID", "DECL", "ENDDECL", "MAIN", "RET", "TYPE", "ENDTYPE", "LIT",
  "INIT", "ALLOC", "FREE", "NEW", "CLASS", "ENDCLASS", "SELF", "'{'",
  "'}'", "';'", "'('", "')'", "','", "'['", "']'", "'.'", "$accept",
  "start", "ClassDefBlock", "ClassDefList", "ClassDef", "Cname",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   123,
     125,    59,    40,    41,    44,    91,    93,    46
};
#endif

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      52,    39,   166,    26,    -8,     4,    20,    -4,   135,    32,
      45,    78,  -143,  -143,  -143,  -143,  -143,   244,  -143,    47,
      43,  -143,    49,  -143,  -143,  -143,     7,  -143,    48,  -143,
      45,    20,  -143,  -143,  -143,  -143,    91,   135,  -143,    55,
      99,  -143,  -143,  -143,   -42,    92,   135,  -143,  -143,  -143,
    -143,    81,  -143,   191,    87,  -143,   108,  -143,   135,   161,
    -143,   170,    54,  -143,   179,  -143,    32,   191,  -143,   135,
     159,   183,   -29,  -143,   158,   126,  -143,  -143,   184,   135,
    -143,    79,   211,  -143,  -143,   135,   193,   135,   241,  -143,
    -143,   353,  -143,   254,   216,   381,   260,  -143,   268,    96,
     226,   135,  -143,   273,   168,   211,  -143,   274,   394,  -143,
     144,   236,   231,  -143,   234,    86,  -143,   238,  -143,   135,
     260,  -143,   175,  -143,  -143,   243,   312,   -41,  -143,   315,
     316,  -143,  -143,  -143,   368,  -143,   323,   239,   368,   276,
    -143,  -143,   144,  -143,   250,   275,   286,   426,  -143,   304,
    -143,  -143,   314,  -143,  -143,   133,   293,  -143,   366,   368,
     368,    27,   368,   367,   368,   368,   351,   368,   371,   249,
    -143,   370,  -143,  -143,  -143,  -143,   355,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   373,   334,   341,
    -143,  -143,   285,   291,  -143,   432,   185,     0,   342,   309,
     327,  -143,   333,   343,  -143,  -143,   348,   354,   356,   432,
     448,   448,   301,   301,   432,   432,   432,   432,   432,   432,
     358,  -143,  -143,  -143,  -143,  -143,   368,   338,    30,   386,
     378,   363,   111,  -143,  -143,   408,   368,   432,   368,  -143,
     187,   233,   233,  -143,  -143,   197,   369,   207,   106,  -143,
     127,   180,  -143,   372,  -143,  -143,   376,   233,   385,  -143,
    -143,   201,  -143,   391,  -143
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    53,     0,
       0,     0,    42,    39,    40,    41,    35,     0,    37,     0,
       0,    23,     0,    25,    13,     9,     0,    11,     0,     1,
       0,     0,    33,    30,    31,    32,     0,     7,    52,     0,
       0,     6,    34,    36,    49,     0,     0,    22,    24,     8,
      10,     0,     4,     0,     0,    51,     0,     5,    57,     0,
      38,     0,     0,    28,     0,    15,    30,     0,     3,    57,
       0,     0,     0,    56,     0,    43,    26,    27,     0,     0,
       2,     0,    65,    58,    50,     0,    47,    57,     0,    29,
      14,     0,    18,     0,     0,     0,     0,    55,     0,     0,
       0,     0,    17,     0,     0,    65,    64,     0,     0,    67,
       0,     0,     0,    46,    44,     0,    21,     0,    16,    57,
       0,    70,     0,    63,    66,     0,     0,   101,   104,     0,
       0,    81,    82,   106,     0,   105,     0,     0,     0,     0,
      79,    80,     0,    75,     0,     0,     0,     0,   110,   109,
      62,    48,     0,    12,    20,     0,     0,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,    74,    76,    77,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    69,     0,     0,   107,   112,     0,     0,   119,     0,
       0,    61,     0,   120,   100,    59,     0,     0,     0,    89,
      90,    92,    91,    93,    99,    94,    95,    97,    96,    98,
     118,    45,    19,    88,    87,   108,     0,   102,     0,     0,
       0,     0,     0,    84,    83,     0,     0,   111,     0,   117,
       0,     0,     0,    85,   114,     0,     0,     0,     0,   116,
       0,     0,   113,     0,   115,   103,     0,     0,     0,    86,
      72,     0,    73,     0,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -143,  -143,   412,  -143,   395,  -143,  -143,  -143,  -143,   346,
    -143,  -143,  -143,   402,  -143,   396,    15,   134,  -143,   442,
    -143,  -143,   390,   -34,   -57,   344,   340,   319,     5,   357,
    -143,   364,  -143,  -143,  -143,   -24,  -142,  -143,  -143,  -143,
    -133,   -33,  -143,  -143
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,    26,    27,    28,    79,    90,    91,    92,
     115,     7,    22,    23,    62,    63,    36,     8,    17,    18,
      19,    45,    37,    38,    72,    73,   111,   139,    11,    96,
     108,   109,   122,   140,   141,   142,   143,   144,   145,   146,
     147,   196,   148,   149
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     172,   166,    24,    55,    29,   169,   177,   178,   179,   180,
      58,   161,    81,    59,   162,    40,   163,    24,   181,   182,
     183,   184,   185,   186,    84,    85,   192,   193,   195,   197,
      99,   199,   200,    55,   202,    52,    20,   127,   128,    25,
     127,   128,     4,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,    49,     2,   227,    44,    68,    20,
     133,    64,   155,   133,    32,     1,    21,   116,   135,    39,
       9,   135,    80,    71,     2,   137,     9,    64,   137,   138,
     194,   154,   138,   239,    71,    33,    34,     2,    35,    47,
      41,     3,    46,   237,    93,   195,    32,    51,     4,   195,
      71,    54,    71,   195,    76,   248,   103,    56,   172,   172,
     107,    57,   177,   178,   179,   180,    65,    33,    34,   172,
      35,   127,   128,   107,   181,   182,   183,   184,   185,   186,
     125,   126,    94,    85,    71,    10,   153,   127,   128,    69,
      30,   129,   256,    60,   133,    32,    61,   125,   126,   113,
      85,   257,   135,   130,   127,   128,   131,   132,   129,   137,
     133,    70,   255,   138,   244,    53,    33,    34,   135,    35,
     130,   136,    74,   131,   132,   137,    12,   133,    87,   138,
      75,    88,   134,   125,   126,   135,   189,    85,   136,    78,
     127,   128,   137,    83,   129,   240,   138,    13,    14,   245,
      15,    32,    16,   247,   125,   126,   130,   258,    82,   131,
     132,   127,   128,   133,    86,   129,   263,   250,   251,   118,
     119,   135,    66,    34,   136,    35,   157,   130,   137,   158,
     131,   132,   138,   261,   133,    89,   125,   126,   225,   226,
     249,   226,   135,   127,   128,   136,    95,   129,    98,   137,
     252,   226,   100,   138,    12,   177,   178,   179,   180,   130,
     254,   226,   131,   132,   104,   105,   133,   181,   182,   183,
     184,   185,   186,   110,   135,    13,    14,   136,    15,   112,
      42,   137,   114,   117,   121,   138,   150,   151,   170,   152,
     119,   177,   178,   179,   180,   159,   168,   177,   178,   179,
     180,   173,   204,   181,   182,   183,   184,   185,   186,   181,
     182,   183,   184,   185,   186,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   186,   188,   174,   181,   182,   183,
     184,   185,   186,   177,   178,   179,   180,   175,   223,   177,
     178,   179,   180,   190,   224,   181,   182,   183,   184,   185,
     186,   181,   182,   183,   184,   185,   186,   177,   178,   179,
     180,   187,   229,    32,   160,   127,   128,   164,   165,   181,
     182,   183,   184,   185,   186,   167,   191,   198,   127,   128,
     230,   203,   205,   220,    33,    34,   231,    35,   133,   101,
     221,    32,   222,   238,   228,   232,   135,   206,   207,   233,
     208,   133,   201,   137,    32,   234,   242,   138,   235,   135,
     236,   241,    33,    34,   243,    35,   137,   106,   246,    31,
     138,    50,   253,   259,    48,    33,    34,   260,    35,    97,
     123,   176,   177,   178,   179,   180,   262,   102,   177,   178,
     179,   180,   264,    67,   181,   182,   183,   184,   185,   186,
     181,   182,   183,   184,   185,   186,   179,   180,    77,    43,
     156,   171,   120,     0,     0,     0,   181,   182,   183,   184,
     185,   186,   124
};

static const yytype_int16 yycheck[] =
{
     142,   134,    10,    37,     0,   138,     6,     7,     8,     9,
      52,    52,    69,    55,    55,    10,    57,    10,    18,    19,
      20,    21,    22,    23,    53,    54,   159,   160,   161,   162,
      87,   164,   165,    67,   167,    30,    10,    10,    11,    47,
      10,    11,    46,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    47,    35,    56,    10,    53,    10,
      33,    46,   119,    33,    10,    13,    40,   101,    41,    37,
      31,    41,    67,    58,    35,    48,    31,    62,    48,    52,
      53,   115,    52,    53,    69,    31,    32,    35,    34,    40,
      12,    39,    49,   226,    79,   228,    10,    49,    46,   232,
      85,    10,    87,   236,    50,   238,    91,    52,   250,   251,
      95,    12,     6,     7,     8,     9,    35,    31,    32,   261,
      34,    10,    11,   108,    18,    19,    20,    21,    22,    23,
       3,     4,    53,    54,   119,     1,    50,    10,    11,    52,
       6,    14,    15,    51,    33,    10,    54,     3,     4,    53,
      54,    24,    41,    26,    10,    11,    29,    30,    14,    48,
      33,    53,    56,    52,    53,    31,    31,    32,    41,    34,
      26,    44,    11,    29,    30,    48,    10,    33,    52,    52,
      10,    55,    38,     3,     4,    41,    53,    54,    44,    10,
      10,    11,    48,    10,    14,   228,    52,    31,    32,   232,
      34,    10,    36,   236,     3,     4,    26,    27,    49,    29,
      30,    10,    11,    33,    56,    14,    15,   241,   242,    51,
      52,    41,    31,    32,    44,    34,    51,    26,    48,    54,
      29,    30,    52,   257,    33,    51,     3,     4,    53,    54,
      53,    54,    41,    10,    11,    44,    35,    14,    55,    48,
      53,    54,    11,    52,    10,     6,     7,     8,     9,    26,
      53,    54,    29,    30,    10,    49,    33,    18,    19,    20,
      21,    22,    23,    13,    41,    31,    32,    44,    34,    11,
      36,    48,    56,    10,    10,    52,    50,    56,    12,    55,
      52,     6,     7,     8,     9,    52,    57,     6,     7,     8,
       9,    51,    53,    18,    19,    20,    21,    22,    23,    18,
      19,    20,    21,    22,    23,     6,     7,     8,     9,    18,
      19,    20,    21,    22,    23,    11,    51,    18,    19,    20,
      21,    22,    23,     6,     7,     8,     9,    51,    53,     6,
       7,     8,     9,    50,    53,    18,    19,    20,    21,    22,
      23,    18,    19,    20,    21,    22,    23,     6,     7,     8,
       9,    57,    53,    10,    52,    10,    11,    52,    52,    18,
      19,    20,    21,    22,    23,    52,    10,    10,    10,    11,
      53,    10,    12,    10,    31,    32,    53,    34,    33,    36,
      56,    10,    51,    55,    52,    52,    41,    42,    43,    51,
      45,    33,    51,    48,    10,    51,    28,    52,    52,    41,
      52,    25,    31,    32,    51,    34,    48,    36,    10,     7,
      52,    26,    53,    51,    22,    31,    32,    51,    34,    85,
      36,     5,     6,     7,     8,     9,    51,    91,     6,     7,
       8,     9,    51,    53,    18,    19,    20,    21,    22,    23,
      18,    19,    20,    21,    22,    23,     8,     9,    62,    17,
     120,   142,   105,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,   108
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    13,    35,    39,    46,    59,    60,    69,    75,    31,
      75,    86,    10,    31,    32,    34,    36,    76,    77,    78,
      10,    40,    70,    71,    10,    47,    61,    62,    63,     0,
      75,    60,    10,    31,    32,    34,    74,    80,    81,    37,
      86,    12,    36,    77,    10,    79,    49,    40,    71,    47,
      62,    49,    86,    75,    10,    81,    52,    12,    52,    55,
      51,    54,    72,    73,    74,    35,    31,    80,    86,    52,
      53,    74,    82,    83,    11,    10,    50,    73,    10,    64,
      86,    82,    49,    10,    53,    54,    56,    52,    55,    51,
      65,    66,    67,    74,    53,    35,    87,    83,    55,    82,
      11,    36,    67,    74,    10,    49,    36,    74,    88,    89,
      13,    84,    11,    53,    56,    68,    81,    10,    51,    52,
      87,    10,    90,    36,    89,     3,     4,    10,    11,    14,
      26,    29,    30,    33,    38,    41,    44,    48,    52,    85,
      91,    92,    93,    94,    95,    96,    97,    98,   100,   101,
      50,    56,    55,    50,    81,    82,    84,    51,    54,    52,
      52,    52,    55,    57,    52,    52,    98,    52,    57,    98,
      12,    85,    94,    51,    51,    51,     5,     6,     7,     8,
       9,    18,    19,    20,    21,    22,    23,    57,    11,    53,
      50,    10,    98,    98,    53,    98,    99,    98,    10,    98,
      98,    51,    98,    10,    53,    12,    42,    43,    45,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      10,    56,    51,    53,    53,    53,    54,    56,    52,    53,
      53,    53,    52,    51,    51,    52,    52,    98,    55,    53,
      99,    25,    28,    51,    53,    99,    10,    99,    98,    53,
      93,    93,    53,    53,    53,    56,    15,    24,    27,    51,
      51,    93,    51,    15,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    59,    59,    60,    60,
      61,    61,    62,    63,    64,    64,    65,    66,    66,    67,
      68,    68,    69,    69,    70,    70,    71,    72,    72,    73,
      74,    74,    74,    74,    75,    75,    76,    76,    77,    78,
      78,    78,    78,    79,    79,    79,    79,    79,    79,    79,
      79,    80,    80,    80,    81,    82,    82,    82,    83,    84,
      84,    85,    86,    87,    87,    87,    88,    88,    89,    90,
      90,    91,    91,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    95,    96,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    99,    99,   100,   100,   100,   100,   100,   101,   101,
     101
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     4,     3,     4,     3,     2,     3,     2,
       2,     1,     8,     1,     2,     0,     3,     2,     1,     6,
       2,     1,     3,     2,     2,     1,     4,     2,     1,     3,
       1,     1,     1,     1,     3,     2,     2,     1,     3,     1,
       1,     1,     1,     3,     6,     9,     6,     4,     7,     1,
       4,     2,     1,     0,     9,     3,     1,     0,     2,     4,
       3,     3,     8,     3,     2,     0,     2,     1,     3,     3,
       1,    10,     8,     8,     2,     1,     2,     2,     2,     1,
       1,     1,     1,     4,     4,     5,     7,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     1,     4,     7,     1,     1,     1,     3,     4,     1,
       1,     3,     1,     6,     5,     6,     6,     5,     3,     3,
       3
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
#line 60 "staticalloc.y"
                                                                        {
                                                printf("Completed\n");
                                                FILE *fptr = fopen("out.xsm", "w");
						//printtable();
                                                writeheader(fptr);
						codeGen((yyvsp[-3].no), fptr);
						codeGen((yyvsp[-1].no), fptr);
                                        	codeGen((yyvsp[0].no),fptr);
 //                                               writefooter(fptr);
                                                exit(1);
                                        }
#line 1574 "y.tab.c"
    break;

  case 3: /* start: TypeDefBlock ClassDefBlock GdeclBlock MainBlock  */
#line 71 "staticalloc.y"
                                                           {
						printf("Completed here\n");
						FILE *fptr = fopen("out.xsm", "w");
        //                                        printtable();
                                                writeheader(fptr);
						codeGen((yyvsp[-2].no), fptr);
						codeGen((yyvsp[0].no), fptr);
 //                                               writefooter(fptr);
                                                exit(1);
					
	}
#line 1590 "y.tab.c"
    break;

  case 4: /* start: ClassDefBlock GdeclBlock MainBlock  */
#line 82 "staticalloc.y"
                                             {
						printf("Completed here\n");
                                                FILE *fptr = fopen("out.xsm", "w");
        //                                        printtable();
                                                writeheader(fptr);
                                                codeGen((yyvsp[-2].no), fptr);
                                                codeGen((yyvsp[0].no), fptr);
 //                                               writefooter(fptr);
                                                exit(1);


						}
#line 1607 "y.tab.c"
    break;

  case 5: /* start: BEG GdeclBlock MainBlock END  */
#line 96 "staticalloc.y"
                                         {
      						printf("Completed\n");
	      					FILE *fptr = fopen("out.xsm", "w");
						writeheader(fptr);
	  					//codeGen($2,fptr);
//						writefooter(fptr); 
      						exit(1); 
					}
#line 1620 "y.tab.c"
    break;

  case 6: /* start: BEG MainBlock END  */
#line 104 "staticalloc.y"
                                                { exit(1); }
#line 1626 "y.tab.c"
    break;

  case 7: /* start: GdeclBlock FdefBlock  */
#line 105 "staticalloc.y"
                                        { printf("Completed now \n"); printtable(); exit(1); }
#line 1632 "y.tab.c"
    break;

  case 8: /* ClassDefBlock: CLASS ClassDefList ENDCLASS  */
#line 110 "staticalloc.y"
                                                { printclasstable(); (yyval.no)=(yyvsp[-1].no); }
#line 1638 "y.tab.c"
    break;

  case 9: /* ClassDefBlock: CLASS ENDCLASS  */
#line 111 "staticalloc.y"
                                                {  (yyval.no) = NULL;}
#line 1644 "y.tab.c"
    break;

  case 10: /* ClassDefList: ClassDefList ClassDef  */
#line 113 "staticalloc.y"
                                                { (yyval.no) = createTree(NULL, NULL, NULL, ClBlock,NULL, (yyvsp[-1].no), NULL, (yyvsp[0].no)); }
#line 1650 "y.tab.c"
    break;

  case 11: /* ClassDefList: ClassDef  */
#line 114 "staticalloc.y"
                                                { (yyval.no) = (yyvsp[0].no); }
#line 1656 "y.tab.c"
    break;

  case 12: /* ClassDef: Cname '{' DECL Fieldlists MethodDecl ENDDECL MethodDefns '}'  */
#line 118 "staticalloc.y"
                                                                               { CFindex = 0; CMindex = 0;
					   	          			(yyval.no) = createTree( NULL, NULL, (yyvsp[-7].no)->varname, ClNode, NULL , NULL, NULL, (yyvsp[-1].no));
										Cptr = NULL;
										}
#line 1665 "y.tab.c"
    break;

  case 13: /* Cname: ID  */
#line 124 "staticalloc.y"
                        { Cptr = CInstall((yyvsp[0].no)->varname, NULL); (yyval.no)=(yyvsp[0].no);}
#line 1671 "y.tab.c"
    break;

  case 14: /* Fieldlists: Fieldlists FId  */
#line 127 "staticalloc.y"
                                 {}
#line 1677 "y.tab.c"
    break;

  case 16: /* FId: TypeName ID ';'  */
#line 131 "staticalloc.y"
                                        { Class_Finstall(Cptr, (yyvsp[-2].Tentry), (yyvsp[-1].no)->varname); }
#line 1683 "y.tab.c"
    break;

  case 17: /* MethodDecl: MethodDecl MDecl  */
#line 134 "staticalloc.y"
                                        {}
#line 1689 "y.tab.c"
    break;

  case 18: /* MethodDecl: MDecl  */
#line 135 "staticalloc.y"
                                        {}
#line 1695 "y.tab.c"
    break;

  case 19: /* MDecl: TypeName ID '(' ParamList ')' ';'  */
#line 138 "staticalloc.y"
                                                    { if(CMLookup(Cptr, (yyvsp[-4].no)->varname)!=NULL){
       							yyerror("Method Aleady declared");
							exit(1);		
						}
						ploc = -3; lloc = 0; Lhead=NULL;
						Class_Minstall(Cptr, (yyvsp[-4].no)->varname, TLookup((yyvsp[-5].Tentry)), (yyvsp[-2].np));}
#line 1706 "y.tab.c"
    break;

  case 20: /* MethodDefns: MethodDefns Fdef  */
#line 146 "staticalloc.y"
                                                {  struct Memberfunclist *Mtemp = CMLookup(Cptr, (yyvsp[0].no)->varname);  (yyvsp[0].no)->nodetype = MethodNode; (yyvsp[0].no)->val = Mtemp->Flabel; (yyval.no) = createTree(NULL,FnBlock, NULL,MethodBlock, NULL, (yyvsp[-1].no),NULL, (yyvsp[0].no)); }
#line 1712 "y.tab.c"
    break;

  case 21: /* MethodDefns: Fdef  */
#line 147 "staticalloc.y"
                                                { struct Memberfunclist *Mtemp = CMLookup(Cptr, (yyvsp[0].no)->varname);  (yyvsp[0].no)->nodetype = MethodNode; (yyvsp[0].no)->val = Mtemp->Flabel; (yyval.no) = (yyvsp[0].no); }
#line 1718 "y.tab.c"
    break;

  case 22: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 152 "staticalloc.y"
                                        {struct Typetable *temp = Thead;
	     
     						while(temp!=NULL){		// Check if all members have types that exists
							struct Fieldlist *Ftemp = temp->fields;
							while(Ftemp !=NULL){
								struct Typetable *tttemp = TLookup(Ftemp->temp_type);
								if(tttemp == NULL){
									yyerror("Type of member not defined");
								}
								Ftemp->type = tttemp;
								Ftemp = Ftemp->next;}
							
							temp = temp->next;}}
#line 1736 "y.tab.c"
    break;

  case 23: /* TypeDefBlock: TYPE ENDTYPE  */
#line 165 "staticalloc.y"
                            {}
#line 1742 "y.tab.c"
    break;

  case 25: /* TypeDefList: TypeDef  */
#line 168 "staticalloc.y"
                                            {}
#line 1748 "y.tab.c"
    break;

  case 26: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 171 "staticalloc.y"
                                        { 
					Tinstall((yyvsp[-3].no)->varname, size, (yyvsp[-1].fl)); 
					size = 0;
					Findex=0;
}
#line 1758 "y.tab.c"
    break;

  case 27: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 178 "staticalloc.y"
                                        { (yyvsp[0].fl)->next = (yyvsp[-1].fl);
	      				  (yyval.fl) = (yyvsp[0].fl); FieldNo++;if(FieldNo>=8){
							yyerror("Number of fields cannot exceed 8\n");
							exit(1);
}}
#line 1768 "y.tab.c"
    break;

  case 28: /* FieldDeclList: FieldDecl  */
#line 183 "staticalloc.y"
                                {  FieldNo = 0;(yyval.fl)=(yyvsp[0].fl); }
#line 1774 "y.tab.c"
    break;

  case 29: /* FieldDecl: TypeName ID ';'  */
#line 186 "staticalloc.y"
                                 { 

				size=size+1;
				(yyval.fl) = Finstall((yyvsp[-1].no)->varname, (yyvsp[-2].Tentry)); }
#line 1783 "y.tab.c"
    break;

  case 30: /* TypeName: INT  */
#line 192 "staticalloc.y"
                    { (yyval.Tentry) = "INT"; }
#line 1789 "y.tab.c"
    break;

  case 31: /* TypeName: STR  */
#line 193 "staticalloc.y"
                    { (yyval.Tentry) = "STR"; }
#line 1795 "y.tab.c"
    break;

  case 32: /* TypeName: VOID  */
#line 194 "staticalloc.y"
                     { (yyval.Tentry) = "VOID"; }
#line 1801 "y.tab.c"
    break;

  case 33: /* TypeName: ID  */
#line 195 "staticalloc.y"
                    {  (yyval.Tentry) = (yyvsp[0].no)->varname; }
#line 1807 "y.tab.c"
    break;

  case 35: /* GdeclBlock: DECL ENDDECL  */
#line 208 "staticalloc.y"
                                                   {}
#line 1813 "y.tab.c"
    break;

  case 37: /* GdeclList: Gdecl  */
#line 211 "staticalloc.y"
                                    {}
#line 1819 "y.tab.c"
    break;

  case 38: /* Gdecl: Type GidList ';'  */
#line 214 "staticalloc.y"
                                        { 
     						while((yyvsp[-1].no) != NULL) {
			     				struct Gsymbol* temp = Lookup((yyvsp[-1].no)->varname);
							temp->type = (yyvsp[-2].th)->Ttype;
							temp->Ctype = (yyvsp[-2].th)->Ctype;
							(yyvsp[-1].no) = (yyvsp[-1].no)->left;}
					}
#line 1831 "y.tab.c"
    break;

  case 39: /* Type: INT  */
#line 225 "staticalloc.y"
                                        { (yyval.th)->Ttype = TLookup("INT"); (yyval.th)->Ctype = NULL; }
#line 1837 "y.tab.c"
    break;

  case 40: /* Type: STR  */
#line 226 "staticalloc.y"
                                        { (yyval.th)->Ttype = TLookup("STR");(yyval.th)->Ctype = NULL ;}
#line 1843 "y.tab.c"
    break;

  case 41: /* Type: VOID  */
#line 227 "staticalloc.y"
                                        { (yyval.th)->Ttype = TLookup("VOID");(yyval.th)->Ctype = NULL; }
#line 1849 "y.tab.c"
    break;

  case 42: /* Type: ID  */
#line 228 "staticalloc.y"
                                        { struct Typetable *Ttemp = TLookup((yyvsp[0].no)->varname);
					  if(Ttemp == NULL){
						struct Classtable *Ctemp = CLookup((yyvsp[0].no)->varname);
						(yyval.th)->Ctype = Ctemp;
						(yyval.th)->Ttype = NULL;
					  }
					  else{
						(yyval.th)->Ttype = Ttemp;
						(yyval.th)->Ctype = NULL;
						}
						}
#line 1865 "y.tab.c"
    break;

  case 43: /* GidList: GidList ',' ID  */
#line 242 "staticalloc.y"
                                        {
       						if(Lookup((yyvsp[0].no)->varname) != NULL){
			                                yyerror("Variable already declared");   
			                                exit(1);}     
					  	Install((yyvsp[0].no)->varname, NULL, 1,1, NULL, NULL); (yyvsp[0].no)->left = (yyvsp[-2].no); (yyval.no)=(yyvsp[0].no); }
#line 1875 "y.tab.c"
    break;

  case 44: /* GidList: GidList ',' ID '[' NUM ']'  */
#line 248 "staticalloc.y"
                                        {
						 if(Lookup((yyvsp[-3].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                         Install((yyvsp[-3].no)->varname, NULL,(yyvsp[-1].no)->val, 1, NULL, NULL); (yyvsp[-3].no)->left = (yyvsp[-5].no); (yyval.no)=(yyvsp[-3].no);
						 address= address + ((yyvsp[-1].no)->val-1);}
#line 1886 "y.tab.c"
    break;

  case 45: /* GidList: GidList ',' ID '[' NUM ']' '[' NUM ']'  */
#line 254 "staticalloc.y"
                                              { 
						if(Lookup((yyvsp[-6].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-6].no)->varname, NULL, (yyvsp[-4].no)->val, (yyvsp[-1].no)->val, NULL, NULL); (yyvsp[-6].no)->left = (yyvsp[-8].no); (yyval.no)=(yyvsp[-6].no);
                        			address= address + (((yyvsp[-4].no)->val*(yyvsp[-1].no)->val)-1);}
#line 1897 "y.tab.c"
    break;

  case 46: /* GidList: GidList ',' ID '(' ParamList ')'  */
#line 260 "staticalloc.y"
                                                {
                                                if(Lookup((yyvsp[-3].no)->varname)!=NULL){
                                                        yyerror("Function name already declared");
                                                        exit(1);}
                                                Install((yyvsp[-3].no)->varname, NULL, 1, 1,(yyvsp[-1].np), getFlabel()); (yyvsp[-3].no)->left = (yyvsp[-5].no);  (yyval.no) = (yyvsp[-3].no);
						ploc=-3; lloc=0; Lhead=NULL;
						 }
#line 1909 "y.tab.c"
    break;

  case 47: /* GidList: ID '[' NUM ']'  */
#line 270 "staticalloc.y"
                                        { 
						if(Lookup((yyvsp[-3].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-3].no)->varname, NULL,(yyvsp[-1].no)->val, 1, NULL, NULL); (yyval.no) = (yyvsp[-3].no);
						address = address + ((yyvsp[-1].no)->val-1); }
#line 1920 "y.tab.c"
    break;

  case 48: /* GidList: ID '[' NUM ']' '[' NUM ']'  */
#line 276 "staticalloc.y"
                                        {
						if(Lookup((yyvsp[-6].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-6].no)->varname, NULL,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val, NULL, NULL); (yyval.no) = (yyvsp[-6].no);
			                        address = address + (((yyvsp[-4].no)->val*(yyvsp[-1].no)->val)-1); }
#line 1931 "y.tab.c"
    break;

  case 49: /* GidList: ID  */
#line 283 "staticalloc.y"
                                        {
						 if(Lookup((yyvsp[0].no)->varname) != NULL){
							yyerror("Variable name already declared");
							exit(1);}	
						Install((yyvsp[0].no)->varname, NULL,1, 1, NULL, NULL); (yyval.no) = (yyvsp[0].no); }
#line 1941 "y.tab.c"
    break;

  case 50: /* GidList: ID '(' ParamList ')'  */
#line 289 "staticalloc.y"
                                        {
						if(Lookup((yyvsp[-3].no)->varname)!=NULL){
							yyerror("Function name already declared");
							exit(1);}
						Install((yyvsp[-3].no)->varname, NULL, 1, 1,(yyvsp[-1].np), getFlabel()); (yyval.no) = (yyvsp[-3].no);
						ploc=-3; lloc=0; Lhead=NULL;
					}
#line 1953 "y.tab.c"
    break;

  case 51: /* FdefBlock: FdefBlock Fdef  */
#line 300 "staticalloc.y"
                                                                { (yyval.no) = createTree(NULL,FnBlock, NULL,FnBlock, NULL, (yyvsp[-1].no),NULL, (yyvsp[0].no));}
#line 1959 "y.tab.c"
    break;

  case 52: /* FdefBlock: Fdef  */
#line 301 "staticalloc.y"
                                                                { (yyval.no) = (yyvsp[0].no); }
#line 1965 "y.tab.c"
    break;

  case 53: /* FdefBlock: %empty  */
#line 302 "staticalloc.y"
                                                                {}
#line 1971 "y.tab.c"
    break;

  case 54: /* Fdef: TypeName ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 304 "staticalloc.y"
                                                                { checkvalid(TLookup((yyvsp[-8].Tentry)), (yyvsp[-5].np), (yyvsp[-7].no)->varname, Cptr); 
      								  ploc=-3; lloc=0; 
								  struct tnode *temp = (yyvsp[-1].no)->left;
								  (yyvsp[-1].no)->left = NULL;
								  (yyval.no) = createTree( NULL, NULL, (yyvsp[-7].no)->varname, FnNode, Lookup((yyvsp[-7].no)->varname), temp, NULL, (yyvsp[-1].no));
								  (yyval.no)->Lentry = Lhead;
								  Lhead = NULL;
								}
#line 1984 "y.tab.c"
    break;

  case 55: /* ParamList: ParamList ',' Param  */
#line 314 "staticalloc.y"
                                        { 	Pcheck((yyvsp[-2].np), (yyvsp[0].np));
						(yyvsp[0].np)->next = (yyvsp[-2].np); (yyval.np) = (yyvsp[0].np); Linstall((yyvsp[0].np)->name, (yyvsp[0].np)->type, ploc--); }
#line 1991 "y.tab.c"
    break;

  case 56: /* ParamList: Param  */
#line 316 "staticalloc.y"
                                        { 
					  (yyval.np) = (yyvsp[0].np); Linstall((yyvsp[0].np)->name, (yyvsp[0].np)->type, ploc--); }
#line 1998 "y.tab.c"
    break;

  case 57: /* ParamList: %empty  */
#line 318 "staticalloc.y"
                                        { (yyval.np) = NULL; }
#line 2004 "y.tab.c"
    break;

  case 58: /* Param: TypeName ID  */
#line 321 "staticalloc.y"
                                                { (yyval.np) = Pinstall((yyvsp[0].no)->varname, TLookup((yyvsp[-1].Tentry)), NULL); }
#line 2010 "y.tab.c"
    break;

  case 59: /* Body: BEG Stlist Retstmt END  */
#line 324 "staticalloc.y"
                                        { (yyvsp[-1].no)->left=(yyvsp[-2].no); (yyval.no) = (yyvsp[-1].no); }
#line 2016 "y.tab.c"
    break;

  case 60: /* Body: BEG Retstmt END  */
#line 325 "staticalloc.y"
                                        { (yyvsp[-1].no)->left = NULL; (yyval.no) = (yyvsp[-1].no); }
#line 2022 "y.tab.c"
    break;

  case 61: /* Retstmt: RET E ';'  */
#line 328 "staticalloc.y"
                                        { (yyval.no) = createTree(NULL, RetNode, NULL, RetNode, NULL, NULL, NULL, (yyvsp[-1].no)); }
#line 2028 "y.tab.c"
    break;

  case 62: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 329 "staticalloc.y"
                                                                { 	ploc=-3; lloc=0;
	  								struct tnode* temp = (yyvsp[-1].no)->left;
									(yyvsp[-1].no)->left = NULL;
	  								(yyval.no) = createTree(NULL, NULL, "main", MnNode, NULL, temp, NULL,(yyvsp[-1].no));
									(yyval.no)->Lentry = Lhead;
									Lhead = NULL; }
#line 2039 "y.tab.c"
    break;

  case 63: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 337 "staticalloc.y"
                                        {	if (Cptr != NULL){
	   						Linstall("self", TLookup("VOID"), ploc--);
						}
					}
#line 2048 "y.tab.c"
    break;

  case 64: /* LdeclBlock: DECL ENDDECL  */
#line 341 "staticalloc.y"
                                        {
						if (Cptr != NULL){
                                               	 	Linstall("self", TLookup("VOID"), ploc--);
                                                }

						}
#line 2059 "y.tab.c"
    break;

  case 65: /* LdeclBlock: %empty  */
#line 347 "staticalloc.y"
                                        { if (Cptr != NULL){
                                                        Linstall("self", TLookup("VOID"), ploc--);
                                                }
					}
#line 2068 "y.tab.c"
    break;

  case 66: /* LDecList: LDecList LDecl  */
#line 353 "staticalloc.y"
                                        {}
#line 2074 "y.tab.c"
    break;

  case 67: /* LDecList: LDecl  */
#line 354 "staticalloc.y"
                                        {}
#line 2080 "y.tab.c"
    break;

  case 68: /* LDecl: TypeName IdList ';'  */
#line 357 "staticalloc.y"
                                                {	struct tnode* ttemp = (yyvsp[-1].no);
                                                while(ttemp != NULL) {
							struct Lsymbol* Ltemp = Llookup(ttemp->varname);
							if(Ltemp->binding>0){
                                                        Ltemp->type = TLookup((yyvsp[-2].Tentry));}
                                                        ttemp=ttemp->left;}
                                        }
#line 2092 "y.tab.c"
    break;

  case 69: /* IdList: IdList ',' ID  */
#line 366 "staticalloc.y"
                                        { if(Llookup((yyvsp[0].no)->varname)!=NULL){
       						yyerror("Local variable already declared");
						exit(1);}						
					  Linstall((yyvsp[0].no)->varname, NULL, ++lloc); (yyvsp[0].no)->left = (yyvsp[-2].no); (yyval.no)=(yyvsp[0].no); }
#line 2101 "y.tab.c"
    break;

  case 70: /* IdList: ID  */
#line 370 "staticalloc.y"
                                        { if(Llookup((yyvsp[0].no)->varname)!=NULL){
                                                yyerror("Local variable already declared");
                                                exit(1);} 
					  Linstall((yyvsp[0].no)->varname, NULL, ++lloc); (yyval.no)=(yyvsp[0].no); }
#line 2110 "y.tab.c"
    break;

  case 71: /* Ifstmt: IF '(' E ')' THEN Stlist ELSE Stlist ENDIF ';'  */
#line 377 "staticalloc.y"
                                                              {  (yyval.no) = createIfNode((yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no)); }
#line 2116 "y.tab.c"
    break;

  case 72: /* Ifstmt: IF '(' E ')' THEN Stlist ENDIF ';'  */
#line 378 "staticalloc.y"
                                                              { (yyval.no) = createIfNode((yyvsp[-5].no), (yyvsp[-2].no), NULL); }
#line 2122 "y.tab.c"
    break;

  case 73: /* Whilestmt: WHILE '(' E ')' DO Stlist ENDWHILE ';'  */
#line 381 "staticalloc.y"
                                                          { (yyval.no) = createWhileNode((yyvsp[-5].no), (yyvsp[-2].no)); }
#line 2128 "y.tab.c"
    break;

  case 74: /* Stlist: Stlist Stmt  */
#line 384 "staticalloc.y"
                        { (yyval.no) = createTree(NULL,3, NULL,3, NULL, (yyvsp[-1].no),NULL, (yyvsp[0].no)); }
#line 2134 "y.tab.c"
    break;

  case 75: /* Stlist: Stmt  */
#line 385 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 2140 "y.tab.c"
    break;

  case 76: /* Stmt: InputStmt ';'  */
#line 388 "staticalloc.y"
                        { (yyval.no) = (yyvsp[-1].no); }
#line 2146 "y.tab.c"
    break;

  case 77: /* Stmt: OutputStmt ';'  */
#line 389 "staticalloc.y"
                           {(yyval.no) = (yyvsp[-1].no); }
#line 2152 "y.tab.c"
    break;

  case 78: /* Stmt: AsgStmt ';'  */
#line 390 "staticalloc.y"
                        { (yyval.no) = (yyvsp[-1].no); }
#line 2158 "y.tab.c"
    break;

  case 79: /* Stmt: Ifstmt  */
#line 391 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 2164 "y.tab.c"
    break;

  case 80: /* Stmt: Whilestmt  */
#line 392 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 2170 "y.tab.c"
    break;

  case 81: /* Stmt: BREAK  */
#line 393 "staticalloc.y"
                       { (yyval.no) = createTree(NULL, NULL, NULL, 10,NULL, NULL, NULL, NULL); }
#line 2176 "y.tab.c"
    break;

  case 82: /* Stmt: CONTINUE  */
#line 394 "staticalloc.y"
                       { (yyval.no) = createTree(NULL, NULL, NULL, 11,NULL, NULL, NULL, NULL); }
#line 2182 "y.tab.c"
    break;

  case 83: /* Stmt: E EQ ALLOC ';'  */
#line 395 "staticalloc.y"
                                { (yyval.no) = createAllocNode((yyvsp[-3].no)); }
#line 2188 "y.tab.c"
    break;

  case 84: /* Stmt: E EQ INIT ';'  */
#line 396 "staticalloc.y"
                        { (yyval.no) = createInitNode((yyvsp[-3].no)); }
#line 2194 "y.tab.c"
    break;

  case 85: /* Stmt: FREE '(' E ')' ';'  */
#line 397 "staticalloc.y"
                             { (yyval.no) = createFreeNode((yyvsp[-4].no)); }
#line 2200 "y.tab.c"
    break;

  case 86: /* Stmt: E EQ NEW '(' ID ')' ';'  */
#line 398 "staticalloc.y"
                                  { (yyvsp[-6].no)->nodetype = Cobj; (yyval.no) = createNewNode((yyvsp[-6].no), (yyvsp[-2].no)->varname);	}
#line 2206 "y.tab.c"
    break;

  case 87: /* InputStmt: READ '(' E ')'  */
#line 401 "staticalloc.y"
                           { (yyval.no) =createIONode(-1,"Read",(yyvsp[-1].no));}
#line 2212 "y.tab.c"
    break;

  case 88: /* OutputStmt: WRITE '(' E ')'  */
#line 404 "staticalloc.y"
                             { (yyval.no) = createIONode(-2,"Write",(yyvsp[-1].no)); }
#line 2218 "y.tab.c"
    break;

  case 89: /* AsgStmt: E EQ E  */
#line 408 "staticalloc.y"
                  { (yyval.no) = createEQNode((yyvsp[-2].no), (yyvsp[0].no)); }
#line 2224 "y.tab.c"
    break;

  case 90: /* E: E PLUS E  */
#line 411 "staticalloc.y"
                { (yyval.no) = createOpNode("ADD",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2230 "y.tab.c"
    break;

  case 91: /* E: E MUL E  */
#line 412 "staticalloc.y"
                { (yyval.no) = createOpNode("MUL",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2236 "y.tab.c"
    break;

  case 92: /* E: E MINUS E  */
#line 413 "staticalloc.y"
                { (yyval.no) = createOpNode("SUB",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2242 "y.tab.c"
    break;

  case 93: /* E: E DIV E  */
#line 414 "staticalloc.y"
                { (yyval.no) = createOpNode("DIV",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2248 "y.tab.c"
    break;

  case 94: /* E: E EQU E  */
#line 415 "staticalloc.y"
                { (yyval.no) = createOpNode("EQ",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2254 "y.tab.c"
    break;

  case 95: /* E: E LT E  */
#line 416 "staticalloc.y"
                { (yyval.no) = createOpNode("LT",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2260 "y.tab.c"
    break;

  case 96: /* E: E GT E  */
#line 417 "staticalloc.y"
                { (yyval.no) = createOpNode("GT",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2266 "y.tab.c"
    break;

  case 97: /* E: E LTE E  */
#line 418 "staticalloc.y"
                { (yyval.no) = createOpNode("LE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2272 "y.tab.c"
    break;

  case 98: /* E: E GTE E  */
#line 419 "staticalloc.y"
                { (yyval.no) = createOpNode("GE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2278 "y.tab.c"
    break;

  case 99: /* E: E NE E  */
#line 420 "staticalloc.y"
                { (yyval.no) = createOpNode("NE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2284 "y.tab.c"
    break;

  case 100: /* E: '(' E ')'  */
#line 421 "staticalloc.y"
                { (yyval.no) = (yyvsp[-1].no); }
#line 2290 "y.tab.c"
    break;

  case 101: /* E: ID  */
#line 422 "staticalloc.y"
                { 
		  if(Llookup((yyvsp[0].no)->varname)==NULL){
			if(Lookup((yyvsp[0].no)->varname) == NULL){
	                        yyerror("Variable not declared\n");
        	                exit(1); }
			(yyvsp[0].no)->type = Lookup((yyvsp[0].no)->varname)->type;
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
#line 2314 "y.tab.c"
    break;

  case 102: /* E: ID '[' E ']'  */
#line 441 "staticalloc.y"
                 { if(Lookup((yyvsp[-3].no)->varname) == NULL){
                        yyerror("Variable not declared\n");
                        exit(1); }
                        (yyvsp[-3].no)->nodetype = arType;
			(yyvsp[-3].no)->type = Lookup((yyvsp[-3].no)->varname)->type;
                        (yyvsp[-3].no)->Gentry = Lookup((yyvsp[-3].no)->varname);
			(yyvsp[-3].no)->left = (yyvsp[-1].no);
                        (yyval.no) = (yyvsp[-3].no); }
#line 2327 "y.tab.c"
    break;

  case 103: /* E: ID '[' E ']' '[' E ']'  */
#line 450 "staticalloc.y"
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
#line 2344 "y.tab.c"
    break;

  case 104: /* E: NUM  */
#line 463 "staticalloc.y"
                { (yyval.no) = (yyvsp[0].no); }
#line 2350 "y.tab.c"
    break;

  case 105: /* E: LIT  */
#line 464 "staticalloc.y"
                { (yyval.no) = (yyvsp[0].no); }
#line 2356 "y.tab.c"
    break;

  case 106: /* E: NUL  */
#line 465 "staticalloc.y"
                { (yyval.no) = createTree(0, TLookup("VOID"), NULL, 0, NULL, NULL, NULL, NULL); }
#line 2362 "y.tab.c"
    break;

  case 107: /* E: ID '(' ')'  */
#line 466 "staticalloc.y"
                        {
				if(Lookup((yyvsp[-2].no)->varname) == NULL){
                                        yyerror("Function not declared before calling \n");
                                        exit(1);
                                }
				(yyvsp[-2].no)->nodetype = FnCall;
				(yyvsp[-2].no)->Gentry = Lookup((yyvsp[-2].no)->varname);
				(yyvsp[-2].no)->type = (yyvsp[-2].no)->Gentry->type;
				(yyvsp[-2].no)->left = NULL;
				(yyval.no) = (yyvsp[-2].no);
}
#line 2378 "y.tab.c"
    break;

  case 108: /* E: ID '(' ArgList ')'  */
#line 478 "staticalloc.y"
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
#line 2395 "y.tab.c"
    break;

  case 109: /* E: Field  */
#line 490 "staticalloc.y"
                                { (yyval.no) = (yyvsp[0].no); }
#line 2401 "y.tab.c"
    break;

  case 110: /* E: Method  */
#line 491 "staticalloc.y"
                                { (yyval.no) = (yyvsp[0].no); }
#line 2407 "y.tab.c"
    break;

  case 111: /* ArgList: ArgList ',' E  */
#line 494 "staticalloc.y"
                                { (yyvsp[0].no)->middle = (yyvsp[-2].no); (yyval.no)=(yyvsp[0].no);}
#line 2413 "y.tab.c"
    break;

  case 112: /* ArgList: E  */
#line 495 "staticalloc.y"
                                { (yyval.no)=(yyvsp[0].no); }
#line 2419 "y.tab.c"
    break;

  case 113: /* Method: SELF '.' ID '(' ArgList ')'  */
#line 499 "staticalloc.y"
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
					(yyvsp[-3].no)->val = Mtemp->Flabel;
					(yyvsp[-3].no)->nodetype = MethodCall;
        	                        (yyval.no) = createTree(NULL, NULL, "self", SelfFnNode, NULL, NULL, NULL, (yyvsp[-3].no));   
					(yyval.no)->Lentry = Llookup("self");
                                        	(yyval.no)->type = Mtemp->type;
					
	                                }
#line 2442 "y.tab.c"
    break;

  case 114: /* Method: SELF '.' ID '(' ')'  */
#line 517 "staticalloc.y"
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
					(yyvsp[-2].no)->val = Mtemp->Flabel;
					(yyvsp[-2].no)->nodetype = MethodCall;
                                        (yyval.no) = createTree(NULL, NULL, "self", SelfFnNode, NULL, NULL, NULL, (yyvsp[-2].no));
                                        (yyval.no)->Lentry = Llookup("self");
					
                                                (yyval.no)->type = Mtemp->type;


				}
#line 2466 "y.tab.c"
    break;

  case 115: /* Method: Field '.' ID '(' ArgList ')'  */
#line 536 "staticalloc.y"
                                       {	if((yyvsp[-5].no)->nodetype = FieldNode){
							if(Cptr == NULL){
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
						yyerror("Variable not a class object\n");
					}
					struct Memberfunclist *Mtemp = CMLookup(temp->Ctype, (yyvsp[-3].no)->varname);
					if(Mtemp == NULL){

						yyerror("Method not a member of class\n");
						exit(1);
					}
					(yyvsp[-5].no)->type = Mtemp->type;
					(yyvsp[-3].no)->middle = (yyvsp[-1].no);
					(yyvsp[-3].no)->val = Mtemp->Flabel;
					(yyvsp[-3].no)->nodetype = MethodCall;
					(yyval.no) = (yyvsp[-5].no);
					}
#line 2497 "y.tab.c"
    break;

  case 116: /* Method: ID '.' ID '(' ArgList ')'  */
#line 563 "staticalloc.y"
                                    { 
					(yyvsp[-5].no)->right = (yyvsp[-3].no); 
					struct Gsymbol *Gtemp = Lookup((yyvsp[-5].no)->varname);
					if(Gtemp == NULL){
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
				
					(yyvsp[-3].no)->middle = (yyvsp[-1].no);
					(yyvsp[-3].no)->val = Mtemp->Flabel;
					(yyvsp[-5].no)->right = (yyvsp[-3].no);
					(yyvsp[-3].no)->nodetype = MethodCall;
					(yyval.no) = (yyvsp[-5].no);
					}
#line 2528 "y.tab.c"
    break;

  case 117: /* Method: ID '.' ID '(' ')'  */
#line 589 "staticalloc.y"
                            {
					(yyvsp[-4].no)->right = (yyvsp[-2].no);
                                        struct Gsymbol *Gtemp = Lookup((yyvsp[-4].no)->varname);
                                        if(Gtemp == NULL){
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
					(yyvsp[-2].no)->val = Mtemp->Flabel;
					(yyvsp[-4].no)->right = (yyvsp[-2].no);
					(yyvsp[-2].no)->nodetype = MethodCall;
                                        (yyval.no) = (yyvsp[-4].no);

				}
#line 2559 "y.tab.c"
    break;

  case 118: /* Field: Field '.' ID  */
#line 616 "staticalloc.y"
                        { struct tnode* temp = (yyvsp[-2].no); 
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
#line 2576 "y.tab.c"
    break;

  case 119: /* Field: ID '.' ID  */
#line 628 "staticalloc.y"
                        { (yyvsp[-2].no)->right = (yyvsp[0].no); 
					
				struct Gsymbol *Gtemp = Lookup((yyvsp[-2].no)->varname);
				struct Lsymbol *Ltemp = Llookup((yyvsp[-2].no)->varname);
				if(Ltemp==NULL){
					if(Gtemp==NULL){
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
#line 2612 "y.tab.c"
    break;

  case 120: /* Field: SELF '.' ID  */
#line 659 "staticalloc.y"
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
#line 2635 "y.tab.c"
    break;


#line 2639 "y.tab.c"

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

#line 679 "staticalloc.y"


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
        yyparse();

}

