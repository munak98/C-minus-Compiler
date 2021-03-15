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
#line 2 "semantic.y"

#include "../include/symbtable.h"
#include "../include/tree_new.h"
#include <stdio.h>
#include <stdlib.h>



void yyerror(const char *s);
extern int yylex();
extern int yylex_destroy();
extern int yyparse();
extern FILE *yyin;
extern node *root;

#line 86 "semantic.tab.c"

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
#ifndef YY_YY_SEMANTIC_TAB_H_INCLUDED
# define YY_YY_SEMANTIC_TAB_H_INCLUDED
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
#line 19 "semantic.y"

  sym *yyref;
  int ival;
  float fval;
  char cval;
  char* sval;
  struct NODE *tnode;

#line 176 "semantic.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SEMANTIC_TAB_H_INCLUDED  */



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
#define YYLAST   3397

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  383

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
      31,    32,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    29,
       2,    35,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    33,     2,    34,     2,     2,     2,     2,
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
       0,    55,    55,    58,    59,    62,    63,    66,    67,    70,
      71,    74,    77,    78,    81,    82,    85,    86,    89,    92,
      93,    94,    95,    98,    99,   100,   101,   104,   105,   106,
     107,   108,   111,   112,   113,   114,   118,   119,   120,   123,
     125,   126,   127,   130,   131,   132,   133,   134,   137,   140,
     143,   144,   147,   148,   149,   152,   153,   156,   157,   160,
     161,   164,   165,   168,   169,   172,   173,   176,   177,   178,
     179,   180,   181,   184,   185,   186,   189,   192,   193,   196,
     197,   200,   203,   204,   208,   209,   210,   211,   212,   216,
     217
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
  "FLOAT", "CHAR", "STRING", "EMPTY", "THEN", "';'", "','", "'('", "')'",
  "'{'", "'}'", "'='", "$accept", "begin", "program", "declaration",
  "varDecl", "varList", "var", "funcDecl", "arguments", "argsList", "arg",
  "funcBody", "stmt", "iterStmt", "body", "condStmt", "returnStmt",
  "exprStmt", "expression", "assign", "inExpr", "outExpr", "output",
  "simpleExpr", "disjExpr", "negExpr", "relExpr", "artExpr1", "artExpr2",
  "factor", "constant", "call", "params", "paramList", "pertExpr",
  "setExpr", "elem", "set", YY_NULLPTR
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
      44,    40,    41,   123,   125,    61
};
# endif

#define YYPACT_NINF (-283)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     242,    45,   321,  -283,    10,   336,   362,   364,    24,   453,
      67,   189,   368,    16,   398,    69,    83,   133,   116,   278,
     352,   313,   359,   135,   494,   139,   195,   404,  1789,   528,
    1816,   163,   192,    20,   221,   245,   549,   253,   286,   298,
     123,   306,   332,   342,   772,  3229,  3235,  1843,  3207,   415,
    1870,     9,  1897,  1924,  1951,  1978,  2005,  2032,   205,   272,
     318,   348,   177,   251,   316,   207,   396,   474,   590,  3253,
    3259,   740,   365,   402,  2059,    94,   492,   837,  2086,   299,
     418,    94,   408,   340,   418,     4,     4,    73,   403,   855,
     123,  2113,   123,   123,  3353,  3353,  3353,   270,    27,  3207,
     443,   463,   458,   486,   497,   287,   980,   500,   505,   508,
     512,   515,   519,   520,   534,   542,   551,  3277,   481,   203,
     557,   610,   275,   379,   435,   444,  3292,  3298,   436,  3307,
    3313,    90,   564,  2140,  2653,  2167,  3093,  2194,  2680,  3322,
     569,   577,   582,   583,  3283,  3329,    94,   601,  1789,  1098,
    1134,  1168,  1195,  2680,   588,  2221,   249,   589,  2248,  2680,
    2275,  2680,  3328,  1222,  2302,  2329,    12,  3196,   594,   766,
     595,   605,  3335,   524,  2879,  2895,  3207,   614,    52,   149,
      18,    55,  1045,  1062,  2901,  2917,  3025,   633,   635,   636,
     639,   623,   650,   424,   634,   641,   645,   127,   646,   652,
     653,    96,   655,  1016,   638,   658,  3335,   718,   661,  3329,
    2808,  2813,  2830,  3207,   662,   185,   428,   165,   913,   656,
     722,  2835,  2852,  2922,   680,  2707,   670,  3114,   676,  3329,
     681,    63,   665,   678,  2732,   682,  1249,  1276,  1303,  1330,
    1357,   683,  1789,  2356,  2383,  2410,   685,   627,   475,    94,
     418,    94,   167,   120,   855,  3335,  3355,  3355,  3355,   429,
     855,   439,   418,     4,     4,  3335,  2757,   226,   418,   516,
     157,   855,  3329,  3366,  3366,  3366,   491,  3134,  3154,   545,
    1384,   687,   651,   480,   608,  2782,  1411,   409,  1438,  2437,
    2464,    22,  2491,   691,   695,   699,  2939,   709,   279,   102,
    3030,  3046,   706,  3052,  3068,   710,   714,   719,   723,   727,
     728,   729,   161,   730,  2857,   732,   616,   950,  2944,  2960,
     734,  2966,  2982,  1465,    30,  1492,   735,   742,   488,   980,
     745,   750,  2518,   756,   760,   763,  3073,   764,  2987,    94,
     788,    94,   773,   774,   775,  3003,  2874,    94,   776,   777,
    1519,  2653,  1546,  3174,  1573,  2653,   781,   782,   778,   789,
     791,   792,   793,  1600,  2653,   796,  1627,  2545,  1789,  3089,
     797,  3009,  1654,  1789,  2653,  1681,  2653,  2572,  2599,  1708,
    1735,  2626,  1762
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -283,  -283,  -283,  -283,    -2,  -164,    -1,     2,  -282,  -283,
     798,  -142,   -29,   -49,    48,   -23,    19,   -20,   315,   -71,
     -68,   -55,   -76,   101,    34,   -33,   821,   799,   705,   667,
     214,   330,  -208,  -283,   446,    28,   562,  -160
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,   149,    10,    51,   150,    18,    19,
      20,    30,   151,    54,   152,    55,    56,    57,    58,    59,
      60,    61,   115,    62,    63,    64,    65,    66,    67,    68,
      69,    70,   120,   121,    71,    72,    73,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    53,   248,    11,     7,   198,   158,    83,   199,   334,
     116,     8,   112,   246,    22,   179,    78,    16,     9,    17,
     247,   200,   256,   333,   -67,    17,   -67,   -67,    50,   113,
     114,   348,    52,    17,   -84,   -60,   -60,   -67,   -67,    82,
      89,   -84,   349,   179,    90,     3,   297,   177,   -14,   -67,
     -60,   -11,   305,    12,   -14,   -11,   216,   106,   -11,   -62,
     124,   257,   -14,   315,   281,   198,   179,   283,   199,   -56,
     255,   282,   -62,   -62,   191,   197,    88,    21,   191,   109,
     191,   200,   178,   111,   -56,   237,   136,   -62,   214,    82,
     206,    82,    82,    82,    82,    82,    14,    15,   177,   304,
     289,   308,    98,   179,   202,   117,   -61,   206,   257,   245,
     178,   238,   216,   206,   240,    23,   322,   188,   189,   -61,
     -61,   190,   147,   215,   245,    99,   123,    88,   -46,    53,
     245,   167,   245,   178,   -61,   197,   243,   206,    38,   252,
     244,    24,    40,   179,   214,   191,    44,    45,    25,    87,
      46,   243,   296,   239,    48,   244,    50,   243,   254,   243,
      52,   244,   265,   244,   202,    11,   -58,   -58,    27,   273,
     178,   177,    28,   179,   206,   177,   269,   201,   206,   215,
     179,   -58,   -60,   -60,   -59,   -59,   155,   310,   311,   314,
     119,   122,    74,   -48,    92,   -60,   216,   -60,    17,   -59,
     131,   160,   -56,   272,    88,   177,   -46,   164,   214,   165,
     178,    94,   177,   198,   286,   -56,   199,   -56,   -10,   -10,
     229,   216,   298,    75,   -60,   -60,   377,   216,   214,   200,
      11,   378,   179,   -80,    91,   -80,   -60,   201,   216,   316,
     267,    88,    -4,   -55,   255,    -4,   156,   178,   191,   294,
     191,   179,    76,   214,   177,   177,   177,   177,   -55,   214,
      53,   309,   184,   279,   177,   329,   229,   313,   -56,    93,
     214,   214,   214,   214,   214,   128,    77,   253,   129,   -79,
     -56,   -79,   198,   197,    79,   199,   191,    50,   215,   100,
     184,    52,    92,   100,   215,   100,   -57,   -57,   200,   178,
     107,   -43,   237,   221,   -48,   215,   237,    98,    26,   353,
     -15,   -57,   202,   184,   270,   237,   225,    80,   178,   135,
     179,    -2,   188,   189,     4,   237,   190,   237,   238,    81,
      99,   240,   238,   -58,   -58,   240,    -3,    84,   191,    -3,
     191,   238,   -11,   -11,   240,   -58,   191,   -44,    53,    53,
     184,   238,   197,   238,   240,   119,   240,   -59,   -59,   221,
     100,   119,    -5,    85,    -6,    -5,   312,    -6,    -8,   -59,
     239,    -8,   119,    86,   239,    50,    50,   -45,   185,    52,
      52,   202,   -17,   239,   -17,   201,   184,   178,    -9,    -9,
     184,   104,   204,   239,   -47,   239,   -55,    93,    -7,   363,
     -62,    -7,    95,   366,   -13,   101,   185,   -13,   -55,   101,
     330,   101,   375,   -62,   -62,   -12,    97,    98,   -12,   222,
     184,   228,   379,   221,   380,   -62,   205,   184,   -67,   185,
     -67,   -67,   188,   189,   302,   118,   190,   303,   -84,    89,
      99,   -67,   -67,   221,   306,   -58,   -58,   307,   -61,   241,
      95,   154,   -57,   -57,   201,   -11,   -67,   -88,   -58,   -11,
     -58,   -61,   -61,   100,   -57,   100,   185,   146,   221,   184,
     184,   184,   184,   -61,   221,   222,   101,   -86,   -64,   184,
     -64,    96,   -11,   -11,    13,   221,   221,   221,   221,   221,
     132,   -64,   -64,   103,   186,   -85,   320,   168,   184,   321,
     193,   100,   185,   -64,   292,    15,   185,   170,   171,   325,
      15,   172,   194,   195,   196,   173,   174,   225,   133,   175,
     352,   102,   186,   176,   -18,   108,   -18,   110,   -73,   134,
     -73,   -73,   137,   -59,   -59,   223,   185,   138,   -73,   222,
     139,   -73,   -73,   185,   140,   186,   -59,   141,   -59,   241,
      31,   -52,   -53,   100,    32,   100,   -73,    33,   -16,   222,
     -16,   100,   -55,   272,    38,    39,   -54,   184,    40,    41,
      42,    43,    44,    45,   142,   -55,    46,   -55,    47,   101,
      48,   101,   186,   143,   222,   185,   185,   185,   185,   144,
     222,   223,   157,   -82,   -66,   185,   -66,   -66,   -83,   327,
     204,   222,   222,   222,   222,   222,   -49,   -66,   -66,   326,
     187,   -50,   -51,   168,   185,   -87,   193,   101,   186,   -66,
     161,   162,   186,   170,   171,   249,   250,   172,   194,   195,
     196,   173,   174,   -57,   -57,   175,   251,   192,   187,   176,
     145,   192,   -78,   192,   228,   254,   -57,   259,   -57,   -73,
     -74,   224,   186,   -75,   260,   223,   -11,   -11,   291,   186,
     -64,   187,   -64,   275,   261,   262,   241,   266,   365,   101,
     241,   101,   263,   -64,   -64,   223,   264,   101,   -43,   241,
     -11,   -11,   324,   185,   -44,   -45,   -64,   -47,   -64,   241,
     -11,   241,   268,   271,   276,   293,   284,   295,   187,   277,
     223,   186,   186,   186,   186,   278,   223,   224,   192,   285,
     280,   186,   288,   287,   290,   183,   323,   223,   223,   223,
     223,   223,   -67,   335,   -67,   -67,   -66,   336,   -66,   -66,
     186,   337,   -84,   331,   187,   -67,   -67,   339,   187,   -66,
     -66,   338,   340,   183,   -72,   341,   -72,   -72,   -67,   -11,
     -67,   -89,   -66,   182,   -66,   -81,   220,   -72,   -72,   342,
     343,   344,   345,   127,   346,   347,   183,   350,   187,   -72,
     -67,   224,   -67,   -67,   351,   187,   -73,   354,   -73,   -73,
     -84,   182,   355,   -67,   -67,   358,   -73,   359,   356,   -73,
     -73,   224,   357,   360,   219,   -82,   -83,   -11,   -67,   186,
     126,   -73,   -76,   183,   182,   -49,   -50,   -51,   361,   362,
     369,   192,   220,   192,   367,   368,   224,   187,   187,   187,
     187,   370,   224,   371,    29,   372,   373,   187,   376,   -90,
       0,     0,     0,   224,   224,   224,   224,   224,   105,   183,
       0,   182,    32,   183,     0,    33,   187,   181,     0,   192,
     219,     0,    38,    39,     0,     0,    40,    41,    42,    43,
      44,    45,     0,   207,    46,     0,   203,     0,    48,   180,
     208,     0,     0,   183,   209,   181,   220,   182,   210,   211,
     183,   182,   212,     0,     0,     0,   213,   -77,   218,     0,
       0,     0,     0,   125,     0,     0,   220,   180,   181,     0,
       0,   192,     0,   192,     0,     0,     0,     0,     0,   192,
     217,   182,     0,     0,   219,   187,     0,   -62,   182,   274,
     180,   220,   183,   183,   183,   301,     0,   220,     0,     0,
     -62,   -62,   183,     0,   219,   181,     0,     0,   220,   220,
     220,   220,   319,   -62,   218,   -62,     0,     0,     0,     0,
       0,   183,     0,     0,   -61,     0,   274,   180,     0,   219,
     182,   182,   300,     0,     0,   219,   217,   -61,   -61,     0,
     182,   181,     0,     0,     0,   181,   219,   219,   219,   318,
     -61,   226,   -61,     0,     0,    32,     0,     0,    33,   182,
       0,     0,     0,   180,     0,    38,    39,   180,     0,    40,
      41,    42,    43,    44,    45,   181,     0,    46,   218,   227,
       0,    48,   181,     0,     0,     0,     0,   -41,     0,     0,
     183,   -41,     0,     0,   -41,     0,     0,   180,   218,     0,
     217,   -41,   -41,     0,   180,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,   -41,     0,   -41,     0,   -41,     0,   -64,
     217,   -64,   258,   218,   181,   299,     0,     0,   182,   218,
       0,     0,   -64,   -64,   181,     0,   -66,     0,   -66,   -66,
     218,   218,   317,     0,     0,   217,   180,   -64,     0,   -66,
     -66,   217,     0,   181,     0,     0,   180,     0,     0,     0,
       0,     0,   217,   217,   -66,     0,     0,     0,     0,   -34,
       0,   -34,     0,   -34,     0,   180,   -34,   -34,   -34,   -34,
     -34,   -34,     0,   -34,   -34,     0,     0,   -34,   -34,   -34,
     -34,   -34,   -34,     0,     0,   -34,     0,   -34,     0,   -34,
       0,     0,   -34,     0,     0,   -35,     0,   -35,     0,   -35,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,   -35,
     -35,     0,   181,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,   -35,     0,   -35,     0,   -35,     0,     0,   -35,   -33,
       0,   -33,     0,   -33,   180,     0,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,   -33,   -36,   -33,   -36,   -33,
     -36,     0,   -33,   -36,   -36,   159,   -36,   -36,   -36,     0,
     -36,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,   -32,   -36,   -32,   -36,   -32,     0,   -36,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -41,   -32,   -41,   -32,   -41,     0,   -32,   -41,   -41,   -41,
     -41,   -41,   -41,     0,   -41,   -41,     0,     0,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,   -41,   -25,   -41,   -25,
     -41,   -25,     0,   -41,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,     0,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,   -26,   -25,   -26,   -25,   -26,     0,
     -25,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
     -26,   -24,   -26,   -24,   -26,   -24,     0,   -26,   -24,   -24,
     -24,   -24,   -24,   -24,     0,   -24,   -24,     0,     0,   -24,
     -24,   -24,   -24,   -24,   -24,     0,     0,   -24,   -23,   -24,
     -23,   -24,   -23,     0,   -24,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,   -23,     0,     0,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -23,   -42,   -23,   -42,   -23,   -42,
       0,   -23,   -42,   -42,   -42,   -42,   -42,   -42,     0,   -42,
     -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,   -42,   -39,   -42,   -39,   -42,   -39,     0,   -42,   -39,
     -39,   -39,   -39,   -39,   -39,     0,   -39,   -39,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,   -40,
     -39,   -40,   -39,   -40,     0,   -39,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   -40,   -40,     0,     0,   -40,   -40,   -40,
     -40,   -40,   -40,     0,     0,   -40,    -8,   -40,    -8,   -40,
      -8,     0,   -40,    -8,    -8,    -8,    -8,    -8,    -8,     0,
      -8,    -8,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,    -8,    -7,    -8,    -7,    -8,    -7,     0,    -8,
      -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,     0,
       0,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,
     -38,    -7,   -38,    -7,   -38,     0,    -7,   -38,   -38,   -38,
     -38,   -38,   -38,     0,   -38,   -38,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -38,   -31,   -38,   -31,
     -38,   -31,     0,   -38,   -31,   -31,   -31,   -31,   -31,   -31,
       0,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,   -31,   -30,   -31,   -30,   -31,   -30,     0,
     -31,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,   -36,   -30,   -36,   -30,   -36,     0,   -30,   -36,   -36,
     374,   -36,   -36,   -36,     0,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,   -29,   -36,
     -29,   -36,   -29,     0,   -36,   -29,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,     0,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,   -29,   -13,   -29,   -13,   -29,   -13,
       0,   -29,   -13,   -13,   -13,   -13,   -13,   -13,     0,   -13,
     -13,     0,     0,   -13,   -13,   -13,   -13,   -13,   -13,     0,
       0,   -13,   -27,   -13,   -27,   -13,   -27,     0,   -13,   -27,
     -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,     0,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,   -37,
     -27,   -37,   -27,   -37,     0,   -27,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -28,   -37,   -28,   -37,
     -28,     0,   -37,   -28,   -28,   -28,   -28,   -28,   -28,     0,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   -28,   -12,   -28,   -12,   -28,   -12,     0,   -28,
     -12,   -12,   -12,   -12,   -12,   -12,     0,   -12,   -12,     0,
       0,   -12,   -12,   -12,   -12,   -12,   -12,     0,     0,   -12,
     -19,   -12,   -19,   -12,   -19,     0,   -12,   -19,   -19,     0,
     -19,   -19,   -19,     0,   -19,   -19,     0,     0,   -19,   -19,
     -19,   -19,   -19,   -19,     0,     0,   -19,    31,   -19,   166,
     -19,    32,     0,   -19,    33,    34,     0,    35,    36,    37,
       0,    38,    39,     0,     0,    40,    41,    42,    43,    44,
      45,     0,     0,    46,   -41,    47,   -41,    48,   -41,     0,
      49,   -41,   -41,     0,   -41,   -41,   -41,     0,   -41,   -41,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,
     -41,   -20,   -41,   -20,   -41,   -20,     0,   -41,   -20,   -20,
       0,   -20,   -20,   -20,     0,   -20,   -20,     0,     0,   -20,
     -20,   -20,   -20,   -20,   -20,     0,     0,   -20,   -21,   -20,
     -21,   -20,   -21,     0,   -20,   -21,   -21,     0,   -21,   -21,
     -21,     0,   -21,   -21,     0,     0,   -21,   -21,   -21,   -21,
     -21,   -21,     0,     0,   -21,   -22,   -21,   -22,   -21,   -22,
       0,   -21,   -22,   -22,     0,   -22,   -22,   -22,     0,   -22,
     -22,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,   -22,   -25,   -22,   -25,   -22,   -25,     0,   -22,   -25,
     -25,     0,   -25,   -25,   -25,     0,   -25,   -25,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,   -26,
     -25,   -26,   -25,   -26,     0,   -25,   -26,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,     0,     0,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,   -26,   -24,   -26,   -24,   -26,
     -24,     0,   -26,   -24,   -24,     0,   -24,   -24,   -24,     0,
     -24,   -24,     0,     0,   -24,   -24,   -24,   -24,   -24,   -24,
       0,     0,   -24,   -23,   -24,   -23,   -24,   -23,     0,   -24,
     -23,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,     0,
       0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,
     -42,   -23,   -42,   -23,   -42,     0,   -23,   -42,   -42,     0,
     -42,   -42,   -42,     0,   -42,   -42,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,     0,     0,   -42,   -39,   -42,   -39,
     -42,   -39,     0,   -42,   -39,   -39,     0,   -39,   -39,   -39,
       0,   -39,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,   -39,   -40,   -39,   -40,   -39,   -40,     0,
     -39,   -40,   -40,     0,   -40,   -40,   -40,     0,   -40,   -40,
       0,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
     -40,   -38,   -40,   -38,   -40,   -38,     0,   -40,   -38,   -38,
       0,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,   -38,   -31,   -38,
     -31,   -38,   -31,     0,   -38,   -31,   -31,     0,   -31,   -31,
     -31,     0,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -30,   -31,   -30,   -31,   -30,
       0,   -31,   -30,   -30,     0,   -30,   -30,   -30,     0,   -30,
     -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -29,   -30,   -29,   -30,   -29,     0,   -30,   -29,
     -29,     0,   -29,   -29,   -29,     0,   -29,   -29,     0,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,    31,
     -29,   166,   -29,    32,     0,   -29,    33,    34,     0,    35,
      36,    37,     0,    38,    39,     0,     0,    40,    41,    42,
      43,    44,    45,     0,     0,    46,   -27,    47,   -27,    48,
     -27,     0,   163,   -27,   -27,     0,   -27,   -27,   -27,     0,
     -27,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,   -27,   -37,   -27,   -37,   -27,   -37,     0,   -27,
     -37,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,     0,
       0,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,
     -28,   -37,   -28,   -37,   -28,     0,   -37,   -28,   -28,     0,
     -28,   -28,   -28,     0,   -28,   -28,     0,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,   -28,   -34,   -28,   -34,
     -28,   -34,     0,   -28,   -34,   -34,     0,   -34,   -34,   -34,
       0,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,   -35,   -34,   -35,   -34,   -35,     0,
     -34,   -35,   -35,     0,   -35,   -35,   -35,     0,   -35,   -35,
       0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,
     -35,   -33,   -35,   -33,   -35,   -33,     0,   -35,   -33,   -33,
       0,   -33,   -33,   -33,     0,   -33,   -33,     0,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,     0,   -33,    31,   -33,
     166,   -33,    32,     0,   -33,    33,    34,     0,    35,    36,
      37,     0,    38,    39,     0,     0,    40,    41,    42,    43,
      44,    45,     0,     0,    46,    -8,    47,    -8,    48,    -8,
       0,   332,    -8,    -8,     0,    -8,    -8,    -8,     0,    -8,
      -8,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,
       0,    -8,    -7,    -8,    -7,    -8,    -7,     0,    -8,    -7,
      -7,     0,    -7,    -7,    -7,     0,    -7,    -7,     0,     0,
      -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,   -32,
      -7,   -32,    -7,   -32,     0,    -7,   -32,   -32,     0,   -32,
     -32,   -32,     0,   -32,   -32,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,   -32,   -13,   -32,   -13,   -32,
     -13,     0,   -32,   -13,   -13,     0,   -13,   -13,   -13,     0,
     -13,   -13,     0,     0,   -13,   -13,   -13,   -13,   -13,   -13,
       0,     0,   -13,    31,   -13,   166,   -13,    32,     0,   -13,
      33,    34,     0,    35,    36,    37,     0,    38,    39,     0,
       0,    40,    41,    42,    43,    44,    45,     0,     0,    46,
      31,    47,   166,    48,    32,     0,   381,    33,    34,     0,
      35,    36,    37,     0,    38,    39,     0,     0,    40,    41,
      42,    43,    44,    45,     0,     0,    46,   -12,    47,   -12,
      48,   -12,     0,   382,   -12,   -12,     0,   -12,   -12,   -12,
       0,   -12,   -12,     0,     0,   -12,   -12,   -12,   -12,   -12,
     -12,     0,     0,   -12,   230,   -12,   231,   -12,    32,     0,
     -12,    33,   232,     0,   233,   234,   235,     0,    38,    39,
       0,     0,    40,    41,    42,    43,    44,    45,     0,     0,
      46,    31,   236,   166,    48,    32,   148,     0,    33,    34,
       0,    35,    36,    37,     0,    38,    39,     0,     0,    40,
      41,    42,    43,    44,    45,     0,     0,    46,   -42,    47,
       0,    48,   -42,   242,     0,   -42,     0,     0,     0,     0,
       0,     0,   -42,   -42,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,   230,   -42,     0,   -42,    32,   -42,     0,
      33,     0,     0,     0,     0,     0,     0,    38,    39,     0,
       0,    40,    41,    42,    43,    44,    45,     0,   -40,    46,
       0,   236,   -40,    48,     0,   -40,     0,     0,     0,     0,
       0,     0,   -40,   -40,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,   328,   -40,     0,   -40,    32,   -40,     0,
      33,     0,     0,     0,     0,     0,     0,    38,    39,     0,
       0,    40,    41,    42,    43,    44,    45,     0,     0,    46,
       0,   203,   -73,    48,   -73,   -73,     0,   -74,     0,   -74,
     -74,     0,   -73,     0,     0,   -73,   -73,   -74,     0,     0,
     -74,   -74,     0,     0,   -75,     0,   -75,   -75,   -73,   -69,
     -73,   -69,   -69,   -74,   -75,   -74,     0,   -75,   -75,   -88,
       0,     0,   -69,   -69,     0,     0,   -70,     0,   -70,   -70,
     -75,   -68,   -75,   -68,   -68,   -69,   -86,   -69,     0,   -70,
     -70,   -87,     0,     0,   -68,   -68,     0,     0,   -76,     0,
     -76,   -76,   -70,   -74,   -70,   -74,   -74,   -68,   -76,   -68,
       0,   -76,   -76,   -74,     0,     0,   -74,   -74,     0,   -75,
       0,   -75,   -75,     0,   -76,   -69,   -76,   -69,   -69,   -75,
       0,   -74,   -75,   -75,     0,   -88,     0,     0,   -69,   -69,
       0,   -70,     0,   -70,   -70,     0,   -72,   -75,   -72,   -72,
       0,   -86,     0,   -69,   -70,   -70,     0,     0,     0,   -72,
     -72,     0,     0,   -68,     0,   -68,   -68,     0,   -63,   -70,
     -63,   275,   -72,   -87,   -72,     0,   -68,   -68,     0,     0,
       0,   -63,   -63,     0,   -65,     0,   -65,   -65,     0,     0,
     -89,   -68,   -89,   -89,   -63,     0,   -63,   -65,   -65,     0,
       0,     0,     0,   -89,   -89,     0,   -81,     0,   -81,   -81,
     -65,   -76,   -65,   -76,   -76,     0,   -89,     0,   -89,   -81,
     -81,   -76,     0,     0,   -76,   -76,     0,   -71,     0,   -71,
     -71,     0,   -81,   -90,   -81,   -90,   -90,     0,     0,   -76,
     -71,   -71,     0,     0,     0,     0,   -90,   -90,     0,   -72,
       0,   -72,   -72,   -71,   -63,   -71,   -63,   258,     0,   -90,
       0,   -90,   -72,   -72,     0,     0,     0,   -63,   -63,     0,
     -65,     0,   -65,   -65,     0,     0,   -89,   -72,   -89,   -89,
       0,     0,   -63,   -65,   -65,     0,     0,     0,     0,   -89,
     -89,     0,   -81,     0,   -81,   -81,     0,   -71,   -65,   -71,
     -71,     0,     0,     0,   -89,   -81,   -81,     0,     0,     0,
     -71,   -71,     0,   -90,     0,   -90,   -90,     0,   168,     0,
     -81,   193,     0,     0,     0,   -71,   -90,   -90,   170,   171,
       0,     0,   172,   194,   195,   196,   173,   174,     0,   -41,
     175,   -90,   -41,     0,   176,   153,     0,     0,     0,   -41,
     -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,   -42,
       0,   -41,   -42,     0,     0,   -41,   -41,     0,     0,   -42,
     -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,   -40,
       0,   -42,   -40,     0,     0,   -42,   -42,     0,     0,   -40,
     -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,   168,
       0,   -40,   193,     0,     0,   -40,   -40,     0,     0,   170,
     171,     0,     0,   172,   194,   195,   196,   173,   174,     0,
     -67,   175,   -67,   -67,     0,   176,   364,     0,     0,     0,
     -84,     0,   168,   -67,   -67,   169,     0,     0,     0,     0,
       0,     0,   170,   171,     0,   -67,   172,   -11,     0,     0,
     173,   174,     0,   -74,   175,   -74,   -74,     0,   176,   -75,
       0,   -75,   -75,   -74,     0,     0,   -74,   -74,     0,   -75,
       0,     0,   -75,   -75,     0,     0,     0,   -69,   -74,   -69,
     -69,     0,     0,   -70,   -75,   -70,   -70,   -88,     0,     0,
     -69,   -69,     0,   -86,     0,     0,   -70,   -70,     0,     0,
       0,   -68,   -69,   -68,   -68,     0,     0,   -76,   -70,   -76,
     -76,   -87,     0,     0,   -68,   -68,   -63,   -76,   -63,    96,
     -76,   -76,   -65,     0,   -65,   -65,   -68,     0,     0,   -63,
     -63,   -89,   -76,   -89,   -89,   -65,   -65,   -81,     0,   -81,
     -81,   -63,     0,     0,   -89,   -89,   -71,   -65,   -71,   -71,
     -81,   -81,   -90,     0,   -90,   -90,   -89,   207,     0,   -71,
     -71,     0,   -81,   169,   208,   -90,   -90,     0,   209,     0,
     170,   -71,   210,   211,   172,     0,   212,   -90,   173,   174,
     213,   167,   175,   169,     0,     0,   176,     0,    38,     0,
     170,     0,     0,     0,   207,     0,    44,    45,   173,   174,
      46,   208,   175,     0,    48,     0,   176,     0,     0,   210,
     211,     0,     0,   212,     0,     0,     0,   213
};

static const yytype_int16 yycheck[] =
{
       2,    30,   166,     4,     2,    76,   148,    40,    76,   291,
      86,     1,     8,     1,    15,    48,    36,     1,     8,     3,
       8,    76,     4,     1,     4,     3,     6,     7,    30,    25,
      26,     1,    30,     3,    14,    17,    18,    17,    18,    40,
      31,    14,   324,    76,    35,     0,   254,    48,    32,    29,
      32,    31,   260,    29,    32,    35,    89,    77,    31,     4,
      93,     6,    32,   271,     1,   136,    99,   231,   136,    17,
      18,     8,    17,    18,    75,    76,    48,     8,    79,    80,
      81,   136,    48,    84,    32,   134,   106,    32,    89,    90,
      17,    92,    93,    94,    95,    96,    29,    30,    99,   259,
     242,   261,     8,   136,    76,    32,     4,    17,     6,   138,
      76,   134,   145,    17,   134,    32,   276,    23,    24,    17,
      18,    27,    32,    89,   153,    31,    92,    99,    32,   158,
     159,     8,   161,    99,    32,   136,   138,    17,    15,   172,
     138,     8,    19,   176,   145,   146,    23,    24,    32,    48,
      27,   153,    32,   134,    31,   153,   158,   159,    31,   161,
     158,   159,    35,   161,   136,   166,    17,    18,    33,     4,
     136,   172,    33,   206,    17,   176,   209,    76,    17,   145,
     213,    32,    17,    18,    17,    18,   138,   263,   264,    32,
      89,    90,    29,    32,    17,    30,   229,    32,     3,    32,
      99,   153,    17,    18,   176,   206,    29,   159,   209,   161,
     176,     4,   213,   284,   234,    30,   284,    32,    29,    30,
      17,   254,   255,    31,    17,    18,   368,   260,   229,   284,
     231,   373,   265,    30,    29,    32,    29,   136,   271,   272,
     206,   213,     0,    17,    18,     3,   145,   213,   249,   250,
     251,   284,    31,   254,   255,   256,   257,   258,    32,   260,
     289,   262,    48,   229,   265,   285,    17,   268,    17,    18,
     271,   272,   273,   274,   275,     5,    31,   176,     8,    30,
      29,    32,   353,   284,    31,   353,   287,   289,   254,    75,
      76,   289,    17,    79,   260,    81,    17,    18,   353,   265,
       1,    29,   351,    89,    29,   271,   355,     8,    30,   329,
      32,    32,   284,    99,   213,   364,    29,    31,   284,    32,
     353,     0,    23,    24,     3,   374,    27,   376,   351,    31,
      31,   351,   355,    17,    18,   355,     0,    31,   339,     3,
     341,   364,    29,    30,   364,    29,   347,    29,   377,   378,
     136,   374,   353,   376,   374,   254,   376,    17,    18,   145,
     146,   260,     0,    31,     0,     3,   265,     3,     0,    29,
     351,     3,   271,    31,   355,   377,   378,    29,    48,   377,
     378,   353,    30,   364,    32,   284,   172,   353,    29,    30,
     176,    76,    77,   374,    29,   376,    17,    18,     0,   351,
       4,     3,     6,   355,     0,    75,    76,     3,    29,    79,
       1,    81,   364,    17,    18,     0,    14,     8,     3,    89,
     206,   106,   374,   209,   376,    29,     8,   213,     4,    99,
       6,     7,    23,    24,     5,    32,    27,     8,    14,    31,
      31,    17,    18,   229,     5,    17,    18,     8,     4,   134,
       6,   136,    17,    18,   353,    31,    32,    14,    30,    35,
      32,    17,    18,   249,    29,   251,   136,    31,   254,   255,
     256,   257,   258,    29,   260,   145,   146,    14,     4,   265,
       6,     7,    29,    30,    31,   271,   272,   273,   274,   275,
      32,    17,    18,     1,    48,    14,     5,     5,   284,     8,
       8,   287,   172,    29,    29,    30,   176,    15,    16,    29,
      30,    19,    20,    21,    22,    23,    24,    29,    32,    27,
      32,    75,    76,    31,    30,    79,    32,    81,     4,    32,
       6,     7,    32,    17,    18,    89,   206,    32,    14,   209,
      32,    17,    18,   213,    32,    99,    30,    32,    32,   234,
       1,    32,    32,   339,     5,   341,    32,     8,    30,   229,
      32,   347,    17,    18,    15,    16,    32,   353,    19,    20,
      21,    22,    23,    24,    32,    30,    27,    32,    29,   249,
      31,   251,   136,    32,   254,   255,   256,   257,   258,    32,
     260,   145,   146,    29,     4,   265,     6,     7,    29,   284,
     285,   271,   272,   273,   274,   275,    29,    17,    18,     1,
      48,    29,    29,     5,   284,    14,     8,   287,   172,    29,
      32,    32,   176,    15,    16,    31,    31,    19,    20,    21,
      22,    23,    24,    17,    18,    27,    31,    75,    76,    31,
      30,    79,    32,    81,   329,    31,    30,    14,    32,    14,
      14,    89,   206,    14,    31,   209,    29,    30,    31,   213,
       4,    99,     6,     7,    14,    31,   351,    29,   353,   339,
     355,   341,    31,    17,    18,   229,    31,   347,    32,   364,
      29,    30,    31,   353,    32,    32,    30,    32,    32,   374,
      32,   376,    31,    31,    14,   249,    31,   251,   136,    29,
     254,   255,   256,   257,   258,    29,   260,   145,   146,    31,
      29,   265,    29,    31,    29,    48,    29,   271,   272,   273,
     274,   275,     4,    32,     6,     7,     4,    32,     6,     7,
     284,    32,    14,   287,   172,    17,    18,    31,   176,    17,
      18,    32,    32,    76,     4,    31,     6,     7,    30,    31,
      32,    32,    30,    48,    32,    32,    89,    17,    18,    32,
      32,    32,    32,    96,    32,    31,    99,    32,   206,    29,
       4,   209,     6,     7,    32,   213,     4,    32,     6,     7,
      14,    76,    32,    17,    18,   339,    14,   341,    32,    17,
      18,   229,    32,   347,    89,    32,    32,    31,    32,   353,
      95,    29,    14,   136,    99,    32,    32,    32,    32,    32,
      32,   249,   145,   251,    33,    33,   254,   255,   256,   257,
     258,    32,   260,    32,    26,    33,    33,   265,    32,    32,
      -1,    -1,    -1,   271,   272,   273,   274,   275,     1,   172,
      -1,   136,     5,   176,    -1,     8,   284,    48,    -1,   287,
     145,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,     8,    27,    -1,    29,    -1,    31,    48,
      15,    -1,    -1,   206,    19,    76,   209,   172,    23,    24,
     213,   176,    27,    -1,    -1,    -1,    31,    32,    89,    -1,
      -1,    -1,    -1,    94,    -1,    -1,   229,    76,    99,    -1,
      -1,   339,    -1,   341,    -1,    -1,    -1,    -1,    -1,   347,
      89,   206,    -1,    -1,   209,   353,    -1,     4,   213,     6,
      99,   254,   255,   256,   257,   258,    -1,   260,    -1,    -1,
      17,    18,   265,    -1,   229,   136,    -1,    -1,   271,   272,
     273,   274,   275,    30,   145,    32,    -1,    -1,    -1,    -1,
      -1,   284,    -1,    -1,     4,    -1,     6,   136,    -1,   254,
     255,   256,   257,    -1,    -1,   260,   145,    17,    18,    -1,
     265,   172,    -1,    -1,    -1,   176,   271,   272,   273,   274,
      30,     1,    32,    -1,    -1,     5,    -1,    -1,     8,   284,
      -1,    -1,    -1,   172,    -1,    15,    16,   176,    -1,    19,
      20,    21,    22,    23,    24,   206,    -1,    27,   209,    29,
      -1,    31,   213,    -1,    -1,    -1,    -1,     1,    -1,    -1,
     353,     5,    -1,    -1,     8,    -1,    -1,   206,   229,    -1,
     209,    15,    16,    -1,   213,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    31,    -1,     4,
     229,     6,     7,   254,   255,   256,    -1,    -1,   353,   260,
      -1,    -1,    17,    18,   265,    -1,     4,    -1,     6,     7,
     271,   272,   273,    -1,    -1,   254,   255,    32,    -1,    17,
      18,   260,    -1,   284,    -1,    -1,   265,    -1,    -1,    -1,
      -1,    -1,   271,   272,    32,    -1,    -1,    -1,    -1,     1,
      -1,     3,    -1,     5,    -1,   284,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    31,
      -1,    -1,    34,    -1,    -1,     1,    -1,     3,    -1,     5,
      -1,    -1,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,   353,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    31,    -1,    -1,    34,     1,
      -1,     3,    -1,     5,   353,    -1,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,     1,    29,     3,    31,
       5,    -1,    34,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,     1,    29,     3,    31,     5,    -1,    34,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
       1,    29,     3,    31,     5,    -1,    34,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,     1,    29,     3,
      31,     5,    -1,    34,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,     1,    29,     3,    31,     5,    -1,
      34,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,     1,    29,     3,    31,     5,    -1,    34,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,     1,    29,
       3,    31,     5,    -1,    34,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,     1,    29,     3,    31,     5,
      -1,    34,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,     1,    29,     3,    31,     5,    -1,    34,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,     1,
      29,     3,    31,     5,    -1,    34,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,     1,    29,     3,    31,
       5,    -1,    34,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,     1,    29,     3,    31,     5,    -1,    34,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
       1,    29,     3,    31,     5,    -1,    34,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,     1,    29,     3,
      31,     5,    -1,    34,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,     1,    29,     3,    31,     5,    -1,
      34,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,     1,    29,     3,    31,     5,    -1,    34,     8,     9,
      10,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,     1,    29,
       3,    31,     5,    -1,    34,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,     1,    29,     3,    31,     5,
      -1,    34,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,     1,    29,     3,    31,     5,    -1,    34,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,     1,
      29,     3,    31,     5,    -1,    34,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,     1,    29,     3,    31,
       5,    -1,    34,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,     1,    29,     3,    31,     5,    -1,    34,
       8,     9,    10,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
       1,    29,     3,    31,     5,    -1,    34,     8,     9,    -1,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,     1,    29,     3,
      31,     5,    -1,    34,     8,     9,    -1,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,     1,    29,     3,    31,     5,    -1,
      34,     8,     9,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,     1,    29,     3,    31,     5,    -1,    34,     8,     9,
      -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,     1,    29,
       3,    31,     5,    -1,    34,     8,     9,    -1,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,     1,    29,     3,    31,     5,
      -1,    34,     8,     9,    -1,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,     1,    29,     3,    31,     5,    -1,    34,     8,
       9,    -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,     1,
      29,     3,    31,     5,    -1,    34,     8,     9,    -1,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,     1,    29,     3,    31,
       5,    -1,    34,     8,     9,    -1,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,     1,    29,     3,    31,     5,    -1,    34,
       8,     9,    -1,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
       1,    29,     3,    31,     5,    -1,    34,     8,     9,    -1,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,     1,    29,     3,
      31,     5,    -1,    34,     8,     9,    -1,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,     1,    29,     3,    31,     5,    -1,
      34,     8,     9,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,     1,    29,     3,    31,     5,    -1,    34,     8,     9,
      -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,     1,    29,
       3,    31,     5,    -1,    34,     8,     9,    -1,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,     1,    29,     3,    31,     5,
      -1,    34,     8,     9,    -1,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,     1,    29,     3,    31,     5,    -1,    34,     8,
       9,    -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,     1,
      29,     3,    31,     5,    -1,    34,     8,     9,    -1,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,     1,    29,     3,    31,
       5,    -1,    34,     8,     9,    -1,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,     1,    29,     3,    31,     5,    -1,    34,
       8,     9,    -1,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
       1,    29,     3,    31,     5,    -1,    34,     8,     9,    -1,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,     1,    29,     3,
      31,     5,    -1,    34,     8,     9,    -1,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,     1,    29,     3,    31,     5,    -1,
      34,     8,     9,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,     1,    29,     3,    31,     5,    -1,    34,     8,     9,
      -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,     1,    29,
       3,    31,     5,    -1,    34,     8,     9,    -1,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,     1,    29,     3,    31,     5,
      -1,    34,     8,     9,    -1,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,     1,    29,     3,    31,     5,    -1,    34,     8,
       9,    -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,     1,
      29,     3,    31,     5,    -1,    34,     8,     9,    -1,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,     1,    29,     3,    31,
       5,    -1,    34,     8,     9,    -1,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,     1,    29,     3,    31,     5,    -1,    34,
       8,     9,    -1,    11,    12,    13,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
       1,    29,     3,    31,     5,    -1,    34,     8,     9,    -1,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,     1,    29,     3,
      31,     5,    -1,    34,     8,     9,    -1,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,     1,    29,     3,    31,     5,    -1,
      34,     8,     9,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,     1,    29,     3,    31,     5,    33,    -1,     8,     9,
      -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,     1,    29,
      -1,    31,     5,    33,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,     1,    27,    -1,    29,     5,    31,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,     1,    27,
      -1,    29,     5,    31,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,     1,    27,    -1,    29,     5,    31,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
      -1,    29,     4,    31,     6,     7,    -1,     4,    -1,     6,
       7,    -1,    14,    -1,    -1,    17,    18,    14,    -1,    -1,
      17,    18,    -1,    -1,     4,    -1,     6,     7,    30,     4,
      32,     6,     7,    30,    14,    32,    -1,    17,    18,    14,
      -1,    -1,    17,    18,    -1,    -1,     4,    -1,     6,     7,
      30,     4,    32,     6,     7,    30,    14,    32,    -1,    17,
      18,    14,    -1,    -1,    17,    18,    -1,    -1,     4,    -1,
       6,     7,    30,     4,    32,     6,     7,    30,    14,    32,
      -1,    17,    18,    14,    -1,    -1,    17,    18,    -1,     4,
      -1,     6,     7,    -1,    30,     4,    32,     6,     7,    14,
      -1,    32,    17,    18,    -1,    14,    -1,    -1,    17,    18,
      -1,     4,    -1,     6,     7,    -1,     4,    32,     6,     7,
      -1,    14,    -1,    32,    17,    18,    -1,    -1,    -1,    17,
      18,    -1,    -1,     4,    -1,     6,     7,    -1,     4,    32,
       6,     7,    30,    14,    32,    -1,    17,    18,    -1,    -1,
      -1,    17,    18,    -1,     4,    -1,     6,     7,    -1,    -1,
       4,    32,     6,     7,    30,    -1,    32,    17,    18,    -1,
      -1,    -1,    -1,    17,    18,    -1,     4,    -1,     6,     7,
      30,     4,    32,     6,     7,    -1,    30,    -1,    32,    17,
      18,    14,    -1,    -1,    17,    18,    -1,     4,    -1,     6,
       7,    -1,    30,     4,    32,     6,     7,    -1,    -1,    32,
      17,    18,    -1,    -1,    -1,    -1,    17,    18,    -1,     4,
      -1,     6,     7,    30,     4,    32,     6,     7,    -1,    30,
      -1,    32,    17,    18,    -1,    -1,    -1,    17,    18,    -1,
       4,    -1,     6,     7,    -1,    -1,     4,    32,     6,     7,
      -1,    -1,    32,    17,    18,    -1,    -1,    -1,    -1,    17,
      18,    -1,     4,    -1,     6,     7,    -1,     4,    32,     6,
       7,    -1,    -1,    -1,    32,    17,    18,    -1,    -1,    -1,
      17,    18,    -1,     4,    -1,     6,     7,    -1,     5,    -1,
      32,     8,    -1,    -1,    -1,    32,    17,    18,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,     5,
      27,    32,     8,    -1,    31,    32,    -1,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,     5,
      -1,    27,     8,    -1,    -1,    31,    32,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,     5,
      -1,    27,     8,    -1,    -1,    31,    32,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,     5,
      -1,    27,     8,    -1,    -1,    31,    32,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
       4,    27,     6,     7,    -1,    31,    32,    -1,    -1,    -1,
      14,    -1,     5,    17,    18,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    15,    16,    -1,    29,    19,    31,    -1,    -1,
      23,    24,    -1,     4,    27,     6,     7,    -1,    31,     4,
      -1,     6,     7,    14,    -1,    -1,    17,    18,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,     4,    29,     6,
       7,    -1,    -1,     4,    29,     6,     7,    14,    -1,    -1,
      17,    18,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,     4,    29,     6,     7,    -1,    -1,     4,    29,     6,
       7,    14,    -1,    -1,    17,    18,     4,    14,     6,     7,
      17,    18,     4,    -1,     6,     7,    29,    -1,    -1,    17,
      18,     4,    29,     6,     7,    17,    18,     4,    -1,     6,
       7,    29,    -1,    -1,    17,    18,     4,    29,     6,     7,
      17,    18,     4,    -1,     6,     7,    29,     8,    -1,    17,
      18,    -1,    29,     8,    15,    17,    18,    -1,    19,    -1,
      15,    29,    23,    24,    19,    -1,    27,    29,    23,    24,
      31,     8,    27,     8,    -1,    -1,    31,    -1,    15,    -1,
      15,    -1,    -1,    -1,     8,    -1,    23,    24,    23,    24,
      27,    15,    27,    -1,    31,    -1,    31,    -1,    -1,    23,
      24,    -1,    -1,    27,    -1,    -1,    -1,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    38,     0,     3,    39,    40,    43,     1,     8,
      41,    42,    29,    31,    29,    30,     1,     3,    44,    45,
      46,     8,    42,    32,     8,    32,    30,    33,    33,    46,
      47,     1,     5,     8,     9,    11,    12,    13,    15,    16,
      19,    20,    21,    22,    23,    24,    27,    29,    31,    34,
      40,    42,    43,    48,    49,    51,    52,    53,    54,    55,
      56,    57,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    70,    71,    72,    29,    31,    31,    31,    53,    31,
      31,    31,    42,    61,    31,    31,    31,    59,    71,    31,
      35,    29,    17,    18,     4,     6,     7,    14,     8,    31,
      66,    67,    70,     1,    54,     1,    53,     1,    70,    42,
      70,    42,     8,    25,    26,    58,    58,    32,    32,    59,
      68,    69,    59,    60,    61,    63,    64,    65,     5,     8,
      73,    59,    32,    32,    32,    32,    53,    32,    32,    32,
      32,    32,    32,    32,    32,    30,    31,    32,    33,    40,
      43,    48,    50,    32,    54,    50,    59,    70,    47,    10,
      50,    32,    32,    34,    50,    50,     3,     8,     5,     8,
      15,    16,    19,    23,    24,    27,    31,    42,    60,    61,
      62,    63,    64,    65,    66,    67,    70,    72,    23,    24,
      27,    42,    72,     8,    20,    21,    22,    42,    55,    56,
      57,    59,    71,    29,    54,     8,    17,     8,    15,    19,
      23,    24,    27,    31,    42,    60,    61,    62,    63,    64,
      65,    66,    67,    70,    72,    29,     1,    29,    54,    17,
       1,     3,     9,    11,    12,    13,    29,    49,    51,    52,
      53,    54,    33,    40,    43,    48,     1,     8,    41,    31,
      31,    31,    61,    59,    31,    18,     4,     6,     7,    14,
      31,    14,    31,    31,    31,    35,    29,    60,    31,    61,
      59,    31,    18,     4,     6,     7,    14,    29,    29,    60,
      29,     1,     8,    41,    31,    31,    53,    31,    29,    47,
      29,    31,    29,    70,    42,    70,    32,    68,    61,    63,
      64,    65,     5,     8,    73,    68,     5,     8,    73,    42,
      58,    58,    59,    42,    32,    68,    61,    63,    64,    65,
       5,     8,    73,    29,    31,    29,     1,    54,     1,    53,
       1,    70,    34,     1,    44,    32,    32,    32,    32,    31,
      32,    31,    32,    32,    32,    32,    32,    31,     1,    44,
      32,    32,    32,    53,    32,    32,    32,    32,    70,    70,
      70,    32,    32,    50,    32,    54,    50,    33,    33,    32,
      32,    32,    33,    33,    10,    50,    32,    47,    47,    50,
      50,    34,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    43,    43,    44,    44,    45,    45,    46,    47,
      47,    47,    47,    48,    48,    48,    48,    49,    49,    49,
      49,    49,    50,    50,    50,    50,    51,    51,    51,    52,
      53,    53,    53,    54,    54,    54,    54,    54,    55,    56,
      57,    57,    58,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    66,    66,    66,    67,    68,    68,    69,
      69,    70,    71,    71,    72,    72,    72,    72,    72,    73,
      73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     3,     3,     3,
       1,     1,     8,     6,     0,     1,     3,     1,     2,     0,
       2,     2,     2,     1,     1,     1,     1,     6,     7,     5,
       4,     4,     3,     1,     1,     1,     5,     7,     4,     2,
       2,     1,     2,     1,     1,     1,     1,     1,     3,     4,
       4,     4,     1,     1,     1,     3,     1,     3,     1,     2,
       1,     3,     1,     3,     1,     3,     1,     1,     3,     1,
       1,     4,     1,     1,     1,     1,     4,     0,     1,     3,
       1,     3,     4,     4,     1,     3,     1,     3,     1,     1,
       4
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
  YYUSE (yytype);
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
#line 55 "semantic.y"
                                                                {root = (yyvsp[0].tnode); int max = bindLevel(root, 0, 0); printTree3(root, max);}
#line 2178 "semantic.tab.c"
    break;

  case 3:
#line 58 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2184 "semantic.tab.c"
    break;

  case 4:
#line 59 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2190 "semantic.tab.c"
    break;

  case 5:
#line 62 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2196 "semantic.tab.c"
    break;

  case 6:
#line 63 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2202 "semantic.tab.c"
    break;

  case 7:
#line 66 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(VARDECL, (yyvsp[-1].tnode)); (yyval.tnode)->internal->type_info = (yyvsp[-2].ival);}
#line 2208 "semantic.tab.c"
    break;

  case 8:
#line 67 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2214 "semantic.tab.c"
    break;

  case 9:
#line 70 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2220 "semantic.tab.c"
    break;

  case 10:
#line 71 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2226 "semantic.tab.c"
    break;

  case 11:
#line 74 "semantic.y"
                                                                {(yyval.tnode) = idLeaf((yyvsp[0].yyref));}
#line 2232 "semantic.tab.c"
    break;

  case 12:
#line 77 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(FUNCDECL, (yyvsp[-4].tnode), (yyvsp[-1].tnode)); (yyval.tnode)->internal->type_info = (yyvsp[-7].ival);}
#line 2238 "semantic.tab.c"
    break;

  case 13:
#line 78 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2244 "semantic.tab.c"
    break;

  case 14:
#line 81 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2250 "semantic.tab.c"
    break;

  case 15:
#line 82 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2256 "semantic.tab.c"
    break;

  case 16:
#line 85 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2262 "semantic.tab.c"
    break;

  case 17:
#line 86 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2268 "semantic.tab.c"
    break;

  case 18:
#line 89 "semantic.y"
                                                                {(yyval.tnode) = idLeaf((yyvsp[0].yyref));}
#line 2274 "semantic.tab.c"
    break;

  case 19:
#line 92 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2280 "semantic.tab.c"
    break;

  case 20:
#line 93 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2286 "semantic.tab.c"
    break;

  case 21:
#line 94 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2292 "semantic.tab.c"
    break;

  case 22:
#line 95 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2298 "semantic.tab.c"
    break;

  case 23:
#line 98 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2304 "semantic.tab.c"
    break;

  case 24:
#line 99 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2310 "semantic.tab.c"
    break;

  case 25:
#line 100 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2316 "semantic.tab.c"
    break;

  case 26:
#line 101 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2322 "semantic.tab.c"
    break;

  case 27:
#line 104 "semantic.y"
                                                                {(yyval.tnode) = TernaryNode(FOR1, (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2328 "semantic.tab.c"
    break;

  case 28:
#line 105 "semantic.y"
                                                                {(yyval.tnode) = QuaternaryNode(FOR2, (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2334 "semantic.tab.c"
    break;

  case 29:
#line 106 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(FORALL, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2340 "semantic.tab.c"
    break;

  case 30:
#line 107 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2346 "semantic.tab.c"
    break;

  case 31:
#line 108 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2352 "semantic.tab.c"
    break;

  case 32:
#line 111 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2358 "semantic.tab.c"
    break;

  case 33:
#line 112 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2364 "semantic.tab.c"
    break;

  case 34:
#line 113 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2370 "semantic.tab.c"
    break;

  case 35:
#line 114 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2376 "semantic.tab.c"
    break;

  case 36:
#line 118 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(IF, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2382 "semantic.tab.c"
    break;

  case 37:
#line 119 "semantic.y"
                                                                {(yyval.tnode) = TernaryNode(IF_ELSE, (yyvsp[-4].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2388 "semantic.tab.c"
    break;

  case 38:
#line 120 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2394 "semantic.tab.c"
    break;

  case 39:
#line 123 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(RETURN, (yyvsp[0].tnode));}
#line 2400 "semantic.tab.c"
    break;

  case 40:
#line 125 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2406 "semantic.tab.c"
    break;

  case 41:
#line 126 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2412 "semantic.tab.c"
    break;

  case 42:
#line 127 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2418 "semantic.tab.c"
    break;

  case 43:
#line 130 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2424 "semantic.tab.c"
    break;

  case 44:
#line 131 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2430 "semantic.tab.c"
    break;

  case 45:
#line 132 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2436 "semantic.tab.c"
    break;

  case 46:
#line 133 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2442 "semantic.tab.c"
    break;

  case 47:
#line 134 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2448 "semantic.tab.c"
    break;

  case 48:
#line 137 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(ASSIGN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2454 "semantic.tab.c"
    break;

  case 49:
#line 140 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(READ, (yyvsp[-1].tnode));}
#line 2460 "semantic.tab.c"
    break;

  case 50:
#line 143 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITE, (yyvsp[-1].tnode));}
#line 2466 "semantic.tab.c"
    break;

  case 51:
#line 144 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITELN, (yyvsp[-1].tnode));}
#line 2472 "semantic.tab.c"
    break;

  case 52:
#line 147 "semantic.y"
                                                                {(yyval.tnode) = idLeaf((yyvsp[0].yyref));}
#line 2478 "semantic.tab.c"
    break;

  case 53:
#line 148 "semantic.y"
                                                                {(yyval.tnode) = charLeaf((yyvsp[0].cval));}
#line 2484 "semantic.tab.c"
    break;

  case 54:
#line 149 "semantic.y"
                                                                {(yyval.tnode) = stringLeaf((yyvsp[0].sval));}
#line 2490 "semantic.tab.c"
    break;

  case 55:
#line 152 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(DISJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2496 "semantic.tab.c"
    break;

  case 56:
#line 153 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2502 "semantic.tab.c"
    break;

  case 57:
#line 156 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(CONJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2508 "semantic.tab.c"
    break;

  case 58:
#line 157 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2514 "semantic.tab.c"
    break;

  case 59:
#line 160 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(NEG, (yyvsp[0].tnode));}
#line 2520 "semantic.tab.c"
    break;

  case 60:
#line 161 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2526 "semantic.tab.c"
    break;

  case 61:
#line 164 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(RELOP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->type_info = (yyvsp[-1].ival);}
#line 2532 "semantic.tab.c"
    break;

  case 62:
#line 165 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2538 "semantic.tab.c"
    break;

  case 63:
#line 168 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP1, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->type_info = (yyvsp[-1].ival);}
#line 2544 "semantic.tab.c"
    break;

  case 64:
#line 169 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2550 "semantic.tab.c"
    break;

  case 65:
#line 172 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP2, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->type_info = (yyvsp[-1].ival);}
#line 2556 "semantic.tab.c"
    break;

  case 66:
#line 173 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2562 "semantic.tab.c"
    break;

  case 67:
#line 176 "semantic.y"
                                                                {(yyval.tnode) = idLeaf((yyvsp[0].yyref));}
#line 2568 "semantic.tab.c"
    break;

  case 68:
#line 177 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2574 "semantic.tab.c"
    break;

  case 69:
#line 178 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2580 "semantic.tab.c"
    break;

  case 70:
#line 179 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2586 "semantic.tab.c"
    break;

  case 71:
#line 180 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(IS_SET, (yyvsp[-1].tnode));}
#line 2592 "semantic.tab.c"
    break;

  case 72:
#line 181 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2598 "semantic.tab.c"
    break;

  case 73:
#line 184 "semantic.y"
                                                                {(yyval.tnode) = intLeaf((yyvsp[0].ival));}
#line 2604 "semantic.tab.c"
    break;

  case 74:
#line 185 "semantic.y"
                                                                {(yyval.tnode) = floatLeaf((yyvsp[0].fval));}
#line 2610 "semantic.tab.c"
    break;

  case 75:
#line 186 "semantic.y"
                                                                {(yyval.tnode) = setLeaf();}
#line 2616 "semantic.tab.c"
    break;

  case 76:
#line 189 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(CALL, (yyvsp[-3].tnode), (yyvsp[-1].tnode));}
#line 2622 "semantic.tab.c"
    break;

  case 77:
#line 192 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2628 "semantic.tab.c"
    break;

  case 78:
#line 193 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2634 "semantic.tab.c"
    break;

  case 79:
#line 196 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2640 "semantic.tab.c"
    break;

  case 80:
#line 197 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2646 "semantic.tab.c"
    break;

  case 81:
#line 200 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(IN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2652 "semantic.tab.c"
    break;

  case 82:
#line 203 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(SETOP, (yyvsp[-1].tnode));  (yyval.tnode)->internal->type_info = (yyvsp[-3].ival);}
#line 2658 "semantic.tab.c"
    break;

  case 83:
#line 204 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(EXISTS, (yyvsp[-1].tnode));}
#line 2664 "semantic.tab.c"
    break;

  case 84:
#line 208 "semantic.y"
                                                                {(yyval.tnode) = idLeaf((yyvsp[0].yyref));}
#line 2670 "semantic.tab.c"
    break;

  case 85:
#line 209 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2676 "semantic.tab.c"
    break;

  case 86:
#line 210 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2682 "semantic.tab.c"
    break;

  case 87:
#line 211 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2688 "semantic.tab.c"
    break;

  case 88:
#line 212 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2694 "semantic.tab.c"
    break;

  case 89:
#line 216 "semantic.y"
                                                                {(yyval.tnode) = idLeaf((yyvsp[0].yyref));}
#line 2700 "semantic.tab.c"
    break;

  case 90:
#line 217 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(SETOP, (yyvsp[-1].tnode));  (yyval.tnode)->internal->type_info = (yyvsp[-3].ival);}
#line 2706 "semantic.tab.c"
    break;


#line 2710 "semantic.tab.c"

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
#line 222 "semantic.y"

void yyerror(const char *s){
  printf("%s\n", s);
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


    fclose(yyin);
    yylex_destroy();
    freeTables();


    return 0;
}
