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
#include "../include/semantic.h"
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
    CHAR = 281,
    STRING = 282,
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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4449

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  401

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
       0,    67,    67,    70,    71,    74,    75,    78,    79,    83,
      84,    87,    90,    95,    90,   101,   102,   103,   106,   107,
     110,   114,   115,   116,   117,   120,   121,   122,   123,   126,
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
  "INTEGER", "FLOAT", "CHAR", "STRING", "EMPTY", "THEN", "';'", "','",
  "'{'", "'}'", "'('", "')'", "'='", "$accept", "begin", "program",
  "declaration", "varDecl", "varList", "new_id", "funcDecl", "$@1", "$@2",
  "arguments", "argsList", "arg", "funcBody", "stmt", "iterStmt", "body",
  "condStmt", "$@3", "prepareScope", "cond", "returnStmt", "exprStmt",
  "expression", "assign", "var", "inExpr", "outExpr", "output",
  "simpleExpr", "conjExpr", "disjExpr", "negExpr", "compExpr", "relExpr",
  "artExpr1", "artExpr2", "minusFactor", "factor", "constant", "call",
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

#define YYPACT_NINF (-300)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,    51,   178,  -300,    16,   305,   340,   450,   467,   174,
     179,   264,    -4,   468,    58,    12,    73,   280,   371,    43,
      74,    94,    30,    77,   102,   130,   365,   107,   159,  1395,
     373,  2645,  2679,   193,   967,   490,   209,   224,   691,   233,
     238,   282,  4141,   301,   307,   330,  4229,  4235,  4253,  2713,
     485,  4161,  2747,  2781,  2815,  2849,  2883,  2917,  2951,   357,
     364,   152,   377,   402,    45,   157,   125,   571,   123,  1061,
    1363,  4259,  4277,  4283,  4301,  4307,  4161,   347,  4325,   880,
    2985,   768,  3015,    97,  1524,  4161,   617,   452,    75,    75,
      17,  3049,  4141,   425,  4141,  4141,  4141,   730,   730,   730,
     730,    62,   434,   440,  3083,    65,  1755,   444,    76,   454,
     101,   456,   458,   461,   466,   469,   476,   480,  4331,    79,
    4121,   335,   676,   733,  1651,  4419,  4349,  4355,  4373,  3113,
    3143,  1395,  1852,  1897,  1931,  1965,  2985,  4021,  2985,  2985,
    4379,  4397,   457,   487,   489,    19,   488,   400,  3173,  3207,
    3237,  2985,   494,  3237,  3237,  4403,  4181,  1999,  2985,  3267,
    3237,  2985,  3301,  3335,    24,  3237,  3369,  3237,  3403,  3437,
     106,  1690,   491,  4194,   645,   506,   513,  4161,   245,   266,
     914,  4161,   347,   142,   149,   197,     9,    38,   495,  1032,
    1038,  1190,  1476,  1516,   541,   516,   518,   519,   522,   339,
     523,   526,   135,  3807,   536,   533,   391,   534,   549,   544,
     550,   552,  4161,   347,   556,   558,  4161,  2033,   138,   209,
     560,  3833,   565,  2067,  2101,  2135,  2169,  2203,   570,  4041,
    4061,   578,   575,  4207,   607,   576,   579,  4181,   447,   725,
     989,  4161,   347,   268,    61,   313,   114,  1085,  1304,  1094,
    1231,  1281,  1338,  1435,  4181,  1395,  3471,  3505,  3539,  3573,
     174,   501,  4161,  1616,  1524,  4161,   353,   187,   583,  4161,
    4161,   829,   829,   829,   829,   452,    75,    75,  4161,  3859,
    4161,  1524,  4161,   188,   584,   199,  2237,   174,   512,  2985,
    3885,  2271,   173,  2305,  4081,  4161,  1497,  1524,  4161,   520,
     216,   586,  4181,  4181,   934,   934,   934,   934,   302,  3607,
      -4,  3641,   240,   592,   247,  3947,  4121,   374,   445,   351,
    1133,  3952,  3970,   598,   599,   602,   253,   291,   604,   314,
     605,  4121,    -4,  2339,  3083,  1157,  1755,   610,   324,   332,
     611,   362,  1611,  4121,   636,   655,  1644,  1571,  1653,  1723,
    3675,    73,  3976,  3994,  3999,   621,   622,   623,   624,   627,
     633,   640,   643,    73,  2373,  2985,  4101,  2985,  2985,  1790,
    1815,  3913,   646,   651,  4017,   649,   656,  3207,  3083,  2985,
     658,  3083,  3083,  3918,  1395,  1395,  2985,  2407,  3083,  2985,
    2441,  2475,  3709,  3743,  3083,  2509,  3083,  3777,  2543,  2577,
    2611
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -300,  -300,  -300,  -300,    -2,  -160,   682,     6,  -238,    78,
    -299,  -300,   677,  -128,   -30,   -92,    46,   -69,   326,  -120,
     498,   -58,   -36,   140,   -75,   141,   -74,   -73,   -82,  1562,
    1471,  1424,   407,  1301,  1194,  1056,   949,   790,   300,   545,
     683,  -173,  -295,  -300
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,   132,    10,    11,   133,    12,    24,
      16,    22,    23,    31,   134,    55,   135,    56,   158,   104,
      80,    57,    58,    59,    60,    61,    62,    63,   116,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    93,   146,   147
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    54,    82,   148,   198,   200,   201,   117,     7,   268,
     261,   351,   224,    19,   271,    20,   150,     8,   153,   154,
      -4,   355,   310,    -4,   -67,     9,   268,   -67,   -67,    52,
      15,   160,   216,   363,   254,   225,   362,    53,   165,   254,
     284,   167,   272,   -69,   -67,   106,   226,    21,   372,   332,
     -93,     3,   118,   -69,   -93,   -92,   -69,   -69,   288,   -92,
      94,    27,   198,   200,   201,    28,   -46,    17,   227,   301,
     137,   -46,   -46,   -69,   -46,   -51,   -63,   216,    25,   303,
     -63,   -46,   -46,    26,   111,   -46,   -46,   -46,   -46,   -46,
     -46,   216,   -63,   -46,    94,   -46,   -63,   128,   107,   -46,
     136,   113,   114,   172,   173,   -13,   174,   259,   -19,   -52,
      20,   139,   -19,   175,   176,   260,   216,   177,    54,   304,
     258,   178,   179,   258,   258,   180,   -15,   309,    97,   -67,
     258,   181,   -67,   -67,    29,   258,   141,   258,   -67,   286,
     -63,   -67,   -67,    96,   -63,   -67,    52,   287,   256,   -67,
     216,   256,   256,   -67,    53,   -63,   257,   -61,   256,   257,
     257,   269,   -17,   256,   -63,   256,   257,   270,   -63,   334,
     -51,   257,   -61,   257,   337,    77,    95,   -61,    -2,   172,
     173,     4,   174,    77,   -63,   291,   -88,   -61,    92,   175,
     176,   -16,   182,   177,   324,   325,   159,   178,   179,   162,
     163,   180,   216,   216,   -11,   -11,   166,   181,   -12,    13,
      14,   168,   -65,   169,   -60,   -65,   -65,   182,   269,   103,
     199,   204,   315,   330,   182,   213,   182,    76,   112,   115,
     115,   216,   -65,    77,   -60,    77,    77,    77,    77,    77,
      77,    77,   224,    79,   228,   378,   231,   381,   382,   -85,
     -85,   342,   -85,   -85,   336,   216,   392,   393,    81,   388,
     -85,   242,   216,   -85,   -85,   225,   394,    83,   216,   396,
     -86,   -86,    84,   -86,   -86,   352,   226,   152,   199,    54,
     -85,   -86,   354,   -61,   -86,   -86,   224,   302,   -52,   224,
     224,   198,   200,   201,   -10,   -10,   224,   242,   227,   -61,
     366,   -86,   224,   -61,   224,    -3,   216,    52,    -3,   225,
     -11,   -11,   225,   225,   182,    53,    85,   -60,   182,   225,
     226,   302,   182,   226,   226,   225,   359,   225,   -65,   216,
     226,   -65,   -65,   -60,    78,    87,   226,   -60,   226,   216,
      -5,    88,   227,    -5,   -65,   227,   227,   216,   -65,   361,
     -60,   191,   227,   182,    95,   272,   -68,   182,   227,   368,
     227,   228,    54,    54,    89,   -60,   -68,   369,   -66,   -68,
     -68,   -66,   -66,   -88,   242,   278,   191,   216,   242,   191,
     364,   -88,   182,   191,   109,   191,   -68,    91,   -66,   -62,
      52,    52,   270,   -62,   -48,   242,   -20,   371,    53,    53,
     -20,    -9,    -9,   182,   -18,   213,   182,   -49,   -18,   -62,
     182,   182,   182,   182,   182,   182,   323,   115,   115,   182,
     251,   182,   213,   182,   387,   -53,   -78,   390,   391,   373,
     204,   156,   -50,   182,   395,   -91,   182,   191,   213,   182,
     399,   376,   400,   242,   242,   242,   242,   242,   242,    86,
      -6,   -85,   -85,    -6,   -85,   -85,   251,   242,   185,   120,
     -64,   111,   -85,   -64,   -64,   -85,   -85,    -8,    -7,   129,
      -8,    -7,   242,   263,   228,   130,   231,   191,   -85,   138,
     -64,   191,   -85,   185,   242,   -14,   185,   -54,   -14,   140,
     185,   -53,   185,   142,   -78,   -78,   -58,   -78,   -78,   -71,
     -71,   -59,   273,   123,   -57,   -78,   380,   199,   -78,   -78,
     -71,   143,   191,   -71,   -71,   144,   191,   -55,   228,   -56,
     -78,   228,   228,   155,   -53,   262,   -53,   245,   228,   161,
     -71,   311,    14,   296,   228,   -66,   228,   251,   -66,   -66,
     264,   191,   333,    14,   185,   -78,   -78,   265,   -78,   -78,
     275,   -66,   276,   277,   251,   -66,   -78,   -48,   -49,   -78,
     -78,   -50,   191,   245,   313,   191,   279,   280,   281,   191,
     191,   191,   191,   191,   191,   -53,   -78,   -53,   191,   -85,
     191,   328,   191,   282,   266,   -86,   -65,   -87,   185,   -65,
     -65,   -80,   191,   -81,   290,   191,   192,   340,   191,   292,
     293,   -65,   251,   251,   251,   251,   251,   251,   294,   295,
     297,   -78,   -78,   298,   -78,   -78,   251,   316,   331,   185,
     343,   192,   -78,   185,   192,   -78,   -78,   353,   192,   214,
     192,   251,   -66,   356,   357,   -66,   -66,   358,   -78,   360,
     -79,   -53,   -78,   251,   299,   367,   370,   -66,   185,   -78,
     -78,   -62,   -78,   -78,   303,   -62,   374,   -54,   -55,   -56,
     -78,   245,   -84,   -78,   -78,   252,   191,   -62,   -82,   185,
     -64,   -62,   185,   -64,   -64,   -83,   185,   318,   375,   -53,
     -78,   383,   192,   384,   -89,   185,   -64,   185,   385,   185,
     -64,   -62,    32,   389,    96,   -62,    18,    33,    34,   185,
      35,   252,   185,   386,    30,   185,   -62,    40,    41,   245,
     345,    42,    43,    44,    45,    46,    47,   289,   192,    48,
       0,    49,   192,   245,     0,    51,   192,     0,     0,   -86,
     -86,     0,   -86,   -86,   193,     0,    33,    34,   245,   171,
     -86,     0,     0,   -86,   -86,     0,    40,    41,   -64,     0,
     245,   -64,   -64,     0,    46,    47,   -86,   192,    48,   193,
     -86,   192,   193,   -64,    51,     0,   193,   215,   193,   105,
       0,     0,     0,   185,    33,    34,     0,    35,   252,     0,
       0,     0,   252,     0,    40,    41,   192,     0,    42,    43,
      44,    45,    46,    47,     0,     0,    48,     0,   203,   252,
       0,     0,    51,   253,     0,     0,     0,   192,     0,   214,
     192,     0,     0,     0,   192,   192,   192,   192,   192,   192,
     193,     0,     0,   192,     0,   192,   214,   192,     0,     0,
       0,     0,     0,     0,     0,   172,   173,   192,   174,   253,
     192,   190,   214,   192,     0,   175,   176,   252,   252,   252,
     252,   252,   252,   178,   179,     0,   193,   180,     0,     0,
     193,   252,     0,   181,   193,     0,   190,     0,     0,   190,
       0,     0,     0,   190,     0,   190,   252,     0,     0,     0,
       0,   102,     0,     0,     0,     0,   172,   173,   252,   194,
     127,     0,     0,     0,     0,   193,   175,   176,     0,   193,
     177,   195,   196,   197,   178,   179,     0,     0,   180,     0,
     250,   192,     0,     0,   181,     0,   253,     0,   -87,   -87,
     253,   -87,   -87,     0,   193,     0,     0,   190,     0,   -87,
       0,     0,   -87,   -87,     0,     0,     0,   253,     0,     0,
     232,   233,     0,   234,     0,   193,   250,   215,   193,   -87,
     235,   236,   193,   193,   193,   193,   193,   193,   238,   239,
       0,   193,   240,   193,   215,   193,     0,   190,   241,     0,
       0,   190,     0,    33,     0,   193,   171,     0,   193,     0,
     215,   193,     0,    40,    41,   253,   253,   253,   253,   253,
     253,    46,    47,   -87,   -87,    48,   -87,   -87,     0,   253,
     189,    51,   190,     0,   -87,     0,   190,   -87,   -87,     0,
       0,     0,     0,     0,   253,     0,     0,     0,     0,     0,
     -87,     0,     0,     0,   -87,   189,   253,   250,   189,     0,
       0,   190,   189,     0,   189,     0,   -73,   -73,     0,   -73,
     274,     0,   -75,   -75,   250,   -75,   -75,   -73,   126,   193,
     -73,   -73,   190,   -75,     0,   190,   -75,   -75,     0,   190,
     190,   190,   190,   190,   322,    98,   -69,   -73,   190,   249,
     190,     0,   190,   -75,     0,     0,   -69,     0,     0,   -69,
     -69,     0,   190,     0,     0,   190,   189,     0,   190,   305,
     -69,   -69,   250,   250,   250,   250,   250,   349,   -73,   -73,
     -69,   -73,   307,   -69,   -69,   249,   250,   188,     0,   -73,
       0,     0,   -73,   -73,     0,     0,   -69,     0,     0,     0,
     -69,   250,     0,     0,     0,   -73,   189,     0,     0,   -73,
     189,     0,   188,   250,     0,   188,     0,   -70,   -70,   188,
     273,   188,     0,     0,     0,     0,     0,     0,   -70,     0,
       0,   -70,   -70,     0,   125,     0,   190,     0,   -46,     0,
       0,   189,     0,   -46,   -46,   189,   -46,     0,   -70,     0,
       0,     0,     0,   -46,   -46,     0,   248,   -46,   -46,   -46,
     -46,   -46,   -46,     0,     0,   -46,   249,   -46,     0,     0,
     189,   -46,   365,   188,   -77,   -77,     0,   -77,   -77,     0,
       0,     0,     0,   249,     0,   -77,     0,     0,   -77,   -77,
       0,   189,   248,     0,   189,     0,     0,     0,   189,   189,
     189,   189,   321,     0,     0,   -77,     0,   189,     0,   189,
       0,   189,     0,   188,     0,   -75,   -75,   188,   -75,   -75,
       0,   189,     0,     0,   189,   187,   -75,   189,     0,   -75,
     -75,   249,   249,   249,   249,   348,     0,     0,     0,     0,
       0,     0,   -75,     0,     0,   249,   -75,     0,   188,     0,
     187,     0,   188,   187,     0,     0,     0,   187,     0,   187,
     249,     0,     0,     0,     0,   -77,   -77,     0,   -77,   -77,
       0,   124,   249,   248,     0,     0,   -77,   188,     0,   -77,
     -77,     0,     0,     0,     0,     0,     0,     0,   -71,   -71,
     248,   306,   -77,     0,   247,   189,   -77,     0,   188,   -71,
       0,   188,   -71,   -71,     0,   188,   188,   188,   320,     0,
       0,   187,     0,     0,   188,   -71,   188,     0,   188,   -71,
       0,     0,   -80,   -80,     0,   -80,   -80,     0,   188,     0,
     247,   188,   186,   -80,   188,     0,   -80,   -80,   248,   248,
     248,   347,     0,     0,     0,     0,     0,   -71,   -71,   -80,
      99,   187,   248,   -80,     0,   187,     0,   186,   -71,     0,
     186,   -71,   -71,     0,   186,     0,   186,   248,     0,     0,
       0,     0,     0,   -71,     0,     0,   -21,     0,   -21,   248,
       0,   -21,   -21,     0,   -21,   -21,   187,   -21,   -21,   -21,
     187,   -21,   -21,     0,     0,   -21,   -21,   -21,   -21,   -21,
     -21,   246,   188,   -21,     0,   -21,     0,     0,   -21,   -21,
       0,   247,     0,     0,     0,   187,     0,     0,   186,   -81,
     -81,     0,   -81,   -81,     0,     0,     0,     0,   247,     0,
     -81,     0,     0,   -81,   -81,     0,   187,   246,     0,   187,
       0,     0,     0,   187,   187,   319,   -81,     0,     0,     0,
     -81,     0,   187,     0,   187,   184,   187,     0,   186,     0,
     -80,   -80,   186,   -80,   -80,     0,   187,     0,     0,   187,
       0,   -80,   187,     0,   -80,   -80,   247,   247,   346,     0,
     184,   -76,   -76,   184,   -76,   -76,     0,   184,     0,   184,
     247,   -80,   -76,   186,     0,   -76,   -76,   186,     0,   122,
     -81,   -81,   183,   -81,   -81,   247,     0,     0,   -76,     0,
     205,   -81,   -76,   206,   -81,   -81,     0,   247,   246,     0,
     207,   208,   186,     0,   244,     0,     0,   183,   209,   210,
     183,   -81,   211,     0,   183,   246,   183,     0,   212,     0,
     187,   184,     0,   186,     0,   121,   186,     0,     0,     0,
     186,   186,     0,     0,     0,   -70,   -70,     0,   306,   186,
     244,   186,     0,   186,     0,     0,   -70,     0,     0,   -70,
     -70,   243,     0,   186,     0,     0,   186,     0,     0,   186,
       0,     0,   -70,   246,   246,   184,   -70,     0,   183,     0,
       0,     0,     0,    90,     0,   -79,   -79,   246,   -79,   -79,
     -76,   -76,     0,   -76,   -76,     0,   -79,   243,     0,   -79,
     -79,   -76,   246,     0,   -76,   -76,   184,     0,   101,     0,
     184,   202,   -79,     0,   246,   108,   -79,   110,   305,   -68,
       0,   -76,   183,     0,   119,    98,   -68,   -72,   -72,   -68,
     -72,   307,   -68,   -68,     0,   184,   -68,   186,   -72,   -68,
     -68,   -72,   -72,     0,     0,   -68,     0,     0,   244,   -68,
       0,   -68,   145,   183,   -72,     0,   184,   285,   -72,   184,
       0,     0,     0,   317,   -78,   -78,     0,   -78,   -78,   202,
       0,     0,   184,     0,   184,   -78,   184,     0,   -78,   -78,
       0,     0,   183,     0,     0,     0,   184,     0,   164,   184,
     -78,     0,   184,     0,   -53,   308,   344,   -74,   -74,     0,
     -74,   -74,     0,   183,     0,     0,   183,     0,   -74,     0,
     244,   -74,   -74,   267,     0,     0,     0,     0,     0,   183,
       0,   183,     0,   183,   -74,   244,   229,     0,   -74,     0,
       0,    33,    34,   183,    35,     0,   183,   244,     0,   183,
       0,    40,    41,     0,   283,    42,    43,    44,    45,    46,
      47,     0,     0,    48,     0,   230,     0,   243,     0,    51,
     184,     0,     0,     0,   -84,   -84,     0,   -84,   -84,     0,
       0,     0,   243,   300,     0,   -84,     0,     0,   -84,   -84,
       0,     0,     0,     0,   243,     0,     0,     0,     0,   -82,
     -82,   -84,   -82,   -82,   312,   -84,     0,   314,     0,     0,
     -82,     0,     0,   -82,   -82,     0,     0,   183,     0,     0,
     326,     0,   327,     0,   329,     0,   -82,     0,     0,     0,
     -82,     0,     0,   -36,   338,   -36,     0,   339,   -36,   -36,
     341,   -36,   -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,   145,     0,
     -36,     0,   -36,     0,     0,   -36,   -36,     0,     0,     0,
       0,     0,     0,   145,     0,     0,     0,     0,   -37,     0,
     -37,     0,     0,   -37,   -37,   145,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -37,     0,   -37,   202,     0,
     -37,   -37,   -35,     0,   -35,     0,     0,   -35,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
       0,   -35,     0,     0,   -35,   -35,   -38,     0,   -38,     0,
       0,   -38,   -38,     0,   -38,   -38,   149,   -38,   -38,   -38,
       0,   -38,   -38,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,     0,     0,   -38,     0,   -38,     0,     0,   -38,   -38,
     -34,     0,   -34,     0,     0,   -34,   -34,     0,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,   -34,     0,   -34,
       0,     0,   -34,   -34,   -46,     0,   -46,     0,     0,   -46,
     -46,     0,   -46,   -46,   -46,   -46,   -46,   -46,     0,   -46,
     -46,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,     0,
       0,   -46,     0,   -46,     0,     0,   -46,   -46,   -47,     0,
     -47,     0,     0,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   -47,     0,   -47,   -47,     0,     0,   -47,   -47,   -47,
     -47,   -47,   -47,     0,     0,   -47,     0,   -47,     0,     0,
     -47,   -47,   -27,     0,   -27,     0,     0,   -27,   -27,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
       0,   -27,     0,     0,   -27,   -27,   -28,     0,   -28,     0,
       0,   -28,   -28,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,
     -28,     0,     0,   -28,     0,   -28,     0,     0,   -28,   -28,
     -26,     0,   -26,     0,     0,   -26,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,   -26,     0,   -26,
       0,     0,   -26,   -26,   -25,     0,   -25,     0,     0,   -25,
     -25,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,     0,   -25,     0,     0,   -25,   -25,    -8,     0,
      -8,     0,     0,    -8,    -8,     0,    -8,    -8,    -8,    -8,
      -8,    -8,     0,    -8,    -8,     0,     0,    -8,    -8,    -8,
      -8,    -8,    -8,     0,     0,    -8,     0,    -8,     0,     0,
      -8,    -8,   -44,     0,   -44,     0,     0,   -44,   -44,     0,
     -44,   -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,     0,
       0,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,   -44,
       0,   -44,     0,     0,   -44,   -44,   -45,     0,   -45,     0,
       0,   -45,   -45,     0,   -45,   -45,   -45,   -45,   -45,   -45,
       0,   -45,   -45,     0,     0,   -45,   -45,   -45,   -45,   -45,
     -45,     0,     0,   -45,     0,   -45,     0,     0,   -45,   -45,
      -7,     0,    -7,     0,     0,    -7,    -7,     0,    -7,    -7,
      -7,    -7,    -7,    -7,     0,    -7,    -7,     0,     0,    -7,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,    -7,
       0,     0,    -7,    -7,   -38,     0,   -38,     0,     0,   -38,
     -38,     0,   -38,   -38,   377,   -38,   -38,   -38,     0,   -38,
     -38,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,   -38,     0,   -38,     0,     0,   -38,   -38,   -33,     0,
     -33,     0,     0,   -33,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,   -33,     0,   -33,     0,     0,
     -33,   -33,   -32,     0,   -32,     0,     0,   -32,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
       0,   -32,     0,     0,   -32,   -32,   -31,     0,   -31,     0,
       0,   -31,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,   -31,     0,   -31,     0,     0,   -31,   -31,
     -29,     0,   -29,     0,     0,   -29,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,   -29,
       0,     0,   -29,   -29,   -14,     0,   -14,     0,     0,   -14,
     -14,     0,   -14,   -14,   -14,   -14,   -14,   -14,     0,   -14,
     -14,     0,     0,   -14,   -14,   -14,   -14,   -14,   -14,     0,
       0,   -14,     0,   -14,     0,     0,   -14,   -14,   -40,     0,
     -40,     0,     0,   -40,   -40,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,   -40,     0,     0,   -40,   -40,   -40,
     -40,   -40,   -40,     0,     0,   -40,     0,   -40,     0,     0,
     -40,   -40,   -30,     0,   -30,     0,     0,   -30,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,
       0,   -30,     0,     0,   -30,   -30,    32,     0,   170,     0,
       0,    33,    34,     0,    35,    36,     0,    37,    38,    39,
       0,    40,    41,     0,     0,    42,    43,    44,    45,    46,
      47,     0,     0,    48,     0,    49,     0,     0,    50,    51,
     -46,     0,   -46,     0,     0,   -46,   -46,     0,   -46,   -46,
       0,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,   -46,
     -46,   -46,   -46,   -46,   -46,     0,     0,   -46,     0,   -46,
       0,     0,   -46,   -46,   -47,     0,   -47,     0,     0,   -47,
     -47,     0,   -47,   -47,     0,   -47,   -47,   -47,     0,   -47,
     -47,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,
       0,   -47,     0,   -47,     0,     0,   -47,   -47,   -22,     0,
     -22,     0,     0,   -22,   -22,     0,   -22,   -22,     0,   -22,
     -22,   -22,     0,   -22,   -22,     0,     0,   -22,   -22,   -22,
     -22,   -22,   -22,     0,     0,   -22,     0,   -22,     0,     0,
     -22,   -22,   -23,     0,   -23,     0,     0,   -23,   -23,     0,
     -23,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,     0,
       0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,
       0,   -23,     0,     0,   -23,   -23,   -24,     0,   -24,     0,
       0,   -24,   -24,     0,   -24,   -24,     0,   -24,   -24,   -24,
       0,   -24,   -24,     0,     0,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,   -24,     0,   -24,     0,     0,   -24,   -24,
     -27,     0,   -27,     0,     0,   -27,   -27,     0,   -27,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,     0,   -27,
       0,     0,   -27,   -27,   -28,     0,   -28,     0,     0,   -28,
     -28,     0,   -28,   -28,     0,   -28,   -28,   -28,     0,   -28,
     -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,   -28,     0,   -28,     0,     0,   -28,   -28,   -26,     0,
     -26,     0,     0,   -26,   -26,     0,   -26,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,     0,     0,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,   -26,     0,   -26,     0,     0,
     -26,   -26,   -25,     0,   -25,     0,     0,   -25,   -25,     0,
     -25,   -25,     0,   -25,   -25,   -25,     0,   -25,   -25,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,
       0,   -25,     0,     0,   -25,   -25,   -41,     0,   -41,     0,
       0,   -41,   -41,     0,   -41,   -41,     0,   -41,   -41,   -41,
       0,   -41,   -41,     0,     0,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,   -41,     0,   -41,   -44,   -41,   -44,   -41,
       0,   -44,   -44,     0,   -44,   -44,     0,   -44,   -44,   -44,
       0,   -44,   -44,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,     0,     0,   -44,     0,   -44,     0,     0,   -44,   -44,
     -45,     0,   -45,     0,     0,   -45,   -45,     0,   -45,   -45,
       0,   -45,   -45,   -45,     0,   -45,   -45,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,     0,     0,   -45,     0,   -45,
       0,     0,   -45,   -45,   217,     0,   218,     0,     0,    33,
      34,     0,    35,   219,     0,   220,   221,   222,     0,    40,
      41,     0,     0,    42,    43,    44,    45,    46,    47,     0,
       0,    48,     0,   223,   -43,   131,   -43,    51,     0,   -43,
     -43,     0,   -43,   -43,     0,   -43,   -43,   -43,     0,   -43,
     -43,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,   -43,     0,   -43,   -42,   -43,   -42,   -43,     0,   -42,
     -42,     0,   -42,   -42,     0,   -42,   -42,   -42,     0,   -42,
     -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,   -42,     0,   -42,    32,   -42,   170,   -42,     0,    33,
      34,     0,    35,    36,     0,    37,    38,    39,     0,    40,
      41,     0,     0,    42,    43,    44,    45,    46,    47,     0,
       0,    48,     0,    49,     0,     0,   157,    51,   -39,     0,
     -39,     0,     0,   -39,   -39,     0,   -39,   -39,     0,   -39,
     -39,   -39,     0,   -39,   -39,     0,     0,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,   -39,     0,   -39,    32,   -39,
     170,   -39,     0,    33,    34,     0,    35,    36,     0,    37,
      38,    39,     0,    40,    41,     0,     0,    42,    43,    44,
      45,    46,    47,     0,     0,    48,     0,    49,   -33,   255,
     -33,    51,     0,   -33,   -33,     0,   -33,   -33,     0,   -33,
     -33,   -33,     0,   -33,   -33,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,   -33,     0,   -33,     0,     0,
     -33,   -33,   -32,     0,   -32,     0,     0,   -32,   -32,     0,
     -32,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
       0,   -32,     0,     0,   -32,   -32,   -31,     0,   -31,     0,
       0,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,   -31,     0,   -31,     0,     0,   -31,   -31,
     -29,     0,   -29,     0,     0,   -29,   -29,     0,   -29,   -29,
       0,   -29,   -29,   -29,     0,   -29,   -29,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,   -29,
       0,     0,   -29,   -29,   -40,     0,   -40,     0,     0,   -40,
     -40,     0,   -40,   -40,     0,   -40,   -40,   -40,     0,   -40,
     -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,
       0,   -40,     0,   -40,     0,     0,   -40,   -40,   -30,     0,
     -30,     0,     0,   -30,   -30,     0,   -30,   -30,     0,   -30,
     -30,   -30,     0,   -30,   -30,     0,     0,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,   -30,     0,   -30,     0,     0,
     -30,   -30,   -36,     0,   -36,     0,     0,   -36,   -36,     0,
     -36,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,     0,
       0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,
       0,   -36,     0,     0,   -36,   -36,   -37,     0,   -37,     0,
       0,   -37,   -37,     0,   -37,   -37,     0,   -37,   -37,   -37,
       0,   -37,   -37,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,   -37,     0,   -37,     0,     0,   -37,   -37,
     -35,     0,   -35,     0,     0,   -35,   -35,     0,   -35,   -35,
       0,   -35,   -35,   -35,     0,   -35,   -35,     0,     0,   -35,
     -35,   -35,   -35,   -35,   -35,     0,     0,   -35,     0,   -35,
       0,     0,   -35,   -35,    -8,     0,    -8,     0,     0,    -8,
      -8,     0,    -8,    -8,     0,    -8,    -8,    -8,     0,    -8,
      -8,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,
       0,    -8,     0,    -8,     0,     0,    -8,    -8,    32,     0,
     170,     0,     0,    33,    34,     0,    35,    36,     0,    37,
      38,    39,     0,    40,    41,     0,     0,    42,    43,    44,
      45,    46,    47,     0,     0,    48,     0,    49,     0,     0,
     350,    51,    -7,     0,    -7,     0,     0,    -7,    -7,     0,
      -7,    -7,     0,    -7,    -7,    -7,     0,    -7,    -7,     0,
       0,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,
       0,    -7,     0,     0,    -7,    -7,   -34,     0,   -34,     0,
       0,   -34,   -34,     0,   -34,   -34,     0,   -34,   -34,   -34,
       0,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,     0,   -34,     0,     0,   -34,   -34,
      32,     0,   170,     0,     0,    33,    34,     0,    35,    36,
       0,    37,    38,    39,     0,    40,    41,     0,     0,    42,
      43,    44,    45,    46,    47,     0,     0,    48,     0,    49,
       0,     0,   397,    51,    32,     0,   170,     0,     0,    33,
      34,     0,    35,    36,     0,    37,    38,    39,     0,    40,
      41,     0,     0,    42,    43,    44,    45,    46,    47,     0,
       0,    48,     0,    49,     0,     0,   398,    51,   -14,     0,
     -14,     0,     0,   -14,   -14,     0,   -14,   -14,     0,   -14,
     -14,   -14,     0,   -14,   -14,     0,     0,   -14,   -14,   -14,
     -14,   -14,   -14,     0,     0,   -14,     0,   -14,   -47,     0,
     -14,   -14,     0,   -47,   -47,     0,   -47,     0,     0,     0,
       0,     0,     0,   -47,   -47,     0,     0,   -47,   -47,   -47,
     -47,   -47,   -47,     0,   217,   -47,     0,   -47,     0,    33,
      34,   -47,    35,     0,     0,     0,     0,     0,     0,    40,
      41,     0,     0,    42,    43,    44,    45,    46,    47,     0,
     -45,    48,     0,   223,     0,   -45,   -45,    51,   -45,     0,
       0,     0,     0,     0,     0,   -45,   -45,     0,     0,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   335,   -45,     0,   -45,
       0,    33,    34,   -45,    35,     0,     0,     0,     0,     0,
       0,    40,    41,     0,     0,    42,    43,    44,    45,    46,
      47,     0,     0,    48,     0,   203,     0,   -83,   -83,    51,
     -83,   -83,   -89,   -89,     0,   -89,   -89,     0,   -83,     0,
       0,   -83,   -83,   -89,     0,     0,   -89,   -89,     0,     0,
       0,     0,     0,     0,   -83,     0,     0,     0,   -83,   -89,
       0,   -79,   -79,   -89,   -79,   -79,   -72,   -72,     0,   -72,
     274,     0,   -79,     0,     0,   -79,   -79,   -72,     0,     0,
     -72,   -72,     0,     0,   -74,   -74,     0,   -74,   -74,     0,
     -84,   -84,   -79,   -84,   -84,   -74,     0,   -72,   -74,   -74,
       0,   -84,     0,     0,   -84,   -84,     0,     0,   -82,   -82,
       0,   -82,   -82,   -83,   -83,   -74,   -83,   -83,     0,   -82,
       0,   -84,   -82,   -82,   -83,     0,     0,   -83,   -83,     0,
       0,   -89,   -89,     0,   -89,   -89,     0,   172,   173,   -82,
     194,     0,   -89,     0,   -83,   -89,   -89,   175,   176,     0,
       0,   177,   195,   196,   197,   178,   179,   -46,   -46,   180,
     -46,     0,   -89,     0,     0,   181,   151,   -46,   -46,     0,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -47,   -47,   -46,
     -47,     0,     0,     0,     0,   -46,   -46,   -47,   -47,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,   -45,   -45,   -47,
     -45,     0,     0,     0,     0,   -47,   -47,   -45,   -45,     0,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   172,   173,   -45,
     194,     0,     0,     0,     0,   -45,   -45,   175,   176,     0,
       0,   177,   195,   196,   197,   178,   179,   232,   233,   180,
     234,     0,     0,     0,     0,   181,   379,   235,   236,     0,
       0,   237,     0,     0,     0,   238,   239,    33,    34,   240,
     171,     0,     0,     0,     0,   241,   -90,    40,    41,     0,
       0,    42,     0,     0,     0,    46,    47,   172,   173,    48,
     174,     0,     0,     0,     0,    51,     0,   175,   176,     0,
       0,   177,     0,     0,     0,   178,   179,   232,   233,   180,
     234,     0,     0,     0,     0,   181,     0,   235,   236,     0,
     172,   237,     0,   174,     0,   238,   239,     0,     0,   240,
     175,   176,     0,   232,     0,   241,   234,     0,   178,   179,
       0,     0,   180,   235,   236,     0,     0,     0,   181,     0,
       0,   238,   239,   -85,   -85,   240,   -85,   -85,     0,   -86,
     -86,   241,   -86,   -86,   -85,     0,     0,   -85,   -85,     0,
     -86,     0,     0,   -86,   -86,     0,     0,   -87,   -87,   -85,
     -87,   -87,     0,   -73,   -73,   -86,   -73,   100,   -87,     0,
       0,   -87,   -87,     0,   -73,     0,     0,   -73,   -73,     0,
       0,   -75,   -75,   -87,   -75,   -75,     0,   -77,   -77,   -73,
     -77,   -77,   -75,     0,     0,   -75,   -75,     0,   -77,     0,
       0,   -77,   -77,     0,     0,   -80,   -80,   -75,   -80,   -80,
       0,   -81,   -81,   -77,   -81,   -81,   -80,     0,     0,   -80,
     -80,     0,   -81,     0,     0,   -81,   -81,     0,     0,   -76,
     -76,   -80,   -76,   -76,     0,   -79,   -79,   -81,   -79,   -79,
     -76,     0,     0,   -76,   -76,     0,   -79,     0,     0,   -79,
     -79,     0,     0,   -72,   -72,   -76,   -72,   100,     0,   -74,
     -74,   -79,   -74,   -74,   -72,     0,     0,   -72,   -72,     0,
     -74,     0,     0,   -74,   -74,     0,     0,   -84,   -84,   -72,
     -84,   -84,     0,   -82,   -82,   -74,   -82,   -82,   -84,     0,
       0,   -84,   -84,     0,   -82,     0,     0,   -82,   -82,     0,
       0,   -83,   -83,   -84,   -83,   -83,     0,   -89,   -89,   -82,
     -89,   -89,   -83,     0,     0,   -83,   -83,     0,   -89,     0,
       0,   -89,   -89,   -70,   -70,     0,    99,   -83,     0,     0,
       0,     0,     0,   -89,   -70,     0,     0,   -70,   -70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -70
};

static const yytype_int16 yycheck[] =
{
       2,    31,    38,   131,    79,    79,    79,    89,     2,   182,
     170,   310,   104,     1,     5,     3,   136,     1,   138,   139,
       0,   316,   260,     3,    15,     9,   199,    18,    19,    31,
      34,   151,    15,   332,    15,   104,   331,    31,   158,    15,
     213,   161,     4,     5,    35,    81,   104,    35,   343,   287,
      31,     0,    35,    15,    35,    31,    18,    19,   218,    35,
      15,    31,   137,   137,   137,    35,     1,     9,   104,   242,
     106,     6,     7,    35,     9,    30,    15,    15,    35,    18,
      19,    16,    17,     9,     9,    20,    21,    22,    23,    24,
      25,    15,    31,    28,    15,    30,    35,    35,     1,    34,
      35,    26,    27,     6,     7,    32,     9,     1,    31,    30,
       3,    35,    35,    16,    17,     9,    15,    20,   148,     5,
     150,    24,    25,   153,   154,    28,    32,   255,     5,    15,
     160,    34,    18,    19,    32,   165,    35,   167,    15,     1,
      15,    18,    19,    18,    19,    31,   148,     9,   150,    35,
      15,   153,   154,    30,   148,    30,   150,    15,   160,   153,
     154,    19,    32,   165,    15,   167,   160,    18,    19,   289,
      35,   165,    15,   167,     1,    34,    19,    35,     0,     6,
       7,     3,     9,    42,    35,   221,    34,    30,    36,    16,
      17,    32,    51,    20,   276,   277,   150,    24,    25,   153,
     154,    28,    15,    15,    30,    31,   160,    34,    34,    30,
      31,   165,    15,   167,    15,    18,    19,    76,    19,    79,
      79,    81,    35,    35,    83,    84,    85,    34,    87,    88,
      89,    15,    35,    92,    35,    94,    95,    96,    97,    98,
      99,   100,   334,    34,   104,   365,   106,   367,   368,     4,
       5,    35,     7,     8,   290,    15,   384,   385,    34,   379,
      15,   120,    15,    18,    19,   334,   386,    34,    15,   389,
       4,     5,    34,     7,     8,    35,   334,   137,   137,   309,
      35,    15,    35,    15,    18,    19,   378,    19,    35,   381,
     382,   366,   366,   366,    30,    31,   388,   156,   334,    31,
     336,    35,   394,    35,   396,     0,    15,   309,     3,   378,
      30,    31,   381,   382,   173,   309,    34,    15,   177,   388,
     378,    19,   181,   381,   382,   394,    35,   396,    15,    15,
     388,    18,    19,    31,    34,    34,   394,    35,   396,    15,
       0,    34,   378,     3,    31,   381,   382,    15,    35,    35,
      15,    51,   388,   212,    19,     4,     5,   216,   394,    35,
     396,   221,   392,   393,    34,    30,    15,    35,    15,    18,
      19,    18,    19,    34,   233,    36,    76,    15,   237,    79,
     334,    34,   241,    83,    84,    85,    35,    30,    35,    15,
     392,   393,    18,    19,    30,   254,    31,    35,   392,   393,
      35,    30,    31,   262,    31,   264,   265,    30,    35,    35,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     120,   280,   281,   282,   378,    34,    35,   381,   382,   351,
     290,    31,    30,   292,   388,    35,   295,   137,   297,   298,
     394,   363,   396,   302,   303,   304,   305,   306,   307,    42,
       0,     4,     5,     3,     7,     8,   156,   316,    51,    34,
      15,     9,    15,    18,    19,    18,    19,     0,     0,    35,
       3,     3,   331,   173,   334,    35,   336,   177,    31,    35,
      35,   181,    35,    76,   343,     0,    79,    30,     3,    35,
      83,    35,    85,    35,     4,     5,    35,     7,     8,     4,
       5,    35,     7,    96,    35,    15,   366,   366,    18,    19,
      15,    35,   212,    18,    19,    35,   216,    30,   378,    30,
      30,   381,   382,    35,    34,    34,    36,   120,   388,    35,
      35,    30,    31,   233,   394,    15,   396,   237,    18,    19,
      34,   241,    30,    31,   137,     4,     5,    34,     7,     8,
      34,    31,    34,    34,   254,    35,    15,    35,    35,    18,
      19,    35,   262,   156,   264,   265,    30,    34,    34,   269,
     270,   271,   272,   273,   274,    34,    35,    36,   278,    35,
     280,   281,   282,    34,   177,    35,    15,    35,   181,    18,
      19,    35,   292,    35,    34,   295,    51,   297,   298,    34,
      30,    30,   302,   303,   304,   305,   306,   307,    30,    34,
      34,     4,     5,    34,     7,     8,   316,    34,    34,   212,
      34,    76,    15,   216,    79,    18,    19,    35,    83,    84,
      85,   331,    15,    35,    35,    18,    19,    35,    31,    35,
      35,    34,    35,   343,   237,    35,    35,    30,   241,     4,
       5,    15,     7,     8,    18,    19,    35,    35,    35,    35,
      15,   254,    35,    18,    19,   120,   366,    31,    35,   262,
      15,    35,   265,    18,    19,    35,   269,   270,    35,    34,
      35,    35,   137,    32,    35,   278,    31,   280,    32,   282,
      35,    15,     1,    35,    18,    19,    14,     6,     7,   292,
       9,   156,   295,   377,    27,   298,    30,    16,    17,   302,
     303,    20,    21,    22,    23,    24,    25,   219,   173,    28,
      -1,    30,   177,   316,    -1,    34,   181,    -1,    -1,     4,
       5,    -1,     7,     8,    51,    -1,     6,     7,   331,     9,
      15,    -1,    -1,    18,    19,    -1,    16,    17,    15,    -1,
     343,    18,    19,    -1,    24,    25,    31,   212,    28,    76,
      35,   216,    79,    30,    34,    -1,    83,    84,    85,     1,
      -1,    -1,    -1,   366,     6,     7,    -1,     9,   233,    -1,
      -1,    -1,   237,    -1,    16,    17,   241,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,   254,
      -1,    -1,    34,   120,    -1,    -1,    -1,   262,    -1,   264,
     265,    -1,    -1,    -1,   269,   270,   271,   272,   273,   274,
     137,    -1,    -1,   278,    -1,   280,   281,   282,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,   292,     9,   156,
     295,    51,   297,   298,    -1,    16,    17,   302,   303,   304,
     305,   306,   307,    24,    25,    -1,   173,    28,    -1,    -1,
     177,   316,    -1,    34,   181,    -1,    76,    -1,    -1,    79,
      -1,    -1,    -1,    83,    -1,    85,   331,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,     6,     7,   343,     9,
     100,    -1,    -1,    -1,    -1,   212,    16,    17,    -1,   216,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
     120,   366,    -1,    -1,    34,    -1,   233,    -1,     4,     5,
     237,     7,     8,    -1,   241,    -1,    -1,   137,    -1,    15,
      -1,    -1,    18,    19,    -1,    -1,    -1,   254,    -1,    -1,
       6,     7,    -1,     9,    -1,   262,   156,   264,   265,    35,
      16,    17,   269,   270,   271,   272,   273,   274,    24,    25,
      -1,   278,    28,   280,   281,   282,    -1,   177,    34,    -1,
      -1,   181,    -1,     6,    -1,   292,     9,    -1,   295,    -1,
     297,   298,    -1,    16,    17,   302,   303,   304,   305,   306,
     307,    24,    25,     4,     5,    28,     7,     8,    -1,   316,
      51,    34,   212,    -1,    15,    -1,   216,    18,    19,    -1,
      -1,    -1,    -1,    -1,   331,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    35,    76,   343,   237,    79,    -1,
      -1,   241,    83,    -1,    85,    -1,     4,     5,    -1,     7,
       8,    -1,     4,     5,   254,     7,     8,    15,    99,   366,
      18,    19,   262,    15,    -1,   265,    18,    19,    -1,   269,
     270,   271,   272,   273,   274,     4,     5,    35,   278,   120,
     280,    -1,   282,    35,    -1,    -1,    15,    -1,    -1,    18,
      19,    -1,   292,    -1,    -1,   295,   137,    -1,   298,     4,
       5,    30,   302,   303,   304,   305,   306,   307,     4,     5,
      15,     7,     8,    18,    19,   156,   316,    51,    -1,    15,
      -1,    -1,    18,    19,    -1,    -1,    31,    -1,    -1,    -1,
      35,   331,    -1,    -1,    -1,    31,   177,    -1,    -1,    35,
     181,    -1,    76,   343,    -1,    79,    -1,     4,     5,    83,
       7,    85,    -1,    -1,    -1,    -1,    -1,    -1,    15,    -1,
      -1,    18,    19,    -1,    98,    -1,   366,    -1,     1,    -1,
      -1,   212,    -1,     6,     7,   216,     9,    -1,    35,    -1,
      -1,    -1,    -1,    16,    17,    -1,   120,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,   237,    30,    -1,    -1,
     241,    34,    35,   137,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,    -1,   254,    -1,    15,    -1,    -1,    18,    19,
      -1,   262,   156,    -1,   265,    -1,    -1,    -1,   269,   270,
     271,   272,   273,    -1,    -1,    35,    -1,   278,    -1,   280,
      -1,   282,    -1,   177,    -1,     4,     5,   181,     7,     8,
      -1,   292,    -1,    -1,   295,    51,    15,   298,    -1,    18,
      19,   302,   303,   304,   305,   306,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,   316,    35,    -1,   212,    -1,
      76,    -1,   216,    79,    -1,    -1,    -1,    83,    -1,    85,
     331,    -1,    -1,    -1,    -1,     4,     5,    -1,     7,     8,
      -1,    97,   343,   237,    -1,    -1,    15,   241,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,     5,
     254,     7,    31,    -1,   120,   366,    35,    -1,   262,    15,
      -1,   265,    18,    19,    -1,   269,   270,   271,   272,    -1,
      -1,   137,    -1,    -1,   278,    31,   280,    -1,   282,    35,
      -1,    -1,     4,     5,    -1,     7,     8,    -1,   292,    -1,
     156,   295,    51,    15,   298,    -1,    18,    19,   302,   303,
     304,   305,    -1,    -1,    -1,    -1,    -1,     4,     5,    31,
       7,   177,   316,    35,    -1,   181,    -1,    76,    15,    -1,
      79,    18,    19,    -1,    83,    -1,    85,   331,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,     1,    -1,     3,   343,
      -1,     6,     7,    -1,     9,    10,   212,    12,    13,    14,
     216,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,   120,   366,    28,    -1,    30,    -1,    -1,    33,    34,
      -1,   237,    -1,    -1,    -1,   241,    -1,    -1,   137,     4,
       5,    -1,     7,     8,    -1,    -1,    -1,    -1,   254,    -1,
      15,    -1,    -1,    18,    19,    -1,   262,   156,    -1,   265,
      -1,    -1,    -1,   269,   270,   271,    31,    -1,    -1,    -1,
      35,    -1,   278,    -1,   280,    51,   282,    -1,   177,    -1,
       4,     5,   181,     7,     8,    -1,   292,    -1,    -1,   295,
      -1,    15,   298,    -1,    18,    19,   302,   303,   304,    -1,
      76,     4,     5,    79,     7,     8,    -1,    83,    -1,    85,
     316,    35,    15,   212,    -1,    18,    19,   216,    -1,    95,
       4,     5,    51,     7,     8,   331,    -1,    -1,    31,    -1,
       6,    15,    35,     9,    18,    19,    -1,   343,   237,    -1,
      16,    17,   241,    -1,   120,    -1,    -1,    76,    24,    25,
      79,    35,    28,    -1,    83,   254,    85,    -1,    34,    -1,
     366,   137,    -1,   262,    -1,    94,   265,    -1,    -1,    -1,
     269,   270,    -1,    -1,    -1,     4,     5,    -1,     7,   278,
     156,   280,    -1,   282,    -1,    -1,    15,    -1,    -1,    18,
      19,   120,    -1,   292,    -1,    -1,   295,    -1,    -1,   298,
      -1,    -1,    31,   302,   303,   181,    35,    -1,   137,    -1,
      -1,    -1,    -1,    51,    -1,     4,     5,   316,     7,     8,
       4,     5,    -1,     7,     8,    -1,    15,   156,    -1,    18,
      19,    15,   331,    -1,    18,    19,   212,    -1,    76,    -1,
     216,    79,    31,    -1,   343,    83,    35,    85,     4,     5,
      -1,    35,   181,    -1,    92,     4,     5,     4,     5,    15,
       7,     8,    18,    19,    -1,   241,    15,   366,    15,    18,
      19,    18,    19,    -1,    -1,    31,    -1,    -1,   254,    35,
      -1,    30,   120,   212,    31,    -1,   262,   216,    35,   265,
      -1,    -1,    -1,   269,     4,     5,    -1,     7,     8,   137,
      -1,    -1,   278,    -1,   280,    15,   282,    -1,    18,    19,
      -1,    -1,   241,    -1,    -1,    -1,   292,    -1,   156,   295,
      30,    -1,   298,    -1,    34,   254,   302,     4,     5,    -1,
       7,     8,    -1,   262,    -1,    -1,   265,    -1,    15,    -1,
     316,    18,    19,   181,    -1,    -1,    -1,    -1,    -1,   278,
      -1,   280,    -1,   282,    31,   331,     1,    -1,    35,    -1,
      -1,     6,     7,   292,     9,    -1,   295,   343,    -1,   298,
      -1,    16,    17,    -1,   212,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,   316,    -1,    34,
     366,    -1,    -1,    -1,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,   331,   241,    -1,    15,    -1,    -1,    18,    19,
      -1,    -1,    -1,    -1,   343,    -1,    -1,    -1,    -1,     4,
       5,    31,     7,     8,   262,    35,    -1,   265,    -1,    -1,
      15,    -1,    -1,    18,    19,    -1,    -1,   366,    -1,    -1,
     278,    -1,   280,    -1,   282,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,     1,   292,     3,    -1,   295,     6,     7,
     298,     9,    10,    11,    12,    13,    14,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,   316,    -1,
      28,    -1,    30,    -1,    -1,    33,    34,    -1,    -1,    -1,
      -1,    -1,    -1,   331,    -1,    -1,    -1,    -1,     1,    -1,
       3,    -1,    -1,     6,     7,   343,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,   366,    -1,
      33,    34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,
       3,    -1,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      33,    34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,
       3,    -1,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      33,    34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,
       3,    -1,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      33,    34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,
      -1,     6,     7,    -1,     9,    10,    11,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,
      11,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,
       7,    -1,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,
       3,    -1,    -1,     6,     7,    -1,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      33,    34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,
       9,    10,    11,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,
       3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      33,    34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,
       3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      33,    34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,     1,    32,     3,    34,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,     1,    32,     3,    34,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,     1,    32,     3,    34,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,     1,    32,     3,    34,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,
       3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,     1,    32,
       3,    34,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,     1,    32,
       3,    34,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      33,    34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,
       3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      33,    34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,
       3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,
      33,    34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,
       9,    10,    -1,    12,    13,    14,    -1,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,
      -1,     6,     7,    -1,     9,    10,    -1,    12,    13,    14,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,
       1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,
      -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,     6,
       7,    -1,     9,    10,    -1,    12,    13,    14,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,    -1,
       3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,    12,
      13,    14,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    28,    -1,    30,     1,    -1,
      33,    34,    -1,     6,     7,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    -1,    -1,    20,    21,    22,
      23,    24,    25,    -1,     1,    28,    -1,    30,    -1,     6,
       7,    34,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    -1,    -1,    20,    21,    22,    23,    24,    25,    -1,
       1,    28,    -1,    30,    -1,     6,     7,    34,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    20,
      21,    22,    23,    24,    25,    -1,     1,    28,    -1,    30,
      -1,     6,     7,    34,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    -1,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    28,    -1,    30,    -1,     4,     5,    34,
       7,     8,     4,     5,    -1,     7,     8,    -1,    15,    -1,
      -1,    18,    19,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    31,
      -1,     4,     5,    35,     7,     8,     4,     5,    -1,     7,
       8,    -1,    15,    -1,    -1,    18,    19,    15,    -1,    -1,
      18,    19,    -1,    -1,     4,     5,    -1,     7,     8,    -1,
       4,     5,    35,     7,     8,    15,    -1,    35,    18,    19,
      -1,    15,    -1,    -1,    18,    19,    -1,    -1,     4,     5,
      -1,     7,     8,     4,     5,    35,     7,     8,    -1,    15,
      -1,    35,    18,    19,    15,    -1,    -1,    18,    19,    -1,
      -1,     4,     5,    -1,     7,     8,    -1,     6,     7,    35,
       9,    -1,    15,    -1,    35,    18,    19,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,     6,     7,    28,
       9,    -1,    35,    -1,    -1,    34,    35,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,     6,     7,    28,
       9,    -1,    -1,    -1,    -1,    34,    35,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,     6,     7,    28,
       9,    -1,    -1,    -1,    -1,    34,    35,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,     6,     7,    28,
       9,    -1,    -1,    -1,    -1,    34,    35,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,     6,     7,    28,
       9,    -1,    -1,    -1,    -1,    34,    35,    16,    17,    -1,
      -1,    20,    -1,    -1,    -1,    24,    25,     6,     7,    28,
       9,    -1,    -1,    -1,    -1,    34,    35,    16,    17,    -1,
      -1,    20,    -1,    -1,    -1,    24,    25,     6,     7,    28,
       9,    -1,    -1,    -1,    -1,    34,    -1,    16,    17,    -1,
      -1,    20,    -1,    -1,    -1,    24,    25,     6,     7,    28,
       9,    -1,    -1,    -1,    -1,    34,    -1,    16,    17,    -1,
       6,    20,    -1,     9,    -1,    24,    25,    -1,    -1,    28,
      16,    17,    -1,     6,    -1,    34,     9,    -1,    24,    25,
      -1,    -1,    28,    16,    17,    -1,    -1,    -1,    34,    -1,
      -1,    24,    25,     4,     5,    28,     7,     8,    -1,     4,
       5,    34,     7,     8,    15,    -1,    -1,    18,    19,    -1,
      15,    -1,    -1,    18,    19,    -1,    -1,     4,     5,    30,
       7,     8,    -1,     4,     5,    30,     7,     8,    15,    -1,
      -1,    18,    19,    -1,    15,    -1,    -1,    18,    19,    -1,
      -1,     4,     5,    30,     7,     8,    -1,     4,     5,    30,
       7,     8,    15,    -1,    -1,    18,    19,    -1,    15,    -1,
      -1,    18,    19,    -1,    -1,     4,     5,    30,     7,     8,
      -1,     4,     5,    30,     7,     8,    15,    -1,    -1,    18,
      19,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,     4,
       5,    30,     7,     8,    -1,     4,     5,    30,     7,     8,
      15,    -1,    -1,    18,    19,    -1,    15,    -1,    -1,    18,
      19,    -1,    -1,     4,     5,    30,     7,     8,    -1,     4,
       5,    30,     7,     8,    15,    -1,    -1,    18,    19,    -1,
      15,    -1,    -1,    18,    19,    -1,    -1,     4,     5,    30,
       7,     8,    -1,     4,     5,    30,     7,     8,    15,    -1,
      -1,    18,    19,    -1,    15,    -1,    -1,    18,    19,    -1,
      -1,     4,     5,    30,     7,     8,    -1,     4,     5,    30,
       7,     8,    15,    -1,    -1,    18,    19,    -1,    15,    -1,
      -1,    18,    19,     4,     5,    -1,     7,    30,    -1,    -1,
      -1,    -1,    -1,    30,    15,    -1,    -1,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    38,    39,     0,     3,    40,    41,    44,     1,     9,
      42,    43,    45,    30,    31,    34,    47,     9,    43,     1,
       3,    35,    48,    49,    46,    35,     9,    31,    35,    32,
      49,    50,     1,     6,     7,     9,    10,    12,    13,    14,
      16,    17,    20,    21,    22,    23,    24,    25,    28,    30,
      33,    34,    41,    44,    51,    52,    54,    58,    59,    60,
      61,    62,    63,    64,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    34,    62,    75,    34,
      57,    34,    59,    34,    34,    34,    69,    34,    34,    34,
      66,    30,    36,    78,    15,    19,    18,     5,     4,     7,
       8,    66,     1,    60,    56,     1,    59,     1,    66,    75,
      66,     9,    62,    26,    27,    62,    65,    65,    35,    66,
      34,    67,    68,    69,    71,    72,    73,    74,    35,    35,
      35,    32,    41,    44,    51,    53,    35,    59,    35,    35,
      35,    35,    35,    35,    35,    66,    79,    80,    50,    11,
      56,    35,    60,    56,    56,    35,    31,    33,    55,    53,
      56,    35,    53,    53,    66,    56,    53,    56,    53,    53,
       3,     9,     6,     7,     9,    16,    17,    20,    24,    25,
      28,    34,    62,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,     9,    21,    22,    23,    61,    62,
      63,    64,    66,    30,    60,     6,     9,    16,    17,    24,
      25,    28,    34,    62,    76,    77,    15,     1,     3,    10,
      12,    13,    14,    30,    52,    54,    58,    59,    60,     1,
      30,    60,     6,     7,     9,    16,    17,    20,    24,    25,
      28,    34,    62,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    15,    32,    41,    44,    51,     1,
       9,    42,    34,    75,    34,    34,    69,    66,    78,    19,
      18,     5,     4,     7,     8,    34,    34,    34,    36,    30,
      34,    34,    34,    66,    78,    67,     1,     9,    42,    57,
      34,    59,    34,    30,    30,    34,    75,    34,    34,    69,
      66,    78,    19,    18,     5,     4,     7,     8,    67,    50,
      45,    30,    66,    75,    66,    35,    34,    68,    69,    71,
      72,    73,    74,    62,    65,    65,    66,    66,    75,    66,
      35,    34,    45,    30,    56,     1,    59,     1,    66,    66,
      75,    66,    35,    34,    68,    69,    71,    72,    73,    74,
      33,    47,    35,    35,    35,    79,    35,    35,    35,    35,
      35,    35,    79,    47,    53,    35,    59,    35,    35,    35,
      35,    35,    79,    46,    35,    35,    46,    11,    56,    35,
      60,    56,    56,    35,    32,    32,    55,    53,    56,    35,
      53,    53,    50,    50,    56,    53,    56,    33,    33,    53,
      53
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    39,    39,    40,    40,    41,    41,    42,
      42,    43,    45,    46,    44,    47,    47,    47,    48,    48,
      49,    50,    50,    50,    50,    51,    51,    51,    51,    52,
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
       0,     2,     1,     2,     0,     1,     1,     3,     2,     3,
       1,     1,     0,     0,     8,     2,     3,     3,     3,     1,
       2,     0,     2,     2,     2,     1,     1,     1,     1,     7,
       8,     6,     6,     6,     3,     1,     1,     1,     4,     0,
       8,     0,     3,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     3,     1,     4,     4,     4,     1,     1,     1,
       3,     1,     3,     1,     3,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     2,     1,     1,     3,
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
#line 55 "syntactic.y"
            {free(((*yyvaluep).sval));}
#line 2143 "syntactic.tab.c"
        break;

    case 27: /* STRING  */
#line 56 "syntactic.y"
            {free(((*yyvaluep).sval));}
#line 2149 "syntactic.tab.c"
        break;

    case 39: /* program  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2155 "syntactic.tab.c"
        break;

    case 40: /* declaration  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2161 "syntactic.tab.c"
        break;

    case 41: /* varDecl  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2167 "syntactic.tab.c"
        break;

    case 42: /* varList  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2173 "syntactic.tab.c"
        break;

    case 43: /* new_id  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2179 "syntactic.tab.c"
        break;

    case 44: /* funcDecl  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2185 "syntactic.tab.c"
        break;

    case 47: /* arguments  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2191 "syntactic.tab.c"
        break;

    case 48: /* argsList  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2197 "syntactic.tab.c"
        break;

    case 49: /* arg  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2203 "syntactic.tab.c"
        break;

    case 50: /* funcBody  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2209 "syntactic.tab.c"
        break;

    case 51: /* stmt  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2215 "syntactic.tab.c"
        break;

    case 52: /* iterStmt  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2221 "syntactic.tab.c"
        break;

    case 53: /* body  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2227 "syntactic.tab.c"
        break;

    case 54: /* condStmt  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2233 "syntactic.tab.c"
        break;

    case 57: /* cond  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2239 "syntactic.tab.c"
        break;

    case 58: /* returnStmt  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2245 "syntactic.tab.c"
        break;

    case 59: /* exprStmt  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2251 "syntactic.tab.c"
        break;

    case 60: /* expression  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2257 "syntactic.tab.c"
        break;

    case 61: /* assign  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2263 "syntactic.tab.c"
        break;

    case 62: /* var  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2269 "syntactic.tab.c"
        break;

    case 63: /* inExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2275 "syntactic.tab.c"
        break;

    case 64: /* outExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2281 "syntactic.tab.c"
        break;

    case 65: /* output  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2287 "syntactic.tab.c"
        break;

    case 66: /* simpleExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2293 "syntactic.tab.c"
        break;

    case 67: /* conjExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2299 "syntactic.tab.c"
        break;

    case 68: /* disjExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2305 "syntactic.tab.c"
        break;

    case 69: /* negExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2311 "syntactic.tab.c"
        break;

    case 70: /* compExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2317 "syntactic.tab.c"
        break;

    case 71: /* relExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2323 "syntactic.tab.c"
        break;

    case 72: /* artExpr1  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2329 "syntactic.tab.c"
        break;

    case 73: /* artExpr2  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2335 "syntactic.tab.c"
        break;

    case 74: /* minusFactor  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2341 "syntactic.tab.c"
        break;

    case 75: /* factor  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2347 "syntactic.tab.c"
        break;

    case 76: /* constant  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2353 "syntactic.tab.c"
        break;

    case 77: /* call  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2359 "syntactic.tab.c"
        break;

    case 79: /* params  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2365 "syntactic.tab.c"
        break;

    case 80: /* paramList  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2371 "syntactic.tab.c"
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
#line 2641 "syntactic.tab.c"
    break;

  case 3:
#line 70 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2647 "syntactic.tab.c"
    break;

  case 4:
#line 71 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2653 "syntactic.tab.c"
    break;

  case 5:
#line 74 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2659 "syntactic.tab.c"
    break;

  case 6:
#line 75 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2665 "syntactic.tab.c"
    break;

  case 7:
#line 78 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(VARDECL, (yyvsp[-1].tnode)); setVarsType((yyvsp[-1].tnode), (yyvsp[-2].ival));}
#line 2671 "syntactic.tab.c"
    break;

  case 8:
#line 79 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2677 "syntactic.tab.c"
    break;

  case 9:
#line 83 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2683 "syntactic.tab.c"
    break;

  case 10:
#line 84 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2689 "syntactic.tab.c"
    break;

  case 11:
#line 87 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(declare((yyvsp[0].sval), UNDEF, VARIABLE));}
#line 2695 "syntactic.tab.c"
    break;

  case 12:
#line 90 "syntactic.y"
                        { aux = declare((yyvsp[0].sval), (yyvsp[-1].ival), FUNCTION);
                          pushScope(newScope((yyvsp[0].sval), curr_level+1));
                          n_args = 0;
                          curr_level += 1;}
#line 2704 "syntactic.tab.c"
    break;

  case 13:
#line 95 "syntactic.y"
                                          {aux->n_args = n_args; aux->args_type = (int *)calloc(n_args, sizeof(int)); setArgsInfo(aux, (yyvsp[0].tnode), 0);}
#line 2710 "syntactic.tab.c"
    break;

  case 14:
#line 97 "syntactic.y"
                                          {(yyval.tnode) = BinaryNode(FUNCDECL, (yyvsp[-4].tnode), (yyvsp[-1].tnode)); (yyval.tnode)->ref = aux; hideScope(); curr_level-=1;}
#line 2716 "syntactic.tab.c"
    break;

  case 15:
#line 101 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2722 "syntactic.tab.c"
    break;

  case 16:
#line 102 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2728 "syntactic.tab.c"
    break;

  case 17:
#line 103 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2734 "syntactic.tab.c"
    break;

  case 18:
#line 106 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2740 "syntactic.tab.c"
    break;

  case 19:
#line 107 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2746 "syntactic.tab.c"
    break;

  case 20:
#line 110 "syntactic.y"
                                                                { n_args += 1;
                                                                  (yyval.tnode) = idLeaf(declare((yyvsp[0].sval), (yyvsp[-1].ival), VARIABLE)); }
#line 2753 "syntactic.tab.c"
    break;

  case 21:
#line 114 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2759 "syntactic.tab.c"
    break;

  case 22:
#line 115 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2765 "syntactic.tab.c"
    break;

  case 23:
#line 116 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2771 "syntactic.tab.c"
    break;

  case 24:
#line 117 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2777 "syntactic.tab.c"
    break;

  case 25:
#line 120 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2783 "syntactic.tab.c"
    break;

  case 26:
#line 121 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2789 "syntactic.tab.c"
    break;

  case 27:
#line 122 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2795 "syntactic.tab.c"
    break;

  case 28:
#line 123 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2801 "syntactic.tab.c"
    break;

  case 29:
#line 126 "syntactic.y"
                                                                             {(yyval.tnode) = TernaryNode(FOR1, (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2807 "syntactic.tab.c"
    break;

  case 30:
#line 127 "syntactic.y"
                                                                             {(yyval.tnode) = QuaternaryNode(FOR2, (yyvsp[-5].tnode), (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2813 "syntactic.tab.c"
    break;

  case 31:
#line 128 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FORALL, (yyvsp[-3].tnode), (yyvsp[0].tnode));  hideScope(); curr_level -= 1;}
#line 2819 "syntactic.tab.c"
    break;

  case 32:
#line 129 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FORALL, nullLeaf(), (yyvsp[0].tnode)); yyerrok;  hideScope(); curr_level -= 1;}
#line 2825 "syntactic.tab.c"
    break;

  case 33:
#line 130 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FOR, nullLeaf(), (yyvsp[0].tnode)); yyerrok;  hideScope(); curr_level -= 1;}
#line 2831 "syntactic.tab.c"
    break;

  case 34:
#line 134 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2837 "syntactic.tab.c"
    break;

  case 35:
#line 135 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2843 "syntactic.tab.c"
    break;

  case 36:
#line 136 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2849 "syntactic.tab.c"
    break;

  case 37:
#line 137 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2855 "syntactic.tab.c"
    break;

  case 38:
#line 141 "syntactic.y"
                                                                              {(yyval.tnode) = BinaryNode(IF, (yyvsp[-2].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1; }
#line 2861 "syntactic.tab.c"
    break;

  case 39:
#line 143 "syntactic.y"
                        {hideScope(); curr_level -= 1;}
#line 2867 "syntactic.tab.c"
    break;

  case 40:
#line 143 "syntactic.y"
                                                                                                    {(yyval.tnode) = TernaryNode(IF_ELSE, (yyvsp[-6].tnode), (yyvsp[-4].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2873 "syntactic.tab.c"
    break;

  case 41:
#line 146 "syntactic.y"
                      {curr_level += 1; pushScope(newScope(curr_scope->name, curr_level));}
#line 2879 "syntactic.tab.c"
    break;

  case 42:
#line 149 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2885 "syntactic.tab.c"
    break;

  case 43:
#line 150 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2891 "syntactic.tab.c"
    break;

  case 44:
#line 153 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(RETURN, (yyvsp[0].tnode));}
#line 2897 "syntactic.tab.c"
    break;

  case 45:
#line 156 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2903 "syntactic.tab.c"
    break;

  case 46:
#line 157 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2909 "syntactic.tab.c"
    break;

  case 47:
#line 158 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2915 "syntactic.tab.c"
    break;

  case 48:
#line 161 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2921 "syntactic.tab.c"
    break;

  case 49:
#line 162 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2927 "syntactic.tab.c"
    break;

  case 50:
#line 163 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2933 "syntactic.tab.c"
    break;

  case 51:
#line 164 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2939 "syntactic.tab.c"
    break;

  case 52:
#line 167 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(ASSIGN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2945 "syntactic.tab.c"
    break;

  case 53:
#line 170 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(findDecl((yyvsp[0].sval)));}
#line 2951 "syntactic.tab.c"
    break;

  case 54:
#line 173 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(READ, (yyvsp[-1].tnode));}
#line 2957 "syntactic.tab.c"
    break;

  case 55:
#line 176 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITE, (yyvsp[-1].tnode));}
#line 2963 "syntactic.tab.c"
    break;

  case 56:
#line 177 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITELN, (yyvsp[-1].tnode));}
#line 2969 "syntactic.tab.c"
    break;

  case 57:
#line 180 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2975 "syntactic.tab.c"
    break;

  case 58:
#line 181 "syntactic.y"
                                                                {(yyval.tnode) = charLeaf((yyvsp[0].cval));}
#line 2981 "syntactic.tab.c"
    break;

  case 59:
#line 182 "syntactic.y"
                                                                {(yyval.tnode) = stringLeaf((yyvsp[0].sval));}
#line 2987 "syntactic.tab.c"
    break;

  case 60:
#line 185 "syntactic.y"
                                                                  {(yyval.tnode) = typeCheck(IN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2993 "syntactic.tab.c"
    break;

  case 61:
#line 186 "syntactic.y"
                                                                  {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2999 "syntactic.tab.c"
    break;

  case 62:
#line 189 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(CONJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3005 "syntactic.tab.c"
    break;

  case 63:
#line 190 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3011 "syntactic.tab.c"
    break;

  case 64:
#line 193 "syntactic.y"
                                                               {(yyval.tnode) = typeCheck(DISJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3017 "syntactic.tab.c"
    break;

  case 65:
#line 194 "syntactic.y"
                                                               {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3023 "syntactic.tab.c"
    break;

  case 66:
#line 197 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(NEG, (yyvsp[0].tnode), NULL);}
#line 3029 "syntactic.tab.c"
    break;

  case 67:
#line 198 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3035 "syntactic.tab.c"
    break;

  case 68:
#line 201 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(COMP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3041 "syntactic.tab.c"
    break;

  case 69:
#line 202 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3047 "syntactic.tab.c"
    break;

  case 70:
#line 205 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(RELOP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3053 "syntactic.tab.c"
    break;

  case 71:
#line 206 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3059 "syntactic.tab.c"
    break;

  case 72:
#line 209 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(ARTOP1, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3065 "syntactic.tab.c"
    break;

  case 73:
#line 210 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3071 "syntactic.tab.c"
    break;

  case 74:
#line 213 "syntactic.y"
                                                                     {(yyval.tnode) = typeCheck(ARTOP2, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3077 "syntactic.tab.c"
    break;

  case 75:
#line 214 "syntactic.y"
                                                                     {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3083 "syntactic.tab.c"
    break;

  case 76:
#line 217 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(ARTOP1, (yyvsp[0].tnode)); (yyval.tnode)->sem_type = (yyvsp[0].tnode)->sem_type; (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3089 "syntactic.tab.c"
    break;

  case 77:
#line 218 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3095 "syntactic.tab.c"
    break;

  case 78:
#line 221 "syntactic.y"
                                                                 {(yyval.tnode) = idLeaf(findDecl((yyvsp[0].sval)));}
#line 3101 "syntactic.tab.c"
    break;

  case 79:
#line 222 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 3107 "syntactic.tab.c"
    break;

  case 80:
#line 223 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3113 "syntactic.tab.c"
    break;

  case 81:
#line 224 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3119 "syntactic.tab.c"
    break;

  case 82:
#line 225 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(IS_SET, (yyvsp[-1].tnode), NULL);}
#line 3125 "syntactic.tab.c"
    break;

  case 83:
#line 226 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(EXISTS, (yyvsp[-1].tnode), NULL);}
#line 3131 "syntactic.tab.c"
    break;

  case 84:
#line 227 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(SETOP, (yyvsp[-1].tnode), NULL); (yyval.tnode)->op_specifier = (yyvsp[-3].ival);}
#line 3137 "syntactic.tab.c"
    break;

  case 85:
#line 230 "syntactic.y"
                                                                {(yyval.tnode) = intLeaf((yyvsp[0].ival));}
#line 3143 "syntactic.tab.c"
    break;

  case 86:
#line 231 "syntactic.y"
                                                                {(yyval.tnode) = floatLeaf((yyvsp[0].fval));}
#line 3149 "syntactic.tab.c"
    break;

  case 87:
#line 232 "syntactic.y"
                                                                {(yyval.tnode) = setLeaf();}
#line 3155 "syntactic.tab.c"
    break;

  case 88:
#line 235 "syntactic.y"
                    {aux = (yyvsp[0].tnode)->ref; n_params = 0;}
#line 3161 "syntactic.tab.c"
    break;

  case 89:
#line 235 "syntactic.y"
                                                                    {(yyval.tnode) = BinaryNode(CALL, (yyvsp[-4].tnode), (yyvsp[-1].tnode)); (yyval.tnode)->sem_type = (yyvsp[-4].tnode)->sem_type;}
#line 3167 "syntactic.tab.c"
    break;

  case 90:
#line 240 "syntactic.y"
                                                                {(yyval.tnode) = checkParam(UNDEF, aux, NULL, NULL, n_params);}
#line 3173 "syntactic.tab.c"
    break;

  case 91:
#line 241 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3179 "syntactic.tab.c"
    break;

  case 92:
#line 244 "syntactic.y"
                                                                {(yyval.tnode) = checkParam(SEQ, aux, (yyvsp[-2].tnode), (yyvsp[0].tnode), n_params); n_params += 1; }
#line 3185 "syntactic.tab.c"
    break;

  case 93:
#line 245 "syntactic.y"
                                                                {(yyval.tnode) = checkParam(UNDEF, aux, NULL, (yyvsp[0].tnode), n_params); n_params += 1;}
#line 3191 "syntactic.tab.c"
    break;


#line 3195 "syntactic.tab.c"

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

    fclose(yyin);
    yylex_destroy();
    freeTables(global_scope);
    freeTree(root);

    return 0;
}
