/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 2 "syntactic.y"

#include "../include/symbtable.h"
#include "../include/tree.h"
#include "../include/tac_generation.h"
#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void yyerror(const char *s);
extern int yylex();
extern int yylex_destroy();
extern int yyparse();
extern FILE *yyin;
extern node *root;
extern int line;
extern int column;
int curr_level = 0;
int n_args;
int n_params;
sym *aux;

#line 92 "syntactic.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_SYNTACTIC_TAB_H_INCLUDED
# define YY_YY_SYNTACTIC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TYPE = 258,
    RELOP = 259,
    COMP = 260,
    SETOP = 261,
    ARTOP1 = 262,
    ARTOP2 = 263,
    ID = 264,
    IF = 265,
    ELSE = 266,
    FOR = 267,
    RETURN = 268,
    FORALL = 269,
    IN = 270,
    IS_SET = 271,
    EXISTS = 272,
    DISJ = 273,
    CONJ = 274,
    NEG = 275,
    READ = 276,
    WRITE = 277,
    WRITELN = 278,
    INTEGER = 279,
    FLOAT = 280,
    STRING = 281,
    CHAR = 282,
    EMPTY = 283,
    THEN = 284
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 25 "syntactic.y"

  int ival;
  float fval;
  char cval;
  char* sval;
  struct NODE *tnode;

#line 182 "syntactic.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SYNTACTIC_TAB_H_INCLUDED  */



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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4557

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  402

#define YYUNDEFTOK  2
#define YYMAXUTOK   284


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      34,    35,     2,     2,    31,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    30,
       2,    36,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    67,    67,    70,    71,    72,    75,    76,    79,    80,
      84,    85,    88,    91,    96,    91,   102,   103,   104,   107,
     108,   111,   115,   116,   117,   120,   121,   122,   123,   126,
     127,   128,   129,   130,   134,   135,   136,   137,   141,   143,
     142,   146,   149,   150,   153,   156,   157,   158,   161,   162,
     163,   164,   167,   170,   173,   176,   177,   180,   181,   182,
     185,   186,   189,   190,   193,   194,   197,   198,   201,   202,
     205,   206,   209,   210,   213,   214,   217,   218,   221,   222,
     223,   224,   225,   226,   227,   230,   231,   232,   235,   235,
     240,   241,   244,   245
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE", "RELOP", "COMP", "SETOP",
  "ARTOP1", "ARTOP2", "ID", "IF", "ELSE", "FOR", "RETURN", "FORALL", "IN",
  "IS_SET", "EXISTS", "DISJ", "CONJ", "NEG", "READ", "WRITE", "WRITELN",
  "INTEGER", "FLOAT", "STRING", "CHAR", "EMPTY", "THEN", "';'", "','",
  "'{'", "'}'", "'('", "')'", "'='", "$accept", "begin", "program",
  "declaration", "varDecl", "varList", "new_id", "funcDecl", "$@1", "$@2",
  "arguments", "argsList", "arg", "funcBody", "stmt", "iterStmt", "body",
  "condStmt", "$@3", "prepareScope", "cond", "returnStmt", "exprStmt",
  "expression", "assign", "var", "inExpr", "outExpr", "output",
  "simpleExpr", "conjExpr", "disjExpr", "compExpr", "relExpr", "artExpr1",
  "artExpr2", "negExpr", "minusFactor", "factor", "constant", "call",
  "$@4", "params", "paramList", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
      59,    44,   123,   125,    40,    41,    61
};
# endif

#define YYPACT_NINF (-313)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     419,   379,    14,   406,  -313,    52,   431,   457,   459,   488,
      -8,   108,   166,    -6,   490,    30,     9,    18,   374,   410,
      58,    89,   123,    21,   261,   180,   209,   292,   114,   220,
    2548,   305,  2582,  2616,   102,    99,   304,   602,   194,   231,
     810,   256,   275,   319,  4297,   333,   343,   349,   546,   666,
     973,  2650,   499,  4317,  2684,  2718,  2752,  2786,  2820,  2854,
     309,   362,   150,   385,   391,    91,   163,   586,    66,   157,
    4511,  1211,  1449,  1710,  1769,  4385,  4391,  4317,   408,  4409,
    1871,  2888,   890,  2918,    85,  1909,  4317,  4415,   416,  4274,
    4274,    23,  2952,  4297,   415,  4297,  4297,  4297,  4297,  4297,
    4297,  4297,    40,   109,   423,  2986,   565,  1098,   428,    65,
     430,   107,   432,   440,   468,   493,   494,   135,   501,  4433,
     263,  4254,   224,   754,   110,   630,  4527,  4439,  4457,  4463,
    3016,  3046,  2548,  1145,  1383,  1621,  1791,  2888,  4144,  2888,
    2888,  4481,  4487,   504,   510,   515,    73,   511,   311,  3076,
    3110,  3140,  2888,   514,  3140,  3140,  4505,  4337,  1837,  2888,
    3170,  3140,  2888,  3204,  3238,   101,  3140,  3272,  3140,  3306,
    3340,  3374,   470,  4140,   497,  4350,   479,   518,   522,  4317,
    1905,  3934,  3939,  4317,   408,   134,    64,     6,   251,   607,
    3957,  3963,  3981,  3986,  4004,  4010,   787,   525,   526,   528,
     533,   399,   534,   538,   142,  1336,   545,   544,   489,   549,
     550,   556,   557,   559,  4317,   408,   562,   568,  4317,  1935,
     237,   194,   574,  1569,   579,  1970,  2004,  2038,  2072,  2106,
     588,  4174,  4194,   589,   590,  4363,   392,   594,   595,  4337,
      28,   502,   924,  4317,   408,   112,   205,   477,  1178,   196,
    1047,  1285,  1523,  1659,  1719,  3764,  4337,   290,  2548,  3408,
    3442,  3476,  3510,  4317,  4028,  1909,  4317,  4033,   170,   596,
    4317,  4317,  4317,  4317,  4317,  4317,   416,  4274,  4274,  4317,
    3710,  4317,  1909,  4317,   207,   597,   202,  2140,    -8,   496,
    2888,  3736,  2174,   182,  2208,  4214,  4317,  3769,  1909,  4317,
    3798,   269,   605,  4337,  4337,  4337,  4337,  4337,  4337,   345,
      -8,  3544,   272,   608,   287,  4051,  4254,   229,   214,   340,
    1591,  4057,  4075,   609,   611,   616,   299,   302,   617,   334,
     618,  4254,    -6,  2242,  2986,   855,  1098,   629,   339,   346,
     631,   378,  3803,  4254,   687,   918,  1416,  1748,  3832,  3837,
      -6,  3578,  4080,  4098,  4104,   633,   634,   640,   643,   644,
     647,   651,   659,    18,  2276,  2888,  4234,  2888,  2888,  3866,
    3871,  3900,   660,    18,  4122,   664,   421,  3110,  2986,  2888,
     668,  2986,  2986,  3905,   672,  2548,  2888,  2310,  2986,  2888,
    2344,  2378,  2548,  3612,  2986,  2412,  2986,  3646,  2446,  2480,
    2514,  3680
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -313,  -313,  -313,  -313,    -3,    -2,   692,    13,  -270,  -183,
    -305,  -313,   681,  -124,     5,   -99,   364,   -63,   335,   418,
     492,    36,   -10,     7,   -78,   -31,   -65,   -60,   -83,  1623,
    1479,  1405,  1241,  1167,  1003,   929,   384,   765,   173,   458,
     691,  -167,  -312,  -313
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,   133,   172,    12,   134,    13,    25,
      17,    23,    24,    32,   135,    56,   136,    57,   159,   105,
      81,    58,    59,    60,    61,   184,    63,    64,   116,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    94,   147,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    62,   200,    11,   355,    78,   226,   118,   149,    62,
      20,   272,    21,    78,     4,   202,     8,   269,   332,   362,
     203,   -65,   -12,   -12,   -65,   -65,   -13,   363,    16,    54,
      83,   372,   -85,   -85,   269,   -85,   -85,    55,   218,    18,
     350,   -65,   227,   -85,    22,   373,   -85,   -85,   285,   201,
     -14,    62,    28,     9,   215,   218,    29,   113,   119,   -85,
     200,    10,    78,   -85,    78,    78,    78,    78,    78,    78,
      78,    98,   107,   202,    62,   129,    62,   302,   203,   -63,
     218,   -65,   271,   -63,   -65,   -65,   108,   104,   256,   206,
     244,   174,   175,    26,   176,   229,   -65,   138,    27,   -63,
     140,   177,   178,   171,   -93,   179,    95,   201,   -93,   180,
     181,    18,   230,   182,   233,    98,   256,    21,    62,   183,
      62,   -51,   218,    62,    62,   -64,   244,   -61,   -64,   -64,
      62,   303,   -92,    77,   311,    62,   -92,    62,    14,    15,
     -64,   228,   142,   -61,   130,   153,    54,   -61,   259,   -61,
     218,   259,   259,   270,    55,   -16,   261,   218,   259,   261,
     261,    99,   -67,   259,   260,   259,   261,   260,   260,   -61,
     -57,   261,   -67,   261,   260,   -67,   -67,   -51,   -61,   260,
     376,   260,    96,   337,   -88,   218,    93,   -67,   174,   175,
     384,   176,    62,   -61,   324,   325,   -11,   -11,   177,   178,
     -69,   -69,   179,   307,   244,   315,   180,   181,   244,    79,
     182,   -69,    30,   292,   -69,   -69,   183,   -60,   289,   272,
     -63,   270,   218,   304,   -63,   244,   193,   -69,    80,   -64,
     230,   -69,   -64,   -64,   215,   226,   -63,   -60,   287,   -60,
     -63,   -18,   330,    96,   -62,   323,   288,   271,   -62,   -64,
     193,   215,   -17,   193,   -60,   273,   -67,   193,   110,   193,
      62,   393,   193,   193,   -62,    82,   -67,   215,   397,   -67,
     -67,   227,   244,   244,   244,   244,   244,   244,    95,   226,
      62,   336,   226,   226,   218,   244,   -67,   218,   200,   226,
      84,   171,   -20,   -52,   253,   226,   -20,   226,   206,   310,
     244,   202,   218,    62,   342,    62,   203,   352,    54,    85,
      35,   193,   244,   173,   218,   227,    55,   218,   227,   227,
      42,    43,   354,   -21,   229,   227,   366,   -21,    48,    49,
     253,   227,    50,   227,   -52,   201,   -19,   359,    53,    92,
     -19,   230,   157,   233,   273,   -66,   -91,    62,   264,   218,
      62,    62,   193,    86,   218,   -66,   193,    62,   -66,   -66,
     -60,   218,    62,    62,   303,    62,    62,    88,   229,   361,
     228,   229,   229,   380,   368,   -66,   -60,    89,   229,    -4,
     -60,   369,    -4,    90,   229,   230,   229,   193,   230,   230,
      54,   193,   -48,   218,    54,   230,   -78,   -78,    55,   -78,
     -78,   230,    55,   230,   -12,   -12,    -2,   -78,   297,     5,
     -78,   -78,   253,   371,   228,   -49,   193,   228,   228,    -5,
       1,   -50,    -5,   -78,   228,   112,   -53,   -78,    87,   253,
     228,    -3,   228,   -88,    -3,   279,   193,   191,   313,   193,
     -10,   -10,   -88,   193,   193,   193,   193,   193,   193,   121,
     193,   193,   193,   385,   193,   328,   193,    -6,   131,    -7,
      -6,   191,    -7,   139,   191,   141,   193,   -53,   191,   193,
     191,   340,   193,   191,   191,   143,   253,   253,   253,   253,
     253,   253,   305,   -78,   -78,   128,   -78,   -78,    -9,   253,
      -8,    -9,   -65,    -8,   -78,   -65,   -65,   -78,   -78,   -15,
     262,    15,   -15,   -59,   253,   251,   -86,   -86,   -65,   -86,
     -86,   194,   -65,   -53,   -78,   160,   253,   -86,   163,   164,
     -86,   -86,   191,   -53,   -78,   167,   333,    15,   -58,   144,
     169,   263,   170,   -86,   -54,   194,   145,   -86,   194,   193,
     -55,   251,   194,   216,   194,   -56,   156,   194,   194,   162,
     -85,   -85,   265,   -85,   -85,   151,   266,   154,   155,   276,
     277,   -85,   278,   267,   -85,   -85,   -46,   191,   -48,   -49,
     161,   -46,   -46,   -50,   -46,   280,   -85,   166,   281,   254,
     168,   -46,   -46,   282,   283,   -46,   -46,   -46,   -46,   -46,
     -46,   -85,   -86,   -46,   -87,   -46,   194,   -80,   191,   -46,
     137,   -63,   191,   -81,    97,   -63,   -78,   -78,   291,   -78,
     -78,   -69,   -69,   293,   274,   254,   -63,   -78,   294,   295,
     -78,   -78,   -69,   300,   296,   -69,   -69,   191,   298,   299,
     316,   331,   -78,   194,    99,   -66,   -53,   194,   -53,   343,
     251,   194,   -69,   353,   356,   -66,   357,   191,   -66,   -66,
     191,   358,   360,   -79,   191,   191,   191,   191,   191,   322,
     -66,   191,   191,   191,   367,   191,   370,   191,   374,   -54,
     -86,   -86,   194,   -86,   -86,   -55,   194,   191,   -56,   -84,
     191,   -86,   -82,   191,   -86,   -86,   -83,   251,   251,   251,
     251,   251,   349,   254,   375,   383,   -86,   254,   364,   -89,
     251,   194,   -62,   389,   392,   304,   -62,    19,   334,    31,
       0,     0,   386,   290,   254,   251,     0,     0,   -62,     0,
       0,   194,   -62,   216,   194,     0,     0,   251,   194,   194,
     194,   194,   194,   194,     0,   194,   194,   194,     0,   194,
     216,   194,   387,     0,   195,   390,   391,     0,     0,     0,
     191,   194,   395,     0,   194,     0,   216,   194,   399,     0,
     400,   254,   254,   254,   254,   254,   254,     0,   195,   -62,
       0,   195,    97,   -62,   254,   195,   217,   195,     0,     0,
     195,   195,     0,   378,   -62,   381,   382,     0,     0,   254,
       0,   -78,   -78,     0,   -78,   -78,     0,   388,     0,     0,
       0,   254,   -78,     0,   394,   -78,   -78,   396,     0,     0,
       0,    33,   255,     0,     0,     0,    35,    36,   192,    37,
       0,   -53,   -78,   -53,   194,     0,    42,    43,     0,   195,
      44,    45,    46,    47,    48,    49,     0,     0,    50,     0,
      51,     0,   192,     0,    53,   192,     0,     0,   255,   192,
       0,   192,     0,     0,   192,   192,   -46,     0,     0,     0,
       0,   -46,   -46,     0,   -46,     0,   195,     0,     0,     0,
     195,   -46,   -46,     0,   195,   -46,   -46,   -46,   -46,   -46,
     -46,     0,     0,   -46,     0,   -46,   252,     0,     0,   -46,
     365,   106,     0,     0,     0,     0,    35,    36,     0,    37,
       0,     0,     0,   192,     0,   195,    42,    43,     0,   195,
      44,    45,    46,    47,    48,    49,     0,     0,    50,     0,
     205,     0,   252,   305,    53,     0,   255,     0,   -87,   -87,
     255,   -87,   -87,   -64,   195,     0,   -64,   -64,     0,   -87,
       0,     0,   -87,   -87,   192,     0,     0,   255,   192,   -64,
       0,     0,     0,   -64,   195,   -87,   217,   195,     0,   -87,
       0,   195,   195,   195,   195,   195,   195,     0,   195,   195,
     195,     0,   195,   217,   195,     0,     0,   -87,   -87,   192,
     -87,   -87,   190,   192,   195,     0,     0,   195,   -87,   217,
     195,   -87,   -87,     0,   255,   255,   255,   255,   255,   255,
       0,     0,     0,   -87,   252,     0,   190,   255,   192,   190,
       0,     0,     0,   190,     0,   190,     0,     0,   190,   190,
       0,   252,   255,     0,     0,     0,     0,     0,   192,   127,
       0,   192,     0,     0,   255,   192,   192,   192,   192,   192,
     192,     0,   192,   192,   192,     0,   192,     0,   192,     0,
     250,   -71,   -71,     0,   -71,   308,   189,   195,   192,     0,
       0,   192,   -71,     0,   192,   -71,   -71,   190,   252,   252,
     252,   252,   252,   252,     0,     0,     0,     0,   -71,     0,
     189,   252,   -71,   189,     0,     0,   250,   189,     0,   189,
       0,     0,   189,   189,     0,     0,   252,     0,     0,   231,
       0,     0,   126,     0,    35,    36,     0,    37,   252,     0,
       0,     0,   190,     0,    42,    43,     0,     0,    44,    45,
      46,    47,    48,    49,   249,     0,    50,     0,   232,     0,
       0,   192,    53,     0,     0,     0,     0,     0,     0,     0,
       0,   189,     0,   190,     0,     0,   -36,   190,   -36,     0,
       0,   -36,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     249,   -36,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,   190,   -36,     0,   -36,     0,     0,   -36,   -36,
       0,     0,   306,   -67,     0,   250,   189,     0,     0,     0,
       0,     0,   190,   -67,     0,   190,   -67,   -67,     0,   190,
     190,   190,   190,   321,     0,     0,   190,   190,   190,   -67,
     190,     0,   190,   -67,     0,   -71,   -71,   189,   -71,   101,
     188,   189,   190,     0,     0,   190,   -71,     0,   190,   -71,
     -71,     0,   250,   250,   250,   250,   348,     0,     0,     0,
       0,   -71,     0,     0,   188,   250,   189,   188,     0,     0,
       0,   188,     0,   188,     0,     0,   188,   188,     0,   249,
     250,     0,     0,     0,     0,   125,   189,     0,     0,   189,
       0,     0,   250,   189,   189,   189,   320,     0,     0,     0,
     189,   189,   189,     0,   189,     0,   189,     0,   248,   -73,
     -73,     0,   -73,   -73,   187,   190,   189,     0,     0,   189,
     -73,     0,   189,   -73,   -73,   188,   249,   249,   249,   347,
       0,     0,     0,     0,     0,     0,   -73,     0,   187,   249,
     -73,   187,     0,     0,   248,   187,     0,   187,     0,     0,
     187,   187,     0,     0,   249,     0,     0,   -47,   124,     0,
       0,     0,   -47,   -47,     0,   -47,   249,     0,     0,     0,
     188,     0,   -47,   -47,     0,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   247,     0,   -47,     0,   -47,     0,     0,   189,
     -47,     0,     0,     0,     0,     0,     0,     0,     0,   187,
       0,   188,     0,     0,   -37,   188,   -37,     0,     0,   -37,
     -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,   247,   -37,
     -37,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     188,   -37,     0,   -37,     0,     0,   -37,   -37,     0,     0,
     306,   -66,     0,   248,   187,     0,     0,     0,     0,     0,
     188,   -66,     0,   188,   -66,   -66,     0,   188,   188,   319,
       0,     0,     0,     0,   188,   188,   188,   -66,   188,     0,
     188,   -66,     0,   -73,   -73,   187,   -73,   -73,   186,   187,
     188,     0,     0,   188,   -73,     0,   188,   -73,   -73,     0,
     248,   248,   346,     0,     0,     0,     0,     0,     0,   -73,
       0,     0,   186,   248,   187,   186,     0,     0,     0,   186,
       0,   186,     0,     0,   186,   186,     0,   247,   248,     0,
       0,   123,     0,     0,   187,     0,     0,   187,     0,     0,
     248,   187,   318,     0,     0,     0,     0,     0,   187,   187,
     187,     0,   187,     0,   187,     0,   246,   -75,   -75,     0,
     -75,   -75,   185,   188,   187,     0,     0,   187,   -75,     0,
     187,   -75,   -75,   186,   247,   345,     0,     0,     0,     0,
       0,     0,     0,     0,   -75,     0,   185,   247,   -75,   185,
       0,     0,   246,   185,     0,   185,     0,     0,   185,   185,
     219,     0,   247,     0,   122,    35,    36,     0,    37,     0,
       0,     0,     0,     0,   247,    42,    43,     0,   186,    44,
      45,    46,    47,    48,    49,   -68,   -68,    50,   274,   225,
     245,     0,     0,    53,     0,     0,   -68,   187,     0,   -68,
     -68,     0,     0,     0,     0,     0,     0,   185,     0,   186,
       0,     0,   -35,   186,   -35,     0,   -68,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,   245,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,   186,   -35,
       0,   -35,     0,     0,   -35,   -35,     0,     0,     0,     0,
       0,   246,   185,   -77,   -77,     0,   -77,   -77,   186,     0,
       0,   186,     0,     0,   -77,   317,    91,   -77,   -77,     0,
       0,     0,   186,   186,   186,     0,   186,     0,   186,     0,
     -77,     0,     0,   185,   -77,     0,     0,   286,   186,     0,
     102,   186,     0,   204,   186,     0,     0,   109,   344,   111,
       0,     0,   117,   117,   -75,   -75,   120,   -75,   -75,     0,
       0,   246,   185,   -80,   -80,   -75,   -80,   -80,   -75,   -75,
       0,     0,     0,     0,   -80,   309,   246,   -80,   -80,     0,
     -75,     0,   185,     0,   146,   185,     0,     0,   246,     0,
     -80,     0,   -68,   -68,   -80,   307,   185,   185,   185,     0,
     185,   204,   185,   -68,     0,     0,   -68,   -68,     0,     0,
       0,   186,   185,   -77,   -77,   185,   -77,   -77,   185,   -68,
     165,     0,     0,   -68,   -77,     0,     0,   -77,   -77,     0,
       0,     0,   -38,     0,   -38,   245,     0,   -38,   -38,   -77,
     -38,   -38,   150,   -38,   -38,   -38,   268,   -38,   -38,     0,
     245,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,
       0,   -38,   245,     0,   -38,   -38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   284,   -34,     0,
     -34,     0,     0,   -34,   -34,   185,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,   -34,   301,   -34,     0,     0,
     -34,   -34,   103,     0,     0,     0,     0,   174,   175,     0,
     196,     0,     0,     0,     0,     0,   312,   177,   178,   314,
       0,   179,   197,   198,   199,   180,   181,     0,     0,   182,
     117,   117,   326,     0,   327,   183,   329,     0,     0,   -85,
     -85,     0,   -85,   -85,     0,   207,   338,     0,   208,   339,
     -85,     0,   341,   -85,   -85,   209,   210,     0,     0,     0,
       0,     0,     0,   211,   212,     0,   -46,   213,   -46,   146,
     -85,   -46,   -46,   214,   -46,   -46,   -46,   -46,   -46,   -46,
       0,   -46,   -46,     0,   146,   -46,   -46,   -46,   -46,   -46,
     -46,     0,     0,   -46,     0,   -46,   146,     0,   -46,   -46,
       0,   -47,     0,   -47,     0,     0,   -47,   -47,     0,   -47,
     -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,     0,   204,
     -47,   -47,   -47,   -47,   -47,   -47,     0,     0,   -47,     0,
     -47,     0,     0,   -47,   -47,   -27,     0,   -27,     0,     0,
     -27,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
     -27,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,   -27,     0,   -27,     0,     0,   -27,   -27,   -28,
       0,   -28,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,     0,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,   -28,     0,   -28,     0,
       0,   -28,   -28,   -26,     0,   -26,     0,     0,   -26,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
     -26,     0,   -26,     0,     0,   -26,   -26,   -25,     0,   -25,
       0,     0,   -25,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,     0,     0,   -25,   -25,   -25,   -25,
     -25,   -25,     0,     0,   -25,     0,   -25,     0,     0,   -25,
     -25,    -9,     0,    -9,     0,     0,    -9,    -9,     0,    -9,
      -9,    -9,    -9,    -9,    -9,     0,    -9,    -9,     0,     0,
      -9,    -9,    -9,    -9,    -9,    -9,     0,     0,    -9,     0,
      -9,     0,     0,    -9,    -9,   -44,     0,   -44,     0,     0,
     -44,   -44,     0,   -44,   -44,   -44,   -44,   -44,   -44,     0,
     -44,   -44,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,
       0,     0,   -44,     0,   -44,     0,     0,   -44,   -44,   -45,
       0,   -45,     0,     0,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   -45,     0,   -45,     0,
       0,   -45,   -45,    -8,     0,    -8,     0,     0,    -8,    -8,
       0,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,
       0,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
      -8,     0,    -8,     0,     0,    -8,    -8,   -38,     0,   -38,
       0,     0,   -38,   -38,     0,   -38,   -38,   377,   -38,   -38,
     -38,     0,   -38,   -38,     0,     0,   -38,   -38,   -38,   -38,
     -38,   -38,     0,     0,   -38,     0,   -38,     0,     0,   -38,
     -38,   -33,     0,   -33,     0,     0,   -33,   -33,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,     0,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,
     -33,     0,     0,   -33,   -33,   -32,     0,   -32,     0,     0,
     -32,   -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,
     -32,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,   -32,     0,   -32,     0,     0,   -32,   -32,   -31,
       0,   -31,     0,     0,   -31,   -31,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,   -31,     0,   -31,     0,
       0,   -31,   -31,   -29,     0,   -29,     0,     0,   -29,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
     -29,     0,   -29,     0,     0,   -29,   -29,   -15,     0,   -15,
       0,     0,   -15,   -15,     0,   -15,   -15,   -15,   -15,   -15,
     -15,     0,   -15,   -15,     0,     0,   -15,   -15,   -15,   -15,
     -15,   -15,     0,     0,   -15,     0,   -15,     0,     0,   -15,
     -15,   -40,     0,   -40,     0,     0,   -40,   -40,     0,   -40,
     -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,   -40,     0,
     -40,     0,     0,   -40,   -40,   -30,     0,   -30,     0,     0,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,   -30,     0,   -30,     0,     0,   -30,   -30,   -22,
       0,   -22,     0,     0,   -22,   -22,     0,   -22,   -22,     0,
     -22,   -22,   -22,     0,   -22,   -22,     0,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,   -22,     0,   -22,     0,
       0,   -22,   -22,    33,     0,    34,     0,     0,    35,    36,
       0,    37,    38,     0,    39,    40,    41,     0,    42,    43,
       0,     0,    44,    45,    46,    47,    48,    49,     0,     0,
      50,     0,    51,     0,     0,    52,    53,   -46,     0,   -46,
       0,     0,   -46,   -46,     0,   -46,   -46,     0,   -46,   -46,
     -46,     0,   -46,   -46,     0,     0,   -46,   -46,   -46,   -46,
     -46,   -46,     0,     0,   -46,     0,   -46,     0,     0,   -46,
     -46,   -47,     0,   -47,     0,     0,   -47,   -47,     0,   -47,
     -47,     0,   -47,   -47,   -47,     0,   -47,   -47,     0,     0,
     -47,   -47,   -47,   -47,   -47,   -47,     0,     0,   -47,     0,
     -47,     0,     0,   -47,   -47,   -23,     0,   -23,     0,     0,
     -23,   -23,     0,   -23,   -23,     0,   -23,   -23,   -23,     0,
     -23,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -23,     0,   -23,     0,     0,   -23,   -23,   -24,
       0,   -24,     0,     0,   -24,   -24,     0,   -24,   -24,     0,
     -24,   -24,   -24,     0,   -24,   -24,     0,     0,   -24,   -24,
     -24,   -24,   -24,   -24,     0,     0,   -24,     0,   -24,     0,
       0,   -24,   -24,   -27,     0,   -27,     0,     0,   -27,   -27,
       0,   -27,   -27,     0,   -27,   -27,   -27,     0,   -27,   -27,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,
     -27,     0,   -27,     0,     0,   -27,   -27,   -28,     0,   -28,
       0,     0,   -28,   -28,     0,   -28,   -28,     0,   -28,   -28,
     -28,     0,   -28,   -28,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,   -28,     0,   -28,     0,     0,   -28,
     -28,   -26,     0,   -26,     0,     0,   -26,   -26,     0,   -26,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,     0,
     -26,     0,     0,   -26,   -26,   -25,     0,   -25,     0,     0,
     -25,   -25,     0,   -25,   -25,     0,   -25,   -25,   -25,     0,
     -25,   -25,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,   -25,     0,   -25,     0,     0,   -25,   -25,   -41,
       0,   -41,     0,     0,   -41,   -41,     0,   -41,   -41,     0,
     -41,   -41,   -41,     0,   -41,   -41,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,   -41,     0,   -41,   -44,
     -41,   -44,   -41,     0,   -44,   -44,     0,   -44,   -44,     0,
     -44,   -44,   -44,     0,   -44,   -44,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,   -44,     0,   -44,     0,
       0,   -44,   -44,   -45,     0,   -45,     0,     0,   -45,   -45,
       0,   -45,   -45,     0,   -45,   -45,   -45,     0,   -45,   -45,
       0,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,
     -45,     0,   -45,     0,     0,   -45,   -45,   219,     0,   220,
       0,     0,    35,    36,     0,    37,   221,     0,   222,   223,
     224,     0,    42,    43,     0,     0,    44,    45,    46,    47,
      48,    49,     0,     0,    50,     0,   225,   -43,   132,   -43,
      53,     0,   -43,   -43,     0,   -43,   -43,     0,   -43,   -43,
     -43,     0,   -43,   -43,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -43,     0,   -43,   -42,   -43,   -42,
     -43,     0,   -42,   -42,     0,   -42,   -42,     0,   -42,   -42,
     -42,     0,   -42,   -42,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,   -42,     0,   -42,    33,   -42,    34,
     -42,     0,    35,    36,     0,    37,    38,     0,    39,    40,
      41,     0,    42,    43,     0,     0,    44,    45,    46,    47,
      48,    49,     0,     0,    50,     0,    51,     0,     0,   158,
      53,   -39,     0,   -39,     0,     0,   -39,   -39,     0,   -39,
     -39,     0,   -39,   -39,   -39,     0,   -39,   -39,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,     0,
     -39,    33,   -39,   257,   -39,     0,    35,    36,     0,    37,
      38,     0,    39,    40,    41,     0,    42,    43,     0,     0,
      44,    45,    46,    47,    48,    49,     0,     0,    50,     0,
      51,   -33,   258,   -33,    53,     0,   -33,   -33,     0,   -33,
     -33,     0,   -33,   -33,   -33,     0,   -33,   -33,     0,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,
     -33,     0,     0,   -33,   -33,   -32,     0,   -32,     0,     0,
     -32,   -32,     0,   -32,   -32,     0,   -32,   -32,   -32,     0,
     -32,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,   -32,     0,   -32,     0,     0,   -32,   -32,   -31,
       0,   -31,     0,     0,   -31,   -31,     0,   -31,   -31,     0,
     -31,   -31,   -31,     0,   -31,   -31,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,   -31,     0,   -31,     0,
       0,   -31,   -31,   -29,     0,   -29,     0,     0,   -29,   -29,
       0,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
     -29,     0,   -29,     0,     0,   -29,   -29,   -40,     0,   -40,
       0,     0,   -40,   -40,     0,   -40,   -40,     0,   -40,   -40,
     -40,     0,   -40,   -40,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,   -40,     0,   -40,     0,     0,   -40,
     -40,   -30,     0,   -30,     0,     0,   -30,   -30,     0,   -30,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,
     -30,     0,     0,   -30,   -30,    -9,     0,    -9,     0,     0,
      -9,    -9,     0,    -9,    -9,     0,    -9,    -9,    -9,     0,
      -9,    -9,     0,     0,    -9,    -9,    -9,    -9,    -9,    -9,
       0,     0,    -9,     0,    -9,     0,     0,    -9,    -9,   -36,
       0,   -36,     0,     0,   -36,   -36,     0,   -36,   -36,     0,
     -36,   -36,   -36,     0,   -36,   -36,     0,     0,   -36,   -36,
     -36,   -36,   -36,   -36,     0,     0,   -36,     0,   -36,     0,
       0,   -36,   -36,   -37,     0,   -37,     0,     0,   -37,   -37,
       0,   -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
     -37,     0,   -37,     0,     0,   -37,   -37,   -35,     0,   -35,
       0,     0,   -35,   -35,     0,   -35,   -35,     0,   -35,   -35,
     -35,     0,   -35,   -35,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,   -35,     0,   -35,     0,     0,   -35,
     -35,    -8,     0,    -8,     0,     0,    -8,    -8,     0,    -8,
      -8,     0,    -8,    -8,    -8,     0,    -8,    -8,     0,     0,
      -8,    -8,    -8,    -8,    -8,    -8,     0,     0,    -8,     0,
      -8,     0,     0,    -8,    -8,    33,     0,    34,     0,     0,
      35,    36,     0,    37,    38,     0,    39,    40,    41,     0,
      42,    43,     0,     0,    44,    45,    46,    47,    48,    49,
       0,     0,    50,     0,    51,     0,     0,   351,    53,   -34,
       0,   -34,     0,     0,   -34,   -34,     0,   -34,   -34,     0,
     -34,   -34,   -34,     0,   -34,   -34,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,     0,   -34,     0,   -34,     0,
       0,   -34,   -34,    33,     0,    34,     0,     0,    35,    36,
       0,    37,    38,     0,    39,    40,    41,     0,    42,    43,
       0,     0,    44,    45,    46,    47,    48,    49,     0,     0,
      50,     0,    51,     0,     0,   398,    53,    33,     0,    34,
       0,     0,    35,    36,     0,    37,    38,     0,    39,    40,
      41,     0,    42,    43,     0,     0,    44,    45,    46,    47,
      48,    49,     0,     0,    50,     0,    51,     0,     0,   401,
      53,   -15,     0,   -15,     0,     0,   -15,   -15,     0,   -15,
     -15,     0,   -15,   -15,   -15,     0,   -15,   -15,     0,     0,
     -15,   -15,   -15,   -15,   -15,   -15,     0,     0,   -15,     0,
     -15,   -45,     0,   -15,   -15,     0,   -45,   -45,     0,   -45,
       0,     0,     0,     0,     0,     0,   -45,   -45,     0,     0,
     -45,   -45,   -45,   -45,   -45,   -45,     0,   335,   -45,     0,
     -45,     0,    35,    36,   -45,    37,     0,     0,     0,     0,
       0,     0,    42,    43,     0,     0,    44,    45,    46,    47,
      48,    49,     0,     0,    50,     0,   205,     0,   -81,   -81,
      53,   -81,   -81,   -76,   -76,     0,   -76,   -76,     0,   -81,
       0,     0,   -81,   -81,   -76,     0,     0,   -76,   -76,     0,
       0,     0,     0,     0,     0,   -81,     0,     0,     0,   -81,
     -76,     0,   -74,   -74,   -76,   -74,   -74,   -79,   -79,     0,
     -79,   -79,     0,   -74,     0,     0,   -74,   -74,   -79,     0,
       0,   -79,   -79,     0,     0,     0,     0,     0,     0,   -74,
       0,     0,     0,   -74,   -79,     0,   -70,   -70,   -79,   -70,
     308,   -72,   -72,     0,   -72,   -72,     0,   -70,     0,     0,
     -70,   -70,   -72,     0,     0,   -72,   -72,     0,     0,     0,
       0,     0,     0,   -70,     0,     0,     0,   -70,   -72,     0,
     -84,   -84,   -72,   -84,   -84,   -82,   -82,     0,   -82,   -82,
       0,   -84,     0,     0,   -84,   -84,   -82,     0,     0,   -82,
     -82,     0,     0,     0,     0,     0,     0,   -84,     0,     0,
       0,   -84,   -82,     0,   -83,   -83,   -82,   -83,   -83,   -89,
     -89,     0,   -89,   -89,     0,   -83,     0,     0,   -83,   -83,
     -89,     0,     0,   -89,   -89,     0,     0,     0,     0,     0,
       0,   -83,     0,     0,     0,   -83,   -89,     0,   -86,   -86,
     -89,   -86,   -86,   -87,   -87,     0,   -87,   -87,     0,   -86,
       0,     0,   -86,   -86,   -87,     0,     0,   -87,   -87,     0,
       0,   -71,   -71,     0,   -71,   275,     0,   -73,   -73,   -86,
     -73,   -73,   -71,     0,   -87,   -71,   -71,     0,   -73,     0,
       0,   -73,   -73,     0,     0,   -75,   -75,     0,   -75,   -75,
     -77,   -77,   -71,   -77,   -77,     0,   -75,     0,   -73,   -75,
     -75,   -77,     0,     0,   -77,   -77,     0,     0,   -80,   -80,
       0,   -80,   -80,     0,   -81,   -81,   -75,   -81,   -81,   -80,
       0,   -77,   -80,   -80,     0,   -81,     0,     0,   -81,   -81,
       0,     0,   -76,   -76,     0,   -76,   -76,   -74,   -74,   -80,
     -74,   -74,     0,   -76,     0,   -81,   -76,   -76,   -74,     0,
       0,   -74,   -74,     0,     0,   -79,   -79,     0,   -79,   -79,
       0,   -70,   -70,   -76,   -70,   275,   -79,     0,   -74,   -79,
     -79,     0,   -70,     0,     0,   -70,   -70,     0,     0,   -72,
     -72,     0,   -72,   -72,   -84,   -84,   -79,   -84,   -84,     0,
     -72,     0,   -70,   -72,   -72,   -84,     0,     0,   -84,   -84,
       0,     0,   -82,   -82,     0,   -82,   -82,     0,   -83,   -83,
     -72,   -83,   -83,   -82,     0,   -84,   -82,   -82,     0,   -83,
       0,     0,   -83,   -83,     0,     0,   -89,   -89,     0,   -89,
     -89,     0,     0,   -82,     0,     0,     0,   -89,     0,   -83,
     -89,   -89,     0,     0,   -78,   -78,     0,   -78,   -78,     0,
     174,   175,     0,   196,     0,   -78,     0,   -89,   -78,   -78,
     177,   178,     0,     0,   179,   197,   198,   199,   180,   181,
     -78,     0,   182,     0,   -53,     0,     0,     0,   183,   152,
     -46,   -46,     0,   -46,     0,     0,     0,     0,     0,     0,
     -46,   -46,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,
     -47,   -47,   -46,   -47,     0,     0,     0,     0,   -46,   -46,
     -47,   -47,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -45,   -45,   -47,   -45,     0,     0,     0,     0,   -47,   -47,
     -45,   -45,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     174,   175,   -45,   196,     0,     0,     0,     0,   -45,   -45,
     177,   178,     0,     0,   179,   197,   198,   199,   180,   181,
     234,   235,   182,   236,     0,     0,     0,     0,   183,   379,
     237,   238,     0,     0,   239,     0,     0,     0,   240,   241,
     174,   175,   242,   176,     0,     0,     0,     0,   243,   -90,
     177,   178,     0,     0,   179,     0,     0,     0,   180,   181,
     114,   115,   182,    35,    36,     0,   173,     0,   183,     0,
       0,     0,     0,    42,    43,     0,     0,    44,     0,     0,
       0,    48,    49,   174,   175,    50,   176,     0,     0,     0,
       0,    53,     0,   177,   178,     0,     0,   179,     0,     0,
       0,   180,   181,   234,   235,   182,   236,     0,     0,     0,
       0,   183,     0,   237,   238,     0,   174,   239,     0,   176,
       0,   240,   241,     0,     0,   242,   177,   178,     0,   234,
       0,   243,   236,     0,   180,   181,     0,     0,   182,   237,
     238,     0,     0,     0,   183,     0,     0,   240,   241,   -80,
     -80,   242,   -80,   -80,     0,   -81,   -81,   243,   -81,   -81,
     -80,     0,     0,   -80,   -80,     0,   -81,     0,     0,   -81,
     -81,     0,     0,   -76,   -76,   -80,   -76,   -76,     0,   -74,
     -74,   -81,   -74,   -74,   -76,     0,     0,   -76,   -76,     0,
     -74,     0,     0,   -74,   -74,     0,     0,   -79,   -79,   -76,
     -79,   -79,     0,   -70,   -70,   -74,   -70,   101,   -79,     0,
       0,   -79,   -79,     0,   -70,     0,     0,   -70,   -70,     0,
       0,   -72,   -72,   -79,   -72,   -72,     0,   -84,   -84,   -70,
     -84,   -84,   -72,     0,     0,   -72,   -72,     0,   -84,     0,
       0,   -84,   -84,     0,     0,   -82,   -82,   -72,   -82,   -82,
       0,   -83,   -83,   -84,   -83,   -83,   -82,     0,     0,   -82,
     -82,     0,   -83,     0,     0,   -83,   -83,     0,     0,   -89,
     -89,   -82,   -89,   -89,     0,   -69,   -69,   -83,   100,     0,
     -89,     0,     0,   -89,   -89,     0,   -69,     0,     0,   -69,
     -69,   -68,   -68,     0,   100,   -89,     0,     0,     0,     0,
       0,   -69,   -68,     0,     0,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -68
};

static const yytype_int16 yycheck[] =
{
       3,    32,    80,     5,   316,    36,   105,    90,   132,    40,
       1,     5,     3,    44,     0,    80,     3,   184,   288,   331,
      80,    15,    30,    31,    18,    19,    34,   332,    34,    32,
      40,   343,     4,     5,   201,     7,     8,    32,    15,     9,
     310,    35,   105,    15,    35,   350,    18,    19,   215,    80,
      32,    82,    31,     1,    85,    15,    35,    88,    35,    31,
     138,     9,    93,    35,    95,    96,    97,    98,    99,   100,
     101,     5,    82,   138,   105,    35,   107,   244,   138,    15,
      15,    15,    18,    19,    18,    19,     1,    80,    15,    82,
     121,     6,     7,    35,     9,   105,    30,   107,     9,    35,
      35,    16,    17,     1,    31,    20,    15,   138,    35,    24,
      25,     9,   105,    28,   107,     5,    15,     3,   149,    34,
     151,    30,    15,   154,   155,    15,   157,    15,    18,    19,
     161,    19,    31,    34,   258,   166,    35,   168,    30,    31,
      30,   105,    35,    31,    35,   138,   149,    35,   151,    15,
      15,   154,   155,    19,   149,    32,   151,    15,   161,   154,
     155,     4,     5,   166,   151,   168,   161,   154,   155,    35,
      35,   166,    15,   168,   161,    18,    19,    35,    15,   166,
     363,   168,    19,     1,    34,    15,    36,    30,     6,     7,
     373,     9,   223,    30,   277,   278,    30,    31,    16,    17,
       4,     5,    20,     7,   235,    35,    24,    25,   239,    36,
      28,    15,    32,   223,    18,    19,    34,    15,   220,     5,
      15,    19,    15,    18,    19,   256,    53,    31,    34,    15,
     223,    35,    18,    19,   265,   334,    31,    35,     1,    15,
      35,    32,    35,    19,    15,   276,     9,    18,    19,    35,
      77,   282,    32,    80,    30,     4,     5,    84,    85,    86,
     291,   385,    89,    90,    35,    34,    15,   298,   392,    18,
      19,   334,   303,   304,   305,   306,   307,   308,    15,   378,
     311,   291,   381,   382,    15,   316,    35,    15,   366,   388,
      34,     1,    31,    30,   121,   394,    35,   396,   291,     9,
     331,   366,    15,   334,    35,   336,   366,    35,   311,    34,
       6,   138,   343,     9,    15,   378,   311,    15,   381,   382,
      16,    17,    35,    31,   334,   388,   336,    35,    24,    25,
     157,   394,    28,   396,    35,   366,    31,    35,    34,    30,
      35,   334,    31,   336,     4,     5,    35,   378,   175,    15,
     381,   382,   179,    34,    15,    15,   183,   388,    18,    19,
      15,    15,   393,   394,    19,   396,   397,    34,   378,    35,
     334,   381,   382,   366,    35,    35,    31,    34,   388,     0,
      35,    35,     3,    34,   394,   378,   396,   214,   381,   382,
     393,   218,    30,    15,   397,   388,     4,     5,   393,     7,
       8,   394,   397,   396,    30,    31,     0,    15,   235,     3,
      18,    19,   239,    35,   378,    30,   243,   381,   382,     0,
       1,    30,     3,    31,   388,     9,    34,    35,    44,   256,
     394,     0,   396,    34,     3,    36,   263,    53,   265,   266,
      30,    31,    34,   270,   271,   272,   273,   274,   275,    34,
     277,   278,   279,    32,   281,   282,   283,     0,    35,     0,
       3,    77,     3,    35,    80,    35,   293,    35,    84,   296,
      86,   298,   299,    89,    90,    35,   303,   304,   305,   306,
     307,   308,     5,     4,     5,   101,     7,     8,     0,   316,
       0,     3,    15,     3,    15,    18,    19,    18,    19,     0,
      30,    31,     3,    35,   331,   121,     4,     5,    31,     7,
       8,    53,    35,    34,    35,   151,   343,    15,   154,   155,
      18,    19,   138,    34,    35,   161,    30,    31,    35,    35,
     166,    34,   168,    31,    30,    77,    35,    35,    80,   366,
      30,   157,    84,    85,    86,    30,    35,    89,    90,    35,
       4,     5,    34,     7,     8,   137,    34,   139,   140,    34,
      34,    15,    34,   179,    18,    19,     1,   183,    35,    35,
     152,     6,     7,    35,     9,    30,    30,   159,    34,   121,
     162,    16,    17,    34,    34,    20,    21,    22,    23,    24,
      25,    35,    35,    28,    35,    30,   138,    35,   214,    34,
      35,    15,   218,    35,    18,    19,     4,     5,    34,     7,
       8,     4,     5,    34,     7,   157,    30,    15,    30,    30,
      18,    19,    15,   239,    34,    18,    19,   243,    34,    34,
      34,    34,    30,   175,     4,     5,    34,   179,    36,    34,
     256,   183,    35,    35,    35,    15,    35,   263,    18,    19,
     266,    35,    35,    35,   270,   271,   272,   273,   274,   275,
      30,   277,   278,   279,    35,   281,    35,   283,    35,    35,
       4,     5,   214,     7,     8,    35,   218,   293,    35,    35,
     296,    15,    35,   299,    18,    19,    35,   303,   304,   305,
     306,   307,   308,   235,    35,    35,    30,   239,   334,    35,
     316,   243,    15,    35,    32,    18,    19,    15,   290,    28,
      -1,    -1,   377,   221,   256,   331,    -1,    -1,    31,    -1,
      -1,   263,    35,   265,   266,    -1,    -1,   343,   270,   271,
     272,   273,   274,   275,    -1,   277,   278,   279,    -1,   281,
     282,   283,   378,    -1,    53,   381,   382,    -1,    -1,    -1,
     366,   293,   388,    -1,   296,    -1,   298,   299,   394,    -1,
     396,   303,   304,   305,   306,   307,   308,    -1,    77,    15,
      -1,    80,    18,    19,   316,    84,    85,    86,    -1,    -1,
      89,    90,    -1,   365,    30,   367,   368,    -1,    -1,   331,
      -1,     4,     5,    -1,     7,     8,    -1,   379,    -1,    -1,
      -1,   343,    15,    -1,   386,    18,    19,   389,    -1,    -1,
      -1,     1,   121,    -1,    -1,    -1,     6,     7,    53,     9,
      -1,    34,    35,    36,   366,    -1,    16,    17,    -1,   138,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    77,    -1,    34,    80,    -1,    -1,   157,    84,
      -1,    86,    -1,    -1,    89,    90,     1,    -1,    -1,    -1,
      -1,     6,     7,    -1,     9,    -1,   175,    -1,    -1,    -1,
     179,    16,    17,    -1,   183,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,   121,    -1,    -1,    34,
      35,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,     9,
      -1,    -1,    -1,   138,    -1,   214,    16,    17,    -1,   218,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,   157,     5,    34,    -1,   235,    -1,     4,     5,
     239,     7,     8,    15,   243,    -1,    18,    19,    -1,    15,
      -1,    -1,    18,    19,   179,    -1,    -1,   256,   183,    31,
      -1,    -1,    -1,    35,   263,    31,   265,   266,    -1,    35,
      -1,   270,   271,   272,   273,   274,   275,    -1,   277,   278,
     279,    -1,   281,   282,   283,    -1,    -1,     4,     5,   214,
       7,     8,    53,   218,   293,    -1,    -1,   296,    15,   298,
     299,    18,    19,    -1,   303,   304,   305,   306,   307,   308,
      -1,    -1,    -1,    30,   239,    -1,    77,   316,   243,    80,
      -1,    -1,    -1,    84,    -1,    86,    -1,    -1,    89,    90,
      -1,   256,   331,    -1,    -1,    -1,    -1,    -1,   263,   100,
      -1,   266,    -1,    -1,   343,   270,   271,   272,   273,   274,
     275,    -1,   277,   278,   279,    -1,   281,    -1,   283,    -1,
     121,     4,     5,    -1,     7,     8,    53,   366,   293,    -1,
      -1,   296,    15,    -1,   299,    18,    19,   138,   303,   304,
     305,   306,   307,   308,    -1,    -1,    -1,    -1,    31,    -1,
      77,   316,    35,    80,    -1,    -1,   157,    84,    -1,    86,
      -1,    -1,    89,    90,    -1,    -1,   331,    -1,    -1,     1,
      -1,    -1,    99,    -1,     6,     7,    -1,     9,   343,    -1,
      -1,    -1,   183,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,   121,    -1,    28,    -1,    30,    -1,
      -1,   366,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   138,    -1,   214,    -1,    -1,     1,   218,     3,    -1,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
     157,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,   243,    28,    -1,    30,    -1,    -1,    33,    34,
      -1,    -1,     4,     5,    -1,   256,   183,    -1,    -1,    -1,
      -1,    -1,   263,    15,    -1,   266,    18,    19,    -1,   270,
     271,   272,   273,   274,    -1,    -1,   277,   278,   279,    31,
     281,    -1,   283,    35,    -1,     4,     5,   214,     7,     8,
      53,   218,   293,    -1,    -1,   296,    15,    -1,   299,    18,
      19,    -1,   303,   304,   305,   306,   307,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    77,   316,   243,    80,    -1,    -1,
      -1,    84,    -1,    86,    -1,    -1,    89,    90,    -1,   256,
     331,    -1,    -1,    -1,    -1,    98,   263,    -1,    -1,   266,
      -1,    -1,   343,   270,   271,   272,   273,    -1,    -1,    -1,
     277,   278,   279,    -1,   281,    -1,   283,    -1,   121,     4,
       5,    -1,     7,     8,    53,   366,   293,    -1,    -1,   296,
      15,    -1,   299,    18,    19,   138,   303,   304,   305,   306,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    77,   316,
      35,    80,    -1,    -1,   157,    84,    -1,    86,    -1,    -1,
      89,    90,    -1,    -1,   331,    -1,    -1,     1,    97,    -1,
      -1,    -1,     6,     7,    -1,     9,   343,    -1,    -1,    -1,
     183,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,   121,    -1,    28,    -1,    30,    -1,    -1,   366,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
      -1,   214,    -1,    -1,     1,   218,     3,    -1,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,   157,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
     243,    28,    -1,    30,    -1,    -1,    33,    34,    -1,    -1,
       4,     5,    -1,   256,   183,    -1,    -1,    -1,    -1,    -1,
     263,    15,    -1,   266,    18,    19,    -1,   270,   271,   272,
      -1,    -1,    -1,    -1,   277,   278,   279,    31,   281,    -1,
     283,    35,    -1,     4,     5,   214,     7,     8,    53,   218,
     293,    -1,    -1,   296,    15,    -1,   299,    18,    19,    -1,
     303,   304,   305,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    77,   316,   243,    80,    -1,    -1,    -1,    84,
      -1,    86,    -1,    -1,    89,    90,    -1,   256,   331,    -1,
      -1,    96,    -1,    -1,   263,    -1,    -1,   266,    -1,    -1,
     343,   270,   271,    -1,    -1,    -1,    -1,    -1,   277,   278,
     279,    -1,   281,    -1,   283,    -1,   121,     4,     5,    -1,
       7,     8,    53,   366,   293,    -1,    -1,   296,    15,    -1,
     299,    18,    19,   138,   303,   304,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    77,   316,    35,    80,
      -1,    -1,   157,    84,    -1,    86,    -1,    -1,    89,    90,
       1,    -1,   331,    -1,    95,     6,     7,    -1,     9,    -1,
      -1,    -1,    -1,    -1,   343,    16,    17,    -1,   183,    20,
      21,    22,    23,    24,    25,     4,     5,    28,     7,    30,
     121,    -1,    -1,    34,    -1,    -1,    15,   366,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,   138,    -1,   214,
      -1,    -1,     1,   218,     3,    -1,    35,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,   157,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,   243,    28,
      -1,    30,    -1,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,   256,   183,     4,     5,    -1,     7,     8,   263,    -1,
      -1,   266,    -1,    -1,    15,   270,    53,    18,    19,    -1,
      -1,    -1,   277,   278,   279,    -1,   281,    -1,   283,    -1,
      31,    -1,    -1,   214,    35,    -1,    -1,   218,   293,    -1,
      77,   296,    -1,    80,   299,    -1,    -1,    84,   303,    86,
      -1,    -1,    89,    90,     4,     5,    93,     7,     8,    -1,
      -1,   316,   243,     4,     5,    15,     7,     8,    18,    19,
      -1,    -1,    -1,    -1,    15,   256,   331,    18,    19,    -1,
      30,    -1,   263,    -1,   121,   266,    -1,    -1,   343,    -1,
      31,    -1,     4,     5,    35,     7,   277,   278,   279,    -1,
     281,   138,   283,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,   366,   293,     4,     5,   296,     7,     8,   299,    31,
     157,    -1,    -1,    35,    15,    -1,    -1,    18,    19,    -1,
      -1,    -1,     1,    -1,     3,   316,    -1,     6,     7,    30,
       9,    10,    11,    12,    13,    14,   183,    16,    17,    -1,
     331,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,   343,    -1,    33,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   214,     1,    -1,
       3,    -1,    -1,     6,     7,   366,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,   243,    30,    -1,    -1,
      33,    34,     1,    -1,    -1,    -1,    -1,     6,     7,    -1,
       9,    -1,    -1,    -1,    -1,    -1,   263,    16,    17,   266,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
     277,   278,   279,    -1,   281,    34,   283,    -1,    -1,     4,
       5,    -1,     7,     8,    -1,     6,   293,    -1,     9,   296,
      15,    -1,   299,    18,    19,    16,    17,    -1,    -1,    -1,
      -1,    -1,    -1,    24,    25,    -1,     1,    28,     3,   316,
      35,     6,     7,    34,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,   331,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,   343,    -1,    33,    34,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,   366,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,
      -1,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,
      -1,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,     7,
      -1,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,
      -1,    -1,     6,     7,    -1,     9,    10,    11,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
       6,     7,    -1,     9,    10,    11,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,     1,
      32,     3,    34,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,     1,    32,     3,
      34,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,     1,    32,     3,
      34,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,     1,    32,     3,
      34,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,     1,    32,     3,    34,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,     1,    32,     3,    34,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,
      -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,     7,
      -1,     9,    10,    -1,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,
      -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,     1,    -1,    33,    34,    -1,     6,     7,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,     1,    28,    -1,
      30,    -1,     6,     7,    34,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,     4,     5,
      34,     7,     8,     4,     5,    -1,     7,     8,    -1,    15,
      -1,    -1,    18,    19,    15,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,
      31,    -1,     4,     5,    35,     7,     8,     4,     5,    -1,
       7,     8,    -1,    15,    -1,    -1,    18,    19,    15,    -1,
      -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    35,    31,    -1,     4,     5,    35,     7,
       8,     4,     5,    -1,     7,     8,    -1,    15,    -1,    -1,
      18,    19,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    31,    -1,
       4,     5,    35,     7,     8,     4,     5,    -1,     7,     8,
      -1,    15,    -1,    -1,    18,    19,    15,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,    31,    -1,     4,     5,    35,     7,     8,     4,
       5,    -1,     7,     8,    -1,    15,    -1,    -1,    18,    19,
      15,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    35,    31,    -1,     4,     5,
      35,     7,     8,     4,     5,    -1,     7,     8,    -1,    15,
      -1,    -1,    18,    19,    15,    -1,    -1,    18,    19,    -1,
      -1,     4,     5,    -1,     7,     8,    -1,     4,     5,    35,
       7,     8,    15,    -1,    35,    18,    19,    -1,    15,    -1,
      -1,    18,    19,    -1,    -1,     4,     5,    -1,     7,     8,
       4,     5,    35,     7,     8,    -1,    15,    -1,    35,    18,
      19,    15,    -1,    -1,    18,    19,    -1,    -1,     4,     5,
      -1,     7,     8,    -1,     4,     5,    35,     7,     8,    15,
      -1,    35,    18,    19,    -1,    15,    -1,    -1,    18,    19,
      -1,    -1,     4,     5,    -1,     7,     8,     4,     5,    35,
       7,     8,    -1,    15,    -1,    35,    18,    19,    15,    -1,
      -1,    18,    19,    -1,    -1,     4,     5,    -1,     7,     8,
      -1,     4,     5,    35,     7,     8,    15,    -1,    35,    18,
      19,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,     4,
       5,    -1,     7,     8,     4,     5,    35,     7,     8,    -1,
      15,    -1,    35,    18,    19,    15,    -1,    -1,    18,    19,
      -1,    -1,     4,     5,    -1,     7,     8,    -1,     4,     5,
      35,     7,     8,    15,    -1,    35,    18,    19,    -1,    15,
      -1,    -1,    18,    19,    -1,    -1,     4,     5,    -1,     7,
       8,    -1,    -1,    35,    -1,    -1,    -1,    15,    -1,    35,
      18,    19,    -1,    -1,     4,     5,    -1,     7,     8,    -1,
       6,     7,    -1,     9,    -1,    15,    -1,    35,    18,    19,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      30,    -1,    28,    -1,    34,    -1,    -1,    -1,    34,    35,
       6,     7,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
       6,     7,    28,     9,    -1,    -1,    -1,    -1,    34,    35,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
       6,     7,    28,     9,    -1,    -1,    -1,    -1,    34,    35,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
       6,     7,    28,     9,    -1,    -1,    -1,    -1,    34,    35,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
       6,     7,    28,     9,    -1,    -1,    -1,    -1,    34,    35,
      16,    17,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,
       6,     7,    28,     9,    -1,    -1,    -1,    -1,    34,    35,
      16,    17,    -1,    -1,    20,    -1,    -1,    -1,    24,    25,
      26,    27,    28,     6,     7,    -1,     9,    -1,    34,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    24,    25,     6,     7,    28,     9,    -1,    -1,    -1,
      -1,    34,    -1,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    24,    25,     6,     7,    28,     9,    -1,    -1,    -1,
      -1,    34,    -1,    16,    17,    -1,     6,    20,    -1,     9,
      -1,    24,    25,    -1,    -1,    28,    16,    17,    -1,     6,
      -1,    34,     9,    -1,    24,    25,    -1,    -1,    28,    16,
      17,    -1,    -1,    -1,    34,    -1,    -1,    24,    25,     4,
       5,    28,     7,     8,    -1,     4,     5,    34,     7,     8,
      15,    -1,    -1,    18,    19,    -1,    15,    -1,    -1,    18,
      19,    -1,    -1,     4,     5,    30,     7,     8,    -1,     4,
       5,    30,     7,     8,    15,    -1,    -1,    18,    19,    -1,
      15,    -1,    -1,    18,    19,    -1,    -1,     4,     5,    30,
       7,     8,    -1,     4,     5,    30,     7,     8,    15,    -1,
      -1,    18,    19,    -1,    15,    -1,    -1,    18,    19,    -1,
      -1,     4,     5,    30,     7,     8,    -1,     4,     5,    30,
       7,     8,    15,    -1,    -1,    18,    19,    -1,    15,    -1,
      -1,    18,    19,    -1,    -1,     4,     5,    30,     7,     8,
      -1,     4,     5,    30,     7,     8,    15,    -1,    -1,    18,
      19,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,     4,
       5,    30,     7,     8,    -1,     4,     5,    30,     7,    -1,
      15,    -1,    -1,    18,    19,    -1,    15,    -1,    -1,    18,
      19,     4,     5,    -1,     7,    30,    -1,    -1,    -1,    -1,
      -1,    30,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     1,    38,    39,     0,     3,    40,    41,    44,     1,
       9,    42,    43,    45,    30,    31,    34,    47,     9,    43,
       1,     3,    35,    48,    49,    46,    35,     9,    31,    35,
      32,    49,    50,     1,     3,     6,     7,     9,    10,    12,
      13,    14,    16,    17,    20,    21,    22,    23,    24,    25,
      28,    30,    33,    34,    41,    51,    52,    54,    58,    59,
      60,    61,    62,    63,    64,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    34,    62,    75,
      34,    57,    34,    59,    34,    34,    34,    73,    34,    34,
      34,    66,    30,    36,    78,    15,    19,    18,     5,     4,
       7,     8,    66,     1,    60,    56,     1,    59,     1,    66,
      75,    66,     9,    62,    26,    27,    65,    66,    65,    35,
      66,    34,    67,    68,    69,    70,    71,    72,    73,    35,
      35,    35,    32,    41,    44,    51,    53,    35,    59,    35,
      35,    35,    35,    35,    35,    35,    66,    79,    80,    50,
      11,    56,    35,    60,    56,    56,    35,    31,    33,    55,
      53,    56,    35,    53,    53,    66,    56,    53,    56,    53,
      53,     1,    42,     9,     6,     7,     9,    16,    17,    20,
      24,    25,    28,    34,    62,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,     9,    21,    22,    23,
      61,    62,    63,    64,    66,    30,    60,     6,     9,    16,
      17,    24,    25,    28,    34,    62,    76,    77,    15,     1,
       3,    10,    12,    13,    14,    30,    52,    54,    58,    59,
      60,     1,    30,    60,     6,     7,     9,    16,    17,    20,
      24,    25,    28,    34,    62,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    15,     3,    32,    41,
      44,    51,    30,    34,    75,    34,    34,    73,    66,    78,
      19,    18,     5,     4,     7,     8,    34,    34,    34,    36,
      30,    34,    34,    34,    66,    78,    67,     1,     9,    42,
      57,    34,    59,    34,    30,    30,    34,    75,    34,    34,
      73,    66,    78,    19,    18,     5,     4,     7,     8,    67,
       9,    50,    66,    75,    66,    35,    34,    68,    69,    70,
      71,    72,    73,    62,    65,    65,    66,    66,    75,    66,
      35,    34,    45,    30,    56,     1,    59,     1,    66,    66,
      75,    66,    35,    34,    68,    69,    70,    71,    72,    73,
      45,    33,    35,    35,    35,    79,    35,    35,    35,    35,
      35,    35,    79,    47,    53,    35,    59,    35,    35,    35,
      35,    35,    79,    47,    35,    35,    46,    11,    56,    35,
      60,    56,    56,    35,    46,    32,    55,    53,    56,    35,
      53,    53,    32,    50,    56,    53,    56,    50,    33,    53,
      53,    33
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    39,    40,    40,    41,    41,
      42,    42,    43,    45,    46,    44,    47,    47,    47,    48,
      48,    49,    50,    50,    50,    51,    51,    51,    51,    52,
      52,    52,    52,    52,    53,    53,    53,    53,    54,    55,
      54,    56,    57,    57,    58,    59,    59,    59,    60,    60,
      60,    60,    61,    62,    63,    64,    64,    65,    65,    65,
      66,    66,    67,    67,    68,    68,    69,    69,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      75,    75,    75,    75,    75,    76,    76,    76,    78,    77,
      79,    79,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     1,     1,     3,     2,
       3,     1,     1,     0,     0,     8,     2,     3,     3,     3,
       1,     2,     0,     2,     2,     1,     1,     1,     1,     7,
       8,     6,     6,     6,     3,     1,     1,     1,     4,     0,
       8,     0,     3,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     3,     1,     4,     4,     4,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     2,     1,     2,     1,     1,     3,
       1,     1,     4,     4,     4,     1,     1,     1,     0,     5,
       0,     1,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
    case 9: /* ID  */
#line 54 "syntactic.y"
            {free(((*yyvaluep).sval));}
#line 2165 "syntactic.tab.c"
        break;

    case 26: /* STRING  */
#line 55 "syntactic.y"
            {free(((*yyvaluep).sval));}
#line 2171 "syntactic.tab.c"
        break;

    case 27: /* CHAR  */
#line 56 "syntactic.y"
            {free(((*yyvaluep).sval));}
#line 2177 "syntactic.tab.c"
        break;

    case 39: /* program  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2183 "syntactic.tab.c"
        break;

    case 40: /* declaration  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2189 "syntactic.tab.c"
        break;

    case 41: /* varDecl  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2195 "syntactic.tab.c"
        break;

    case 42: /* varList  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2201 "syntactic.tab.c"
        break;

    case 43: /* new_id  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2207 "syntactic.tab.c"
        break;

    case 44: /* funcDecl  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2213 "syntactic.tab.c"
        break;

    case 47: /* arguments  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2219 "syntactic.tab.c"
        break;

    case 48: /* argsList  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2225 "syntactic.tab.c"
        break;

    case 49: /* arg  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2231 "syntactic.tab.c"
        break;

    case 50: /* funcBody  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2237 "syntactic.tab.c"
        break;

    case 51: /* stmt  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2243 "syntactic.tab.c"
        break;

    case 52: /* iterStmt  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2249 "syntactic.tab.c"
        break;

    case 53: /* body  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2255 "syntactic.tab.c"
        break;

    case 54: /* condStmt  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2261 "syntactic.tab.c"
        break;

    case 57: /* cond  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2267 "syntactic.tab.c"
        break;

    case 58: /* returnStmt  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2273 "syntactic.tab.c"
        break;

    case 59: /* exprStmt  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2279 "syntactic.tab.c"
        break;

    case 60: /* expression  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2285 "syntactic.tab.c"
        break;

    case 61: /* assign  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2291 "syntactic.tab.c"
        break;

    case 62: /* var  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2297 "syntactic.tab.c"
        break;

    case 63: /* inExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2303 "syntactic.tab.c"
        break;

    case 64: /* outExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2309 "syntactic.tab.c"
        break;

    case 65: /* output  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2315 "syntactic.tab.c"
        break;

    case 66: /* simpleExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2321 "syntactic.tab.c"
        break;

    case 67: /* conjExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2327 "syntactic.tab.c"
        break;

    case 68: /* disjExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2333 "syntactic.tab.c"
        break;

    case 69: /* compExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2339 "syntactic.tab.c"
        break;

    case 70: /* relExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2345 "syntactic.tab.c"
        break;

    case 71: /* artExpr1  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2351 "syntactic.tab.c"
        break;

    case 72: /* artExpr2  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2357 "syntactic.tab.c"
        break;

    case 73: /* negExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2363 "syntactic.tab.c"
        break;

    case 74: /* minusFactor  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2369 "syntactic.tab.c"
        break;

    case 75: /* factor  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2375 "syntactic.tab.c"
        break;

    case 76: /* constant  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2381 "syntactic.tab.c"
        break;

    case 77: /* call  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2387 "syntactic.tab.c"
        break;

    case 79: /* params  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2393 "syntactic.tab.c"
        break;

    case 80: /* paramList  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2399 "syntactic.tab.c"
        break;

      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 67 "syntactic.y"
                                                                {root = (yyvsp[0].tnode); checkMain();}
#line 2669 "syntactic.tab.c"
    break;

  case 3:
#line 70 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2675 "syntactic.tab.c"
    break;

  case 4:
#line 71 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2681 "syntactic.tab.c"
    break;

  case 5:
#line 72 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2687 "syntactic.tab.c"
    break;

  case 6:
#line 75 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2693 "syntactic.tab.c"
    break;

  case 7:
#line 76 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2699 "syntactic.tab.c"
    break;

  case 8:
#line 79 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(VARDECL, (yyvsp[-1].tnode)); setVarsType((yyvsp[-1].tnode), (yyvsp[-2].ival));}
#line 2705 "syntactic.tab.c"
    break;

  case 9:
#line 80 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2711 "syntactic.tab.c"
    break;

  case 10:
#line 84 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2717 "syntactic.tab.c"
    break;

  case 11:
#line 85 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2723 "syntactic.tab.c"
    break;

  case 12:
#line 88 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(declare((yyvsp[0].sval), UNDEF, VARIABLE));}
#line 2729 "syntactic.tab.c"
    break;

  case 13:
#line 91 "syntactic.y"
                        { aux = declare((yyvsp[0].sval), (yyvsp[-1].ival), FUNCTION);
                          pushScope(newScope((yyvsp[0].sval), curr_level+1));
                          n_args = 0;
                          curr_level += 1;}
#line 2738 "syntactic.tab.c"
    break;

  case 14:
#line 96 "syntactic.y"
                                          {aux->n_args = n_args; aux->args_type = (int *)calloc(n_args, sizeof(int)); setArgsInfo(aux, (yyvsp[0].tnode), 0);}
#line 2744 "syntactic.tab.c"
    break;

  case 15:
#line 98 "syntactic.y"
                                          {(yyval.tnode) = BinaryNode(FUNCDECL, (yyvsp[-4].tnode), (yyvsp[-1].tnode)); (yyval.tnode)->ref = aux; hideScope(); curr_level-=1;}
#line 2750 "syntactic.tab.c"
    break;

  case 16:
#line 102 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2756 "syntactic.tab.c"
    break;

  case 17:
#line 103 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2762 "syntactic.tab.c"
    break;

  case 18:
#line 104 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2768 "syntactic.tab.c"
    break;

  case 19:
#line 107 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2774 "syntactic.tab.c"
    break;

  case 20:
#line 108 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2780 "syntactic.tab.c"
    break;

  case 21:
#line 111 "syntactic.y"
                                                                { n_args += 1;
                                                                  (yyval.tnode) = idLeaf(declare((yyvsp[0].sval), (yyvsp[-1].ival), VARIABLE)); }
#line 2787 "syntactic.tab.c"
    break;

  case 22:
#line 115 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2793 "syntactic.tab.c"
    break;

  case 23:
#line 116 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2799 "syntactic.tab.c"
    break;

  case 24:
#line 117 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2805 "syntactic.tab.c"
    break;

  case 25:
#line 120 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2811 "syntactic.tab.c"
    break;

  case 26:
#line 121 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2817 "syntactic.tab.c"
    break;

  case 27:
#line 122 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2823 "syntactic.tab.c"
    break;

  case 28:
#line 123 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2829 "syntactic.tab.c"
    break;

  case 29:
#line 126 "syntactic.y"
                                                                             {(yyval.tnode) = TernaryNode(FOR1, (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2835 "syntactic.tab.c"
    break;

  case 30:
#line 127 "syntactic.y"
                                                                             {(yyval.tnode) = QuaternaryNode(FOR2, (yyvsp[-5].tnode), (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2841 "syntactic.tab.c"
    break;

  case 31:
#line 128 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FORALL, (yyvsp[-3].tnode), (yyvsp[0].tnode));  hideScope(); curr_level -= 1;}
#line 2847 "syntactic.tab.c"
    break;

  case 32:
#line 129 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FORALL, nullLeaf(), (yyvsp[0].tnode)); yyerrok;  hideScope(); curr_level -= 1;}
#line 2853 "syntactic.tab.c"
    break;

  case 33:
#line 130 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FOR, nullLeaf(), (yyvsp[0].tnode)); yyerrok;  hideScope(); curr_level -= 1;}
#line 2859 "syntactic.tab.c"
    break;

  case 34:
#line 134 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2865 "syntactic.tab.c"
    break;

  case 35:
#line 135 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2871 "syntactic.tab.c"
    break;

  case 36:
#line 136 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2877 "syntactic.tab.c"
    break;

  case 37:
#line 137 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2883 "syntactic.tab.c"
    break;

  case 38:
#line 141 "syntactic.y"
                                                                              {(yyval.tnode) = BinaryNode(IF, (yyvsp[-2].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1; }
#line 2889 "syntactic.tab.c"
    break;

  case 39:
#line 143 "syntactic.y"
                        {hideScope(); curr_level -= 1;}
#line 2895 "syntactic.tab.c"
    break;

  case 40:
#line 143 "syntactic.y"
                                                                                                    {(yyval.tnode) = TernaryNode(IF_ELSE, (yyvsp[-6].tnode), (yyvsp[-4].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2901 "syntactic.tab.c"
    break;

  case 41:
#line 146 "syntactic.y"
                      {curr_level += 1; pushScope(newScope(curr_scope->name, curr_level));}
#line 2907 "syntactic.tab.c"
    break;

  case 42:
#line 149 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2913 "syntactic.tab.c"
    break;

  case 43:
#line 150 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2919 "syntactic.tab.c"
    break;

  case 44:
#line 153 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(RETURN, (yyvsp[0].tnode));}
#line 2925 "syntactic.tab.c"
    break;

  case 45:
#line 156 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2931 "syntactic.tab.c"
    break;

  case 46:
#line 157 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2937 "syntactic.tab.c"
    break;

  case 47:
#line 158 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2943 "syntactic.tab.c"
    break;

  case 48:
#line 161 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2949 "syntactic.tab.c"
    break;

  case 49:
#line 162 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2955 "syntactic.tab.c"
    break;

  case 50:
#line 163 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2961 "syntactic.tab.c"
    break;

  case 51:
#line 164 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2967 "syntactic.tab.c"
    break;

  case 52:
#line 167 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(ASSIGN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2973 "syntactic.tab.c"
    break;

  case 53:
#line 170 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(findDecl((yyvsp[0].sval)));}
#line 2979 "syntactic.tab.c"
    break;

  case 54:
#line 173 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(READ, (yyvsp[-1].tnode));}
#line 2985 "syntactic.tab.c"
    break;

  case 55:
#line 176 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITE, (yyvsp[-1].tnode));}
#line 2991 "syntactic.tab.c"
    break;

  case 56:
#line 177 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITELN, (yyvsp[-1].tnode));}
#line 2997 "syntactic.tab.c"
    break;

  case 57:
#line 180 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3003 "syntactic.tab.c"
    break;

  case 58:
#line 181 "syntactic.y"
                                                                {(yyval.tnode) = charLeaf((yyvsp[0].sval));}
#line 3009 "syntactic.tab.c"
    break;

  case 59:
#line 182 "syntactic.y"
                                                                {(yyval.tnode) = stringLeaf((yyvsp[0].sval));}
#line 3015 "syntactic.tab.c"
    break;

  case 60:
#line 185 "syntactic.y"
                                                                  {(yyval.tnode) = typeCheck(IN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3021 "syntactic.tab.c"
    break;

  case 61:
#line 186 "syntactic.y"
                                                                  {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3027 "syntactic.tab.c"
    break;

  case 62:
#line 189 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(CONJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3033 "syntactic.tab.c"
    break;

  case 63:
#line 190 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3039 "syntactic.tab.c"
    break;

  case 64:
#line 193 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(DISJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3045 "syntactic.tab.c"
    break;

  case 65:
#line 194 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3051 "syntactic.tab.c"
    break;

  case 66:
#line 197 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(COMP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3057 "syntactic.tab.c"
    break;

  case 67:
#line 198 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3063 "syntactic.tab.c"
    break;

  case 68:
#line 201 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(RELOP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3069 "syntactic.tab.c"
    break;

  case 69:
#line 202 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3075 "syntactic.tab.c"
    break;

  case 70:
#line 205 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(ARTOP1, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3081 "syntactic.tab.c"
    break;

  case 71:
#line 206 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3087 "syntactic.tab.c"
    break;

  case 72:
#line 209 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(ARTOP2, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3093 "syntactic.tab.c"
    break;

  case 73:
#line 210 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3099 "syntactic.tab.c"
    break;

  case 74:
#line 213 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(NEG, (yyvsp[0].tnode), NULL);}
#line 3105 "syntactic.tab.c"
    break;

  case 75:
#line 214 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3111 "syntactic.tab.c"
    break;

  case 76:
#line 217 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(ARTOP1, (yyvsp[0].tnode)); (yyval.tnode)->sem_type = (yyvsp[0].tnode)->sem_type; (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3117 "syntactic.tab.c"
    break;

  case 77:
#line 218 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3123 "syntactic.tab.c"
    break;

  case 78:
#line 221 "syntactic.y"
                                                                 {(yyval.tnode) = idLeaf(findDecl((yyvsp[0].sval)));}
#line 3129 "syntactic.tab.c"
    break;

  case 79:
#line 222 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 3135 "syntactic.tab.c"
    break;

  case 80:
#line 223 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3141 "syntactic.tab.c"
    break;

  case 81:
#line 224 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3147 "syntactic.tab.c"
    break;

  case 82:
#line 225 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(IS_SET, (yyvsp[-1].tnode), NULL);}
#line 3153 "syntactic.tab.c"
    break;

  case 83:
#line 226 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(EXISTS, (yyvsp[-1].tnode), NULL);}
#line 3159 "syntactic.tab.c"
    break;

  case 84:
#line 227 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(SETOP, (yyvsp[-1].tnode), NULL); (yyval.tnode)->op_specifier = (yyvsp[-3].ival);}
#line 3165 "syntactic.tab.c"
    break;

  case 85:
#line 230 "syntactic.y"
                                                                {(yyval.tnode) = intLeaf((yyvsp[0].ival));}
#line 3171 "syntactic.tab.c"
    break;

  case 86:
#line 231 "syntactic.y"
                                                                {(yyval.tnode) = floatLeaf((yyvsp[0].fval));}
#line 3177 "syntactic.tab.c"
    break;

  case 87:
#line 232 "syntactic.y"
                                                                {(yyval.tnode) = setLeaf();}
#line 3183 "syntactic.tab.c"
    break;

  case 88:
#line 235 "syntactic.y"
                    {aux = (yyvsp[0].tnode)->ref; n_params = 0;}
#line 3189 "syntactic.tab.c"
    break;

  case 89:
#line 235 "syntactic.y"
                                                                    {(yyval.tnode) = BinaryNode(CALL, (yyvsp[-4].tnode), (yyvsp[-1].tnode)); (yyval.tnode)->sem_type = (yyvsp[-4].tnode)->sem_type;}
#line 3195 "syntactic.tab.c"
    break;

  case 90:
#line 240 "syntactic.y"
                                                                {(yyval.tnode) = checkParam(UNDEF, aux, NULL, NULL, n_params);}
#line 3201 "syntactic.tab.c"
    break;

  case 91:
#line 241 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3207 "syntactic.tab.c"
    break;

  case 92:
#line 244 "syntactic.y"
                                                                {(yyval.tnode) = checkParam(SEQ, aux, (yyvsp[-2].tnode), (yyvsp[0].tnode), n_params); n_params += 1; }
#line 3213 "syntactic.tab.c"
    break;

  case 93:
#line 245 "syntactic.y"
                                                                {(yyval.tnode) = checkParam(UNDEF, aux, NULL, (yyvsp[0].tnode), n_params); n_params += 1;}
#line 3219 "syntactic.tab.c"
    break;


#line 3223 "syntactic.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

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


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 250 "syntactic.y"

void yyerror(const char *s){
  printf("(line %d, column %d) [%s]\n", line, column, s);
}


int main(int argc, char *argv[]){
    FILE *fp;
    if (argc > 1){
      fp = fopen(argv[1],"r");
      if (fp == NULL) {printf("File not found.\n"); exit(-1);}
      yyin = fp;
    }
    else {printf("No input file.\n"); exit(-1);}
    initScopesList();
    yyparse();
    bindLevel(root, 0, 0);
    printTree(root);
    showTables(global_scope);
    init();
    tac_code = fopen("tac_code.txt", "w");
    fprintf(tac_code, ".code\n");
    code_gen(root);

    fclose(yyin);
    yylex_destroy();
    freeTables(global_scope);
    freeTree(root);

    return 0;
}
