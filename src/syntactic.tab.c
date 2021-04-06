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
sym *aux;

#line 91 "syntactic.tab.c"

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
#line 24 "syntactic.y"

  int ival;
  float fval;
  char cval;
  char* sval;
  struct NODE *tnode;

#line 180 "syntactic.tab.c"

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
#define YYLAST   3881

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  377

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
       0,    66,    66,    69,    70,    73,    74,    77,    78,    82,
      83,    86,    89,    94,    89,   100,   101,   102,   105,   106,
     109,   113,   114,   115,   116,   119,   120,   121,   122,   125,
     126,   127,   128,   129,   133,   134,   135,   136,   140,   142,
     141,   145,   148,   149,   152,   155,   156,   157,   160,   161,
     162,   163,   166,   169,   172,   175,   176,   179,   180,   181,
     184,   185,   188,   189,   192,   193,   196,   197,   200,   201,
     204,   205,   208,   209,   214,   215,   216,   217,   218,   219,
     220,   223,   224,   225,   228,   233,   234,   237,   238
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
  "varDecl", "varList", "new_id", "funcDecl", "$@1", "$@2", "arguments",
  "argsList", "arg", "funcBody", "stmt", "iterStmt", "body", "condStmt",
  "$@3", "prepareScope", "cond", "returnStmt", "exprStmt", "expression",
  "assign", "var", "inExpr", "outExpr", "output", "simpleExpr", "negExpr",
  "disjExpr", "conjExpr", "relExpr", "artExpr1", "artExpr2", "factor",
  "constant", "call", "params", "paramList", YY_NULLPTR
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

#define YYPACT_NINF (-274)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-89)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      25,    30,    69,  -274,    19,   102,   257,   451,   489,   382,
     134,   336,   -16,   519,    96,    12,    46,   368,   518,    82,
     146,   162,    -8,    65,   238,   245,   175,   200,   247,  2174,
     270,  2207,  2240,   262,    94,   325,   351,   416,   357,   383,
     387,  3598,   392,   409,   411,   592,  1411,  3705,  2273,   529,
    3618,  2306,  2339,  2372,  2405,  2438,  2471,  2504,   344,   404,
     107,   428,   430,   163,   187,   412,   669,    74,  3847,  3711,
    3729,  3735,  3753,  3618,   873,  2537,   483,  2564,   673,  3644,
    3618,   435,   219,   465,   141,   141,   100,  2597,  3585,  3598,
    3598,  3657,  3657,  3657,  3657,  3657,   157,   448,   452,  2630,
      60,  1249,   456,   231,   460,   259,   481,   491,   499,   502,
     504,   509,   539,  3759,     2,   542,   299,   289,   302,   729,
     371,  3852,  3777,  3783,  3801,  2657,  2684,  2174,  1381,  1444,
    1477,  1514,  2537,  3485,  2537,  2537,  3807,  3825,   553,   566,
     568,  3831,  3631,  2711,  2744,  2771,  2537,   567,  2771,  2771,
     145,  1547,  2771,  2798,  2771,  2537,  2831,  2864,  2897,  2930,
    2771,  2963,   230,   446,   571,   610,   578,   579,  3618,    17,
     249,   538,  3618,   580,   283,   181,   309,   121,   330,   779,
     849,  1324,  1361,   601,   590,   604,   605,   612,   229,   613,
     614,   298,  1300,   621,   623,   526,   624,   626,   627,   630,
     633,  3618,   637,   638,   645,  3618,   651,   843,   658,   660,
    3631,   103,   166,   905,  3618,   662,   240,   114,   365,    56,
     635,   911,   976,  1018,  1058,  1580,   251,   325,   666,  3322,
     670,  1613,  1646,  1679,  1712,  1745,   675,  3505,  3525,   676,
    3631,  2174,  2996,  3029,  3062,  3095,   382,   535,  3618,  3644,
    3618,   321,   338,  3585,  3670,  3670,  3670,  3670,  3670,   465,
     141,   141,  3618,  3349,  3618,  3644,  3618,   340,  3585,   347,
    3618,  3644,  3618,   400,   413,  3585,  3683,  3683,  3683,  3683,
    3683,  1778,   382,   557,  2537,  3376,  1811,   744,  1844,  3545,
     487,  3128,   -16,  3161,   453,   668,   486,  3415,   674,   389,
     193,  1003,  3421,  3439,   678,   679,   687,   494,   512,   688,
     516,   694,   696,   517,   701,   523,  1079,   708,   479,   172,
     985,  1110,  1115,   -16,  1877,  2630,   286,  1249,   710,   540,
    3194,    46,  3444,  3462,  3468,  3477,   717,   720,   721,   722,
     727,   730,   731,  1149,  1205,  3400,  3406,    46,  1910,  2537,
    3565,  2537,  2537,   703,   738,  2744,  2630,  2537,   736,  2630,
    2630,  2174,  2174,  2630,  1943,  2630,  2537,  1976,  2009,  3227,
    3260,  2042,  2075,  2630,  3293,  2108,  2141
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
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -274,  -274,  -274,  -274,    -2,  -155,   693,     8,  -237,  -186,
    -273,  -274,   745,  -115,   -30,   -88,   317,   -14,   420,    53,
     549,    -3,   -35,   295,   -71,   -36,   -70,   -66,   -79,  1084,
     208,  1171,  1027,   938,   791,   700,   313,   461,   552,  -235,
    -274
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,   128,    10,    11,   129,    12,    24,
      16,    22,    23,    31,   130,    54,   131,    55,   152,    99,
      75,    56,    57,    58,    59,    60,    61,    62,   111,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,   115,
     116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    53,    77,   187,   189,    81,   112,   247,   190,   292,
       7,   232,   143,    19,   173,    20,   240,    15,   298,   331,
       8,   -81,    27,   -81,   -81,    -4,    28,     9,    -4,    51,
       3,   -81,   -88,   312,   -81,   -81,   -88,   173,   188,    52,
     317,   101,   173,   202,   173,   323,    21,   107,   110,   110,
     347,   -81,   215,    81,    81,    81,    81,    81,    81,    81,
     278,   -46,   187,   189,   235,   -46,   133,   190,   -46,    -2,
     -67,   283,     4,   -67,   -67,   -46,   -46,   -13,    93,   -46,
     -46,   -46,   -46,   -46,   -46,   233,   -67,   -46,   -67,   -46,
     -67,   -67,   -67,   -46,   132,   -19,   234,   188,   -74,   -19,
     -74,   -74,    -3,   -67,    17,    -3,   215,   -81,   -74,   -81,
     -81,   -74,   -74,    53,   205,   244,    25,   -81,   244,   244,
     -81,   -81,   244,   -74,   244,   256,   291,   -53,   -63,   -53,
     244,   276,   173,   -81,   113,   -67,   173,   -81,   -67,   -67,
      88,    51,    89,   242,   -63,   353,   242,   242,   -63,   106,
     242,    52,   242,   243,    26,   -67,   243,   243,   242,   240,
     243,   354,   243,    13,    14,   173,   108,   109,   243,   173,
     -82,   205,   -82,   -82,   215,   -87,   278,    90,   173,   -87,
     -82,   305,   306,   -82,   -82,   145,   -66,   148,   149,   -66,
     -66,   124,   -51,   -15,   286,   -63,   -82,   256,   254,   154,
     -82,   -61,   -66,    20,   215,   -20,   -66,   -66,   160,   -20,
     -66,   -66,   173,   202,   173,   -63,   -61,   215,   173,   173,
     173,   173,   173,   304,   110,   110,   173,   -66,   173,   202,
     173,   245,   215,   -62,   173,   202,   173,   232,   246,   215,
     215,   215,   215,   215,   215,   205,   369,   370,   -62,    82,
     327,   173,   281,   -82,   -61,   -82,   -82,    -5,   174,   282,
      -5,    53,   253,   -82,   262,   135,   -82,   -82,   232,    29,
     -61,   232,   232,   205,   -61,   232,   -17,   232,   -16,   187,
     189,   174,   174,   -82,   190,   232,   174,   -46,   174,    51,
     235,   -46,   350,   137,   -46,    73,   216,   -61,   118,    52,
     -18,   -46,   -46,    90,   -18,   -46,   -46,   -46,   -46,   -46,
     -46,   233,   205,   -46,   188,   -46,   -60,   -61,   -52,   -46,
     349,   235,   234,   -65,   235,   235,   -65,   255,   235,   142,
     235,   -60,   -51,   -86,   -69,   -62,   257,   325,   235,    53,
      53,   174,   233,   -65,   -69,   233,   233,   -69,   -69,   233,
     216,   233,   205,   234,   205,   -62,   234,   234,    74,   233,
     234,   -60,   234,   180,   -69,   -10,   -10,    51,    51,    98,
     234,   193,   297,    87,   311,    93,   251,    52,    52,   -65,
     174,   -60,   -65,   277,    76,   -66,   180,   180,   -66,   -66,
      78,   180,   104,   180,   236,   -65,   239,   -11,   -11,   -65,
     -66,   222,   356,   -64,   359,   360,   -64,   255,   123,   174,
     365,   -11,   -11,   269,   -62,   -12,    79,    32,   273,   373,
      80,    33,   174,   -64,    34,    83,   -63,   205,   147,    91,
     -62,    39,    40,   -48,   -62,    41,    42,    43,    44,    45,
      46,   -63,    84,    47,    85,    48,   180,   316,   290,    50,
     -74,    -6,   -74,   -74,    -6,   222,   174,   -49,   174,   -50,
     -74,   216,   153,   -74,   -74,   156,   157,   205,    88,   158,
     174,   159,   174,   106,   174,   -74,   216,   161,   174,   -53,
     174,   180,   125,   216,   100,   180,   126,   332,    33,    -8,
     134,    34,    -8,   -64,   136,   174,   -64,   277,    39,    40,
     205,   -60,    41,    42,    43,    44,    45,    46,   205,   -64,
      47,   181,   192,   -64,   180,   -53,    50,   -60,   180,    -7,
     334,   -60,    -7,   222,   236,   138,   205,   180,   -52,   -14,
     205,   205,   -14,   -58,   181,   181,   -59,   205,   -57,   181,
     203,   181,   -83,   139,   -83,   -83,   339,    -9,    -9,   223,
     341,   343,   -83,   222,   205,   -83,   -83,   345,   174,   -53,
     -74,   180,   295,   180,   293,    14,   222,   180,   180,   180,
     180,   303,   -83,   140,   352,   180,   141,   180,   309,   180,
     193,   222,   -54,   180,   314,   180,   324,    14,   222,   222,
     222,   222,   222,   322,   181,   -55,   -81,   -56,   -81,   -81,
     180,   155,   182,   223,   248,   -74,   -81,   -74,   -74,   -81,
     -81,   249,   250,   253,   -74,   -74,   -74,   -74,   -74,   -74,
     236,   -81,   239,   259,   -74,   182,   182,   -74,   -74,   181,
     182,   204,   182,   181,   -53,   -74,   -53,   260,   261,   -69,
     224,   279,   348,   -53,   -74,   358,   -48,   -49,   -50,   -69,
     263,   236,   -69,   -69,   236,   236,   264,   265,   236,   266,
     236,   -81,   181,   180,   -82,   -69,   181,   -83,   236,   -69,
     268,   223,   -76,   364,   102,   181,   367,   368,   164,   -77,
     371,   165,   372,   -65,   270,   182,   -65,    92,   166,   167,
     376,   271,   168,   272,   224,   275,   169,   170,   -65,   285,
     171,   223,   333,   287,   288,   289,   172,    18,   335,   181,
     203,   181,   336,   337,   223,   181,   181,   181,   181,   181,
     182,   338,   340,   181,   182,   181,   203,   181,   -75,   223,
     342,   181,   203,   181,   361,   344,   223,   223,   223,   223,
     223,   223,   346,   -64,   351,   328,   -64,    92,   181,   164,
     179,   -54,   165,   182,   -55,   -56,   -80,   182,   -64,   166,
     167,   -78,   224,   168,   -79,   -84,   182,   169,   170,   362,
     366,   171,    30,   179,   179,   363,   284,   172,   179,     0,
     179,     0,     0,   -71,     0,   -71,   258,     0,   221,     0,
       0,     0,   224,   -71,   122,     0,   -71,   -71,     0,     0,
     182,   204,   182,     0,     0,   224,   182,   182,   182,   182,
     182,   181,     0,   -71,   182,     0,   182,   204,   182,     0,
     224,     0,   182,   204,   182,     0,     0,   224,   224,   224,
     224,   224,   224,   179,     0,     0,     0,     0,     0,   182,
       0,   178,   221,     0,     0,     0,     0,   -74,     0,   -74,
     -74,     0,     0,   -73,     0,   -73,   -73,   -74,     0,     0,
     -74,   -74,     0,   -73,   178,   178,   -73,   -73,   179,   178,
       0,   178,   179,   -74,    97,     0,   -53,   -74,   164,   220,
       0,   183,     0,   -73,   121,     0,     0,     0,   166,   167,
       0,     0,   168,   184,   185,   186,   169,   170,     0,     0,
     171,   179,   182,     0,     0,   179,   172,     0,     0,   -83,
     221,   -83,   -83,     0,   179,   -71,     0,   -71,   280,   -83,
       0,     0,   -83,   -83,   178,   -71,     0,     0,   -71,   -71,
       0,     0,     0,   220,     0,   -83,     0,     0,     0,   -83,
     221,   -71,     0,     0,     0,   -71,     0,     0,   179,     0,
     179,     0,     0,   221,   179,   179,   179,   302,     0,   178,
       0,     0,   179,   178,   179,     0,   179,     0,   221,     0,
     179,     0,   179,     0,     0,   221,   221,   221,   221,   321,
     -73,     0,   -73,   -73,     0,     0,     0,   179,   177,   -68,
     -73,   279,   178,   -73,   -73,     0,   178,     0,     0,   -68,
       0,   220,   -68,   -68,     0,   178,   -73,   -68,     0,   257,
     -73,   177,   177,     0,     0,   -68,   177,   -68,   177,   -68,
     -68,   -68,   -76,     0,   -76,   -76,   219,     0,     0,     0,
     120,   220,   -76,     0,     0,   -76,   -76,   -68,     0,   178,
       0,   178,     0,     0,   220,   178,   178,   301,   -76,     0,
     179,     0,   -76,   178,     0,   178,     0,   178,     0,   220,
       0,   178,   -77,   178,   -77,   -77,   220,   220,   220,   320,
       0,   177,   -77,     0,     0,   -77,   -77,   176,   178,     0,
     219,     0,     0,   -75,     0,   -75,   -75,     0,   -77,     0,
       0,     0,   -77,   -75,     0,     0,   -75,   -75,     0,     0,
     176,   176,     0,     0,     0,   176,   177,   176,     0,   -75,
     177,     0,     0,   -75,   -70,   218,   -70,   280,   119,   -72,
       0,   -72,   -72,     0,   -70,     0,     0,   -70,   -70,   -72,
       0,     0,   -72,   -72,    86,     0,     0,     0,     0,   177,
     -70,   178,     0,   177,   -70,   -72,     0,     0,   219,   -72,
       0,     0,   177,   -80,     0,   -80,   -80,    96,   191,     0,
     176,     0,   103,   -80,   105,     0,   -80,   -80,     0,   218,
       0,     0,   114,   117,     0,     0,     0,     0,   219,   -80,
       0,     0,     0,   -80,     0,     0,   177,     0,   177,     0,
       0,   219,   177,   300,     0,   176,     0,     0,     0,   176,
     177,     0,   177,     0,   177,     0,   219,     0,   177,   -78,
     177,   -78,   -78,   219,   219,   319,     0,   191,     0,   -78,
       0,   175,   -78,   -78,     0,   177,   150,     0,   176,     0,
       0,     0,   176,     0,     0,   -78,     0,   218,     0,   -78,
       0,   176,     0,     0,   175,   175,     0,     0,     0,   175,
     237,   175,     0,     0,    33,     0,   252,    34,     0,   217,
       0,     0,     0,     0,    39,    40,     0,   218,    41,    42,
      43,    44,    45,    46,     0,   176,    47,   176,   238,     0,
     218,   299,    50,     0,     0,   267,     0,     0,   177,   176,
       0,   176,     0,   176,     0,   218,     0,   176,   274,   176,
       0,   -47,   218,   318,   175,   -47,     0,     0,   -47,     0,
       0,     0,     0,   217,   176,   -47,   -47,     0,     0,   -47,
     -47,   -47,   -47,   -47,   -47,     0,     0,   -47,   -76,   -47,
     -76,   -76,   294,   -47,   296,     0,     0,   114,   -76,   175,
       0,   -76,   -76,   175,     0,     0,   307,     0,   308,     0,
     310,     0,   114,     0,   313,     0,   315,     0,   -76,   114,
       0,     0,     0,     0,     0,   -77,     0,   -77,   -77,     0,
       0,   329,   175,     0,     0,   -77,   175,   176,   -77,   -77,
       0,   217,   -36,     0,   -36,   175,   -36,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,   -77,   -36,   -36,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,     0,
     -36,   217,     0,   -36,   -36,   -82,     0,   -82,   -82,   175,
       0,   175,     0,     0,   217,   -82,     0,     0,   -82,   -82,
       0,     0,     0,   175,   191,   175,     0,   175,     0,   217,
     -82,   175,     0,   175,     0,   -37,   217,   -37,     0,   -37,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,   175,   -37,
     -37,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,   -37,     0,   -37,     0,     0,   -37,   -37,   -35,     0,
     -35,     0,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,     0,     0,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,   -35,     0,   -35,     0,     0,   -35,
     -35,     0,     0,     0,     0,   -38,     0,   -38,     0,   -38,
       0,   175,   -38,   -38,   144,   -38,   -38,   -38,     0,   -38,
     -38,     0,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,   -38,     0,   -38,     0,     0,   -38,   -38,   -34,     0,
     -34,     0,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,     0,   -34,     0,     0,   -34,
     -34,   -46,     0,   -46,     0,   -46,     0,     0,   -46,   -46,
     -46,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,   -46,
     -46,   -46,   -46,   -46,   -46,     0,     0,   -46,     0,   -46,
       0,     0,   -46,   -46,   -47,     0,   -47,     0,   -47,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,     0,   -47,   -47,
       0,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,
     -47,     0,   -47,     0,     0,   -47,   -47,   -27,     0,   -27,
       0,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   -27,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,
     -27,     0,     0,   -27,     0,   -27,     0,     0,   -27,   -27,
     -28,     0,   -28,     0,   -28,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,   -28,   -28,     0,     0,   -28,   -28,
     -28,   -28,   -28,   -28,     0,     0,   -28,     0,   -28,     0,
       0,   -28,   -28,   -26,     0,   -26,     0,   -26,     0,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,     0,
       0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,
       0,   -26,     0,     0,   -26,   -26,   -25,     0,   -25,     0,
     -25,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
     -25,   -25,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,
       0,     0,   -25,     0,   -25,     0,     0,   -25,   -25,    -8,
       0,    -8,     0,    -8,     0,     0,    -8,    -8,    -8,    -8,
      -8,    -8,     0,    -8,    -8,     0,     0,    -8,    -8,    -8,
      -8,    -8,    -8,     0,     0,    -8,     0,    -8,     0,     0,
      -8,    -8,   -44,     0,   -44,     0,   -44,     0,     0,   -44,
     -44,   -44,   -44,   -44,   -44,     0,   -44,   -44,     0,     0,
     -44,   -44,   -44,   -44,   -44,   -44,     0,     0,   -44,     0,
     -44,     0,     0,   -44,   -44,   -45,     0,   -45,     0,   -45,
       0,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,
     -45,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,
       0,   -45,     0,   -45,     0,     0,   -45,   -45,    -7,     0,
      -7,     0,    -7,     0,     0,    -7,    -7,    -7,    -7,    -7,
      -7,     0,    -7,    -7,     0,     0,    -7,    -7,    -7,    -7,
      -7,    -7,     0,     0,    -7,     0,    -7,     0,     0,    -7,
      -7,   -38,     0,   -38,     0,   -38,     0,     0,   -38,   -38,
     355,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,   -38,     0,   -38,
       0,     0,   -38,   -38,   -33,     0,   -33,     0,   -33,     0,
       0,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
     -33,     0,   -33,     0,     0,   -33,   -33,   -32,     0,   -32,
       0,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,
       0,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,   -32,     0,   -32,     0,     0,   -32,   -32,
     -31,     0,   -31,     0,   -31,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,   -31,     0,   -31,     0,
       0,   -31,   -31,   -40,     0,   -40,     0,   -40,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,   -40,
       0,   -40,     0,     0,   -40,   -40,   -29,     0,   -29,     0,
     -29,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     -29,   -29,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,   -29,     0,   -29,     0,     0,   -29,   -29,   -14,
       0,   -14,     0,   -14,     0,     0,   -14,   -14,   -14,   -14,
     -14,   -14,     0,   -14,   -14,     0,     0,   -14,   -14,   -14,
     -14,   -14,   -14,     0,     0,   -14,     0,   -14,     0,     0,
     -14,   -14,   -30,     0,   -30,     0,   -30,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,     0,   -30,   -30,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,
     -30,     0,     0,   -30,   -30,   -21,     0,   -21,     0,   -21,
       0,     0,   -21,   -21,     0,   -21,   -21,   -21,     0,   -21,
     -21,     0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,
       0,   -21,     0,   -21,     0,     0,   -21,   -21,    32,     0,
     162,     0,    33,     0,     0,    34,    35,     0,    36,    37,
      38,     0,    39,    40,     0,     0,    41,    42,    43,    44,
      45,    46,     0,     0,    47,     0,    48,     0,     0,    49,
      50,   -46,     0,   -46,     0,   -46,     0,     0,   -46,   -46,
       0,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,   -46,
     -46,   -46,   -46,   -46,   -46,     0,     0,   -46,     0,   -46,
       0,     0,   -46,   -46,   -47,     0,   -47,     0,   -47,     0,
       0,   -47,   -47,     0,   -47,   -47,   -47,     0,   -47,   -47,
       0,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,
     -47,     0,   -47,     0,     0,   -47,   -47,   -22,     0,   -22,
       0,   -22,     0,     0,   -22,   -22,     0,   -22,   -22,   -22,
       0,   -22,   -22,     0,     0,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,   -22,     0,   -22,     0,     0,   -22,   -22,
     -23,     0,   -23,     0,   -23,     0,     0,   -23,   -23,     0,
     -23,   -23,   -23,     0,   -23,   -23,     0,     0,   -23,   -23,
     -23,   -23,   -23,   -23,     0,     0,   -23,     0,   -23,     0,
       0,   -23,   -23,   -24,     0,   -24,     0,   -24,     0,     0,
     -24,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,     0,
       0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,
       0,   -24,     0,     0,   -24,   -24,   -27,     0,   -27,     0,
     -27,     0,     0,   -27,   -27,     0,   -27,   -27,   -27,     0,
     -27,   -27,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,
       0,     0,   -27,     0,   -27,     0,     0,   -27,   -27,   -28,
       0,   -28,     0,   -28,     0,     0,   -28,   -28,     0,   -28,
     -28,   -28,     0,   -28,   -28,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,   -28,     0,   -28,     0,     0,
     -28,   -28,   -26,     0,   -26,     0,   -26,     0,     0,   -26,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,     0,
     -26,     0,     0,   -26,   -26,   -25,     0,   -25,     0,   -25,
       0,     0,   -25,   -25,     0,   -25,   -25,   -25,     0,   -25,
     -25,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,     0,   -25,     0,     0,   -25,   -25,   -41,     0,
     -41,     0,   -41,     0,     0,   -41,   -41,     0,   -41,   -41,
     -41,     0,   -41,   -41,     0,     0,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,   -41,   -44,   -41,   -44,   -41,   -44,
     -41,     0,   -44,   -44,     0,   -44,   -44,   -44,     0,   -44,
     -44,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,     0,
       0,   -44,     0,   -44,     0,     0,   -44,   -44,   -45,     0,
     -45,     0,   -45,     0,     0,   -45,   -45,     0,   -45,   -45,
     -45,     0,   -45,   -45,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,   -45,     0,   -45,     0,     0,   -45,
     -45,   225,     0,   226,     0,    33,     0,     0,    34,   227,
       0,   228,   229,   230,     0,    39,    40,     0,     0,    41,
      42,    43,    44,    45,    46,     0,     0,    47,   -43,   231,
     -43,   127,   -43,    50,     0,   -43,   -43,     0,   -43,   -43,
     -43,     0,   -43,   -43,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -43,   -42,   -43,   -42,   -43,   -42,
     -43,     0,   -42,   -42,     0,   -42,   -42,   -42,     0,   -42,
     -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,   -42,    32,   -42,   162,   -42,    33,   -42,     0,    34,
      35,     0,    36,    37,    38,     0,    39,    40,     0,     0,
      41,    42,    43,    44,    45,    46,     0,     0,    47,     0,
      48,     0,     0,   151,    50,   -39,     0,   -39,     0,   -39,
       0,     0,   -39,   -39,     0,   -39,   -39,   -39,     0,   -39,
     -39,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,     0,
       0,   -39,    32,   -39,   162,   -39,    33,   -39,     0,    34,
      35,     0,    36,    37,    38,     0,    39,    40,     0,     0,
      41,    42,    43,    44,    45,    46,     0,     0,    47,   -33,
      48,   -33,   241,   -33,    50,     0,   -33,   -33,     0,   -33,
     -33,   -33,     0,   -33,   -33,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,   -33,     0,   -33,     0,     0,
     -33,   -33,   -32,     0,   -32,     0,   -32,     0,     0,   -32,
     -32,     0,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,
     -32,     0,     0,   -32,   -32,   -31,     0,   -31,     0,   -31,
       0,     0,   -31,   -31,     0,   -31,   -31,   -31,     0,   -31,
     -31,     0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,   -31,     0,   -31,     0,     0,   -31,   -31,   -40,     0,
     -40,     0,   -40,     0,     0,   -40,   -40,     0,   -40,   -40,
     -40,     0,   -40,   -40,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,   -40,     0,   -40,     0,     0,   -40,
     -40,   -29,     0,   -29,     0,   -29,     0,     0,   -29,   -29,
       0,   -29,   -29,   -29,     0,   -29,   -29,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,   -29,
       0,     0,   -29,   -29,   -30,     0,   -30,     0,   -30,     0,
       0,   -30,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,
       0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -30,     0,   -30,     0,     0,   -30,   -30,   -36,     0,   -36,
       0,   -36,     0,     0,   -36,   -36,     0,   -36,   -36,   -36,
       0,   -36,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,   -36,     0,   -36,     0,     0,   -36,   -36,
     -37,     0,   -37,     0,   -37,     0,     0,   -37,   -37,     0,
     -37,   -37,   -37,     0,   -37,   -37,     0,     0,   -37,   -37,
     -37,   -37,   -37,   -37,     0,     0,   -37,     0,   -37,     0,
       0,   -37,   -37,   -35,     0,   -35,     0,   -35,     0,     0,
     -35,   -35,     0,   -35,   -35,   -35,     0,   -35,   -35,     0,
       0,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,
       0,   -35,     0,     0,   -35,   -35,    -8,     0,    -8,     0,
      -8,     0,     0,    -8,    -8,     0,    -8,    -8,    -8,     0,
      -8,    -8,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,    -8,     0,    -8,     0,     0,    -8,    -8,    32,
       0,   162,     0,    33,     0,     0,    34,    35,     0,    36,
      37,    38,     0,    39,    40,     0,     0,    41,    42,    43,
      44,    45,    46,     0,     0,    47,     0,    48,     0,     0,
     330,    50,    -7,     0,    -7,     0,    -7,     0,     0,    -7,
      -7,     0,    -7,    -7,    -7,     0,    -7,    -7,     0,     0,
      -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,     0,
      -7,     0,     0,    -7,    -7,   -34,     0,   -34,     0,   -34,
       0,     0,   -34,   -34,     0,   -34,   -34,   -34,     0,   -34,
     -34,     0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,   -34,     0,   -34,     0,     0,   -34,   -34,    32,     0,
     162,     0,    33,     0,     0,    34,    35,     0,    36,    37,
      38,     0,    39,    40,     0,     0,    41,    42,    43,    44,
      45,    46,     0,     0,    47,     0,    48,     0,     0,   374,
      50,    32,     0,   162,     0,    33,     0,     0,    34,    35,
       0,    36,    37,    38,     0,    39,    40,     0,     0,    41,
      42,    43,    44,    45,    46,     0,     0,    47,     0,    48,
       0,     0,   375,    50,   -14,     0,   -14,     0,   -14,     0,
       0,   -14,   -14,     0,   -14,   -14,   -14,     0,   -14,   -14,
       0,     0,   -14,   -14,   -14,   -14,   -14,   -14,     0,     0,
     -14,     0,   -14,   225,     0,   -14,   -14,    33,     0,     0,
      34,     0,     0,     0,     0,     0,     0,    39,    40,     0,
       0,    41,    42,    43,    44,    45,    46,     0,     0,    47,
     -45,   231,     0,     0,   -45,    50,     0,   -45,     0,     0,
       0,     0,     0,     0,   -45,   -45,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   -45,   326,   -45,     0,
       0,    33,   -45,     0,    34,     0,     0,     0,     0,     0,
       0,    39,    40,     0,     0,    41,    42,    43,    44,    45,
      46,     0,     0,    47,   -79,   192,   -79,   -79,     0,    50,
     -84,     0,   -84,   -84,   -79,     0,     0,   -79,   -79,   -75,
     -84,   -75,   -75,   -84,   -84,   -70,     0,   -70,   258,   -75,
     -79,     0,   -75,   -75,   -79,   -70,   -84,     0,   -70,   -70,
     -84,     0,     0,   -72,     0,   -72,   -72,     0,   -80,   -75,
     -80,   -80,     0,   -72,     0,   -70,   -72,   -72,   -80,     0,
       0,   -80,   -80,     0,     0,     0,   -78,     0,   -78,   -78,
       0,     0,   -79,   -72,   -79,   -79,   -78,     0,   -80,   -78,
     -78,   -84,   -79,   -84,   -84,   -79,   -79,     0,     0,     0,
     164,   -84,     0,   183,   -84,   -84,   -78,     0,     0,     0,
     166,   167,   -79,     0,   168,   184,   185,   186,   169,   170,
     -46,   -84,   171,   -46,     0,     0,     0,     0,   172,   146,
     -46,   -46,     0,     0,   -46,   -46,   -46,   -46,   -46,   -46,
     -47,     0,   -46,   -47,     0,     0,     0,     0,   -46,   -46,
     -47,   -47,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
     -45,     0,   -47,   -45,     0,     0,     0,     0,   -47,   -47,
     -45,   -45,     0,     0,   -45,   -45,   -45,   -45,   -45,   -45,
     164,     0,   -45,   183,     0,     0,     0,     0,   -45,   -45,
     166,   167,     0,     0,   168,   184,   185,   186,   169,   170,
     206,     0,   171,   207,     0,     0,     0,     0,   172,   357,
     208,   209,     0,    33,   210,     0,   163,     0,   211,   212,
       0,     0,   213,    39,    40,     0,     0,    41,   214,   -85,
       0,    45,    46,   164,     0,    47,   165,     0,     0,     0,
       0,    50,     0,   166,   167,     0,   206,   168,     0,   207,
       0,   169,   170,     0,     0,   171,   208,   209,     0,   194,
     210,   172,   195,     0,   211,   212,     0,     0,   213,   196,
     197,     0,    33,     0,   214,   163,     0,   198,   199,     0,
       0,   200,    39,    40,     0,   164,     0,   201,   165,     0,
      45,    46,     0,     0,    47,   166,   167,     0,   206,     0,
      50,   207,     0,   169,   170,     0,     0,   171,   208,   209,
       0,     0,     0,   172,     0,     0,   211,   212,     0,   -83,
     213,   -83,   -83,     0,     0,   -71,   214,   -71,    95,   -83,
       0,     0,   -83,   -83,     0,   -71,     0,     0,   -71,   -71,
       0,     0,     0,   -73,   -83,   -73,   -73,     0,     0,   -76,
     -71,   -76,   -76,   -73,     0,     0,   -73,   -73,     0,   -76,
       0,     0,   -76,   -76,     0,     0,     0,   -77,   -73,   -77,
     -77,     0,     0,   -75,   -76,   -75,   -75,   -77,     0,     0,
     -77,   -77,     0,   -75,     0,     0,   -75,   -75,     0,     0,
       0,   -70,   -77,   -70,    95,     0,     0,   -72,   -75,   -72,
     -72,   -70,     0,     0,   -70,   -70,     0,   -72,     0,     0,
     -72,   -72,     0,     0,     0,   -80,   -70,   -80,   -80,     0,
       0,   -78,   -72,   -78,   -78,   -80,     0,     0,   -80,   -80,
       0,   -78,     0,     0,   -78,   -78,     0,     0,     0,   -79,
     -80,   -79,   -79,     0,     0,   -84,   -78,   -84,   -84,   -79,
       0,     0,   -79,   -79,     0,   -84,     0,     0,   -84,   -84,
       0,   -69,     0,    94,   -79,     0,   -68,     0,    94,     0,
     -84,   -69,     0,     0,   -69,   -69,   -68,     0,     0,   -68,
     -68,     0,     0,     0,     0,     0,   -69,     0,     0,     0,
       0,   -68
};

static const yytype_int16 yycheck[] =
{
       2,    31,    37,    74,    74,    41,    85,   162,    74,   246,
       2,    99,   127,     1,    50,     3,    14,    33,   253,   292,
       1,     4,    30,     6,     7,     0,    34,     8,     3,    31,
       0,    14,    30,   268,    17,    18,    34,    73,    74,    31,
     275,    76,    78,    79,    80,   282,    34,    83,    84,    85,
     323,    34,    88,    89,    90,    91,    92,    93,    94,    95,
       4,     1,   133,   133,    99,     5,   101,   133,     8,     0,
      14,   226,     3,    17,    18,    15,    16,    31,     4,    19,
      20,    21,    22,    23,    24,    99,    30,    27,    14,    29,
      34,    17,    18,    33,    34,    30,    99,   133,     4,    34,
       6,     7,     0,    29,     8,     3,   142,     4,    14,     6,
       7,    17,    18,   143,    14,   145,    34,    14,   148,   149,
      17,    18,   152,    29,   154,     4,   241,    33,    14,    35,
     160,    17,   168,    30,    34,    14,   172,    34,    17,    18,
      33,   143,    35,   145,    30,   331,   148,   149,    34,     8,
     152,   143,   154,   145,     8,    34,   148,   149,   160,    14,
     152,   347,   154,    29,    30,   201,    25,    26,   160,   205,
       4,    14,     6,     7,   210,    30,     4,    14,   214,    34,
      14,   260,   261,    17,    18,   132,    14,   134,   135,    17,
      18,    34,    29,    31,   229,    14,    30,     4,    17,   146,
      34,    14,    30,     3,   240,    30,    34,    14,   155,    34,
      17,    18,   248,   249,   250,    34,    29,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,    34,   264,   265,
     266,     1,   268,    14,   270,   271,   272,   325,     8,   275,
     276,   277,   278,   279,   280,    14,   361,   362,    29,    41,
     285,   287,     1,     4,    14,     6,     7,     0,    50,     8,
       3,   291,    33,    14,    35,    34,    17,    18,   356,    31,
      30,   359,   360,    14,    34,   363,    31,   365,    31,   350,
     350,    73,    74,    34,   350,   373,    78,     1,    80,   291,
     325,     5,   327,    34,     8,    33,    88,    14,    90,   291,
      30,    15,    16,    14,    34,    19,    20,    21,    22,    23,
      24,   325,    14,    27,   350,    29,    14,    34,    29,    33,
      34,   356,   325,    14,   359,   360,    17,    18,   363,    30,
     365,    29,    34,    34,     4,    14,     6,   284,   373,   369,
     370,   133,   356,    34,    14,   359,   360,    17,    18,   363,
     142,   365,    14,   356,    14,    34,   359,   360,    33,   373,
     363,    14,   365,    50,    34,    29,    30,   369,   370,    74,
     373,    76,    34,    29,    34,     4,   168,   369,   370,    14,
     172,    34,    17,    18,    33,    14,    73,    74,    17,    18,
      33,    78,    79,    80,    99,    30,   101,    29,    30,    34,
      29,    88,   349,    14,   351,   352,    17,    18,    95,   201,
     357,    29,    30,   205,    14,    33,    33,     1,   210,   366,
      33,     5,   214,    34,     8,    33,    14,    14,   133,    17,
      30,    15,    16,    29,    34,    19,    20,    21,    22,    23,
      24,    29,    33,    27,    33,    29,   133,    34,   240,    33,
       4,     0,     6,     7,     3,   142,   248,    29,   250,    29,
      14,   253,   145,    17,    18,   148,   149,    14,    33,   152,
     262,   154,   264,     8,   266,    29,   268,   160,   270,    33,
     272,   168,    34,   275,     1,   172,    34,    34,     5,     0,
      34,     8,     3,    14,    34,   287,    17,    18,    15,    16,
      14,    14,    19,    20,    21,    22,    23,    24,    14,    30,
      27,    50,    29,    34,   201,    34,    33,    30,   205,     0,
      34,    34,     3,   210,   229,    34,    14,   214,    34,     0,
      14,    14,     3,    34,    73,    74,    34,    14,    34,    78,
      79,    80,     4,    34,     6,     7,    34,    29,    30,    88,
      34,    34,    14,   240,    14,    17,    18,    34,   350,    33,
      34,   248,   249,   250,    29,    30,   253,   254,   255,   256,
     257,   258,    34,    34,    34,   262,    34,   264,   265,   266,
     285,   268,    29,   270,   271,   272,    29,    30,   275,   276,
     277,   278,   279,   280,   133,    29,     4,    29,     6,     7,
     287,    34,    50,   142,    33,     4,    14,     6,     7,    17,
      18,    33,    33,    33,     4,    14,     6,     7,    17,    18,
     325,    29,   327,    33,    14,    73,    74,    17,    18,   168,
      78,    79,    80,   172,    33,    34,    35,    33,    33,     4,
      88,     6,   325,    33,    34,   350,    34,    34,    34,    14,
      29,   356,    17,    18,   359,   360,    33,    33,   363,    33,
     365,    34,   201,   350,    34,    30,   205,    34,   373,    34,
      33,   210,    34,   356,     1,   214,   359,   360,     5,    34,
     363,     8,   365,    14,    33,   133,    17,    18,    15,    16,
     373,    33,    19,    33,   142,    33,    23,    24,    29,    33,
      27,   240,    34,    33,    29,    29,    33,    14,    34,   248,
     249,   250,    34,    34,   253,   254,   255,   256,   257,   258,
     168,    34,    34,   262,   172,   264,   265,   266,    34,   268,
      34,   270,   271,   272,    31,    34,   275,   276,   277,   278,
     279,   280,    34,    14,    34,     1,    17,    18,   287,     5,
      50,    34,     8,   201,    34,    34,    34,   205,    29,    15,
      16,    34,   210,    19,    34,    34,   214,    23,    24,    31,
      34,    27,    27,    73,    74,   355,   227,    33,    78,    -1,
      80,    -1,    -1,     4,    -1,     6,     7,    -1,    88,    -1,
      -1,    -1,   240,    14,    94,    -1,    17,    18,    -1,    -1,
     248,   249,   250,    -1,    -1,   253,   254,   255,   256,   257,
     258,   350,    -1,    34,   262,    -1,   264,   265,   266,    -1,
     268,    -1,   270,   271,   272,    -1,    -1,   275,   276,   277,
     278,   279,   280,   133,    -1,    -1,    -1,    -1,    -1,   287,
      -1,    50,   142,    -1,    -1,    -1,    -1,     4,    -1,     6,
       7,    -1,    -1,     4,    -1,     6,     7,    14,    -1,    -1,
      17,    18,    -1,    14,    73,    74,    17,    18,   168,    78,
      -1,    80,   172,    30,     1,    -1,    33,    34,     5,    88,
      -1,     8,    -1,    34,    93,    -1,    -1,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,   201,   350,    -1,    -1,   205,    33,    -1,    -1,     4,
     210,     6,     7,    -1,   214,     4,    -1,     6,     7,    14,
      -1,    -1,    17,    18,   133,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,   142,    -1,    30,    -1,    -1,    -1,    34,
     240,    30,    -1,    -1,    -1,    34,    -1,    -1,   248,    -1,
     250,    -1,    -1,   253,   254,   255,   256,   257,    -1,   168,
      -1,    -1,   262,   172,   264,    -1,   266,    -1,   268,    -1,
     270,    -1,   272,    -1,    -1,   275,   276,   277,   278,   279,
       4,    -1,     6,     7,    -1,    -1,    -1,   287,    50,     4,
      14,     6,   201,    17,    18,    -1,   205,    -1,    -1,    14,
      -1,   210,    17,    18,    -1,   214,    30,     4,    -1,     6,
      34,    73,    74,    -1,    -1,    30,    78,    14,    80,    34,
      17,    18,     4,    -1,     6,     7,    88,    -1,    -1,    -1,
      92,   240,    14,    -1,    -1,    17,    18,    34,    -1,   248,
      -1,   250,    -1,    -1,   253,   254,   255,   256,    30,    -1,
     350,    -1,    34,   262,    -1,   264,    -1,   266,    -1,   268,
      -1,   270,     4,   272,     6,     7,   275,   276,   277,   278,
      -1,   133,    14,    -1,    -1,    17,    18,    50,   287,    -1,
     142,    -1,    -1,     4,    -1,     6,     7,    -1,    30,    -1,
      -1,    -1,    34,    14,    -1,    -1,    17,    18,    -1,    -1,
      73,    74,    -1,    -1,    -1,    78,   168,    80,    -1,    30,
     172,    -1,    -1,    34,     4,    88,     6,     7,    91,     4,
      -1,     6,     7,    -1,    14,    -1,    -1,    17,    18,    14,
      -1,    -1,    17,    18,    50,    -1,    -1,    -1,    -1,   201,
      30,   350,    -1,   205,    34,    30,    -1,    -1,   210,    34,
      -1,    -1,   214,     4,    -1,     6,     7,    73,    74,    -1,
     133,    -1,    78,    14,    80,    -1,    17,    18,    -1,   142,
      -1,    -1,    88,    89,    -1,    -1,    -1,    -1,   240,    30,
      -1,    -1,    -1,    34,    -1,    -1,   248,    -1,   250,    -1,
      -1,   253,   254,   255,    -1,   168,    -1,    -1,    -1,   172,
     262,    -1,   264,    -1,   266,    -1,   268,    -1,   270,     4,
     272,     6,     7,   275,   276,   277,    -1,   133,    -1,    14,
      -1,    50,    17,    18,    -1,   287,   142,    -1,   201,    -1,
      -1,    -1,   205,    -1,    -1,    30,    -1,   210,    -1,    34,
      -1,   214,    -1,    -1,    73,    74,    -1,    -1,    -1,    78,
       1,    80,    -1,    -1,     5,    -1,   172,     8,    -1,    88,
      -1,    -1,    -1,    -1,    15,    16,    -1,   240,    19,    20,
      21,    22,    23,    24,    -1,   248,    27,   250,    29,    -1,
     253,   254,    33,    -1,    -1,   201,    -1,    -1,   350,   262,
      -1,   264,    -1,   266,    -1,   268,    -1,   270,   214,   272,
      -1,     1,   275,   276,   133,     5,    -1,    -1,     8,    -1,
      -1,    -1,    -1,   142,   287,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,     4,    29,
       6,     7,   248,    33,   250,    -1,    -1,   253,    14,   168,
      -1,    17,    18,   172,    -1,    -1,   262,    -1,   264,    -1,
     266,    -1,   268,    -1,   270,    -1,   272,    -1,    34,   275,
      -1,    -1,    -1,    -1,    -1,     4,    -1,     6,     7,    -1,
      -1,   287,   201,    -1,    -1,    14,   205,   350,    17,    18,
      -1,   210,     1,    -1,     3,   214,     5,    -1,    -1,     8,
       9,    10,    11,    12,    13,    34,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,   240,    -1,    32,    33,     4,    -1,     6,     7,   248,
      -1,   250,    -1,    -1,   253,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,   262,   350,   264,    -1,   266,    -1,   268,
      29,   270,    -1,   272,    -1,     1,   275,     3,    -1,     5,
      -1,    -1,     8,     9,    10,    11,    12,    13,   287,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,
       3,    -1,     5,    -1,    -1,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,
      33,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
      -1,   350,     8,     9,    10,    11,    12,    13,    -1,    15,
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
      -1,     3,    -1,     5,    -1,    -1,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
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
      23,    24,    -1,    -1,    27,     1,    29,     3,    31,     5,
      33,    -1,     8,     9,    -1,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,
       3,    -1,     5,    -1,    -1,     8,     9,    -1,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,    32,
      33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,     9,
      -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,     1,    29,
       3,    31,     5,    33,    -1,     8,     9,    -1,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,     1,    29,     3,    31,     5,
      33,    -1,     8,     9,    -1,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,     1,    29,     3,    31,     5,    33,    -1,     8,
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
      24,    -1,    -1,    27,     4,    29,     6,     7,    -1,    33,
       4,    -1,     6,     7,    14,    -1,    -1,    17,    18,     4,
      14,     6,     7,    17,    18,     4,    -1,     6,     7,    14,
      30,    -1,    17,    18,    34,    14,    30,    -1,    17,    18,
      34,    -1,    -1,     4,    -1,     6,     7,    -1,     4,    34,
       6,     7,    -1,    14,    -1,    34,    17,    18,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,     4,    -1,     6,     7,
      -1,    -1,     4,    34,     6,     7,    14,    -1,    34,    17,
      18,     4,    14,     6,     7,    17,    18,    -1,    -1,    -1,
       5,    14,    -1,     8,    17,    18,    34,    -1,    -1,    -1,
      15,    16,    34,    -1,    19,    20,    21,    22,    23,    24,
       5,    34,    27,     8,    -1,    -1,    -1,    -1,    33,    34,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
       5,    -1,    27,     8,    -1,    -1,    -1,    -1,    33,    34,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
       5,    -1,    27,     8,    -1,    -1,    -1,    -1,    33,    34,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
       5,    -1,    27,     8,    -1,    -1,    -1,    -1,    33,    34,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
       5,    -1,    27,     8,    -1,    -1,    -1,    -1,    33,    34,
      15,    16,    -1,     5,    19,    -1,     8,    -1,    23,    24,
      -1,    -1,    27,    15,    16,    -1,    -1,    19,    33,    34,
      -1,    23,    24,     5,    -1,    27,     8,    -1,    -1,    -1,
      -1,    33,    -1,    15,    16,    -1,     5,    19,    -1,     8,
      -1,    23,    24,    -1,    -1,    27,    15,    16,    -1,     5,
      19,    33,     8,    -1,    23,    24,    -1,    -1,    27,    15,
      16,    -1,     5,    -1,    33,     8,    -1,    23,    24,    -1,
      -1,    27,    15,    16,    -1,     5,    -1,    33,     8,    -1,
      23,    24,    -1,    -1,    27,    15,    16,    -1,     5,    -1,
      33,     8,    -1,    23,    24,    -1,    -1,    27,    15,    16,
      -1,    -1,    -1,    33,    -1,    -1,    23,    24,    -1,     4,
      27,     6,     7,    -1,    -1,     4,    33,     6,     7,    14,
      -1,    -1,    17,    18,    -1,    14,    -1,    -1,    17,    18,
      -1,    -1,    -1,     4,    29,     6,     7,    -1,    -1,     4,
      29,     6,     7,    14,    -1,    -1,    17,    18,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,     4,    29,     6,
       7,    -1,    -1,     4,    29,     6,     7,    14,    -1,    -1,
      17,    18,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,     4,    29,     6,     7,    -1,    -1,     4,    29,     6,
       7,    14,    -1,    -1,    17,    18,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,     4,    29,     6,     7,    -1,
      -1,     4,    29,     6,     7,    14,    -1,    -1,    17,    18,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,     4,
      29,     6,     7,    -1,    -1,     4,    29,     6,     7,    14,
      -1,    -1,    17,    18,    -1,    14,    -1,    -1,    17,    18,
      -1,     4,    -1,     6,    29,    -1,     4,    -1,     6,    -1,
      29,    14,    -1,    -1,    17,    18,    14,    -1,    -1,    17,
      18,    -1,    -1,    -1,    -1,    -1,    29,    -1,    -1,    -1,
      -1,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    38,     0,     3,    39,    40,    43,     1,     8,
      41,    42,    44,    29,    30,    33,    46,     8,    42,     1,
       3,    34,    47,    48,    45,    34,     8,    30,    34,    31,
      48,    49,     1,     5,     8,     9,    11,    12,    13,    15,
      16,    19,    20,    21,    22,    23,    24,    27,    29,    32,
      33,    40,    43,    50,    51,    53,    57,    58,    59,    60,
      61,    62,    63,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    33,    33,    56,    33,    58,    33,    33,
      33,    61,    66,    33,    33,    33,    65,    29,    33,    35,
      14,    17,    18,     4,     6,     7,    65,     1,    59,    55,
       1,    58,     1,    65,    72,    65,     8,    61,    25,    26,
      61,    64,    64,    34,    65,    75,    76,    65,    66,    68,
      69,    70,    71,    72,    34,    34,    34,    31,    40,    43,
      50,    52,    34,    58,    34,    34,    34,    34,    34,    34,
      34,    34,    30,    49,    10,    55,    34,    59,    55,    55,
      65,    32,    54,    52,    55,    34,    52,    52,    52,    52,
      55,    52,     3,     8,     5,     8,    15,    16,    19,    23,
      24,    27,    33,    61,    66,    67,    68,    69,    70,    71,
      72,    73,    74,     8,    20,    21,    22,    60,    61,    62,
      63,    65,    29,    59,     5,     8,    15,    16,    23,    24,
      27,    33,    61,    73,    74,    14,     5,     8,    15,    16,
      19,    23,    24,    27,    33,    61,    66,    67,    68,    69,
      70,    71,    72,    73,    74,     1,     3,     9,    11,    12,
      13,    29,    51,    53,    57,    58,    59,     1,    29,    59,
      14,    31,    40,    43,    50,     1,     8,    41,    33,    33,
      33,    66,    65,    33,    17,    18,     4,     6,     7,    33,
      33,    33,    35,    29,    33,    33,    33,    65,    33,    66,
      33,    33,    33,    66,    65,    33,    17,    18,     4,     6,
       7,     1,     8,    41,    56,    33,    58,    33,    29,    29,
      66,    49,    44,    29,    65,    72,    65,    34,    75,    68,
      69,    70,    71,    72,    61,    64,    64,    65,    65,    72,
      65,    34,    75,    65,    72,    65,    34,    75,    68,    69,
      70,    71,    72,    44,    29,    55,     1,    58,     1,    65,
      32,    46,    34,    34,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    34,    34,    34,    46,    52,    34,
      58,    34,    34,    45,    45,    10,    55,    34,    59,    55,
      55,    31,    31,    54,    52,    55,    34,    52,    52,    49,
      49,    52,    52,    55,    32,    32,    52
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    44,    45,    43,    46,    46,    46,    47,    47,
      48,    49,    49,    49,    49,    50,    50,    50,    50,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    53,    54,
      53,    55,    56,    56,    57,    58,    58,    58,    59,    59,
      59,    59,    60,    61,    62,    63,    63,    64,    64,    64,
      65,    65,    66,    66,    67,    67,    68,    68,    69,    69,
      70,    70,    71,    71,    72,    72,    72,    72,    72,    72,
      72,    73,    73,    73,    74,    75,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     3,     2,     3,
       1,     1,     0,     0,     8,     2,     3,     3,     3,     1,
       2,     0,     2,     2,     2,     1,     1,     1,     1,     7,
       8,     6,     6,     6,     3,     1,     1,     1,     4,     0,
       7,     0,     3,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     3,     1,     4,     4,     4,     1,     1,     1,
       3,     1,     2,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     3,     1,     1,     4,     4,
       4,     1,     1,     1,     4,     0,     1,     3,     1
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
#line 54 "syntactic.y"
            {free(((*yyvaluep).sval));}
#line 2016 "syntactic.tab.c"
        break;

    case 26: /* STRING  */
#line 55 "syntactic.y"
            {free(((*yyvaluep).sval));}
#line 2022 "syntactic.tab.c"
        break;

    case 38: /* program  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2028 "syntactic.tab.c"
        break;

    case 39: /* declaration  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2034 "syntactic.tab.c"
        break;

    case 40: /* varDecl  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2040 "syntactic.tab.c"
        break;

    case 41: /* varList  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2046 "syntactic.tab.c"
        break;

    case 42: /* new_id  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2052 "syntactic.tab.c"
        break;

    case 43: /* funcDecl  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2058 "syntactic.tab.c"
        break;

    case 46: /* arguments  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2064 "syntactic.tab.c"
        break;

    case 47: /* argsList  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2070 "syntactic.tab.c"
        break;

    case 48: /* arg  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2076 "syntactic.tab.c"
        break;

    case 49: /* funcBody  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2082 "syntactic.tab.c"
        break;

    case 50: /* stmt  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2088 "syntactic.tab.c"
        break;

    case 51: /* iterStmt  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2094 "syntactic.tab.c"
        break;

    case 52: /* body  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2100 "syntactic.tab.c"
        break;

    case 53: /* condStmt  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2106 "syntactic.tab.c"
        break;

    case 56: /* cond  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2112 "syntactic.tab.c"
        break;

    case 57: /* returnStmt  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2118 "syntactic.tab.c"
        break;

    case 58: /* exprStmt  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2124 "syntactic.tab.c"
        break;

    case 59: /* expression  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2130 "syntactic.tab.c"
        break;

    case 60: /* assign  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2136 "syntactic.tab.c"
        break;

    case 61: /* var  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2142 "syntactic.tab.c"
        break;

    case 62: /* inExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2148 "syntactic.tab.c"
        break;

    case 63: /* outExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2154 "syntactic.tab.c"
        break;

    case 64: /* output  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2160 "syntactic.tab.c"
        break;

    case 65: /* simpleExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2166 "syntactic.tab.c"
        break;

    case 66: /* negExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2172 "syntactic.tab.c"
        break;

    case 67: /* disjExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2178 "syntactic.tab.c"
        break;

    case 68: /* conjExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2184 "syntactic.tab.c"
        break;

    case 69: /* relExpr  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2190 "syntactic.tab.c"
        break;

    case 70: /* artExpr1  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2196 "syntactic.tab.c"
        break;

    case 71: /* artExpr2  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2202 "syntactic.tab.c"
        break;

    case 72: /* factor  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2208 "syntactic.tab.c"
        break;

    case 73: /* constant  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2214 "syntactic.tab.c"
        break;

    case 74: /* call  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2220 "syntactic.tab.c"
        break;

    case 75: /* params  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2226 "syntactic.tab.c"
        break;

    case 76: /* paramList  */
#line 53 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2232 "syntactic.tab.c"
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
#line 66 "syntactic.y"
                                                                {root = (yyvsp[0].tnode);}
#line 2502 "syntactic.tab.c"
    break;

  case 3:
#line 69 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2508 "syntactic.tab.c"
    break;

  case 4:
#line 70 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2514 "syntactic.tab.c"
    break;

  case 5:
#line 73 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2520 "syntactic.tab.c"
    break;

  case 6:
#line 74 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2526 "syntactic.tab.c"
    break;

  case 7:
#line 77 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(VARDECL, (yyvsp[-1].tnode)); setVarsType((yyvsp[-1].tnode), (yyvsp[-2].ival));}
#line 2532 "syntactic.tab.c"
    break;

  case 8:
#line 78 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2538 "syntactic.tab.c"
    break;

  case 9:
#line 82 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2544 "syntactic.tab.c"
    break;

  case 10:
#line 83 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2550 "syntactic.tab.c"
    break;

  case 11:
#line 86 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(declare((yyvsp[0].sval), UNDEF, VARIABLE));}
#line 2556 "syntactic.tab.c"
    break;

  case 12:
#line 89 "syntactic.y"
                        { aux = declare((yyvsp[0].sval), (yyvsp[-1].ival), FUNCTION);
                          pushScope(newScope((yyvsp[0].sval), curr_level+1));
                          n_args = 0;
                          curr_level += 1;}
#line 2565 "syntactic.tab.c"
    break;

  case 13:
#line 94 "syntactic.y"
                                          {aux->n_args = n_args; aux->args_type = malloc(sizeof(int)*n_args); setArgsInfo(aux, (yyvsp[0].tnode), 0);}
#line 2571 "syntactic.tab.c"
    break;

  case 14:
#line 96 "syntactic.y"
                                          {(yyval.tnode) = BinaryNode(FUNCDECL, (yyvsp[-4].tnode), (yyvsp[-1].tnode)); (yyval.tnode)->internal->ref = aux; hideScope(); curr_level-=1;}
#line 2577 "syntactic.tab.c"
    break;

  case 15:
#line 100 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2583 "syntactic.tab.c"
    break;

  case 16:
#line 101 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2589 "syntactic.tab.c"
    break;

  case 17:
#line 102 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2595 "syntactic.tab.c"
    break;

  case 18:
#line 105 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2601 "syntactic.tab.c"
    break;

  case 19:
#line 106 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2607 "syntactic.tab.c"
    break;

  case 20:
#line 109 "syntactic.y"
                                                                { n_args += 1;
                                                                  (yyval.tnode) = idLeaf(declare((yyvsp[0].sval), (yyvsp[-1].ival), VARIABLE)); }
#line 2614 "syntactic.tab.c"
    break;

  case 21:
#line 113 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2620 "syntactic.tab.c"
    break;

  case 22:
#line 114 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2626 "syntactic.tab.c"
    break;

  case 23:
#line 115 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2632 "syntactic.tab.c"
    break;

  case 24:
#line 116 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2638 "syntactic.tab.c"
    break;

  case 25:
#line 119 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2644 "syntactic.tab.c"
    break;

  case 26:
#line 120 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2650 "syntactic.tab.c"
    break;

  case 27:
#line 121 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2656 "syntactic.tab.c"
    break;

  case 28:
#line 122 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2662 "syntactic.tab.c"
    break;

  case 29:
#line 125 "syntactic.y"
                                                                             {(yyval.tnode) = TernaryNode(FOR1, (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2668 "syntactic.tab.c"
    break;

  case 30:
#line 126 "syntactic.y"
                                                                             {(yyval.tnode) = QuaternaryNode(FOR2, (yyvsp[-5].tnode), (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[0].tnode));  hideScope(); curr_level -= 1;}
#line 2674 "syntactic.tab.c"
    break;

  case 31:
#line 127 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FORALL, (yyvsp[-3].tnode), (yyvsp[0].tnode));  hideScope(); curr_level -= 1;}
#line 2680 "syntactic.tab.c"
    break;

  case 32:
#line 128 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FORALL, nullLeaf(), (yyvsp[0].tnode)); yyerrok;  hideScope(); curr_level -= 1;}
#line 2686 "syntactic.tab.c"
    break;

  case 33:
#line 129 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FOR, nullLeaf(), (yyvsp[0].tnode)); yyerrok;  hideScope(); curr_level -= 1;}
#line 2692 "syntactic.tab.c"
    break;

  case 34:
#line 133 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2698 "syntactic.tab.c"
    break;

  case 35:
#line 134 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2704 "syntactic.tab.c"
    break;

  case 36:
#line 135 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2710 "syntactic.tab.c"
    break;

  case 37:
#line 136 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2716 "syntactic.tab.c"
    break;

  case 38:
#line 140 "syntactic.y"
                                                                              {(yyval.tnode) = BinaryNode(IF, (yyvsp[-2].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2722 "syntactic.tab.c"
    break;

  case 39:
#line 142 "syntactic.y"
                        {hideScope(); curr_level -= 1;}
#line 2728 "syntactic.tab.c"
    break;

  case 40:
#line 142 "syntactic.y"
                                                                                       {(yyval.tnode) = TernaryNode(IF_ELSE, (yyvsp[-5].tnode), (yyvsp[-3].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2734 "syntactic.tab.c"
    break;

  case 41:
#line 145 "syntactic.y"
                      {curr_level += 1; pushScope(newScope(curr_scope->name, curr_level));}
#line 2740 "syntactic.tab.c"
    break;

  case 42:
#line 148 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2746 "syntactic.tab.c"
    break;

  case 43:
#line 149 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2752 "syntactic.tab.c"
    break;

  case 44:
#line 152 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(RETURN, (yyvsp[0].tnode));}
#line 2758 "syntactic.tab.c"
    break;

  case 45:
#line 155 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2764 "syntactic.tab.c"
    break;

  case 46:
#line 156 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2770 "syntactic.tab.c"
    break;

  case 47:
#line 157 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2776 "syntactic.tab.c"
    break;

  case 48:
#line 160 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2782 "syntactic.tab.c"
    break;

  case 49:
#line 161 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2788 "syntactic.tab.c"
    break;

  case 50:
#line 162 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2794 "syntactic.tab.c"
    break;

  case 51:
#line 163 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2800 "syntactic.tab.c"
    break;

  case 52:
#line 166 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ASSIGN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2806 "syntactic.tab.c"
    break;

  case 53:
#line 169 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(findDecl((yyvsp[0].sval))); free((yyvsp[0].sval));}
#line 2812 "syntactic.tab.c"
    break;

  case 54:
#line 172 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(READ, (yyvsp[-1].tnode));}
#line 2818 "syntactic.tab.c"
    break;

  case 55:
#line 175 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITE, (yyvsp[-1].tnode));}
#line 2824 "syntactic.tab.c"
    break;

  case 56:
#line 176 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITELN, (yyvsp[-1].tnode));}
#line 2830 "syntactic.tab.c"
    break;

  case 57:
#line 179 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2836 "syntactic.tab.c"
    break;

  case 58:
#line 180 "syntactic.y"
                                                                {(yyval.tnode) = charLeaf((yyvsp[0].cval));}
#line 2842 "syntactic.tab.c"
    break;

  case 59:
#line 181 "syntactic.y"
                                                                {(yyval.tnode) = stringLeaf((yyvsp[0].sval));}
#line 2848 "syntactic.tab.c"
    break;

  case 60:
#line 184 "syntactic.y"
                                                                 {(yyval.tnode) = BinaryNode(IN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2854 "syntactic.tab.c"
    break;

  case 61:
#line 185 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2860 "syntactic.tab.c"
    break;

  case 62:
#line 188 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(NEG, (yyvsp[0].tnode));}
#line 2866 "syntactic.tab.c"
    break;

  case 63:
#line 189 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2872 "syntactic.tab.c"
    break;

  case 64:
#line 192 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(DISJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2878 "syntactic.tab.c"
    break;

  case 65:
#line 193 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2884 "syntactic.tab.c"
    break;

  case 66:
#line 196 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(CONJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2890 "syntactic.tab.c"
    break;

  case 67:
#line 197 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2896 "syntactic.tab.c"
    break;

  case 68:
#line 200 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(RELOP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2902 "syntactic.tab.c"
    break;

  case 69:
#line 201 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2908 "syntactic.tab.c"
    break;

  case 70:
#line 204 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP1, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2914 "syntactic.tab.c"
    break;

  case 71:
#line 205 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2920 "syntactic.tab.c"
    break;

  case 72:
#line 208 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP2, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2926 "syntactic.tab.c"
    break;

  case 73:
#line 209 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2932 "syntactic.tab.c"
    break;

  case 74:
#line 214 "syntactic.y"
                                                                 {(yyval.tnode) = idLeaf(findDecl((yyvsp[0].sval))); free((yyvsp[0].sval));}
#line 2938 "syntactic.tab.c"
    break;

  case 75:
#line 215 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2944 "syntactic.tab.c"
    break;

  case 76:
#line 216 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2950 "syntactic.tab.c"
    break;

  case 77:
#line 217 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2956 "syntactic.tab.c"
    break;

  case 78:
#line 218 "syntactic.y"
                                                                 {(yyval.tnode) = UnaryNode(IS_SET, (yyvsp[-1].tnode));}
#line 2962 "syntactic.tab.c"
    break;

  case 79:
#line 219 "syntactic.y"
                                                                 {(yyval.tnode) = UnaryNode(EXISTS, (yyvsp[-1].tnode));}
#line 2968 "syntactic.tab.c"
    break;

  case 80:
#line 220 "syntactic.y"
                                                                 {(yyval.tnode) = UnaryNode(SETOP, (yyvsp[-1].tnode));  (yyval.tnode)->internal->op_specifier = (yyvsp[-3].ival);}
#line 2974 "syntactic.tab.c"
    break;

  case 81:
#line 223 "syntactic.y"
                                                                {(yyval.tnode) = intLeaf((yyvsp[0].ival));}
#line 2980 "syntactic.tab.c"
    break;

  case 82:
#line 224 "syntactic.y"
                                                                {(yyval.tnode) = floatLeaf((yyvsp[0].fval));}
#line 2986 "syntactic.tab.c"
    break;

  case 83:
#line 225 "syntactic.y"
                                                                {(yyval.tnode) = setLeaf();}
#line 2992 "syntactic.tab.c"
    break;

  case 84:
#line 228 "syntactic.y"
                                                                {checkParams((yyvsp[-3].tnode)->leaf->ref, (yyvsp[-1].tnode)); (yyval.tnode) = BinaryNode(CALL, (yyvsp[-3].tnode), (yyvsp[-1].tnode));}
#line 2998 "syntactic.tab.c"
    break;

  case 85:
#line 233 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 3004 "syntactic.tab.c"
    break;

  case 86:
#line 234 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3010 "syntactic.tab.c"
    break;

  case 87:
#line 237 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3016 "syntactic.tab.c"
    break;

  case 88:
#line 238 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3022 "syntactic.tab.c"
    break;


#line 3026 "syntactic.tab.c"

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
#line 243 "syntactic.y"

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
