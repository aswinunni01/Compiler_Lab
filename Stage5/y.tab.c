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

int yylex(void);
FILE *input_file;
struct tnode* end_node;
int ploc=-3;
int lloc=0;

#line 97 "y.tab.c"

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
    DECL = 288,                    /* DECL  */
    ENDDECL = 289,                 /* ENDDECL  */
    MAIN = 290,                    /* MAIN  */
    RET = 291                      /* RET  */
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
#define RET 291

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 27 "staticalloc.y"

	int num;
	struct tnode *no;
	struct Paramstruct *np;

#line 227 "y.tab.c"

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
  YYSYMBOL_DECL = 33,                      /* DECL  */
  YYSYMBOL_ENDDECL = 34,                   /* ENDDECL  */
  YYSYMBOL_MAIN = 35,                      /* MAIN  */
  YYSYMBOL_RET = 36,                       /* RET  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_39_ = 39,                       /* '['  */
  YYSYMBOL_40_ = 40,                       /* ']'  */
  YYSYMBOL_41_ = 41,                       /* '('  */
  YYSYMBOL_42_ = 42,                       /* ')'  */
  YYSYMBOL_43_ = 43,                       /* '{'  */
  YYSYMBOL_44_ = 44,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_start = 46,                     /* start  */
  YYSYMBOL_GdeclBlock = 47,                /* GdeclBlock  */
  YYSYMBOL_GdeclList = 48,                 /* GdeclList  */
  YYSYMBOL_Gdecl = 49,                     /* Gdecl  */
  YYSYMBOL_Type = 50,                      /* Type  */
  YYSYMBOL_GidList = 51,                   /* GidList  */
  YYSYMBOL_FdefBlock = 52,                 /* FdefBlock  */
  YYSYMBOL_Fdef = 53,                      /* Fdef  */
  YYSYMBOL_ParamList = 54,                 /* ParamList  */
  YYSYMBOL_Param = 55,                     /* Param  */
  YYSYMBOL_Body = 56,                      /* Body  */
  YYSYMBOL_Retstmt = 57,                   /* Retstmt  */
  YYSYMBOL_MainBlock = 58,                 /* MainBlock  */
  YYSYMBOL_LdeclBlock = 59,                /* LdeclBlock  */
  YYSYMBOL_LDecList = 60,                  /* LDecList  */
  YYSYMBOL_LDecl = 61,                     /* LDecl  */
  YYSYMBOL_IdList = 62,                    /* IdList  */
  YYSYMBOL_Ifstmt = 63,                    /* Ifstmt  */
  YYSYMBOL_Whilestmt = 64,                 /* Whilestmt  */
  YYSYMBOL_Stlist = 65,                    /* Stlist  */
  YYSYMBOL_Stmt = 66,                      /* Stmt  */
  YYSYMBOL_InputStmt = 67,                 /* InputStmt  */
  YYSYMBOL_OutputStmt = 68,                /* OutputStmt  */
  YYSYMBOL_AsgStmt = 69,                   /* AsgStmt  */
  YYSYMBOL_E = 70,                         /* E  */
  YYSYMBOL_ArgList = 71                    /* ArgList  */
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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   309

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  71
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  169

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      41,    42,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    37,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,    44,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    43,    43,    54,    63,    64,    68,    68,    71,    71,
      74,    84,    85,    89,    95,   101,   107,   117,   123,   130,
     136,   147,   148,   150,   160,   161,   162,   165,   168,   171,
     172,   178,   179,   182,   183,   186,   193,   194,   198,   199,
     202,   205,   206,   209,   210,   211,   212,   213,   214,   215,
     218,   221,   225,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   255,   264,   277,   278,   290,
     303,   304
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
  "WHILE", "ENDWHILE", "DO", "BREAK", "CONTINUE", "INT", "STR", "DECL",
  "ENDDECL", "MAIN", "RET", "';'", "','", "'['", "']'", "'('", "')'",
  "'{'", "'}'", "$accept", "start", "GdeclBlock", "GdeclList", "Gdecl",
  "Type", "GidList", "FdefBlock", "Fdef", "ParamList", "Param", "Body",
  "Retstmt", "MainBlock", "LdeclBlock", "LDecList", "LDecl", "IdList",
  "Ifstmt", "Whilestmt", "Stlist", "Stmt", "InputStmt", "OutputStmt",
  "AsgStmt", "E", "ArgList", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,    59,    44,    91,
      93,    40,    41,   123,   125
};
#endif

#define YYPACT_NINF (-154)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -7,   -26,    90,    10,    72,    24,    22,    61,  -154,  -154,
    -154,   109,  -154,    67,  -154,    95,    84,  -154,    53,    98,
    -154,  -154,  -154,    31,   121,    87,    24,  -154,  -154,    83,
    -154,   120,    72,  -154,   124,    72,    96,   144,   199,   -34,
    -154,    40,     7,   131,   168,  -154,    72,  -154,   217,    72,
     165,   198,   218,   232,  -154,   221,     8,   131,  -154,   256,
     231,  -154,   116,   223,   228,   242,  -154,   218,  -154,   145,
    -154,  -154,   241,   243,    50,  -154,   244,   245,  -154,  -154,
      14,  -154,  -154,    54,  -154,   246,   250,   252,   233,  -154,
    -154,   277,   247,  -154,   280,    14,    14,    14,     1,    14,
      14,   129,    14,   281,  -154,  -154,  -154,  -154,    14,    14,
      14,    14,    14,    14,    14,    14,    14,    14,    14,   254,
    -154,  -154,   147,   154,   197,  -154,   251,    18,   172,   179,
    -154,   227,  -154,   251,    79,    79,   257,   257,   251,   251,
     251,   251,   251,   251,  -154,  -154,  -154,   253,    14,  -154,
     270,   268,  -154,    14,   251,   116,   116,   204,    37,    82,
    -154,   260,   116,   261,  -154,   103,  -154,   262,  -154
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       7,     0,     9,     0,     1,     0,     5,    22,     0,     0,
       4,     6,     8,    19,     0,     0,    11,    21,     2,     0,
       3,     0,    26,    10,     0,    26,     0,     0,     0,     0,
      25,    13,     0,     0,    17,    27,     0,    20,     0,    26,
       0,     0,     0,     0,    24,     0,     0,     0,    32,     0,
       0,    34,     0,     0,     0,    14,    16,     0,    37,     0,
      31,    33,     0,     0,    64,    67,     0,     0,    48,    49,
       0,    46,    47,     0,    42,     0,     0,     0,     0,    30,
      18,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,    43,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      23,    36,     0,     0,     0,    68,    71,     0,     0,     0,
      63,     0,    28,    52,    53,    55,    54,    56,    62,    57,
      58,    60,    59,    61,    15,    51,    50,    65,     0,    69,
       0,     0,    29,     0,    70,     0,     0,     0,     0,     0,
      66,     0,     0,     0,    39,     0,    40,     0,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,   299,  -154,   290,    11,  -154,  -154,   286,   -21,
     258,   236,  -154,    38,   248,  -154,   249,  -154,  -154,  -154,
    -153,   -83,  -154,  -154,  -154,   -79,  -154
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,    11,    12,    38,    24,    16,    17,    39,
      40,    63,   103,     7,    52,    60,    61,    69,    81,    82,
      83,    84,    85,    86,    87,    88,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
     104,   101,   158,   159,    46,     5,     1,     2,    47,   165,
      14,    74,    75,    13,    42,    15,   122,   123,   124,   126,
     128,   129,    13,   131,    74,    75,     2,    15,    56,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
      72,    73,    80,   125,    19,    46,    46,    74,    75,    50,
      66,    76,   161,     5,    28,    80,   148,    72,    73,    18,
     149,   162,    59,    77,    74,    75,    78,    79,    76,   154,
      31,    59,    32,    20,   157,   104,   104,    23,    80,    48,
      77,    49,   104,    78,    79,    72,    73,   111,   112,    97,
     102,    98,    74,    75,    29,    80,    76,   113,   114,   115,
     116,   117,   118,     8,     9,    25,    72,    73,    77,   163,
      30,    78,    79,    74,    75,    26,     9,    76,   167,    72,
      73,     8,     9,    80,    10,    36,    74,    75,    35,    77,
      76,    37,    78,    79,    41,   109,   110,   111,   112,    43,
       8,     9,    77,    21,    80,    78,    79,   113,   114,   115,
     116,   117,   118,   109,   110,   111,   112,    80,    33,    34,
     109,   110,   111,   112,    51,   113,   114,   115,   116,   117,
     118,   130,   113,   114,   115,   116,   117,   118,   109,   110,
     111,   112,    93,    94,    44,   109,   110,   111,   112,   145,
     113,   114,   115,   116,   117,   118,   146,   113,   114,   115,
     116,   117,   118,   109,   110,   111,   112,    53,    57,    45,
     109,   110,   111,   112,   150,   113,   114,   115,   116,   117,
     118,   151,   113,   114,   115,   116,   117,   118,    55,     8,
       9,    62,    58,   109,   110,   111,   112,   147,   108,   109,
     110,   111,   112,    64,   160,   113,   114,   115,   116,   117,
     118,   113,   114,   115,   116,   117,   118,   109,   110,   111,
     112,    65,     8,     9,   152,    70,    68,    89,    90,   113,
     114,   115,   116,   117,   118,   113,   114,   115,   116,   117,
     118,    91,    95,   105,    96,    99,   100,   106,   119,   107,
     121,   120,   153,   132,   144,   155,   156,   164,   166,   168,
       6,    22,    27,    92,    54,    67,     0,     0,     0,    71
};

static const yytype_int16 yycheck[] =
{
      83,    80,   155,   156,    38,    31,    13,    33,    42,   162,
       0,    10,    11,     2,    35,     4,    95,    96,    97,    98,
      99,   100,    11,   102,    10,    11,    33,    16,    49,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
       3,     4,    41,    42,     6,    38,    38,    10,    11,    42,
      42,    14,    15,    31,    16,    41,    38,     3,     4,    35,
      42,    24,    51,    26,    10,    11,    29,    30,    14,   148,
      39,    60,    41,    12,   153,   158,   159,    10,    41,    39,
      26,    41,   165,    29,    30,     3,     4,     8,     9,    39,
      36,    41,    10,    11,    41,    41,    14,    18,    19,    20,
      21,    22,    23,    31,    32,    10,     3,     4,    26,    27,
      12,    29,    30,    10,    11,    31,    32,    14,    15,     3,
       4,    31,    32,    41,    34,    42,    10,    11,    41,    26,
      14,    11,    29,    30,    10,     6,     7,     8,     9,    43,
      31,    32,    26,    34,    41,    29,    30,    18,    19,    20,
      21,    22,    23,     6,     7,     8,     9,    41,    37,    38,
       6,     7,     8,     9,    33,    18,    19,    20,    21,    22,
      23,    42,    18,    19,    20,    21,    22,    23,     6,     7,
       8,     9,    37,    38,    40,     6,     7,     8,     9,    42,
      18,    19,    20,    21,    22,    23,    42,    18,    19,    20,
      21,    22,    23,     6,     7,     8,     9,    39,    43,    10,
       6,     7,     8,     9,    42,    18,    19,    20,    21,    22,
      23,    42,    18,    19,    20,    21,    22,    23,    11,    31,
      32,    13,    34,     6,     7,     8,     9,    40,     5,     6,
       7,     8,     9,    11,    40,    18,    19,    20,    21,    22,
      23,    18,    19,    20,    21,    22,    23,     6,     7,     8,
       9,    40,    31,    32,    37,    34,    10,    44,    40,    18,
      19,    20,    21,    22,    23,    18,    19,    20,    21,    22,
      23,    39,    41,    37,    41,    41,    41,    37,    11,    37,
      10,    44,    39,    12,    40,    25,    28,    37,    37,    37,
       1,    11,    16,    67,    46,    57,    -1,    -1,    -1,    60
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    13,    33,    46,    47,    31,    47,    58,    31,    32,
      34,    48,    49,    50,     0,    50,    52,    53,    35,    58,
      12,    34,    49,    10,    51,    10,    31,    53,    58,    41,
      12,    39,    41,    37,    38,    41,    42,    11,    50,    54,
      55,    10,    54,    43,    40,    10,    38,    42,    39,    41,
      42,    33,    59,    39,    55,    11,    54,    43,    34,    50,
      60,    61,    13,    56,    11,    40,    42,    59,    10,    62,
      34,    61,     3,     4,    10,    11,    14,    26,    29,    30,
      41,    63,    64,    65,    66,    67,    68,    69,    70,    44,
      40,    39,    56,    37,    38,    41,    41,    39,    41,    41,
      41,    70,    36,    57,    66,    37,    37,    37,     5,     6,
       7,     8,     9,    18,    19,    20,    21,    22,    23,    11,
      44,    10,    70,    70,    70,    42,    70,    71,    70,    70,
      42,    70,    12,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    40,    42,    42,    40,    38,    42,
      42,    42,    37,    39,    70,    25,    28,    70,    65,    65,
      40,    15,    24,    27,    37,    65,    37,    15,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    46,    46,    46,    47,    47,    48,    48,
      49,    50,    50,    51,    51,    51,    51,    51,    51,    51,
      51,    52,    52,    53,    54,    54,    54,    55,    56,    57,
      58,    59,    59,    60,    60,    61,    62,    62,    63,    63,
      64,    65,    65,    66,    66,    66,    66,    66,    66,    66,
      67,    68,    69,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     4,     3,     2,     3,     2,     2,     1,
       3,     1,     1,     3,     6,     9,     6,     4,     7,     1,
       4,     2,     1,     9,     3,     1,     0,     2,     4,     3,
       8,     3,     2,     2,     1,     3,     3,     1,    10,     8,
       8,     2,     1,     2,     2,     2,     1,     1,     1,     1,
       4,     4,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     4,     7,     1,     3,     4,
       3,     1
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
  case 2: /* start: GdeclBlock FdefBlock MainBlock  */
#line 43 "staticalloc.y"
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
#line 1414 "y.tab.c"
    break;

  case 3: /* start: BEG GdeclBlock MainBlock END  */
#line 55 "staticalloc.y"
                                         {
      						printf("Completed\n");
	      					FILE *fptr = fopen("out.xsm", "w");
						writeheader(fptr);
	  					//codeGen($2,fptr);
//						writefooter(fptr); 
      						exit(1); 
					}
#line 1427 "y.tab.c"
    break;

  case 4: /* start: BEG MainBlock END  */
#line 63 "staticalloc.y"
                                                { exit(1); }
#line 1433 "y.tab.c"
    break;

  case 5: /* start: GdeclBlock FdefBlock  */
#line 64 "staticalloc.y"
                                        { printf("Completed now \n"); printtable(); exit(1); }
#line 1439 "y.tab.c"
    break;

  case 7: /* GdeclBlock: DECL ENDDECL  */
#line 68 "staticalloc.y"
                                                   {}
#line 1445 "y.tab.c"
    break;

  case 9: /* GdeclList: Gdecl  */
#line 71 "staticalloc.y"
                                    {}
#line 1451 "y.tab.c"
    break;

  case 10: /* Gdecl: Type GidList ';'  */
#line 74 "staticalloc.y"
                                        { 
     						while((yyvsp[-1].no) != NULL) {
			     				struct Gsymbol* temp = Lookup((yyvsp[-1].no)->varname);
							temp->type = (yyvsp[-2].num);
							(yyvsp[-1].no) = (yyvsp[-1].no)->left;}
					}
#line 1462 "y.tab.c"
    break;

  case 11: /* Type: INT  */
#line 84 "staticalloc.y"
                                        { (yyval.num) = intType; }
#line 1468 "y.tab.c"
    break;

  case 12: /* Type: STR  */
#line 85 "staticalloc.y"
                                        { (yyval.num) = strType; }
#line 1474 "y.tab.c"
    break;

  case 13: /* GidList: GidList ',' ID  */
#line 89 "staticalloc.y"
                                        {
       						if(Lookup((yyvsp[0].no)->varname) != NULL){
			                                yyerror("Variable already declared");   
			                                exit(1);}     
					  	Install((yyvsp[0].no)->varname, NULL, 1,1, NULL, NULL); (yyvsp[0].no)->left = (yyvsp[-2].no); (yyval.no)=(yyvsp[0].no); }
#line 1484 "y.tab.c"
    break;

  case 14: /* GidList: GidList ',' ID '[' NUM ']'  */
#line 95 "staticalloc.y"
                                        {
						 if(Lookup((yyvsp[-3].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                         Install((yyvsp[-3].no)->varname, NULL,(yyvsp[-1].no)->val, 1, NULL, NULL); (yyvsp[-3].no)->left = (yyvsp[-5].no); (yyval.no)=(yyvsp[-3].no);
						 address= address + ((yyvsp[-1].no)->val-1);}
#line 1495 "y.tab.c"
    break;

  case 15: /* GidList: GidList ',' ID '[' NUM ']' '[' NUM ']'  */
#line 101 "staticalloc.y"
                                              { 
						if(Lookup((yyvsp[-6].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-6].no)->varname, NULL, (yyvsp[-4].no)->val, (yyvsp[-1].no)->val, NULL, NULL); (yyvsp[-6].no)->left = (yyvsp[-8].no); (yyval.no)=(yyvsp[-6].no);
                        			address= address + (((yyvsp[-4].no)->val*(yyvsp[-1].no)->val)-1);}
#line 1506 "y.tab.c"
    break;

  case 16: /* GidList: GidList ',' ID '(' ParamList ')'  */
#line 107 "staticalloc.y"
                                                {
                                                if(Lookup((yyvsp[-3].no)->varname)!=NULL){
                                                        yyerror("Function name already declared");
                                                        exit(1);}
                                                Install((yyvsp[-3].no)->varname, NULL, 1, 1,(yyvsp[-1].np), getFlabel()); (yyvsp[-3].no)->left = (yyvsp[-5].no);  (yyval.no) = (yyvsp[-3].no);
						ploc=-3; lloc=0; Lhead=NULL;
						 }
#line 1518 "y.tab.c"
    break;

  case 17: /* GidList: ID '[' NUM ']'  */
#line 117 "staticalloc.y"
                                        { 
						if(Lookup((yyvsp[-3].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-3].no)->varname, NULL,(yyvsp[-1].no)->val, 1, NULL, NULL); (yyval.no) = (yyvsp[-3].no);
						address = address + ((yyvsp[-1].no)->val-1); }
#line 1529 "y.tab.c"
    break;

  case 18: /* GidList: ID '[' NUM ']' '[' NUM ']'  */
#line 123 "staticalloc.y"
                                        {
						if(Lookup((yyvsp[-6].no)->varname) != NULL){
			                                yyerror("Variable name already declared");
			                                exit(1);}
			                        Install((yyvsp[-6].no)->varname, NULL,(yyvsp[-4].no)->val,(yyvsp[-1].no)->val, NULL, NULL); (yyval.no) = (yyvsp[-6].no);
			                        address = address + (((yyvsp[-4].no)->val*(yyvsp[-1].no)->val)-1); }
#line 1540 "y.tab.c"
    break;

  case 19: /* GidList: ID  */
#line 130 "staticalloc.y"
                                        {
						 if(Lookup((yyvsp[0].no)->varname) != NULL){
							yyerror("Variable name already declared");
							exit(1);}	
						Install((yyvsp[0].no)->varname, NULL,1, 1, NULL, NULL); (yyval.no) = (yyvsp[0].no); }
#line 1550 "y.tab.c"
    break;

  case 20: /* GidList: ID '(' ParamList ')'  */
#line 136 "staticalloc.y"
                                        {
						if(Lookup((yyvsp[-3].no)->varname)!=NULL){
							yyerror("Function name already declared");
							exit(1);}
						Install((yyvsp[-3].no)->varname, NULL, 1, 1,(yyvsp[-1].np), getFlabel()); (yyval.no) = (yyvsp[-3].no);
						ploc=-3; lloc=0; Lhead=NULL;
					}
#line 1562 "y.tab.c"
    break;

  case 21: /* FdefBlock: FdefBlock Fdef  */
#line 147 "staticalloc.y"
                                                                { (yyval.no) = createTree(NULL,FnBlock, NULL,FnBlock, NULL, (yyvsp[-1].no),NULL, (yyvsp[0].no));}
#line 1568 "y.tab.c"
    break;

  case 22: /* FdefBlock: Fdef  */
#line 148 "staticalloc.y"
                                                                { (yyval.no) = (yyvsp[0].no); }
#line 1574 "y.tab.c"
    break;

  case 23: /* Fdef: Type ID '(' ParamList ')' '{' LdeclBlock Body '}'  */
#line 150 "staticalloc.y"
                                                                { checkvalid((yyvsp[-8].num), (yyvsp[-5].np), Lookup((yyvsp[-7].no)->varname)); 
      								  ploc=-3; lloc=0; 
								  struct tnode *temp = (yyvsp[-1].no)->left;
								  (yyvsp[-1].no)->left = NULL;
								  (yyval.no) = createTree( NULL, NULL, (yyvsp[-7].no)->varname, FnNode, Lookup((yyvsp[-7].no)->varname), temp, NULL, (yyvsp[-1].no));
								  (yyval.no)->Lentry = Lhead;
								  Lhead = NULL;
								}
#line 1587 "y.tab.c"
    break;

  case 24: /* ParamList: ParamList ',' Param  */
#line 160 "staticalloc.y"
                                        { (yyvsp[0].np)->next = (yyvsp[-2].np); (yyval.np) = (yyvsp[0].np); Linstall((yyvsp[0].np)->name, (yyvsp[0].np)->type, ploc--); }
#line 1593 "y.tab.c"
    break;

  case 25: /* ParamList: Param  */
#line 161 "staticalloc.y"
                                        { (yyval.np) = (yyvsp[0].np); Linstall((yyvsp[0].np)->name, (yyvsp[0].np)->type, ploc--); }
#line 1599 "y.tab.c"
    break;

  case 26: /* ParamList: %empty  */
#line 162 "staticalloc.y"
                                        { (yyval.np) = NULL; }
#line 1605 "y.tab.c"
    break;

  case 27: /* Param: Type ID  */
#line 165 "staticalloc.y"
                                        { (yyval.np) = Pinstall((yyvsp[0].no)->varname, (yyvsp[-1].num), NULL); }
#line 1611 "y.tab.c"
    break;

  case 28: /* Body: BEG Stlist Retstmt END  */
#line 168 "staticalloc.y"
                                        { (yyvsp[-1].no)->left=(yyvsp[-2].no); (yyval.no) = (yyvsp[-1].no); }
#line 1617 "y.tab.c"
    break;

  case 29: /* Retstmt: RET E ';'  */
#line 171 "staticalloc.y"
                                        { (yyval.no) = createTree(NULL, RetNode, NULL, RetNode, NULL, NULL, NULL, (yyvsp[-1].no)); }
#line 1623 "y.tab.c"
    break;

  case 30: /* MainBlock: INT MAIN '(' ')' '{' LdeclBlock Body '}'  */
#line 172 "staticalloc.y"
                                                                { 	Lhead=NULL;
	  								struct tnode* temp = (yyvsp[-1].no)->left;
									(yyvsp[-1].no)->left = NULL;
	  								(yyval.no) = createTree(NULL, NULL, "main", MnNode, NULL, temp, NULL,(yyvsp[-1].no)); }
#line 1632 "y.tab.c"
    break;

  case 31: /* LdeclBlock: DECL LDecList ENDDECL  */
#line 178 "staticalloc.y"
                                        {}
#line 1638 "y.tab.c"
    break;

  case 32: /* LdeclBlock: DECL ENDDECL  */
#line 179 "staticalloc.y"
                                        {}
#line 1644 "y.tab.c"
    break;

  case 33: /* LDecList: LDecList LDecl  */
#line 182 "staticalloc.y"
                                        {}
#line 1650 "y.tab.c"
    break;

  case 34: /* LDecList: LDecl  */
#line 183 "staticalloc.y"
                                        {}
#line 1656 "y.tab.c"
    break;

  case 35: /* LDecl: Type IdList ';'  */
#line 186 "staticalloc.y"
                                                {	struct Lsymbol *Ltemp = Lhead;
                                                while(Ltemp != NULL) {
                                                        Ltemp->type = (yyvsp[-2].num);
                                                        Ltemp = Ltemp->next;}
                                        }
#line 1666 "y.tab.c"
    break;

  case 36: /* IdList: IdList ',' ID  */
#line 193 "staticalloc.y"
                                        { Linstall((yyvsp[0].no)->varname, NULL, ++lloc); }
#line 1672 "y.tab.c"
    break;

  case 37: /* IdList: ID  */
#line 194 "staticalloc.y"
                                        { Linstall((yyvsp[0].no)->varname, NULL, ++lloc); }
#line 1678 "y.tab.c"
    break;

  case 38: /* Ifstmt: IF '(' E ')' THEN Stlist ELSE Stlist ENDIF ';'  */
#line 198 "staticalloc.y"
                                                              {  (yyval.no) = createIfNode((yyvsp[-7].no),(yyvsp[-4].no),(yyvsp[-2].no)); }
#line 1684 "y.tab.c"
    break;

  case 39: /* Ifstmt: IF '(' E ')' THEN Stlist ENDIF ';'  */
#line 199 "staticalloc.y"
                                                              { (yyval.no) = createIfNode((yyvsp[-5].no), (yyvsp[-2].no), NULL); }
#line 1690 "y.tab.c"
    break;

  case 40: /* Whilestmt: WHILE '(' E ')' DO Stlist ENDWHILE ';'  */
#line 202 "staticalloc.y"
                                                          { (yyval.no) = createWhileNode((yyvsp[-5].no), (yyvsp[-2].no)); }
#line 1696 "y.tab.c"
    break;

  case 41: /* Stlist: Stlist Stmt  */
#line 205 "staticalloc.y"
                        { (yyval.no) = createTree(NULL,3, NULL,3, NULL, (yyvsp[-1].no),NULL, (yyvsp[0].no)); }
#line 1702 "y.tab.c"
    break;

  case 42: /* Stlist: Stmt  */
#line 206 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 1708 "y.tab.c"
    break;

  case 43: /* Stmt: InputStmt ';'  */
#line 209 "staticalloc.y"
                        { (yyval.no) = (yyvsp[-1].no); }
#line 1714 "y.tab.c"
    break;

  case 44: /* Stmt: OutputStmt ';'  */
#line 210 "staticalloc.y"
                           {(yyval.no) = (yyvsp[-1].no); }
#line 1720 "y.tab.c"
    break;

  case 45: /* Stmt: AsgStmt ';'  */
#line 211 "staticalloc.y"
                        { (yyval.no) = (yyvsp[-1].no); }
#line 1726 "y.tab.c"
    break;

  case 46: /* Stmt: Ifstmt  */
#line 212 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 1732 "y.tab.c"
    break;

  case 47: /* Stmt: Whilestmt  */
#line 213 "staticalloc.y"
                        { (yyval.no) = (yyvsp[0].no); }
#line 1738 "y.tab.c"
    break;

  case 48: /* Stmt: BREAK  */
#line 214 "staticalloc.y"
                       { (yyval.no) = createTree(NULL, NULL, NULL, 10,NULL, NULL, NULL, NULL); }
#line 1744 "y.tab.c"
    break;

  case 49: /* Stmt: CONTINUE  */
#line 215 "staticalloc.y"
                       { (yyval.no) = createTree(NULL, NULL, NULL, 11,NULL, NULL, NULL, NULL); }
#line 1750 "y.tab.c"
    break;

  case 50: /* InputStmt: READ '(' E ')'  */
#line 218 "staticalloc.y"
                           { (yyval.no) =createIONode(-1,"Read",(yyvsp[-1].no));}
#line 1756 "y.tab.c"
    break;

  case 51: /* OutputStmt: WRITE '(' E ')'  */
#line 221 "staticalloc.y"
                             { (yyval.no) = createIONode(-2,"Write",(yyvsp[-1].no)); }
#line 1762 "y.tab.c"
    break;

  case 52: /* AsgStmt: E EQ E  */
#line 225 "staticalloc.y"
                  { (yyval.no) = createTree(NULL, 1, "EQU",1,NULL, (yyvsp[-2].no),NULL, (yyvsp[0].no)); }
#line 1768 "y.tab.c"
    break;

  case 53: /* E: E PLUS E  */
#line 228 "staticalloc.y"
                { (yyval.no) = createOpNode("ADD",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 1774 "y.tab.c"
    break;

  case 54: /* E: E MUL E  */
#line 229 "staticalloc.y"
                { (yyval.no) = createOpNode("MUL",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 1780 "y.tab.c"
    break;

  case 55: /* E: E MINUS E  */
#line 230 "staticalloc.y"
                { (yyval.no) = createOpNode("SUB",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 1786 "y.tab.c"
    break;

  case 56: /* E: E DIV E  */
#line 231 "staticalloc.y"
                { (yyval.no) = createOpNode("DIV",intType,(yyvsp[-2].no), (yyvsp[0].no)); }
#line 1792 "y.tab.c"
    break;

  case 57: /* E: E EQU E  */
#line 232 "staticalloc.y"
                { (yyval.no) = createOpNode("EQ",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 1798 "y.tab.c"
    break;

  case 58: /* E: E LT E  */
#line 233 "staticalloc.y"
                { (yyval.no) = createOpNode("LT",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 1804 "y.tab.c"
    break;

  case 59: /* E: E GT E  */
#line 234 "staticalloc.y"
                { (yyval.no) = createOpNode("GT",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 1810 "y.tab.c"
    break;

  case 60: /* E: E LTE E  */
#line 235 "staticalloc.y"
                { (yyval.no) = createOpNode("LE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 1816 "y.tab.c"
    break;

  case 61: /* E: E GTE E  */
#line 236 "staticalloc.y"
                { (yyval.no) = createOpNode("GE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 1822 "y.tab.c"
    break;

  case 62: /* E: E NE E  */
#line 237 "staticalloc.y"
                { (yyval.no) = createOpNode("NE",boolType, (yyvsp[-2].no), (yyvsp[0].no)); }
#line 1828 "y.tab.c"
    break;

  case 63: /* E: '(' E ')'  */
#line 238 "staticalloc.y"
                { (yyval.no) = (yyvsp[-1].no); }
#line 1834 "y.tab.c"
    break;

  case 64: /* E: ID  */
#line 239 "staticalloc.y"
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
			(yyvsp[0].no)->type = Llookup((yyvsp[0].no)->varname)->type;
			(yyvsp[0].no)->Gentry = NULL;
			(yyvsp[0].no)->Lentry = Llookup((yyvsp[0].no)->varname);
			(yyval.no) = (yyvsp[0].no);
		   }
		}
#line 1855 "y.tab.c"
    break;

  case 65: /* E: ID '[' E ']'  */
#line 255 "staticalloc.y"
                 { if(Lookup((yyvsp[-3].no)->varname) == NULL){
                        yyerror("Variable not declared\n");
                        exit(1); }
                        (yyvsp[-3].no)->nodetype = arType;
			(yyvsp[-3].no)->type = Lookup((yyvsp[-3].no)->varname)->type;
                        (yyvsp[-3].no)->Gentry = Lookup((yyvsp[-3].no)->varname);
			(yyvsp[-3].no)->left = (yyvsp[-1].no);
                        (yyval.no) = (yyvsp[-3].no); }
#line 1868 "y.tab.c"
    break;

  case 66: /* E: ID '[' E ']' '[' E ']'  */
#line 264 "staticalloc.y"
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
#line 1885 "y.tab.c"
    break;

  case 67: /* E: NUM  */
#line 277 "staticalloc.y"
                { (yyval.no) = (yyvsp[0].no); }
#line 1891 "y.tab.c"
    break;

  case 68: /* E: ID '(' ')'  */
#line 278 "staticalloc.y"
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
#line 1907 "y.tab.c"
    break;

  case 69: /* E: ID '(' ArgList ')'  */
#line 290 "staticalloc.y"
                                { 
				if(Lookup((yyvsp[-3].no)->varname) == NULL){
					yyerror("Function not declared before calling \n");
					exit(1);
				}	
				(yyvsp[-3].no)->nodetype = FnCall;
				(yyvsp[-3].no)->Gentry = Lookup((yyvsp[-3].no)->varname);
				(yyvsp[-3].no)->type = (yyvsp[-3].no)->Gentry->type;
				(yyvsp[-3].no)->middle = (yyvsp[-1].no);
				(yyval.no) = (yyvsp[-3].no);
				}
#line 1923 "y.tab.c"
    break;

  case 70: /* ArgList: ArgList ',' E  */
#line 303 "staticalloc.y"
                                { (yyvsp[0].no)->middle = (yyvsp[-2].no); }
#line 1929 "y.tab.c"
    break;

  case 71: /* ArgList: E  */
#line 304 "staticalloc.y"
                                { (yyval.no)=(yyvsp[0].no); }
#line 1935 "y.tab.c"
    break;


#line 1939 "y.tab.c"

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

#line 309 "staticalloc.y"


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
        yyparse();

}
