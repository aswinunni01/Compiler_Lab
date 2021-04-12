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

int yylex(void);
FILE *input_file;
struct tnode* end_node;
int ploc=-3;
int lloc=0;
int size=0;
int FieldNo=0;

#line 100 "y.tab.c"

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
    FREE = 299                     /* FREE  */
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 30 "staticalloc.y"

	struct Typetable *Tentry;
	struct tnode *no;
	struct Paramstruct *np;
	struct Fieldlist *fl;

#line 247 "y.tab.c"

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
  YYSYMBOL_45_ = 45,                       /* '{'  */
  YYSYMBOL_46_ = 46,                       /* '}'  */
  YYSYMBOL_47_ = 47,                       /* ';'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* ']'  */
  YYSYMBOL_51_ = 51,                       /* '('  */
  YYSYMBOL_52_ = 52,                       /* ')'  */
  YYSYMBOL_53_ = 53,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_start = 55,                     /* start  */
  YYSYMBOL_TypeDefBlock = 56,              /* TypeDefBlock  */
  YYSYMBOL_TypeDefList = 57,               /* TypeDefList  */
  YYSYMBOL_TypeDef = 58,                   /* TypeDef  */
  YYSYMBOL_FieldDeclList = 59,             /* FieldDeclList  */
  YYSYMBOL_FieldDecl = 60,                 /* FieldDecl  */
  YYSYMBOL_TypeName = 61,                  /* TypeName  */
  YYSYMBOL_GdeclBlock = 62,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 63,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 64,                     /* Gdecl  */
  YYSYMBOL_Type = 65,                      /* Type  */
  YYSYMBOL_GidList = 66,                   /* GidList  */
  YYSYMBOL_FdefBlock = 67,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 68,                      /* Fdef  */
  YYSYMBOL_ParamList = 69,                 /* ParamList  */
  YYSYMBOL_Param = 70,                     /* Param  */
  YYSYMBOL_Body = 71,                      /* Body  */
  YYSYMBOL_Retstmt = 72,                   /* Retstmt  */
  YYSYMBOL_MainBlock = 73,                 /* MainBlock  */
  YYSYMBOL_LdeclBlock = 74,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 75,                  /* LDecList  */
  YYSYMBOL_LDecl = 76,                     /* LDecl  */
  YYSYMBOL_IdList = 77,                    /* IdList  */
  YYSYMBOL_Ifstmt = 78,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 79,                 /* Whilestmt  */
  YYSYMBOL_Stlist = 80,                    /* Stlist  */
  YYSYMBOL_Stmt = 81,                      /* Stmt  */
  YYSYMBOL_InputStmt = 82,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 83,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 84,                   /* AsgStmt  */
  YYSYMBOL_E = 85,                         /* E  */
  YYSYMBOL_ArgList = 86,                   /* ArgList  */
  YYSYMBOL_Field = 87                      /* Field  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  22
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   393

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  210

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      51,    52,     2,     2,    48,     2,    53,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    47,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    50,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    45,     2,    46,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    48,    48,    58,    69,    78,    79,    83,    96,    99,
      99,   102,   109,   114,   117,   123,   124,   125,   126,   139,
     139,   142,   142,   145,   155,   156,   157,   158,   162,   168,
     174,   180,   190,   196,   203,   209,   220,   221,   222,   224,
     234,   236,   238,   241,   244,   247,   248,   256,   257,   260,
     261,   264,   273,   277,   284,   285,   288,   291,   292,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   307,
     310,   314,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   347,   356,   369,   370,   371,   372,
     384,   396,   399,   400,   403,   416
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
  "INIT", "ALLOC", "FREE", "'{'", "'}'", "';'", "','", "'['", "']'", "'('",
  "')'", "'.'", "$accept", "start", "TypeDefBlock", "TypeDefList",
  "TypeDef", "FieldDeclList", "FieldDecl", "TypeName", "GdeclBlock",
  "GdeclList", "Gdecl", "Type", "GidList", "FdefBlock", "Fdef",
  "ParamList", "Param", "Body", "Retstmt", "MainBlock", "LdeclBlock",
  "LDecList", "LDecl", "IdList", "Ifstmt", "Whilestmt", "Stlist", "Stmt",
  "InputStmt", "OutputStmt", "AsgStmt", "E", "ArgList", "Field", YY_NULLPTR
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
     295,   296,   297,   298,   299,   123,   125,    59,    44,    91,
      93,    40,    41,    46
};
#endif

#define YYPACT_NINF (-191)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      40,    23,   119,     4,    27,    -5,   136,    29,    43,    59,
    -191,  -191,  -191,  -191,  -191,   159,  -191,    86,    62,  -191,
      15,  -191,  -191,   239,   100,   136,  -191,    61,   109,  -191,
    -191,  -191,   -40,    33,   312,  -191,  -191,    29,   239,  -191,
      72,  -191,    74,  -191,   121,   136,  -191,   129,  -191,  -191,
    -191,  -191,    -3,  -191,   139,  -191,   136,   120,   123,   144,
      20,  -191,     8,  -191,  -191,   124,    56,   141,   132,  -191,
     136,  -191,   169,   136,  -191,   143,   193,   179,   183,  -191,
     146,    57,   141,  -191,   192,   302,  -191,   175,   160,   157,
     166,  -191,   179,  -191,   170,  -191,  -191,   177,   180,   -41,
    -191,   197,   216,  -191,  -191,  -191,  -191,   217,    36,  -191,
    -191,    89,  -191,   195,   222,   225,   346,   258,  -191,  -191,
     219,   245,  -191,   275,    36,    36,    36,    73,   303,    36,
      36,    36,    42,    36,   311,  -191,  -191,  -191,  -191,   299,
      36,    36,    36,    36,    36,    36,    36,    36,    36,    36,
     304,   265,  -191,  -191,   191,   214,   274,  -191,   352,   104,
    -191,   232,   238,   256,  -191,   298,  -191,   278,   279,   352,
     368,   368,   360,   360,   352,   352,   352,   352,   352,   352,
    -191,  -191,  -191,  -191,   282,    36,  -191,   310,   300,   290,
    -191,  -191,  -191,    36,   352,   175,   175,  -191,   280,    87,
     131,  -191,   292,   175,   301,  -191,   133,  -191,   309,  -191
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
      27,    24,    25,    26,    20,     0,    22,     0,     0,     8,
       0,    10,     1,     0,     0,     6,    37,     0,     0,     5,
      19,    21,    34,     0,     0,     7,     9,    24,     0,     3,
       0,    36,     0,     4,     0,    42,    23,     0,    18,    15,
      16,    17,     0,    13,     0,     2,    42,     0,     0,     0,
       0,    41,    28,    11,    12,     0,     0,     0,    32,    43,
       0,    35,     0,    42,    14,     0,     0,     0,     0,    40,
       0,     0,     0,    48,     0,     0,    50,     0,     0,     0,
      29,    31,     0,    53,     0,    47,    49,     0,     0,    83,
      86,     0,     0,    64,    65,    88,    87,     0,     0,    62,
      63,     0,    58,     0,     0,     0,     0,    91,    46,    33,
       0,     0,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    57,    59,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    52,     0,     0,     0,    89,    93,     0,
      95,     0,     0,     0,    82,     0,    44,     0,     0,    71,
      72,    74,    73,    75,    81,    76,    77,    79,    78,    80,
      94,    30,    70,    69,    84,     0,    90,     0,     0,     0,
      45,    67,    66,     0,    92,     0,     0,    68,     0,     0,
       0,    85,     0,     0,     0,    55,     0,    56,     0,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,  -191,  -191,   307,  -191,   277,  -191,   182,  -191,
     332,     0,  -191,   326,   -22,   -52,   287,   270,  -191,    44,
     281,  -191,   308,  -191,  -191,  -191,  -190,  -111,  -191,  -191,
    -191,  -107,  -191,  -191
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,    20,    21,    52,    53,    54,     6,    15,
      16,    24,    33,    25,    26,    60,    61,    88,   134,     9,
      77,    85,    86,    94,   109,   110,   111,   112,   113,   114,
     115,   116,   159,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     135,   132,    17,    41,    66,   199,   200,    48,   126,    44,
     127,    45,   128,   206,    18,    17,    41,   154,   155,   156,
     158,    81,   161,   162,   163,    18,   165,    22,    49,    50,
       2,    51,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,    63,    19,    59,    99,   100,   140,   141,
     142,   143,    28,     1,     7,    35,    59,    72,     2,    73,
     144,   145,   146,   147,   148,   149,    27,    39,    70,   105,
      59,    29,    71,    59,     7,     2,    84,   106,   194,     3,
      46,    47,    55,    99,   100,    84,   198,   108,   135,   135,
      97,    98,    97,    98,   164,   135,    32,    99,   100,    99,
     100,   101,   202,   101,    70,    70,   105,    34,    75,    91,
      40,   203,    42,   102,   106,   102,   103,   104,   103,   104,
     105,    43,   105,    56,   108,   157,    57,   133,   106,    10,
     106,   107,    58,   107,    97,    98,    97,    98,   108,    62,
     108,    99,   100,    99,   100,   101,    10,   101,   208,    65,
      11,    12,   185,    13,    69,    14,   186,   102,   204,   102,
     103,   104,   103,   104,   105,    67,   105,    11,    12,    10,
      13,    74,   106,    68,   106,   107,    76,   107,    97,    98,
      80,    78,   108,     8,   108,    99,   100,    23,    82,   101,
      11,    12,    87,    13,    89,    30,    90,   140,   141,   142,
     143,   102,    93,    10,   103,   104,   118,   119,   105,   144,
     145,   146,   147,   148,   149,   120,   106,   122,   123,   107,
     140,   141,   142,   143,    11,    12,   108,    13,   124,    83,
     151,   125,   144,   145,   146,   147,   148,   149,   140,   141,
     142,   143,   136,   182,   140,   141,   142,   143,   129,    10,
     144,   145,   146,   147,   148,   149,   144,   145,   146,   147,
     148,   149,   140,   141,   142,   143,   183,   130,   131,   137,
      37,    12,   138,    13,   144,   145,   146,   147,   148,   149,
     140,   141,   142,   143,   187,   153,   140,   141,   142,   143,
     188,   152,   144,   145,   146,   147,   148,   149,   144,   145,
     146,   147,   148,   149,   140,   141,   142,   143,   189,    99,
     100,   150,    10,   160,   180,   181,   144,   145,   146,   147,
     148,   149,    48,   166,   184,   191,   192,    36,   196,    64,
     201,   193,   105,    11,    12,   195,    13,   197,    95,   205,
     106,   167,   168,    49,    50,   190,    51,    31,   207,    38,
     108,   139,   140,   141,   142,   143,   209,    79,   140,   141,
     142,   143,   121,    92,   144,   145,   146,   147,   148,   149,
     144,   145,   146,   147,   148,   149,   142,   143,   144,   145,
     146,   147,   148,   149,     0,     0,   144,   145,   146,   147,
     148,   149,     0,    96
};

static const yytype_int16 yycheck[] =
{
     111,   108,     2,    25,    56,   195,   196,    10,    49,    49,
      51,    51,    53,   203,    10,    15,    38,   124,   125,   126,
     127,    73,   129,   130,   131,    10,   133,     0,    31,    32,
      35,    34,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,    46,    40,    45,    10,    11,     6,     7,
       8,     9,     8,    13,    31,    40,    56,    49,    35,    51,
      18,    19,    20,    21,    22,    23,    37,    23,    48,    33,
      70,    12,    52,    73,    31,    35,    76,    41,   185,    39,
      47,    48,    38,    10,    11,    85,   193,    51,   199,   200,
       3,     4,     3,     4,    52,   206,    10,    10,    11,    10,
      11,    14,    15,    14,    48,    48,    33,    45,    52,    52,
      10,    24,    51,    26,    41,    26,    29,    30,    29,    30,
      33,    12,    33,    51,    51,    52,    52,    38,    41,    10,
      41,    44,    11,    44,     3,     4,     3,     4,    51,    10,
      51,    10,    11,    10,    11,    14,    10,    14,    15,    10,
      31,    32,    48,    34,    10,    36,    52,    26,    27,    26,
      29,    30,    29,    30,    33,    45,    33,    31,    32,    10,
      34,    47,    41,    50,    41,    44,    35,    44,     3,     4,
      11,    49,    51,     1,    51,    10,    11,     5,    45,    14,
      31,    32,    13,    34,    11,    36,    50,     6,     7,     8,
       9,    26,    10,    10,    29,    30,    46,    50,    33,    18,
      19,    20,    21,    22,    23,    49,    41,    47,    48,    44,
       6,     7,     8,     9,    31,    32,    51,    34,    51,    36,
      11,    51,    18,    19,    20,    21,    22,    23,     6,     7,
       8,     9,    47,    52,     6,     7,     8,     9,    51,    10,
      18,    19,    20,    21,    22,    23,    18,    19,    20,    21,
      22,    23,     6,     7,     8,     9,    52,    51,    51,    47,
      31,    32,    47,    34,    18,    19,    20,    21,    22,    23,
       6,     7,     8,     9,    52,    10,     6,     7,     8,     9,
      52,    46,    18,    19,    20,    21,    22,    23,    18,    19,
      20,    21,    22,    23,     6,     7,     8,     9,    52,    10,
      11,    53,    10,    10,    10,    50,    18,    19,    20,    21,
      22,    23,    10,    12,    50,    47,    47,    20,    28,    52,
      50,    49,    33,    31,    32,    25,    34,    47,    36,    47,
      41,    42,    43,    31,    32,    47,    34,    15,    47,    23,
      51,     5,     6,     7,     8,     9,    47,    70,     6,     7,
       8,     9,    92,    82,    18,    19,    20,    21,    22,    23,
      18,    19,    20,    21,    22,    23,     8,     9,    18,    19,
      20,    21,    22,    23,    -1,    -1,    18,    19,    20,    21,
      22,    23,    -1,    85
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    13,    35,    39,    55,    56,    62,    31,    62,    73,
      10,    31,    32,    34,    36,    63,    64,    65,    10,    40,
      57,    58,     0,    62,    65,    67,    68,    37,    73,    12,
      36,    64,    10,    66,    45,    40,    58,    31,    67,    73,
      10,    68,    51,    12,    49,    51,    47,    48,    10,    31,
      32,    34,    59,    60,    61,    73,    51,    52,    11,    65,
      69,    70,    10,    46,    60,    10,    69,    45,    50,    10,
      48,    52,    49,    51,    47,    52,    35,    74,    49,    70,
      11,    69,    45,    36,    65,    75,    76,    13,    71,    11,
      50,    52,    74,    10,    77,    36,    76,     3,     4,    10,
      11,    14,    26,    29,    30,    33,    41,    44,    51,    78,
      79,    80,    81,    82,    83,    84,    85,    87,    46,    50,
      49,    71,    47,    48,    51,    51,    49,    51,    53,    51,
      51,    51,    85,    38,    72,    81,    47,    47,    47,     5,
       6,     7,     8,     9,    18,    19,    20,    21,    22,    23,
      53,    11,    46,    10,    85,    85,    85,    52,    85,    86,
      10,    85,    85,    85,    52,    85,    12,    42,    43,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      10,    50,    52,    52,    50,    48,    52,    52,    52,    52,
      47,    47,    47,    49,    85,    25,    28,    47,    85,    80,
      80,    50,    15,    24,    27,    47,    80,    47,    15,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    55,    55,    55,    55,    56,    56,    57,
      57,    58,    59,    59,    60,    61,    61,    61,    61,    62,
      62,    63,    63,    64,    65,    65,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    67,    68,
      69,    69,    69,    70,    71,    72,    73,    74,    74,    75,
      75,    76,    77,    77,    78,    78,    79,    80,    80,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    82,
      83,    84,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    85,    85,    85,    85,    85,    85,    85,    85,
      85,    85,    86,    86,    87,    87
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     3,     4,     3,     2,     3,     2,     2,
       1,     4,     2,     1,     3,     1,     1,     1,     1,     3,
       2,     2,     1,     3,     1,     1,     1,     1,     3,     6,
       9,     6,     4,     7,     1,     4,     2,     1,     0,     9,
       3,     1,     0,     2,     4,     3,     8,     3,     2,     2,
       1,     3,     3,     1,    10,     8,     8,     2,     1,     2,
       2,     2,     1,     1,     1,     1,     4,     4,     5,     4,
       4,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     4,     7,     1,     1,     1,     3,
       4,     1,     3,     1,     3,     3
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
  case 2: /* start: TypeDefBlock GdeclBlock FdefBlock MainBlock  */
#line 48 "staticalloc.y"
                                                        {
                                                printf("Completed\n");
                                                FILE *fptr = fopen("out.xsm", "w");
						printtable();
                                                writeheader(fptr);
						codeGen((yyvsp[-1].no), fptr);
                                        	codeGen((yyvsp[0].no),fptr);
 //                                               writefooter(fptr);
                                                exit(1);
                                        }
#line 1491 "y.tab.c"
    break;

  case 3: /* start: TypeDefBlock GdeclBlock MainBlock  */
#line 58 "staticalloc.y"
                                            {
						printf("Completed here\n");
					FILE *fptr = fopen("out.xsm", "w");
                                                printtable();
                                                writeheader(fptr);
                                                codeGen((yyvsp[0].no), fptr);
 //                                               writefooter(fptr);
                                                exit(1);
					
	}
#line 1506 "y.tab.c"
    break;

  case 4: /* start: BEG GdeclBlock MainBlock END  */
#line 70 "staticalloc.y"
                                         {
      						printf("Completed\n");
	      					FILE *fptr = fopen("out.xsm", "w");
						writeheader(fptr);
	  					//codeGen($2,fptr);
//						writefooter(fptr); 
      						exit(1); 
					}
#line 1519 "y.tab.c"
    break;

  case 5: /* start: BEG MainBlock END  */
#line 78 "staticalloc.y"
                                                { exit(1); }
#line 1525 "y.tab.c"
    break;

  case 6: /* start: GdeclBlock FdefBlock  */
#line 79 "staticalloc.y"
                                        { printf("Completed now \n"); printtable(); exit(1); }
#line 1531 "y.tab.c"
    break;

  case 7: /* TypeDefBlock: TYPE TypeDefList ENDTYPE  */
#line 83 "staticalloc.y"
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
#line 1549 "y.tab.c"
    break;

  case 8: /* TypeDefBlock: TYPE ENDTYPE  */
#line 96 "staticalloc.y"
                            {}
#line 1555 "y.tab.c"
    break;

  case 10: /* TypeDefList: TypeDef  */
#line 99 "staticalloc.y"
                                            {}
#line 1561 "y.tab.c"
    break;

  case 11: /* TypeDef: ID '{' FieldDeclList '}'  */
#line 102 "staticalloc.y"
                                        { 
					Tinstall((yyvsp[-3].no)->varname, size, (yyvsp[-1].fl)); 
					size = 0;
					Findex=0;
}
#line 1571 "y.tab.c"
    break;

  case 12: /* FieldDeclList: FieldDeclList FieldDecl  */
#line 109 "staticalloc.y"
                                        { (yyvsp[0].fl)->next = (yyvsp[-1].fl);
	      				  (yyval.fl) = (yyvsp[0].fl); FieldNo++;if(FieldNo>=8){
							yyerror("Number of fields cannot exceed 8\n");
							exit(1);
}}
#line 1581 "y.tab.c"
    break;

  case 13: /* FieldDeclList: FieldDecl  */
#line 114 "staticalloc.y"
                                {  FieldNo = 0;(yyval.fl)=(yyvsp[0].fl); }
#line 1587 "y.tab.c"
    break;

  case 14: /* FieldDecl: TypeName ID ';'  */
#line 117 "staticalloc.y"
                                 { 

				size=size+1;
				(yyval.fl) = Finstall((yyvsp[-1].no)->varname, (yyvsp[-2].Tentry)); }
#line 1596 "y.tab.c"
    break;

  case 15: /* TypeName: INT  */
#line 123 "staticalloc.y"
                    { (yyval.Tentry) = "INT"; }
#line 1602 "y.tab.c"
    break;

  case 16: /* TypeName: STR  */
#line 124 "staticalloc.y"
                    { (yyval.Tentry) = "STR"; }
#line 1608 "y.tab.c"
    break;

  case 17: /* TypeName: VOID  */
#line 125 "staticalloc.y"
                     { (yyval.Tentry) = "VOID"; }
#line 1614 "y.tab.c"
    break;

  case 18: /* TypeName: ID  */
#line 126 "staticalloc.y"
                    {  (yyval.Tentry) = (yyvsp[0].no)->varname; }
#line 1620 "y.tab.c"
    break;

  case 20: /* GdeclBlock: DECL ENDDECL  */
#line 139 "staticalloc.y"
                                                   {}
#line 1626 "y.tab.c"
    break;

  case 22: /* GdeclList: Gdecl  */
#line 142 "staticalloc.y"
                                    {}
#line 1632 "y.tab.c"
    break;

  case 23: /* Gdecl: Type GidList ';'  */
#line 145 "staticalloc.y"
                                        { 
     						while((yyvsp[-1].no) != NULL) {
			     				struct Gsymbol* temp = Lookup((yyvsp[-1].no)->varname);
							temp->type = (yyvsp[-2].Tentry);
							(yyvsp[-1].no) = (yyvsp[-1].no)->left;}
					}
#line 1643 "y.tab.c"
    break;

  case 24: /* Type: INT  */
#line 155 "staticalloc.y"
                                        { (yyval.Tentry) = TLookup("INT"); }
#line 1649 "y.tab.c"
    break;

  case 25: /* Type: STR  */
#line 156 "staticalloc.y"
                                        { (yyval.Tentry) = TLookup("STR"); }
#line 1655 "y.tab.c"
    break;

  case 26: /* Type: VOID  */
#line 157 "staticalloc.y"
                                        { (yyval.Tentry) = TLookup("VOID"); }
#line 1661 "y.tab.c"
    break;

  case 27: /* Type: ID  */
#line 158 "staticalloc.y"
                                        { (yyval.Tentry) = TLookup((yyvsp[0].no)->varname); }
#line 1667 "y.tab.c"
    break;

  case 28: /* GidList: GidList ',' ID  */
#line 162 "staticalloc.y"
                                        {
       						if(Lookup((yyvsp[0].no)->varname) != NULL){
			                                yyerror("Variable already declared");   
			                                exit(1);}     
					  	Install((yyvsp[0].no)->varname, NULL, 1,1, NULL, NULL); (yyvsp[0].no)->left = (yyvsp[-2].no); (yyval.no)=(yyvsp[0].no); }
#line 1677 "y.tab.c"
    break;

  case 29: /* GidList: GidList ',' ID '[' NUM ']'  */
#line 168 "staticalloc.y"
                                        {
						 if(Lookup((yyvsp[-3].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                         Install((yyvsp[-3].no)->varname, NULL,(yyvsp[-1].no)->val, 1, NULL, NULL); (yyvsp[-3].no)->left = (yyvsp[-5].no); (yyval.no)=(yyvsp[-3].no);
						 address= address + ((yyvsp[-1].no)->val-1);}
#line 1688 "y.tab.c"
    break;

  case 30: /* GidList: GidList ',' ID '[' NUM ']' '[' NUM ']'  */
#line 174 "staticalloc.y"
                                              { 
						if(Lookup((yyvsp[-6].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-6].no)->varname, NULL, (yyvsp[-4].no)->val, (yyvsp[-1].no)->val, NULL, NULL); (yyvsp[-6].no)->left = (yyvsp[-8].no); (yyval.no)=(yyvsp[-6].no);
                        			address= address + (((yyvsp[-4].no)->val*(yyvsp[-1].no)->val)-1);}
#line 1699 "y.tab.c"
    break;

  case 31: /* GidList: GidList ',' ID '(' ParamList ')'  */
#line 180 "staticalloc.y"
                                                {
                                                if(Lookup((yyvsp[-3].no)->varname)!=NULL){
                                                        yyerror("Function name already declared");
                                                        exit(1);}
                                                Install((yyvsp[-3].no)->varname, NULL, 1, 1,(yyvsp[-1].np), getFlabel()); (yyvsp[-3].no)->left = (yyvsp[-5].no);  (yyval.no) = (yyvsp[-3].no);
						ploc=-3; lloc=0; Lhead=NULL;
						 }
#line 1711 "y.tab.c"
    break;

  case 32: /* GidList: ID '[' NUM ']'  */
#line 190 "staticalloc.y"
                                        { 
						if(Lookup((yyvsp[-3].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-3].no)->varname, NULL,(yyvsp[-1].no)->val, 1, NULL, NULL); (yyval.no) = (yyvsp[-3].no);
						address = address + ((yyvsp[-1].no)->val-1); }
#line 1722 "y.tab.c"
    break;

  case 33: /* GidList: ID '[' NUM ']' '[' NUM ']'  */
#line 196 "staticalloc.y"
                                        {
						if(Lookup((yyvsp[-6].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-6].no)->varname, NULL,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val, NULL, NULL); (yyval.no) = (yyvsp[-6].no);
			                        address = address + (((yyvsp[-4].no)->val*(yyvsp[-1].no)->val)-1); }
#line 1733 "y.tab.c"
    break;

  case 34: /* GidList: ID  */
#line 203 "staticalloc.y"
                                        {
						 if(Lookup((yyvsp[0].no)->varname) != NULL){
							yyerror("Variable name already declared");
							exit(1);}	
						Install((yyvsp[0].no)->varname, NULL,1, 1, NULL, NULL); (yyval.no) = (yyvsp[0].no); }
#line 1743 "y.tab.c"
    break;

  case 35: /* GidList: ID '(' ParamList ')'  */
#line 209 "staticalloc.y"
                                        {
						if(Lookup((yyvsp[-3].no)->varname)!=NULL){
							yyerror("Function name already declared");
							exit(1);}
						Install((yyvsp[-3].no)->varname, NULL, 1, 1,(yyvsp[-1].np), getFlabel()); (yyval.no) = (yyvsp[-3].no);
						ploc=-3; lloc=0; Lhead=NULL;
					}
#line 1755 "y.tab.c"
    break;

  case 36: /* FdefBlock: FdefBlock Fdef  */
#line 220 "staticalloc.y"
                                                                { (yyval.no) = createTree(NULL,FnBlock, NULL,FnBlock, NULL, (yyvsp[-1].no),NULL, (yyvsp[0].no));}
#line 1761 "y.tab.c"
    break;

  case 37: /* FdefBlock: Fdef  */
#line 221 "staticalloc.y"
                                                                { (yyval.no) = (yyvsp[0].no); }
#line 1767 "y.tab.c"
    break;

  case 38: /* FdefBlock: %empty  */
#line 222 "staticalloc.y"
                                                {}
#line 1773 "y.tab.c"
    break;

  case 39: /* Fdef: Type ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 224 "staticalloc.y"
                                                                { checkvalid((yyvsp[-8].Tentry), (yyvsp[-5].np), Lookup((yyvsp[-7].no)->varname)); 
      								  ploc=-3; lloc=0; 
								  struct tnode *temp = (yyvsp[-1].no)->left;
								  (yyvsp[-1].no)->left = NULL;
								  (yyval.no) = createTree( NULL, NULL, (yyvsp[-7].no)->varname, FnNode, Lookup((yyvsp[-7].no)->varname), temp, NULL, (yyvsp[-1].no));
								  (yyval.no)->Lentry = Lhead;
								  Lhead = NULL;
								}
#line 1786 "y.tab.c"
    break;

  case 40: /* ParamList: ParamList ',' Param  */
#line 234 "staticalloc.y"
                                        { 	Pcheck((yyvsp[-2].np), (yyvsp[0].np));
						(yyvsp[0].np)->next = (yyvsp[-2].np); (yyval.np) = (yyvsp[0].np); Linstall((yyvsp[0].np)->name, (yyvsp[0].np)->type, ploc--); }
#line 1793 "y.tab.c"
    break;

  case 41: /* ParamList: Param  */
#line 236 "staticalloc.y"
                                        { 
					  (yyval.np) = (yyvsp[0].np); Linstall((yyvsp[0].np)->name, (yyvsp[0].np)->type, ploc--); }
#line 1800 "y.tab.c"
    break;

  case 42: /* ParamList: %empty  */
#line 238 "staticalloc.y"
                                        { (yyval.np) = NULL; }
#line 1806 "y.tab.c"
    break;

  case 43: /* Param: Type ID  */
#line 241 "staticalloc.y"
                                        { (yyval.np) = Pinstall((yyvsp[0].no)->varname, (yyvsp[-1].Tentry), NULL); }
#line 1812 "y.tab.c"
    break;

  case 44: /* Body: BEG Stlist Retstmt END  */
#line 244 "staticalloc.y"
                                        { (yyvsp[-1].no)->left=(yyvsp[-2].no); (yyval.no) = (yyvsp[-1].no); }
#line 1818 "y.tab.c"
    break;

  case 45: /* Retstmt: RET E ';'  */
#line 247 "staticalloc.y"
                                        { (yyval.no) = createTree(NULL, RetNode, NULL, RetNode, NULL, NULL, NULL, (yyvsp[-1].no)); }
#line 1824 "y.tab.c"
    break;

  case 46: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 248 "staticalloc.y"
                                                                { 	ploc=-3; lloc=0;
	  								struct tnode* temp = (yyvsp[-1].no)->left;
									(yyvsp[-1].no)->left = NULL;
	  								(yyval.no) = createTree(NULL, NULL, "main", MnNode, NULL, temp, NULL,(yyvsp[-1].no));
									(yyval.no)->Lentry = Lhead;
									Lhead = NULL; }
#line 1835 "y.tab.c"
    break;

  case 47: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 256 "staticalloc.y"
                                        {}
#line 1841 "y.tab.c"
    break;

  case 48: /* LdeclBlock: DECL ENDDECL  */
#line 257 "staticalloc.y"
                                        {}
#line 1847 "y.tab.c"
    break;

  case 49: /* LDecList: LDecList LDecl  */
#line 260 "staticalloc.y"
                                        {}
#line 1853 "y.tab.c"
    break;

  case 50: /* LDecList: LDecl  */
#line 261 "staticalloc.y"
                                        {}
#line 1859 "y.tab.c"
    break;

  case 51: /* LDecl: Type IdList ';'  */
#line 264 "staticalloc.y"
                                                {	struct tnode* ttemp = (yyvsp[-1].no);
                                                while(ttemp != NULL) {
							struct Lsymbol* Ltemp = Llookup(ttemp->varname);
							if(Ltemp->binding>0){
                                                        Ltemp->type = (yyvsp[-2].Tentry);}
                                                        ttemp=ttemp->left;}
                                        }
#line 1871 "y.tab.c"
    break;

  case 52: /* IdList: IdList ',' ID  */
#line 273 "staticalloc.y"
                                        { if(Llookup((yyvsp[0].no)->varname)!=NULL){
       						yyerror("Local variable already declared");
						exit(1);}						
					  Linstall((yyvsp[0].no)->varname, NULL, ++lloc); (yyvsp[0].no)->left = (yyvsp[-2].no); (yyval.no)=(yyvsp[0].no); }
#line 1880 "y.tab.c"
    break;

  case 53: /* IdList: ID  */
#line 277 "staticalloc.y"
                                        { if(Llookup((yyvsp[0].no)->varname)!=NULL){
                                                yyerror("Local variable already declared");
                                                exit(1);} 
					  Linstall((yyvsp[0].no)->varname, NULL, ++lloc); (yyval.no)=(yyvsp[0].no); }
#line 1889 "y.tab.c"
    break;

  case 54: /* Ifstmt: IF '(' E ')' THEN Stlist ELSE Stlist ENDIF ';'  */
#line 284 "staticalloc.y"
                                                              {  (yyval.no) = createIfNode((yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no)); }
#line 1895 "y.tab.c"
    break;

  case 55: /* Ifstmt: IF '(' E ')' THEN Stlist ENDIF ';'  */
#line 285 "staticalloc.y"
                                                              { (yyval.no) = createIfNode((yyvsp[-5].no), (yyvsp[-2].no), NULL); }
#line 1901 "y.tab.c"
    break;

  case 56: /* Whilestmt: WHILE '(' E ')' DO Stlist ENDWHILE ';'  */
#line 288 "staticalloc.y"
                                                          { (yyval.no) = createWhileNode((yyvsp[-5].no), (yyvsp[-2].no)); }
#line 1907 "y.tab.c"
    break;

  case 57: /* Stlist: Stlist Stmt  */
#line 291 "staticalloc.y"
                        { (yyval.no) = createTree(NULL,3, NULL,3, NULL, (yyvsp[-1].no),NULL, (yyvsp[0].no)); }
#line 1913 "y.tab.c"
    break;

  case 58: /* Stlist: Stmt  */
#line 292 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 1919 "y.tab.c"
    break;

  case 59: /* Stmt: InputStmt ';'  */
#line 295 "staticalloc.y"
                        { (yyval.no) = (yyvsp[-1].no); }
#line 1925 "y.tab.c"
    break;

  case 60: /* Stmt: OutputStmt ';'  */
#line 296 "staticalloc.y"
                           {(yyval.no) = (yyvsp[-1].no); }
#line 1931 "y.tab.c"
    break;

  case 61: /* Stmt: AsgStmt ';'  */
#line 297 "staticalloc.y"
                        { (yyval.no) = (yyvsp[-1].no); }
#line 1937 "y.tab.c"
    break;

  case 62: /* Stmt: Ifstmt  */
#line 298 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 1943 "y.tab.c"
    break;

  case 63: /* Stmt: Whilestmt  */
#line 299 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 1949 "y.tab.c"
    break;

  case 64: /* Stmt: BREAK  */
#line 300 "staticalloc.y"
                       { (yyval.no) = createTree(NULL, NULL, NULL, 10,NULL, NULL, NULL, NULL); }
#line 1955 "y.tab.c"
    break;

  case 65: /* Stmt: CONTINUE  */
#line 301 "staticalloc.y"
                       { (yyval.no) = createTree(NULL, NULL, NULL, 11,NULL, NULL, NULL, NULL); }
#line 1961 "y.tab.c"
    break;

  case 66: /* Stmt: E EQ ALLOC ';'  */
#line 302 "staticalloc.y"
                                { (yyval.no) = createAllocNode((yyvsp[-3].no)); }
#line 1967 "y.tab.c"
    break;

  case 67: /* Stmt: E EQ INIT ';'  */
#line 303 "staticalloc.y"
                        { (yyval.no) = createInitNode((yyvsp[-3].no)); }
#line 1973 "y.tab.c"
    break;

  case 68: /* Stmt: FREE '(' E ')' ';'  */
#line 304 "staticalloc.y"
                             { (yyval.no) = createFreeNode((yyvsp[-4].no)); }
#line 1979 "y.tab.c"
    break;

  case 69: /* InputStmt: READ '(' E ')'  */
#line 307 "staticalloc.y"
                           { (yyval.no) =createIONode(-1,"Read",(yyvsp[-1].no));}
#line 1985 "y.tab.c"
    break;

  case 70: /* OutputStmt: WRITE '(' E ')'  */
#line 310 "staticalloc.y"
                             { (yyval.no) = createIONode(-2,"Write",(yyvsp[-1].no)); }
#line 1991 "y.tab.c"
    break;

  case 71: /* AsgStmt: E EQ E  */
#line 314 "staticalloc.y"
                  { (yyval.no) = createEQNode((yyvsp[-2].no), (yyvsp[0].no)); }
#line 1997 "y.tab.c"
    break;

  case 72: /* E: E PLUS E  */
#line 317 "staticalloc.y"
                { (yyval.no) = createOpNode("ADD",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2003 "y.tab.c"
    break;

  case 73: /* E: E MUL E  */
#line 318 "staticalloc.y"
                { (yyval.no) = createOpNode("MUL",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2009 "y.tab.c"
    break;

  case 74: /* E: E MINUS E  */
#line 319 "staticalloc.y"
                { (yyval.no) = createOpNode("SUB",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2015 "y.tab.c"
    break;

  case 75: /* E: E DIV E  */
#line 320 "staticalloc.y"
                { (yyval.no) = createOpNode("DIV",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 2021 "y.tab.c"
    break;

  case 76: /* E: E EQU E  */
#line 321 "staticalloc.y"
                { (yyval.no) = createOpNode("EQ",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2027 "y.tab.c"
    break;

  case 77: /* E: E LT E  */
#line 322 "staticalloc.y"
                { (yyval.no) = createOpNode("LT",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2033 "y.tab.c"
    break;

  case 78: /* E: E GT E  */
#line 323 "staticalloc.y"
                { (yyval.no) = createOpNode("GT",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2039 "y.tab.c"
    break;

  case 79: /* E: E LTE E  */
#line 324 "staticalloc.y"
                { (yyval.no) = createOpNode("LE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2045 "y.tab.c"
    break;

  case 80: /* E: E GTE E  */
#line 325 "staticalloc.y"
                { (yyval.no) = createOpNode("GE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2051 "y.tab.c"
    break;

  case 81: /* E: E NE E  */
#line 326 "staticalloc.y"
                { (yyval.no) = createOpNode("NE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 2057 "y.tab.c"
    break;

  case 82: /* E: '(' E ')'  */
#line 327 "staticalloc.y"
                { (yyval.no) = (yyvsp[-1].no); }
#line 2063 "y.tab.c"
    break;

  case 83: /* E: ID  */
#line 328 "staticalloc.y"
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
#line 2087 "y.tab.c"
    break;

  case 84: /* E: ID '[' E ']'  */
#line 347 "staticalloc.y"
                 { if(Lookup((yyvsp[-3].no)->varname) == NULL){
                        yyerror("Variable not declared\n");
                        exit(1); }
                        (yyvsp[-3].no)->nodetype = arType;
			(yyvsp[-3].no)->type = Lookup((yyvsp[-3].no)->varname)->type;
                        (yyvsp[-3].no)->Gentry = Lookup((yyvsp[-3].no)->varname);
			(yyvsp[-3].no)->left = (yyvsp[-1].no);
                        (yyval.no) = (yyvsp[-3].no); }
#line 2100 "y.tab.c"
    break;

  case 85: /* E: ID '[' E ']' '[' E ']'  */
#line 356 "staticalloc.y"
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
#line 2117 "y.tab.c"
    break;

  case 86: /* E: NUM  */
#line 369 "staticalloc.y"
                { (yyval.no) = (yyvsp[0].no); }
#line 2123 "y.tab.c"
    break;

  case 87: /* E: LIT  */
#line 370 "staticalloc.y"
                { (yyval.no) = (yyvsp[0].no); }
#line 2129 "y.tab.c"
    break;

  case 88: /* E: NUL  */
#line 371 "staticalloc.y"
                { (yyval.no) = createTree(0, TLookup("VOID"), NULL, 0, NULL, NULL, NULL, NULL); }
#line 2135 "y.tab.c"
    break;

  case 89: /* E: ID '(' ')'  */
#line 372 "staticalloc.y"
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
#line 2151 "y.tab.c"
    break;

  case 90: /* E: ID '(' ArgList ')'  */
#line 384 "staticalloc.y"
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
#line 2168 "y.tab.c"
    break;

  case 91: /* E: Field  */
#line 396 "staticalloc.y"
                                { (yyval.no) = (yyvsp[0].no); }
#line 2174 "y.tab.c"
    break;

  case 92: /* ArgList: ArgList ',' E  */
#line 399 "staticalloc.y"
                                { (yyvsp[0].no)->middle = (yyvsp[-2].no); (yyval.no)=(yyvsp[0].no);}
#line 2180 "y.tab.c"
    break;

  case 93: /* ArgList: E  */
#line 400 "staticalloc.y"
                                { (yyval.no)=(yyvsp[0].no); }
#line 2186 "y.tab.c"
    break;

  case 94: /* Field: Field '.' ID  */
#line 403 "staticalloc.y"
                        { struct tnode* temp = (yyvsp[-2].no); 
							while(temp->right!=NULL){
 								temp = temp->right;}
							struct Fieldlist *Ftemp = FLookup(temp->type, (yyvsp[0].no)->varname);
							if(Ftemp == NULL){
								yyerror("Field is not a member of the datatype");
								exit(1);}
							(yyvsp[0].no)->type = Ftemp->type;
							(yyvsp[0].no)->val = Ftemp->fieldIndex;
							(yyvsp[-2].no)->type = Ftemp->type;
							(yyvsp[-2].no)->nodetype = FieldNode;
							temp->right = (yyvsp[0].no);
							 (yyval.no) =  (yyvsp[-2].no);}
#line 2204 "y.tab.c"
    break;

  case 95: /* Field: ID '.' ID  */
#line 416 "staticalloc.y"
                        { (yyvsp[-2].no)->right = (yyvsp[0].no); 
					
				struct Gsymbol *Gtemp = Lookup((yyvsp[-2].no)->varname);
				struct Lsymbol *Ltemp = Llookup((yyvsp[-2].no)->varname);
				if(Ltemp==NULL){
					if(Gtemp==NULL){
		                                yyerror("Variable not declared\n");
	        	                        exit(1); }
					(yyvsp[-2].no)->type = Gtemp->type;
					(yyvsp[-2].no)->Gentry= Gtemp;
					(yyvsp[-2].no)->Lentry= NULL;}	
				else{
	                        struct Lsymbol* Ltemp = Llookup((yyvsp[-2].no)->varname);

	                        (yyvsp[-2].no)->type = Ltemp->type;
	                        (yyvsp[-2].no)->Gentry = NULL;
	                        (yyvsp[-2].no)->Lentry = Ltemp;
				}	

				struct Fieldlist *Ftemp = FLookup((yyvsp[-2].no)->type, (yyvsp[0].no)->varname);
				if(Ftemp==NULL){
					yyerror("Field is not a member of the datatype\n");
					exit(1);}
				(yyvsp[-2].no)->type = Ftemp->type;
				(yyvsp[0].no)->type = Ftemp->type;
				(yyvsp[0].no)->val = Ftemp->fieldIndex;
				(yyvsp[-2].no)->nodetype = FieldNode;
				(yyval.no) = (yyvsp[-2].no); }
#line 2237 "y.tab.c"
    break;


#line 2241 "y.tab.c"

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

#line 446 "staticalloc.y"


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

