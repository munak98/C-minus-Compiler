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
extern int curr_level;
int varType;

#line 90 "syntactic.tab.c"

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
    SETOP = 260,
    ARTOP1 = 261,
    ARTOP2 = 262,
    ID = 263,
    IF = 264,
    ELSE = 265,
    FOR = 266,
    RETURN = 267,
    FORALL = 268,
    IN = 269,
    IS_SET = 270,
    EXISTS = 271,
    DISJ = 272,
    CONJ = 273,
    NEG = 274,
    READ = 275,
    WRITE = 276,
    WRITELN = 277,
    INTEGER = 278,
    FLOAT = 279,
    CHAR = 280,
    STRING = 281,
    EMPTY = 282,
    THEN = 283
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 23 "syntactic.y"

  int ival;
  float fval;
  char cval;
  char* sval;
  struct NODE *tnode;

#line 179 "syntactic.tab.c"

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
#define YYLAST   3895

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  357

#define YYUNDEFTOK  2
#define YYMAXUTOK   283


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
      33,    34,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    29,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    31,     2,    32,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    65,    65,    68,    69,    72,    73,    76,    81,    84,
      85,    88,    94,   116,   117,   118,   121,   122,   125,   133,
     134,   135,   136,   139,   140,   141,   142,   145,   146,   147,
     148,   149,   153,   154,   155,   156,   160,   161,   164,   165,
     168,   171,   172,   173,   176,   177,   178,   179,   182,   185,
     188,   191,   192,   195,   196,   197,   200,   201,   204,   205,
     208,   209,   212,   213,   216,   217,   220,   221,   224,   225,
     230,   231,   232,   233,   234,   235,   236,   239,   240,   241,
     244,   249,   250,   253,   254
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE", "RELOP", "SETOP", "ARTOP1",
  "ARTOP2", "ID", "IF", "ELSE", "FOR", "RETURN", "FORALL", "IN", "IS_SET",
  "EXISTS", "DISJ", "CONJ", "NEG", "READ", "WRITE", "WRITELN", "INTEGER",
  "FLOAT", "CHAR", "STRING", "EMPTY", "THEN", "';'", "','", "'{'", "'}'",
  "'('", "')'", "'='", "$accept", "begin", "program", "declaration",
  "varDecl", "varList", "new_id", "funcDecl", "arguments", "argsList",
  "arg", "funcBody", "stmt", "iterStmt", "body", "condStmt", "cond",
  "returnStmt", "exprStmt", "expression", "assign", "var", "inExpr",
  "outExpr", "output", "simpleExpr", "negExpr", "disjExpr", "conjExpr",
  "relExpr", "artExpr1", "artExpr2", "factor", "constant", "call",
  "params", "paramList", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,    59,
      44,   123,   125,    40,    41,    61
};
# endif

#define YYPACT_NINF (-230)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     223,    55,   303,  -230,    13,   334,   364,   462,   514,   -13,
     252,   477,   542,    14,     9,    65,   418,    64,   124,    84,
      22,   109,  2058,   115,   183,   164,   126,  2091,   222,  2124,
     148,    83,   161,   173,  3152,   196,   207,   226,   901,   231,
     240,   283,  1210,  3722,  3728,  2157,   554,  3641,  2190,  2223,
    2256,  2289,  2322,  2355,  2388,   187,   306,   337,   317,   378,
      63,   136,   100,   534,    66,    32,  3746,  3752,  3770,  3776,
    3641,  3341,  2421,  3179,  2448,    18,   427,  3641,   368,   205,
     407,   154,   154,    88,  2481,  3628,   901,   901,  3674,  3674,
    3674,  3674,  3674,   107,   391,   396,  2058,  1299,  1332,  1365,
    1398,    52,  3206,   405,   139,   422,   208,   430,   436,   444,
     469,   478,   490,   513,  3794,    48,   519,   445,   319,   357,
     571,   470,   232,  3800,  3818,  3824,  2514,  2541,  2568,  2601,
    2601,  3528,  2601,  2601,  3842,  3848,   412,   467,   530,  3866,
    3661,  1431,  2628,  2661,  2601,   547,  2694,  2727,    79,  2760,
    2601,  2793,   548,    57,  1120,   486,   214,   531,   551,  3641,
     157,   766,  1029,  3641,   553,   261,    77,   322,   193,   237,
    1269,  3424,  3443,  3449,   152,   560,   562,   576,   579,   503,
     581,   584,   280,  1464,    98,   161,   587,  3233,   589,  1497,
    1530,  1563,  1596,  1629,   604,  3260,   605,   603,   574,   623,
     628,   629,   630,   631,  3641,   634,   638,   640,  3641,   635,
     404,   645,   646,  3661,   279,   410,   761,  3641,   653,   138,
       1,   311,   106,   509,   835,  1099,  1156,  1219,  3548,  3568,
     633,  3661,  2058,  2826,  2859,  2892,  2925,   582,   477,  3641,
     427,  3641,   304,   313,  3628,  3687,  3687,  3687,  3687,  3687,
     407,   154,   154,  3641,  1662,   597,   477,  2421,  3287,  1695,
     616,  1728,  3314,  3641,   427,  3641,   361,  3628,   365,  3641,
     427,  3641,   244,   379,  3628,  3700,  3700,  3700,  3700,  3700,
    3588,   270,  2958,  2991,   626,   392,   654,   415,  3458,   656,
     565,   516,   624,  3464,  3482,   657,   658,   660,   459,  1761,
     664,  1794,   811,  3206,   662,   466,   475,   663,   494,   665,
     667,   507,   671,   515,  3363,   674,   351,   178,   858,  3369,
    3378,  3024,  2058,  3487,  3505,  3511,  3520,   675,   676,   677,
    2058,  2421,  2421,  3608,  2421,  2421,   678,   680,   681,   683,
    3384,  3403,  3409,  3418,  3057,  3090,  1827,  1860,  2421,   684,
    1893,  1926,  3123,  1959,  1992,  2421,  2025
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
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -230,  -230,  -230,  -230,    -2,  -140,    -8,     5,  -229,  -230,
     694,   -85,   -25,   -24,   372,   137,   502,   163,   -33,   -43,
     -68,   113,   -67,   -65,   -74,  1025,   192,   991,   938,   814,
     719,   666,   327,   406,   485,  -220,  -230
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     5,    97,    10,    11,    98,    15,    20,
      21,    27,    99,    51,   100,    52,    72,    53,    54,    55,
      56,    57,    58,    59,   112,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,   116,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    74,    50,   178,   180,    16,   181,     7,   113,   284,
      17,   128,    18,   237,     8,   -59,   -11,   -11,   275,   103,
     -11,     9,   152,   155,   289,    48,   156,   300,    95,   194,
     196,   -59,    49,   157,   158,   -59,   -65,   159,    91,   193,
     102,   160,   161,    19,   255,   162,   -65,   310,   190,   -65,
     -65,   163,    25,   -42,   315,     3,    26,   -42,   236,   230,
     -42,   -65,   231,   178,   180,     9,   181,   -42,   -42,   131,
      90,   -42,   -42,   -42,   -42,   -42,   -42,    87,   -84,   -42,
     -63,   -42,   -84,   -63,   -63,   -42,   130,   -70,   145,   -70,
     -70,   -59,   -47,   231,   245,   -63,    22,   -70,    23,   254,
     -70,   -70,   208,    50,   235,   235,     9,   235,   235,   -83,
     277,   -59,   -70,   -83,   -59,   -13,   -49,    88,   -49,   235,
     -63,   208,   114,   -63,   -63,   235,    48,   233,   233,   -59,
     233,   233,    24,    49,   234,   234,   -63,   234,   234,   -17,
     -63,   125,   233,   -17,   194,   238,   -15,   282,   233,   234,
     -57,    78,   -57,   208,   259,   234,   -70,   -14,   -70,   -70,
     164,   -77,   109,   -77,   -77,   -57,   -70,    18,   -57,   -70,
     -70,   -77,   -57,   133,   -77,   -77,   256,   296,   297,   110,
     111,    70,   277,   164,   179,   -49,   -70,   -49,   164,   205,
     164,   -77,   -62,   108,    71,   -62,   -62,   247,   218,    78,
      78,    78,    78,    78,    78,    78,    73,   -63,   -62,   191,
     -63,   -63,   -62,   -18,   194,   196,    84,   -18,   -70,   -58,
     -70,   -70,   208,    -4,   193,   303,    -4,   -63,   -70,    75,
      79,   -70,   -70,   190,   -58,   192,   -64,   344,    91,   165,
      76,   -65,   135,   248,   179,   345,   -64,   -49,   -70,   -64,
     -64,   -65,   -16,   218,   -65,   -65,   -16,    50,   -58,    77,
     230,   -64,   165,   165,    80,   178,   180,   165,   181,   165,
     333,   -65,   164,    81,   -58,   -57,   164,   219,   -58,   119,
      48,    12,    13,   -77,   -56,   -77,   -77,    49,   194,   194,
     349,   194,   194,   -77,   208,   -57,   -77,   -77,   193,   193,
     -56,   193,   193,    -2,   -56,   194,     4,   190,   190,   -77,
     190,   190,   194,   -77,   -47,   193,    82,   164,   -58,    50,
      50,   164,   193,   165,   190,   -61,   218,   208,   -61,   276,
     164,   190,   219,    87,    -3,   -44,   -61,    -3,   -58,   -61,
     246,   -61,    48,    48,   218,   -61,   -45,   288,   -48,    49,
      49,   242,   164,   205,   164,   165,   -61,   218,   164,   164,
     164,   164,   164,   295,    -5,   -60,   164,    -5,   -60,   276,
      85,   -56,    86,   164,   171,   208,   164,   205,   164,   -56,
     218,   -60,   164,   205,   164,   -60,   -56,   218,   218,   218,
     218,   218,   218,   208,   191,   309,   165,   171,   171,   -56,
     268,    85,   171,   105,   171,   272,   208,   -46,   -70,   165,
     -70,   -70,   225,   314,   -78,   107,   -78,   -78,   -70,   124,
     192,   -70,   -70,   281,   -78,   126,   323,   -78,   -78,   208,
     127,   165,   197,   165,   -70,   198,   219,   -49,   -70,   132,
     -78,   -50,   199,   200,   -78,   165,   179,    -9,    -9,   325,
     201,   202,   165,   172,   203,   165,   134,   165,   171,   219,
     204,   165,    -6,   165,   -49,    -6,   219,   225,   191,   191,
     136,   191,   191,   208,    90,   140,   172,   172,   -53,   -82,
     208,   172,   206,   172,   -62,   191,   171,   -62,   -62,   208,
     171,   226,   191,   -48,   192,   192,   -51,   192,   192,   -62,
     335,   142,   143,   -54,   146,   147,   -10,   -10,   208,   336,
      14,   192,   -55,   -65,    -8,   278,   149,    -8,   192,   239,
     247,   208,   151,   -65,   137,   165,   -65,   -65,   338,   208,
     -62,   171,   173,   -62,   -62,   171,   244,   172,   253,   -65,
     225,   340,    -7,   -65,   171,    -7,   226,   138,   -61,   342,
     -62,   -61,    89,   139,   -12,   173,   173,   -12,   225,   -52,
     173,   207,   173,   -61,   240,   172,   171,   286,   171,   172,
     227,   225,   171,   171,   171,   171,   294,   -11,   -11,   -60,
     171,   150,   -60,   246,   241,   -60,   244,   171,   -60,    89,
     171,   307,   171,   250,   225,   251,   171,   312,   171,   -60,
     -60,   225,   225,   225,   225,   225,   320,   -49,   -70,   252,
     172,   283,    13,   -44,   172,   -45,   173,   304,   -46,   226,
     258,   155,   260,   172,   156,   227,   299,    13,   -64,   301,
     248,   157,   158,   261,   262,   159,   263,   226,   -64,   160,
     161,   -64,   -64,   162,   173,   172,   206,   172,   173,   163,
     226,   172,   172,   172,   172,   172,   264,   322,   -64,   172,
     171,   265,   280,   -77,   -78,   -79,   172,   267,   269,   172,
     206,   172,   -72,   226,   -73,   172,   206,   172,   270,   271,
     226,   226,   226,   226,   226,   226,   274,   257,   324,   173,
     326,   327,   328,   173,   329,   330,   334,   337,   227,   -71,
       0,   339,   173,   346,   347,   341,   350,   351,   343,   -50,
     -51,   -52,   -76,   170,   -74,   -75,   227,   -80,   355,    28,
     354,     0,     0,     0,   173,   207,   173,   356,     0,   227,
     173,   173,   173,   173,   173,     0,   170,   170,   173,   172,
       0,   170,     0,   170,     0,   173,     0,     0,   173,   207,
     173,   224,   227,     0,   173,   207,   173,   123,     0,   227,
     227,   227,   227,   227,   227,   -79,   169,   -79,   -79,     0,
     -78,     0,   -78,   -78,     0,   -79,     0,     0,   -79,   -79,
     -78,     0,     0,   -78,   -78,     0,     0,     0,     0,   169,
     169,   -79,     0,     0,   169,   -79,   169,   170,     0,     0,
     -78,     0,     0,     0,   223,     0,   224,     0,     0,   122,
       0,     0,   -42,     0,     0,     0,   -42,     0,   173,   -42,
       0,     0,     0,     0,     0,   170,   -42,   -42,     0,   170,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,   -67,
     -42,   -67,   279,     0,   -42,   332,     0,     0,     0,   -67,
     169,     0,   -67,   -67,     0,     0,     0,     0,     0,   223,
       0,   168,   -64,     0,   278,   -67,     0,     0,     0,   -67,
     170,     0,   -64,     0,   170,   -64,   -64,     0,   169,   224,
       0,     0,   169,   170,   168,   168,     0,     0,   -64,   168,
       0,   168,   -64,     0,     0,     0,     0,   224,     0,   222,
       0,     0,     0,   121,     0,   170,    30,   170,     0,   154,
     224,   170,   170,   170,   293,     0,    36,    37,     0,   170,
      38,     0,     0,   169,    42,    43,   170,   169,    44,   170,
       0,   170,   223,   224,    47,   170,   169,   170,     0,     0,
     224,   224,   224,   224,   319,   168,     0,     0,     0,     0,
     223,     0,     0,     0,   222,     0,     0,     0,   169,     0,
     169,     0,     0,   223,   169,   169,   292,     0,     0,     0,
       0,     0,   169,   168,     0,     0,     0,   168,     0,   169,
       0,     0,   169,     0,   169,   167,   223,     0,   169,     0,
     169,     0,     0,   223,   223,   223,   318,     0,     0,   170,
       0,     0,     0,     0,     0,     0,     0,     0,   167,   167,
       0,     0,     0,   167,     0,   167,     0,     0,   168,     0,
       0,     0,   168,   221,     0,     0,   120,   222,     0,     0,
       0,   168,     0,   -79,     0,   -79,   -79,     0,   166,     0,
       0,     0,     0,   -79,     0,   222,   -79,   -79,     0,     0,
       0,     0,   169,   168,     0,   168,     0,     0,   222,   168,
     291,   166,   166,   -79,     0,     0,   166,   168,   166,   167,
       0,     0,    83,     0,   168,     0,   220,   168,   221,   168,
       0,   222,     0,   168,     0,   168,     0,     0,   222,   222,
     317,     0,     0,     0,     0,    93,   182,   167,     0,     0,
     104,   167,   106,   -69,     0,   -69,   -69,     0,     0,     0,
     115,   118,     0,   -69,     0,     0,   -69,   -69,     0,     0,
       0,     0,   166,     0,   -70,     0,   -70,   -70,     0,   -69,
       0,   220,     0,   -69,   -70,     0,     0,   -70,   -70,     0,
       0,     0,   167,     0,     0,     0,   167,   168,     0,   -70,
     166,   221,     0,   -49,   166,   167,   182,     0,     0,     0,
     -72,     0,   -72,   -72,     0,   148,     0,     0,     0,   221,
     -72,     0,     0,   -72,   -72,     0,     0,   167,     0,   167,
       0,     0,   221,   290,     0,     0,   -72,     0,   243,     0,
     -72,   167,     0,     0,     0,   166,     0,     0,   167,   166,
       0,   167,     0,   167,   220,   221,     0,   167,   166,   167,
       0,     0,   221,   316,   -77,     0,   -77,   -77,     0,     0,
       0,     0,   220,   -73,   -77,   -73,   -73,   -77,   -77,   266,
     166,     0,   166,   -73,     0,   220,   -73,   -73,     0,   -77,
       0,     0,   273,     0,   166,     0,     0,     0,     0,   -73,
       0,   166,     0,   -73,   166,     0,   166,     0,   220,     0,
     166,     0,   166,     0,   285,   220,   287,     0,     0,   115,
       0,   167,     0,   -67,     0,   -67,   249,     0,   298,     0,
       0,     0,     0,   -67,     0,   305,   -67,   -67,   306,     0,
     308,     0,   115,     0,   311,     0,   313,     0,     0,   115,
     -34,     0,   -34,   -67,   -34,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,   -34,   -34,     0,     0,   -34,   -34,
     -34,   -34,   -34,   -34,   166,     0,   -34,     0,   -34,     0,
       0,   -34,   -34,   -35,     0,   -35,     0,   -35,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,   182,   -35,
       0,   -35,     0,     0,   -35,   -35,   -33,     0,   -33,     0,
     -33,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,   -33,     0,   -33,     0,     0,   -33,   -33,   -36,
       0,   -36,     0,   -36,     0,     0,   -36,   -36,   129,   -36,
     -36,   -36,     0,   -36,   -36,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,   -36,     0,   -36,     0,     0,
     -36,   -36,   -32,     0,   -32,     0,   -32,     0,     0,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,
     -32,     0,     0,   -32,   -32,   -42,     0,   -42,     0,   -42,
       0,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,   -42,     0,   -42,     0,     0,   -42,   -42,   -43,     0,
     -43,     0,   -43,     0,     0,   -43,   -43,   -43,   -43,   -43,
     -43,     0,   -43,   -43,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -43,     0,   -43,     0,     0,   -43,
     -43,   -25,     0,   -25,     0,   -25,     0,     0,   -25,   -25,
     -25,   -25,   -25,   -25,     0,   -25,   -25,     0,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,     0,   -25,     0,   -25,
       0,     0,   -25,   -25,   -26,     0,   -26,     0,   -26,     0,
       0,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
     -26,     0,   -26,     0,     0,   -26,   -26,   -24,     0,   -24,
       0,   -24,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,   -24,   -24,     0,     0,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,   -24,     0,   -24,     0,     0,   -24,   -24,
     -23,     0,   -23,     0,   -23,     0,     0,   -23,   -23,   -23,
     -23,   -23,   -23,     0,   -23,   -23,     0,     0,   -23,   -23,
     -23,   -23,   -23,   -23,     0,     0,   -23,     0,   -23,     0,
       0,   -23,   -23,    -8,     0,    -8,     0,    -8,     0,     0,
      -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,     0,
       0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,    -8,
       0,    -8,     0,     0,    -8,    -8,   -40,     0,   -40,     0,
     -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,   -40,     0,   -40,     0,     0,   -40,   -40,   -41,
       0,   -41,     0,   -41,     0,     0,   -41,   -41,   -41,   -41,
     -41,   -41,     0,   -41,   -41,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,   -41,     0,   -41,     0,     0,
     -41,   -41,    -7,     0,    -7,     0,    -7,     0,     0,    -7,
      -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,     0,     0,
      -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,
      -7,     0,     0,    -7,    -7,   -36,     0,   -36,     0,   -36,
       0,     0,   -36,   -36,   331,   -36,   -36,   -36,     0,   -36,
     -36,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,
       0,   -36,     0,   -36,     0,     0,   -36,   -36,   -37,     0,
     -37,     0,   -37,     0,     0,   -37,   -37,   -37,   -37,   -37,
     -37,     0,   -37,   -37,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,   -37,     0,   -37,     0,     0,   -37,
     -37,   -31,     0,   -31,     0,   -31,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,   -31,   -31,     0,     0,   -31,
     -31,   -31,   -31,   -31,   -31,     0,     0,   -31,     0,   -31,
       0,     0,   -31,   -31,   -30,     0,   -30,     0,   -30,     0,
       0,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,     0,   -30,     0,     0,   -30,   -30,   -29,     0,   -29,
       0,   -29,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,   -29,   -29,     0,     0,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,   -29,     0,   -29,     0,     0,   -29,   -29,
     -12,     0,   -12,     0,   -12,     0,     0,   -12,   -12,   -12,
     -12,   -12,   -12,     0,   -12,   -12,     0,     0,   -12,   -12,
     -12,   -12,   -12,   -12,     0,     0,   -12,     0,   -12,     0,
       0,   -12,   -12,   -27,     0,   -27,     0,   -27,     0,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
       0,   -27,     0,     0,   -27,   -27,   -28,     0,   -28,     0,
     -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   -28,     0,   -28,     0,     0,   -28,   -28,   -19,
       0,   -19,     0,   -19,     0,     0,   -19,   -19,     0,   -19,
     -19,   -19,     0,   -19,   -19,     0,     0,   -19,   -19,   -19,
     -19,   -19,   -19,     0,     0,   -19,     0,   -19,     0,     0,
     -19,   -19,    29,     0,   153,     0,    30,     0,     0,    31,
      32,     0,    33,    34,    35,     0,    36,    37,     0,     0,
      38,    39,    40,    41,    42,    43,     0,     0,    44,     0,
      45,     0,     0,    46,    47,   -42,     0,   -42,     0,   -42,
       0,     0,   -42,   -42,     0,   -42,   -42,   -42,     0,   -42,
     -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,   -42,     0,   -42,     0,     0,   -42,   -42,   -43,     0,
     -43,     0,   -43,     0,     0,   -43,   -43,     0,   -43,   -43,
     -43,     0,   -43,   -43,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -43,     0,   -43,     0,     0,   -43,
     -43,   -20,     0,   -20,     0,   -20,     0,     0,   -20,   -20,
       0,   -20,   -20,   -20,     0,   -20,   -20,     0,     0,   -20,
     -20,   -20,   -20,   -20,   -20,     0,     0,   -20,     0,   -20,
       0,     0,   -20,   -20,   -21,     0,   -21,     0,   -21,     0,
       0,   -21,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,
       0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,   -21,     0,     0,   -21,   -21,   -22,     0,   -22,
       0,   -22,     0,     0,   -22,   -22,     0,   -22,   -22,   -22,
       0,   -22,   -22,     0,     0,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,   -22,     0,   -22,     0,     0,   -22,   -22,
     -25,     0,   -25,     0,   -25,     0,     0,   -25,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,     0,     0,   -25,   -25,
     -25,   -25,   -25,   -25,     0,     0,   -25,     0,   -25,     0,
       0,   -25,   -25,   -26,     0,   -26,     0,   -26,     0,     0,
     -26,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,     0,
       0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,
       0,   -26,     0,     0,   -26,   -26,   -24,     0,   -24,     0,
     -24,     0,     0,   -24,   -24,     0,   -24,   -24,   -24,     0,
     -24,   -24,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,   -24,     0,   -24,     0,     0,   -24,   -24,   -23,
       0,   -23,     0,   -23,     0,     0,   -23,   -23,     0,   -23,
     -23,   -23,     0,   -23,   -23,     0,     0,   -23,   -23,   -23,
     -23,   -23,   -23,     0,     0,   -23,     0,   -23,     0,     0,
     -23,   -23,   183,     0,   184,     0,    30,     0,     0,    31,
     185,     0,   186,   187,   188,     0,    36,    37,     0,     0,
      38,    39,    40,    41,    42,    43,     0,     0,    44,   -40,
     189,   -40,    96,   -40,    47,     0,   -40,   -40,     0,   -40,
     -40,   -40,     0,   -40,   -40,     0,     0,   -40,   -40,   -40,
     -40,   -40,   -40,     0,     0,   -40,     0,   -40,     0,     0,
     -40,   -40,   -41,     0,   -41,     0,   -41,     0,     0,   -41,
     -41,     0,   -41,   -41,   -41,     0,   -41,   -41,     0,     0,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,     0,
     -41,     0,     0,   -41,   -41,   -39,     0,   -39,     0,   -39,
       0,     0,   -39,   -39,     0,   -39,   -39,   -39,     0,   -39,
     -39,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,     0,
       0,   -39,   -38,   -39,   -38,   -39,   -38,   -39,     0,   -38,
     -38,     0,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,    29,
     -38,   153,   -38,    30,   -38,     0,    31,    32,     0,    33,
      34,    35,     0,    36,    37,     0,     0,    38,    39,    40,
      41,    42,    43,     0,     0,    44,     0,    45,     0,     0,
     141,    47,    29,     0,   153,     0,    30,     0,     0,    31,
      32,     0,    33,    34,    35,     0,    36,    37,     0,     0,
      38,    39,    40,    41,    42,    43,     0,     0,    44,   -37,
      45,   -37,   232,   -37,    47,     0,   -37,   -37,     0,   -37,
     -37,   -37,     0,   -37,   -37,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -37,     0,   -37,     0,     0,
     -37,   -37,   -31,     0,   -31,     0,   -31,     0,     0,   -31,
     -31,     0,   -31,   -31,   -31,     0,   -31,   -31,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,     0,
     -31,     0,     0,   -31,   -31,   -30,     0,   -30,     0,   -30,
       0,     0,   -30,   -30,     0,   -30,   -30,   -30,     0,   -30,
     -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,   -30,     0,   -30,     0,     0,   -30,   -30,   -29,     0,
     -29,     0,   -29,     0,     0,   -29,   -29,     0,   -29,   -29,
     -29,     0,   -29,   -29,     0,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,   -29,     0,   -29,     0,     0,   -29,
     -29,   -27,     0,   -27,     0,   -27,     0,     0,   -27,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,     0,     0,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,   -27,     0,   -27,
       0,     0,   -27,   -27,   -28,     0,   -28,     0,   -28,     0,
       0,   -28,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,
       0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
     -28,     0,   -28,     0,     0,   -28,   -28,   -34,     0,   -34,
       0,   -34,     0,     0,   -34,   -34,     0,   -34,   -34,   -34,
       0,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,     0,   -34,     0,     0,   -34,   -34,
     -35,     0,   -35,     0,   -35,     0,     0,   -35,   -35,     0,
     -35,   -35,   -35,     0,   -35,   -35,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,   -35,     0,   -35,     0,
       0,   -35,   -35,   -33,     0,   -33,     0,   -33,     0,     0,
     -33,   -33,     0,   -33,   -33,   -33,     0,   -33,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,
       0,   -33,     0,     0,   -33,   -33,    -8,     0,    -8,     0,
      -8,     0,     0,    -8,    -8,     0,    -8,    -8,    -8,     0,
      -8,    -8,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,    -8,     0,    -8,     0,     0,    -8,    -8,    29,
       0,   153,     0,    30,     0,     0,    31,    32,     0,    33,
      34,    35,     0,    36,    37,     0,     0,    38,    39,    40,
      41,    42,    43,     0,     0,    44,     0,    45,     0,     0,
     321,    47,    -7,     0,    -7,     0,    -7,     0,     0,    -7,
      -7,     0,    -7,    -7,    -7,     0,    -7,    -7,     0,     0,
      -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,
      -7,     0,     0,    -7,    -7,   -32,     0,   -32,     0,   -32,
       0,     0,   -32,   -32,     0,   -32,   -32,   -32,     0,   -32,
     -32,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,   -32,     0,   -32,     0,     0,   -32,   -32,    29,     0,
     153,     0,    30,     0,     0,    31,    32,     0,    33,    34,
      35,     0,    36,    37,     0,     0,    38,    39,    40,    41,
      42,    43,     0,     0,    44,     0,    45,     0,     0,   352,
      47,    29,     0,   153,     0,    30,     0,     0,    31,    32,
       0,    33,    34,    35,     0,    36,    37,     0,     0,    38,
      39,    40,    41,    42,    43,     0,     0,    44,     0,    45,
       0,     0,   353,    47,   -12,     0,   -12,     0,   -12,     0,
       0,   -12,   -12,     0,   -12,   -12,   -12,     0,   -12,   -12,
       0,     0,   -12,   -12,   -12,   -12,   -12,   -12,     0,     0,
     -12,     0,   -12,    29,     0,   -12,   -12,    30,     0,     0,
      31,     0,     0,     0,     0,     0,     0,    36,    37,     0,
       0,    38,    39,    40,    41,    42,    43,     0,     0,    44,
     101,    45,     0,     0,    30,    47,     0,    31,     0,     0,
       0,     0,     0,     0,    36,    37,     0,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,   228,   195,     0,
       0,    30,    47,     0,    31,     0,     0,     0,     0,     0,
       0,    36,    37,     0,     0,    38,    39,    40,    41,    42,
      43,     0,     0,    44,   183,   229,     0,     0,    30,    47,
       0,    31,     0,     0,     0,     0,     0,     0,    36,    37,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     0,
      44,   -43,   189,     0,     0,   -43,    47,     0,   -43,     0,
       0,     0,     0,     0,     0,   -43,   -43,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,   -43,   302,   -43,
       0,     0,    30,   -43,     0,    31,     0,     0,     0,     0,
       0,     0,    36,    37,     0,     0,    38,    39,    40,    41,
      42,    43,     0,     0,    44,   -41,   195,     0,     0,   -41,
      47,     0,   -41,     0,     0,     0,     0,     0,     0,   -41,
     -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,   -41,    94,   -41,     0,     0,   155,   -41,     0,   174,
       0,     0,     0,     0,     0,     0,   157,   158,     0,     0,
     159,   175,   176,   177,   160,   161,     0,   -71,   162,   -71,
     -71,     0,     0,   -66,   163,   -66,   279,   -71,     0,     0,
     -71,   -71,   -68,   -66,   -68,   -68,   -66,   -66,   -76,     0,
     -76,   -76,   -68,   -71,     0,   -68,   -68,   -71,   -76,   -66,
       0,   -76,   -76,   -66,     0,     0,     0,   -74,   -68,   -74,
     -74,     0,   -68,   -75,   -76,   -75,   -75,   -74,   -76,     0,
     -74,   -74,   -80,   -75,   -80,   -80,   -75,   -75,   -69,     0,
     -69,   -69,   -80,   -74,     0,   -80,   -80,   -74,   -69,   -75,
       0,   -69,   -69,   -75,     0,     0,     0,   -72,   -80,   -72,
     -72,     0,   -80,   -73,     0,   -73,   -73,   -72,   -69,     0,
     -72,   -72,   -71,   -73,   -71,   -71,   -73,   -73,   -66,     0,
     -66,   249,   -71,     0,     0,   -71,   -71,   -72,   -66,     0,
       0,   -66,   -66,   -73,     0,     0,   -68,     0,   -68,   -68,
       0,   -76,   -71,   -76,   -76,     0,   -68,     0,   -66,   -68,
     -68,   -76,     0,     0,   -76,   -76,     0,     0,     0,   -74,
       0,   -74,   -74,     0,     0,   -75,   -68,   -75,   -75,   -74,
       0,   -76,   -74,   -74,   -80,   -75,   -80,   -80,   -75,   -75,
       0,     0,     0,   155,   -80,     0,   174,   -80,   -80,   -74,
       0,     0,     0,   157,   158,   -75,     0,   159,   175,   176,
     177,   160,   161,   -42,   -80,   162,   -42,     0,     0,     0,
       0,   163,   144,   -42,   -42,     0,     0,   -42,   -42,   -42,
     -42,   -42,   -42,   -43,     0,   -42,   -43,     0,     0,     0,
       0,   -42,   -42,   -43,   -43,     0,     0,   -43,   -43,   -43,
     -43,   -43,   -43,   -41,     0,   -43,   -41,     0,     0,     0,
       0,   -43,   -43,   -41,   -41,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,   155,     0,   -41,   174,     0,     0,     0,
       0,   -41,   -41,   157,   158,     0,     0,   159,   175,   176,
     177,   160,   161,   209,     0,   162,   210,     0,     0,     0,
       0,   163,   348,   211,   212,     0,   155,   213,     0,   156,
       0,   214,   215,     0,     0,   216,   157,   158,     0,     0,
     159,   217,   -81,     0,   160,   161,   209,     0,   162,   210,
       0,     0,     0,     0,   163,     0,   211,   212,     0,    30,
     213,     0,   154,     0,   214,   215,     0,     0,   216,    36,
      37,     0,   155,     0,   217,   156,     0,    42,    43,     0,
       0,    44,   157,   158,     0,   209,     0,    47,   210,     0,
     160,   161,     0,     0,   162,   211,   212,     0,     0,     0,
     163,     0,     0,   214,   215,     0,   -78,   216,   -78,   -78,
       0,     0,   -79,   217,   -79,   -79,   -78,     0,     0,   -78,
     -78,     0,   -79,     0,     0,   -79,   -79,     0,     0,     0,
     -67,   -78,   -67,    92,     0,     0,   -69,   -79,   -69,   -69,
     -67,     0,     0,   -67,   -67,     0,   -69,     0,     0,   -69,
     -69,     0,     0,     0,   -72,   -67,   -72,   -72,     0,     0,
     -73,   -69,   -73,   -73,   -72,     0,     0,   -72,   -72,     0,
     -73,     0,     0,   -73,   -73,     0,     0,     0,   -71,   -72,
     -71,   -71,     0,     0,   -66,   -73,   -66,    92,   -71,     0,
       0,   -71,   -71,     0,   -66,     0,     0,   -66,   -66,     0,
       0,     0,   -68,   -71,   -68,   -68,     0,     0,   -76,   -66,
     -76,   -76,   -68,     0,     0,   -68,   -68,     0,   -76,     0,
       0,   -76,   -76,     0,     0,     0,   -74,   -68,   -74,   -74,
       0,     0,   -75,   -76,   -75,   -75,   -74,     0,     0,   -74,
     -74,     0,   -75,     0,     0,   -75,   -75,     0,     0,     0,
     -80,   -74,   -80,   -80,     0,     0,     0,   -75,     0,     0,
     -80,     0,     0,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -80
};

static const yytype_int16 yycheck[] =
{
       2,    34,    27,    71,    71,    13,    71,     2,    82,   238,
       1,    96,     3,   153,     1,    14,    29,    30,    17,     1,
      33,     8,     8,     5,   244,    27,     8,   256,    71,    72,
      73,    30,    27,    15,    16,    34,     4,    19,     6,    72,
      73,    23,    24,    34,   184,    27,    14,   267,    72,    17,
      18,    33,    30,     1,   274,     0,    34,     5,     1,   102,
       8,    29,    14,   131,   131,     8,   131,    15,    16,   102,
       4,    19,    20,    21,    22,    23,    24,    14,    30,    27,
      14,    29,    34,    17,    18,    33,    34,     4,   131,     6,
       7,    14,    29,    14,    17,    29,    31,    14,    34,     1,
      17,    18,    14,   128,   129,   130,     8,   132,   133,    30,
       4,    34,    29,    34,    14,    31,    33,    17,    35,   144,
      14,    14,    34,    17,    18,   150,   128,   129,   130,    29,
     132,   133,     8,   128,   129,   130,    30,   132,   133,    30,
      34,    34,   144,    34,   187,   153,    31,   232,   150,   144,
      14,    38,    14,    14,   187,   150,     4,    31,     6,     7,
      47,     4,     8,     6,     7,    29,    14,     3,    30,    17,
      18,    14,    34,    34,    17,    18,   184,   251,   252,    25,
      26,    33,     4,    70,    71,    33,    34,    35,    75,    76,
      77,    34,    14,    80,    33,    17,    18,     4,    85,    86,
      87,    88,    89,    90,    91,    92,    33,    14,    30,    72,
      17,    18,    34,    30,   257,   258,    29,    34,     4,    14,
       6,     7,    14,     0,   257,   258,     3,    34,    14,    33,
      38,    17,    18,   257,    29,    72,     4,   322,     6,    47,
      33,     4,    34,     6,   131,   330,    14,    33,    34,    17,
      18,    14,    30,   140,    17,    18,    34,   282,    14,    33,
     303,    29,    70,    71,    33,   333,   333,    75,   333,    77,
     303,    34,   159,    33,    30,    14,   163,    85,    34,    87,
     282,    29,    30,     4,    14,     6,     7,   282,   331,   332,
     333,   334,   335,    14,    14,    34,    17,    18,   331,   332,
      30,   334,   335,     0,    34,   348,     3,   331,   332,    30,
     334,   335,   355,    34,    34,   348,    33,   204,    14,   344,
     345,   208,   355,   131,   348,    14,   213,    14,    17,    18,
     217,   355,   140,    14,     0,    29,    14,     3,    34,    17,
      18,    30,   344,   345,   231,    34,    29,    34,    29,   344,
     345,   159,   239,   240,   241,   163,    34,   244,   245,   246,
     247,   248,   249,   250,     0,    14,   253,     3,    17,    18,
      33,    14,    35,   260,    47,    14,   263,   264,   265,    14,
     267,    30,   269,   270,   271,    34,    29,   274,   275,   276,
     277,   278,   279,    14,   257,    34,   204,    70,    71,    34,
     208,    33,    75,    76,    77,   213,    14,    29,     4,   217,
       6,     7,    85,    34,     4,     8,     6,     7,    14,    92,
     257,    17,    18,   231,    14,    34,    34,    17,    18,    14,
      34,   239,     5,   241,    30,     8,   244,    33,    34,    34,
      30,    29,    15,    16,    34,   253,   333,    29,    30,    34,
      23,    24,   260,    47,    27,   263,    34,   265,   131,   267,
      33,   269,     0,   271,    34,     3,   274,   140,   331,   332,
      34,   334,   335,    14,     4,    30,    70,    71,    34,    34,
      14,    75,    76,    77,    14,   348,   159,    17,    18,    14,
     163,    85,   355,    34,   331,   332,    29,   334,   335,    29,
      34,   129,   130,    34,   132,   133,    29,    30,    14,    34,
      33,   348,    34,     4,     0,     6,   144,     3,   355,    33,
       4,    14,   150,    14,    34,   333,    17,    18,    34,    14,
      14,   204,    47,    17,    18,   208,    33,   131,    35,    30,
     213,    34,     0,    34,   217,     3,   140,    34,    14,    34,
      34,    17,    18,    34,     0,    70,    71,     3,   231,    29,
      75,    76,    77,    29,    33,   159,   239,   240,   241,   163,
      85,   244,   245,   246,   247,   248,   249,    29,    30,    14,
     253,    34,    17,    18,    33,    14,    33,   260,    17,    18,
     263,   264,   265,    33,   267,    33,   269,   270,   271,    34,
      29,   274,   275,   276,   277,   278,   279,    33,    34,    33,
     204,    29,    30,    34,   208,    34,   131,     1,    34,   213,
      33,     5,    33,   217,     8,   140,    29,    30,     4,   257,
       6,    15,    16,    29,    29,    19,    33,   231,    14,    23,
      24,    17,    18,    27,   159,   239,   240,   241,   163,    33,
     244,   245,   246,   247,   248,   249,    33,    31,    34,   253,
     333,    33,    29,    34,    34,    34,   260,    33,    33,   263,
     264,   265,    34,   267,    34,   269,   270,   271,    33,    33,
     274,   275,   276,   277,   278,   279,    33,   185,    34,   204,
      34,    34,    34,   208,    34,    31,    34,    34,   213,    34,
      -1,    34,   217,   331,   332,    34,   334,   335,    34,    34,
      34,    34,    34,    47,    34,    34,   231,    34,    34,    25,
     348,    -1,    -1,    -1,   239,   240,   241,   355,    -1,   244,
     245,   246,   247,   248,   249,    -1,    70,    71,   253,   333,
      -1,    75,    -1,    77,    -1,   260,    -1,    -1,   263,   264,
     265,    85,   267,    -1,   269,   270,   271,    91,    -1,   274,
     275,   276,   277,   278,   279,     4,    47,     6,     7,    -1,
       4,    -1,     6,     7,    -1,    14,    -1,    -1,    17,    18,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    70,
      71,    30,    -1,    -1,    75,    34,    77,   131,    -1,    -1,
      34,    -1,    -1,    -1,    85,    -1,   140,    -1,    -1,    90,
      -1,    -1,     1,    -1,    -1,    -1,     5,    -1,   333,     8,
      -1,    -1,    -1,    -1,    -1,   159,    15,    16,    -1,   163,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,     4,
      29,     6,     7,    -1,    33,    34,    -1,    -1,    -1,    14,
     131,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    47,     4,    -1,     6,    30,    -1,    -1,    -1,    34,
     204,    -1,    14,    -1,   208,    17,    18,    -1,   159,   213,
      -1,    -1,   163,   217,    70,    71,    -1,    -1,    30,    75,
      -1,    77,    34,    -1,    -1,    -1,    -1,   231,    -1,    85,
      -1,    -1,    -1,    89,    -1,   239,     5,   241,    -1,     8,
     244,   245,   246,   247,   248,    -1,    15,    16,    -1,   253,
      19,    -1,    -1,   204,    23,    24,   260,   208,    27,   263,
      -1,   265,   213,   267,    33,   269,   217,   271,    -1,    -1,
     274,   275,   276,   277,   278,   131,    -1,    -1,    -1,    -1,
     231,    -1,    -1,    -1,   140,    -1,    -1,    -1,   239,    -1,
     241,    -1,    -1,   244,   245,   246,   247,    -1,    -1,    -1,
      -1,    -1,   253,   159,    -1,    -1,    -1,   163,    -1,   260,
      -1,    -1,   263,    -1,   265,    47,   267,    -1,   269,    -1,
     271,    -1,    -1,   274,   275,   276,   277,    -1,    -1,   333,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      -1,    -1,    -1,    75,    -1,    77,    -1,    -1,   204,    -1,
      -1,    -1,   208,    85,    -1,    -1,    88,   213,    -1,    -1,
      -1,   217,    -1,     4,    -1,     6,     7,    -1,    47,    -1,
      -1,    -1,    -1,    14,    -1,   231,    17,    18,    -1,    -1,
      -1,    -1,   333,   239,    -1,   241,    -1,    -1,   244,   245,
     246,    70,    71,    34,    -1,    -1,    75,   253,    77,   131,
      -1,    -1,    47,    -1,   260,    -1,    85,   263,   140,   265,
      -1,   267,    -1,   269,    -1,   271,    -1,    -1,   274,   275,
     276,    -1,    -1,    -1,    -1,    70,    71,   159,    -1,    -1,
      75,   163,    77,     4,    -1,     6,     7,    -1,    -1,    -1,
      85,    86,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,    -1,   131,    -1,     4,    -1,     6,     7,    -1,    30,
      -1,   140,    -1,    34,    14,    -1,    -1,    17,    18,    -1,
      -1,    -1,   204,    -1,    -1,    -1,   208,   333,    -1,    29,
     159,   213,    -1,    33,   163,   217,   131,    -1,    -1,    -1,
       4,    -1,     6,     7,    -1,   140,    -1,    -1,    -1,   231,
      14,    -1,    -1,    17,    18,    -1,    -1,   239,    -1,   241,
      -1,    -1,   244,   245,    -1,    -1,    30,    -1,   163,    -1,
      34,   253,    -1,    -1,    -1,   204,    -1,    -1,   260,   208,
      -1,   263,    -1,   265,   213,   267,    -1,   269,   217,   271,
      -1,    -1,   274,   275,     4,    -1,     6,     7,    -1,    -1,
      -1,    -1,   231,     4,    14,     6,     7,    17,    18,   204,
     239,    -1,   241,    14,    -1,   244,    17,    18,    -1,    29,
      -1,    -1,   217,    -1,   253,    -1,    -1,    -1,    -1,    30,
      -1,   260,    -1,    34,   263,    -1,   265,    -1,   267,    -1,
     269,    -1,   271,    -1,   239,   274,   241,    -1,    -1,   244,
      -1,   333,    -1,     4,    -1,     6,     7,    -1,   253,    -1,
      -1,    -1,    -1,    14,    -1,   260,    17,    18,   263,    -1,
     265,    -1,   267,    -1,   269,    -1,   271,    -1,    -1,   274,
       1,    -1,     3,    34,     5,    -1,    -1,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,   333,    -1,    27,    -1,    29,    -1,
      -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,   333,    27,
      -1,    29,    -1,    -1,    32,    33,     1,    -1,     3,    -1,
       5,    -1,    -1,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,
      -1,     3,    -1,     5,    -1,    -1,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,
      -1,    -1,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,
       3,    -1,     5,    -1,    -1,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,
      33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,     3,
      -1,     5,    -1,    -1,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,
       1,    -1,     3,    -1,     5,    -1,    -1,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    32,    33,     1,    -1,     3,    -1,
       5,    -1,    -1,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,
      -1,     3,    -1,     5,    -1,    -1,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,
      -1,    -1,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,
       3,    -1,     5,    -1,    -1,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,
      33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,
      -1,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,     3,
      -1,     5,    -1,    -1,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,
       1,    -1,     3,    -1,     5,    -1,    -1,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    32,    33,     1,    -1,     3,    -1,
       5,    -1,    -1,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,
      -1,     3,    -1,     5,    -1,    -1,     8,     9,    -1,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,
       9,    -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,
      -1,    -1,     8,     9,    -1,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,
       3,    -1,     5,    -1,    -1,     8,     9,    -1,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,
      33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,     9,
      -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,
      -1,     8,     9,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,     3,
      -1,     5,    -1,    -1,     8,     9,    -1,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,
       1,    -1,     3,    -1,     5,    -1,    -1,     8,     9,    -1,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,
       8,     9,    -1,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    32,    33,     1,    -1,     3,    -1,
       5,    -1,    -1,     8,     9,    -1,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,
      -1,     3,    -1,     5,    -1,    -1,     8,     9,    -1,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,
       9,    -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,     1,
      29,     3,    31,     5,    33,    -1,     8,     9,    -1,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,
       9,    -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,
      -1,    -1,     8,     9,    -1,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,     1,    29,     3,    31,     5,    33,    -1,     8,
       9,    -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,     1,
      29,     3,    31,     5,    33,    -1,     8,     9,    -1,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,
       9,    -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,     1,
      29,     3,    31,     5,    33,    -1,     8,     9,    -1,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,
       9,    -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,
      -1,    -1,     8,     9,    -1,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,
       3,    -1,     5,    -1,    -1,     8,     9,    -1,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,
      33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,     9,
      -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,
      -1,     8,     9,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,     3,
      -1,     5,    -1,    -1,     8,     9,    -1,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,
       1,    -1,     3,    -1,     5,    -1,    -1,     8,     9,    -1,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,
       8,     9,    -1,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    -1,    32,    33,     1,    -1,     3,    -1,
       5,    -1,    -1,     8,     9,    -1,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,
      -1,     3,    -1,     5,    -1,    -1,     8,     9,    -1,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,
       9,    -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,
      -1,    -1,     8,     9,    -1,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,
       3,    -1,     5,    -1,    -1,     8,     9,    -1,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,
      33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,     9,
      -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,
      -1,     8,     9,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    29,     1,    -1,    32,    33,     5,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
       1,    29,    -1,    -1,     5,    33,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,     1,    29,    -1,
      -1,     5,    33,    -1,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,     1,    29,    -1,    -1,     5,    33,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,     1,    29,    -1,    -1,     5,    33,    -1,     8,    -1,
      -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,     1,    29,
      -1,    -1,     5,    33,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,     1,    29,    -1,    -1,     5,
      33,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,     1,    29,    -1,    -1,     5,    33,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,     4,    27,     6,
       7,    -1,    -1,     4,    33,     6,     7,    14,    -1,    -1,
      17,    18,     4,    14,     6,     7,    17,    18,     4,    -1,
       6,     7,    14,    30,    -1,    17,    18,    34,    14,    30,
      -1,    17,    18,    34,    -1,    -1,    -1,     4,    30,     6,
       7,    -1,    34,     4,    30,     6,     7,    14,    34,    -1,
      17,    18,     4,    14,     6,     7,    17,    18,     4,    -1,
       6,     7,    14,    30,    -1,    17,    18,    34,    14,    30,
      -1,    17,    18,    34,    -1,    -1,    -1,     4,    30,     6,
       7,    -1,    34,     4,    -1,     6,     7,    14,    34,    -1,
      17,    18,     4,    14,     6,     7,    17,    18,     4,    -1,
       6,     7,    14,    -1,    -1,    17,    18,    34,    14,    -1,
      -1,    17,    18,    34,    -1,    -1,     4,    -1,     6,     7,
      -1,     4,    34,     6,     7,    -1,    14,    -1,    34,    17,
      18,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,     4,
      -1,     6,     7,    -1,    -1,     4,    34,     6,     7,    14,
      -1,    34,    17,    18,     4,    14,     6,     7,    17,    18,
      -1,    -1,    -1,     5,    14,    -1,     8,    17,    18,    34,
      -1,    -1,    -1,    15,    16,    34,    -1,    19,    20,    21,
      22,    23,    24,     5,    34,    27,     8,    -1,    -1,    -1,
      -1,    33,    34,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,     5,    -1,    27,     8,    -1,    -1,    -1,
      -1,    33,    34,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,     5,    -1,    27,     8,    -1,    -1,    -1,
      -1,    33,    34,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,     5,    -1,    27,     8,    -1,    -1,    -1,
      -1,    33,    34,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,     5,    -1,    27,     8,    -1,    -1,    -1,
      -1,    33,    34,    15,    16,    -1,     5,    19,    -1,     8,
      -1,    23,    24,    -1,    -1,    27,    15,    16,    -1,    -1,
      19,    33,    34,    -1,    23,    24,     5,    -1,    27,     8,
      -1,    -1,    -1,    -1,    33,    -1,    15,    16,    -1,     5,
      19,    -1,     8,    -1,    23,    24,    -1,    -1,    27,    15,
      16,    -1,     5,    -1,    33,     8,    -1,    23,    24,    -1,
      -1,    27,    15,    16,    -1,     5,    -1,    33,     8,    -1,
      23,    24,    -1,    -1,    27,    15,    16,    -1,    -1,    -1,
      33,    -1,    -1,    23,    24,    -1,     4,    27,     6,     7,
      -1,    -1,     4,    33,     6,     7,    14,    -1,    -1,    17,
      18,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
       4,    29,     6,     7,    -1,    -1,     4,    29,     6,     7,
      14,    -1,    -1,    17,    18,    -1,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,     4,    29,     6,     7,    -1,    -1,
       4,    29,     6,     7,    14,    -1,    -1,    17,    18,    -1,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,     4,    29,
       6,     7,    -1,    -1,     4,    29,     6,     7,    14,    -1,
      -1,    17,    18,    -1,    14,    -1,    -1,    17,    18,    -1,
      -1,    -1,     4,    29,     6,     7,    -1,    -1,     4,    29,
       6,     7,    14,    -1,    -1,    17,    18,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,     4,    29,     6,     7,
      -1,    -1,     4,    29,     6,     7,    14,    -1,    -1,    17,
      18,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
       4,    29,     6,     7,    -1,    -1,    -1,    29,    -1,    -1,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    38,     0,     3,    39,    40,    43,     1,     8,
      41,    42,    29,    30,    33,    44,    42,     1,     3,    34,
      45,    46,    31,    34,     8,    30,    34,    47,    46,     1,
       5,     8,     9,    11,    12,    13,    15,    16,    19,    20,
      21,    22,    23,    24,    27,    29,    32,    33,    40,    43,
      48,    49,    51,    53,    54,    55,    56,    57,    58,    59,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      33,    33,    52,    33,    54,    33,    33,    33,    57,    62,
      33,    33,    33,    61,    29,    33,    35,    14,    17,    18,
       4,     6,     7,    61,     1,    55,    31,    40,    43,    48,
      50,     1,    54,     1,    61,    68,    61,     8,    57,     8,
      25,    26,    60,    60,    34,    61,    71,    72,    61,    62,
      64,    65,    66,    67,    68,    34,    34,    34,    47,    10,
      34,    54,    34,    34,    34,    34,    34,    34,    34,    34,
      30,    32,    50,    50,    34,    55,    50,    50,    61,    50,
      34,    50,     8,     3,     8,     5,     8,    15,    16,    19,
      23,    24,    27,    33,    57,    62,    63,    64,    65,    66,
      67,    68,    69,    70,     8,    20,    21,    22,    56,    57,
      58,    59,    61,     1,     3,     9,    11,    12,    13,    29,
      49,    51,    53,    54,    55,    29,    55,     5,     8,    15,
      16,    23,    24,    27,    33,    57,    69,    70,    14,     5,
       8,    15,    16,    19,    23,    24,    27,    33,    57,    62,
      63,    64,    65,    66,    67,    68,    69,    70,     1,    29,
      55,    14,    31,    40,    43,    48,     1,    41,    42,    33,
      33,    33,    62,    61,    33,    17,    18,     4,     6,     7,
      33,    33,    33,    35,     1,    41,    42,    52,    33,    54,
      33,    29,    29,    33,    33,    33,    61,    33,    62,    33,
      33,    33,    62,    61,    33,    17,    18,     4,     6,     7,
      29,    62,    47,    29,    44,    61,    68,    61,    34,    71,
      64,    65,    66,    67,    68,    57,    60,    60,    61,    29,
      44,    50,     1,    54,     1,    61,    61,    68,    61,    34,
      71,    61,    68,    61,    34,    71,    64,    65,    66,    67,
      68,    32,    31,    34,    34,    34,    34,    34,    34,    34,
      31,    10,    34,    54,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    47,    47,    50,    50,    34,    55,
      50,    50,    32,    32,    50,    34,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    43,    44,    44,    44,    45,    45,    46,    47,
      47,    47,    47,    48,    48,    48,    48,    49,    49,    49,
      49,    49,    50,    50,    50,    50,    51,    51,    52,    52,
      53,    54,    54,    54,    55,    55,    55,    55,    56,    57,
      58,    59,    59,    60,    60,    60,    61,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      70,    71,    71,    72,    72
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     3,     2,     3,
       1,     1,     6,     2,     3,     3,     3,     1,     2,     0,
       2,     2,     2,     1,     1,     1,     1,     6,     7,     5,
       5,     5,     3,     1,     1,     1,     3,     5,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     4,     4,     1,     1,     1,     3,     1,     2,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       1,     3,     1,     1,     4,     4,     4,     1,     1,     1,
       4,     0,     1,     3,     1
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
    case 8: /* ID  */
#line 53 "syntactic.y"
            {free(((*yyvaluep).sval));}
#line 2009 "syntactic.tab.c"
        break;

    case 26: /* STRING  */
#line 54 "syntactic.y"
            {free(((*yyvaluep).sval));}
#line 2015 "syntactic.tab.c"
        break;

    case 38: /* program  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2021 "syntactic.tab.c"
        break;

    case 39: /* declaration  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2027 "syntactic.tab.c"
        break;

    case 40: /* varDecl  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2033 "syntactic.tab.c"
        break;

    case 41: /* varList  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2039 "syntactic.tab.c"
        break;

    case 42: /* new_id  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2045 "syntactic.tab.c"
        break;

    case 43: /* funcDecl  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2051 "syntactic.tab.c"
        break;

    case 44: /* arguments  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2057 "syntactic.tab.c"
        break;

    case 45: /* argsList  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2063 "syntactic.tab.c"
        break;

    case 46: /* arg  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2069 "syntactic.tab.c"
        break;

    case 47: /* funcBody  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2075 "syntactic.tab.c"
        break;

    case 48: /* stmt  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2081 "syntactic.tab.c"
        break;

    case 49: /* iterStmt  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2087 "syntactic.tab.c"
        break;

    case 50: /* body  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2093 "syntactic.tab.c"
        break;

    case 51: /* condStmt  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2099 "syntactic.tab.c"
        break;

    case 52: /* cond  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2105 "syntactic.tab.c"
        break;

    case 53: /* returnStmt  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2111 "syntactic.tab.c"
        break;

    case 54: /* exprStmt  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2117 "syntactic.tab.c"
        break;

    case 55: /* expression  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2123 "syntactic.tab.c"
        break;

    case 56: /* assign  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2129 "syntactic.tab.c"
        break;

    case 57: /* var  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2135 "syntactic.tab.c"
        break;

    case 58: /* inExpr  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2141 "syntactic.tab.c"
        break;

    case 59: /* outExpr  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2147 "syntactic.tab.c"
        break;

    case 60: /* output  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2153 "syntactic.tab.c"
        break;

    case 61: /* simpleExpr  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2159 "syntactic.tab.c"
        break;

    case 62: /* negExpr  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2165 "syntactic.tab.c"
        break;

    case 63: /* disjExpr  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2171 "syntactic.tab.c"
        break;

    case 64: /* conjExpr  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2177 "syntactic.tab.c"
        break;

    case 65: /* relExpr  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2183 "syntactic.tab.c"
        break;

    case 66: /* artExpr1  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2189 "syntactic.tab.c"
        break;

    case 67: /* artExpr2  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2195 "syntactic.tab.c"
        break;

    case 68: /* factor  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2201 "syntactic.tab.c"
        break;

    case 69: /* constant  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2207 "syntactic.tab.c"
        break;

    case 70: /* call  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2213 "syntactic.tab.c"
        break;

    case 71: /* params  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2219 "syntactic.tab.c"
        break;

    case 72: /* paramList  */
#line 52 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2225 "syntactic.tab.c"
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
#line 65 "syntactic.y"
                                                                {root = (yyvsp[0].tnode);}
#line 2495 "syntactic.tab.c"
    break;

  case 3:
#line 68 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2501 "syntactic.tab.c"
    break;

  case 4:
#line 69 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2507 "syntactic.tab.c"
    break;

  case 5:
#line 72 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2513 "syntactic.tab.c"
    break;

  case 6:
#line 73 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2519 "syntactic.tab.c"
    break;

  case 7:
#line 76 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = UnaryNode(VARDECL, (yyvsp[-1].tnode));
                                                                  setVarsType((yyvsp[-1].tnode), (yyvsp[-2].ival));
                                                                  insertGlobalLeafs((yyvsp[-1].tnode));
                                                                }
#line 2529 "syntactic.tab.c"
    break;

  case 8:
#line 81 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2535 "syntactic.tab.c"
    break;

  case 9:
#line 84 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2541 "syntactic.tab.c"
    break;

  case 10:
#line 85 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2547 "syntactic.tab.c"
    break;

  case 11:
#line 88 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));
                                                                  (yyval.tnode)->leaf->is_decl = 1;
                                                                }
#line 2556 "syntactic.tab.c"
    break;

  case 12:
#line 94 "syntactic.y"
                                                                {
                                                                  (yyvsp[-4].tnode)->leaf->ref->sym_kind = FUNCTION;
                                                                  (yyvsp[-4].tnode)->leaf->ref->return_type = (yyvsp[-5].ival);
                                                                  (yyvsp[-4].tnode)->leaf->ref->n_args = countArgs((yyvsp[-3].tnode), 0);
                                                                  (yyvsp[-4].tnode)->leaf->ref->args_type = malloc(sizeof(int)*(yyvsp[-4].tnode)->leaf->ref->n_args);
                                                                  setArgsInfo((yyvsp[-4].tnode)->leaf->ref, (yyvsp[-3].tnode), 0);

                                                                  insertInScope((yyvsp[-4].tnode)->leaf->ref, global_scope);


                                                                  (yyval.tnode) = TernaryNode(FUNCDECL, (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[-1].tnode));
                                                                  (yyval.tnode)->internal->ref = (yyvsp[-4].tnode)->leaf->ref;

                                                                  table *func_scope = createNewScope((yyvsp[-4].tnode)->leaf->ref->identifier);
                                                                  pushScope(func_scope);
                                                                  insertLeafs(func_scope, (yyvsp[-3].tnode));
                                                                  insertLeafs(func_scope, (yyvsp[-1].tnode));
                                                                  checkLeafsParams((yyvsp[-1].tnode));
                                                                }
#line 2580 "syntactic.tab.c"
    break;

  case 13:
#line 116 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2586 "syntactic.tab.c"
    break;

  case 14:
#line 117 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2592 "syntactic.tab.c"
    break;

  case 15:
#line 118 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2598 "syntactic.tab.c"
    break;

  case 16:
#line 121 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2604 "syntactic.tab.c"
    break;

  case 17:
#line 122 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2610 "syntactic.tab.c"
    break;

  case 18:
#line 125 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level+1));
                                                                  (yyval.tnode)->leaf->is_decl = 1;
                                                                  (yyval.tnode)->leaf->ref->sym_kind = VARIABLE;
                                                                  (yyval.tnode)->leaf->ref->var_type = (yyvsp[-1].ival);
                                                                }
#line 2621 "syntactic.tab.c"
    break;

  case 19:
#line 133 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2627 "syntactic.tab.c"
    break;

  case 20:
#line 134 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2633 "syntactic.tab.c"
    break;

  case 21:
#line 135 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2639 "syntactic.tab.c"
    break;

  case 22:
#line 136 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2645 "syntactic.tab.c"
    break;

  case 23:
#line 139 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2651 "syntactic.tab.c"
    break;

  case 24:
#line 140 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2657 "syntactic.tab.c"
    break;

  case 25:
#line 141 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2663 "syntactic.tab.c"
    break;

  case 26:
#line 142 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2669 "syntactic.tab.c"
    break;

  case 27:
#line 145 "syntactic.y"
                                                                {(yyval.tnode) = TernaryNode(FOR1, (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2675 "syntactic.tab.c"
    break;

  case 28:
#line 146 "syntactic.y"
                                                                {(yyval.tnode) = QuaternaryNode(FOR2, (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2681 "syntactic.tab.c"
    break;

  case 29:
#line 147 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(FORALL, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2687 "syntactic.tab.c"
    break;

  case 30:
#line 148 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(FORALL, nullLeaf(), (yyvsp[0].tnode)); yyerrok;}
#line 2693 "syntactic.tab.c"
    break;

  case 31:
#line 149 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(FOR, nullLeaf(), (yyvsp[0].tnode)); yyerrok;}
#line 2699 "syntactic.tab.c"
    break;

  case 32:
#line 153 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2705 "syntactic.tab.c"
    break;

  case 33:
#line 154 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2711 "syntactic.tab.c"
    break;

  case 34:
#line 155 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2717 "syntactic.tab.c"
    break;

  case 35:
#line 156 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2723 "syntactic.tab.c"
    break;

  case 36:
#line 160 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(IF, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2729 "syntactic.tab.c"
    break;

  case 37:
#line 161 "syntactic.y"
                                                                {(yyval.tnode) = TernaryNode(IF_ELSE, (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2735 "syntactic.tab.c"
    break;

  case 38:
#line 164 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2741 "syntactic.tab.c"
    break;

  case 39:
#line 165 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2747 "syntactic.tab.c"
    break;

  case 40:
#line 168 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(RETURN, (yyvsp[0].tnode));}
#line 2753 "syntactic.tab.c"
    break;

  case 41:
#line 171 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2759 "syntactic.tab.c"
    break;

  case 42:
#line 172 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2765 "syntactic.tab.c"
    break;

  case 43:
#line 173 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2771 "syntactic.tab.c"
    break;

  case 44:
#line 176 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2777 "syntactic.tab.c"
    break;

  case 45:
#line 177 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2783 "syntactic.tab.c"
    break;

  case 46:
#line 178 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2789 "syntactic.tab.c"
    break;

  case 47:
#line 179 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2795 "syntactic.tab.c"
    break;

  case 48:
#line 182 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ASSIGN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2801 "syntactic.tab.c"
    break;

  case 49:
#line 185 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));}
#line 2807 "syntactic.tab.c"
    break;

  case 50:
#line 188 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(READ, (yyvsp[-1].tnode));}
#line 2813 "syntactic.tab.c"
    break;

  case 51:
#line 191 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITE, (yyvsp[-1].tnode));}
#line 2819 "syntactic.tab.c"
    break;

  case 52:
#line 192 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITELN, (yyvsp[-1].tnode));}
#line 2825 "syntactic.tab.c"
    break;

  case 53:
#line 195 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));}
#line 2831 "syntactic.tab.c"
    break;

  case 54:
#line 196 "syntactic.y"
                                                                {(yyval.tnode) = charLeaf((yyvsp[0].cval));}
#line 2837 "syntactic.tab.c"
    break;

  case 55:
#line 197 "syntactic.y"
                                                                {(yyval.tnode) = stringLeaf((yyvsp[0].sval));}
#line 2843 "syntactic.tab.c"
    break;

  case 56:
#line 200 "syntactic.y"
                                                                 {(yyval.tnode) = BinaryNode(IN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2849 "syntactic.tab.c"
    break;

  case 57:
#line 201 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2855 "syntactic.tab.c"
    break;

  case 58:
#line 204 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(NEG, (yyvsp[0].tnode));}
#line 2861 "syntactic.tab.c"
    break;

  case 59:
#line 205 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2867 "syntactic.tab.c"
    break;

  case 60:
#line 208 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(DISJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2873 "syntactic.tab.c"
    break;

  case 61:
#line 209 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2879 "syntactic.tab.c"
    break;

  case 62:
#line 212 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(CONJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2885 "syntactic.tab.c"
    break;

  case 63:
#line 213 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2891 "syntactic.tab.c"
    break;

  case 64:
#line 216 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(RELOP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2897 "syntactic.tab.c"
    break;

  case 65:
#line 217 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2903 "syntactic.tab.c"
    break;

  case 66:
#line 220 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP1, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2909 "syntactic.tab.c"
    break;

  case 67:
#line 221 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2915 "syntactic.tab.c"
    break;

  case 68:
#line 224 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP2, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2921 "syntactic.tab.c"
    break;

  case 69:
#line 225 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2927 "syntactic.tab.c"
    break;

  case 70:
#line 230 "syntactic.y"
                                                                 {(yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));}
#line 2933 "syntactic.tab.c"
    break;

  case 71:
#line 231 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2939 "syntactic.tab.c"
    break;

  case 72:
#line 232 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2945 "syntactic.tab.c"
    break;

  case 73:
#line 233 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2951 "syntactic.tab.c"
    break;

  case 74:
#line 234 "syntactic.y"
                                                                 {(yyval.tnode) = UnaryNode(IS_SET, (yyvsp[-1].tnode));}
#line 2957 "syntactic.tab.c"
    break;

  case 75:
#line 235 "syntactic.y"
                                                                 {(yyval.tnode) = UnaryNode(EXISTS, (yyvsp[-1].tnode));}
#line 2963 "syntactic.tab.c"
    break;

  case 76:
#line 236 "syntactic.y"
                                                                 {(yyval.tnode) = UnaryNode(SETOP, (yyvsp[-1].tnode));  (yyval.tnode)->internal->op_specifier = (yyvsp[-3].ival);}
#line 2969 "syntactic.tab.c"
    break;

  case 77:
#line 239 "syntactic.y"
                                                                {(yyval.tnode) = intLeaf((yyvsp[0].ival));}
#line 2975 "syntactic.tab.c"
    break;

  case 78:
#line 240 "syntactic.y"
                                                                {(yyval.tnode) = floatLeaf((yyvsp[0].fval));}
#line 2981 "syntactic.tab.c"
    break;

  case 79:
#line 241 "syntactic.y"
                                                                {(yyval.tnode) = setLeaf();}
#line 2987 "syntactic.tab.c"
    break;

  case 80:
#line 244 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(CALL, (yyvsp[-3].tnode), (yyvsp[-1].tnode));}
#line 2993 "syntactic.tab.c"
    break;

  case 81:
#line 249 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2999 "syntactic.tab.c"
    break;

  case 82:
#line 250 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3005 "syntactic.tab.c"
    break;

  case 83:
#line 253 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3011 "syntactic.tab.c"
    break;

  case 84:
#line 254 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3017 "syntactic.tab.c"
    break;


#line 3021 "syntactic.tab.c"

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
#line 259 "syntactic.y"

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
    initTablesList();
    yyparse();

    bindLevel(root, 0, 0);
    printTree(root);
    showAllTables();

    fclose(yyin);
    yylex_destroy();
    freeTables();
    freeTree(root);

    return 0;
}
