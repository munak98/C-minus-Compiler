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

#line 89 "syntactic.tab.c"

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
#line 22 "syntactic.y"

  int ival;
  float fval;
  char cval;
  char* sval;
  struct NODE *tnode;

#line 178 "syntactic.tab.c"

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
#define YYLAST   3773

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  373

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
static const yytype_int16 yyrline[] =
{
       0,    64,    64,    67,    68,    71,    72,    75,    80,    83,
      84,    87,    93,   113,   114,   115,   118,   119,   122,   130,
     131,   132,   133,   136,   137,   138,   139,   142,   143,   144,
     145,   146,   150,   151,   152,   153,   157,   158,   161,   163,
     166,   169,   170,   171,   174,   175,   176,   177,   178,   181,
     184,   189,   192,   193,   196,   199,   200,   203,   204,   207,
     208,   211,   212,   215,   216,   219,   220,   223,   224,   227,
     228,   229,   230,   231,   232,   233,   236,   237,   238,   241,
     246,   247,   250,   251,   254,   257,   261,   264,   265,   266,
     267,   271,   274
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
  "outExpr", "output", "simpleExpr", "disjExpr", "negExpr", "relExpr",
  "artExpr1", "artExpr2", "factor", "constant", "call", "params",
  "paramList", "pertExpr", "setExpr", "elem", "set", YY_NULLPTR
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

#define YYPACT_NINF (-244)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      95,    16,   167,  -244,    19,   203,   278,   369,   395,   411,
     383,   454,   431,    21,    12,     9,   529,    30,    65,    53,
      40,   229,  1895,    98,   240,   189,   126,  1928,   293,  1961,
     185,   216,   196,   221,  2989,   259,   264,   282,  3504,   287,
     297,   312,  3548,  3554,  3572,  1994,   520,  3524,  2027,  2060,
    2093,  2126,  2159,  2192,  2225,   218,   275,    71,   328,   335,
     105,     1,   161,   169,   439,  3672,  3677,  3578,  3596,  3681,
     341,   363,   242,  3178,  2258,  3016,  2285,    36,   521,   242,
     352,   332,   391,    77,    77,    31,  2318,  3502,  3504,  3504,
    3504,  3600,  3600,  3600,   526,     0,   384,  3524,   407,   436,
     421,   425,   435,  1895,  1117,  1168,  1201,  1235,    67,  3043,
     437,   441,   445,   463,   467,   475,   488,   493,   504,   519,
     522,   523,   531,  3614,   101,   544,   337,   176,   418,   499,
     813,  3696,  3701,  3705,   242,   154,   396,  2351,  2378,  2405,
    2438,  2438,  3402,  2438,  2438,  3720,  3630,   557,   570,   571,
    3635,  3526,   569,   451,  1268,  2465,  2498,  2438,   572,  2531,
    2564,   276,   546,  2597,  2438,  2630,   538,   155,   975,   460,
     541,   576,  3524,   843,  1031,  3255,  3524,   577,    37,    90,
     132,   545,   318,   412,  3261,  3279,   788,   591,   597,   601,
     602,   588,   608,   593,   645,   595,   596,   603,   589,   356,
     604,   607,   166,   611,  1301,   220,   196,   609,  3070,   613,
    1334,  1367,  1400,  1433,  1466,   618,  3097,   619,  3524,   507,
     617,   620,  3526,   584,  1078,  3200,  3524,   621,    96,   207,
      75,    93,    17,    32,  3206,  3215,   147,   641,   625,  3725,
    3729,  3422,  3442,   635,  3526,  1895,  2663,  2696,  2729,  2762,
     547,   454,   521,   242,   376,   214,  3502,  3524,  3642,  3642,
    3642,   527,  3502,   521,   242,   391,    77,    77,  3524,  1499,
     563,   454,  2258,  3124,  1532,   472,  1565,  3151,   405,   521,
     242,   265,   238,  3502,  3526,  3647,  3647,  3647,   528,   242,
    3462,   271,  2795,  2828,   634,   633,   642,  3284,   649,   464,
     686,  1087,  3342,   651,  3348,  3357,  3363,   652,   655,   660,
     661,   671,   672,   285,  1598,   637,  1631,   714,  3043,   674,
     675,   676,   679,  3221,   683,   321,   485,   590,   626,   685,
     753,   915,  1013,   687,  2861,  1895,  3381,  3302,  3308,   242,
     709,   690,   691,   692,   693,  1895,  2258,  2258,  3482,  2258,
    2258,  3317,  3240,  3246,   242,  3744,  2894,   694,  2927,  1664,
    1697,  2258,   697,  1730,  1763,   698,  2960,  3386,  1796,  1829,
    2258,  3323,  1862
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
       0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -244,  -244,  -244,  -244,    -2,  -160,    -8,     4,  -243,  -244,
     717,   -93,   -24,   -70,   711,    54,   479,   102,   -33,   234,
     -64,   122,   -62,   -61,   -82,   -30,    85,   170,   891,   818,
     741,   614,   286,   413,  -230,  -244,   540,   -17,   667,   -72
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     5,   104,    10,    11,   105,    15,    20,
      21,    27,   106,    51,   107,    52,    74,    53,    54,    55,
      56,    57,    58,    59,   121,    60,    61,    62,    63,    64,
      65,    66,    67,    68,   125,   126,    69,    70,    71,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    76,   122,    50,   211,    16,     7,   250,   294,   198,
     139,   200,   201,    17,   -86,    18,     3,    85,   -58,    90,
       8,   -66,   133,   -66,   287,    48,   298,     9,   315,   166,
     -58,    49,   307,   -50,   -66,   -66,   -68,   110,   -68,   -68,
      22,   214,   109,   202,    95,   270,    19,   -66,   218,   -68,
     -68,   -66,    96,   324,   -58,   257,   203,   124,   127,   188,
     189,   113,   -68,   190,    23,   123,   -68,   135,   -42,    97,
      25,   -58,   -42,    24,    26,   -42,   142,   240,   198,   285,
     200,   201,   -42,   -42,   -13,   118,   -42,   -42,   -42,   -42,
     -42,   -42,   -62,   -62,   -42,    -4,   -42,   -64,    -4,   286,
     -42,   141,   119,   120,    87,   -62,    88,   -60,   -60,   -62,
     -64,   -64,   202,   -58,   284,    50,   248,   248,   244,   248,
     248,   161,    89,   -64,   -60,   203,   -58,   -64,   212,   -15,
     -58,   -83,   178,   248,   -47,   -83,   258,    48,   246,   246,
     248,   246,   246,    49,   247,   247,   255,   247,   247,   -62,
     -62,   -74,   292,   -74,   -74,   246,   249,   -14,   178,   251,
      80,   247,   246,     9,   -74,   -74,   -62,    -2,   247,   177,
       4,   218,   228,    91,   128,   274,   213,   -74,   -60,   -60,
     295,   -74,   178,   218,   311,   312,   -62,   -62,   153,   306,
     -60,   308,    18,    89,   191,   199,   282,   271,   -62,   191,
     -47,   191,   211,    -3,   117,   -49,    -3,   321,    81,   227,
      80,    80,    80,    80,    80,    80,   332,   179,    72,   177,
     -69,   269,   -69,   -69,   -60,   -60,   124,   178,     9,    73,
     -86,   218,   124,   -69,   -69,   113,   228,   -60,   313,   214,
     318,   -60,   356,   179,   305,   -69,   113,    86,   297,   -50,
      95,   -50,   358,   124,    75,   218,   191,   229,    96,   -17,
     129,   178,   113,   -17,   199,   188,   189,   179,    50,   190,
     -18,   331,   323,   227,   -18,    97,   211,   211,    -5,   211,
     211,    -5,   -61,   -61,   198,   348,   200,   201,   -57,   284,
      48,   211,    77,   244,   177,   -61,    49,    78,   177,   -61,
     211,   -57,   218,   278,   -44,   -57,   -82,   102,   215,   217,
     -82,   178,   179,   214,   214,    79,   214,   214,   202,   -49,
      82,   229,   -66,   -16,   -66,   260,   212,   -16,   214,   291,
      83,   203,    50,   184,    50,   -66,   -66,   214,   -59,   -59,
     177,   228,   254,   243,   227,    84,   179,   228,   177,   -61,
     -61,   -59,   -66,   178,    48,   -59,    48,   -45,    98,   184,
      49,   -61,    49,    98,   -46,    98,   227,   151,   228,    -6,
     -48,   -81,    -6,   234,   213,   191,   158,    94,   227,   177,
     177,   177,   177,   184,   227,    87,   191,   310,   179,   256,
     177,   268,   281,   -61,   -61,    -8,   179,   191,    -8,   116,
     212,   212,   191,   212,   212,   227,   227,   227,   227,   227,
     -61,   191,    12,    13,   229,   212,   -68,   134,   -68,   -68,
      98,   -90,   -57,   257,   212,   -85,   229,   299,   184,   -68,
     -68,    -7,   229,   178,    -7,   -57,    90,   234,   179,   -57,
     -11,   -11,   215,   -64,   -11,    92,   -68,   -57,   213,   213,
     -88,   213,   213,   229,   325,   136,   -64,   -64,   184,   137,
     185,   191,   184,   213,   -69,   -89,   -69,   -69,   -64,   138,
     199,   143,   213,   319,   -86,   144,   191,   -69,   -69,   -91,
      95,   -59,   -59,   -10,   -10,    99,   185,    14,    96,   -63,
      99,   286,    99,   -50,   -69,   188,   189,   -92,   -59,   190,
     235,   145,   -63,   -63,   184,    97,   215,   217,   234,   146,
     185,   -69,   184,   -69,   -69,   -63,   -59,   -59,   179,   -63,
     -12,   -86,   -50,   -12,   -69,   -69,   193,   147,   -59,   112,
     234,   238,   303,   329,   239,   304,   330,   -69,   -54,    98,
     -50,   -69,   234,   184,   184,   184,   184,    99,   234,   -64,
      98,   259,   243,   -55,   184,   185,   -56,   148,    -9,    -9,
     -87,    98,   -64,   -64,   235,   149,    98,   -11,   -11,   234,
     234,   234,   234,   234,   252,    98,   293,    13,   150,   -64,
     215,   215,   362,   215,   215,   185,   -51,   186,   -76,   185,
     -76,   -76,   314,    13,   -65,   215,   -65,   287,   -76,   -52,
     -53,   -76,   -76,   162,   215,   261,   164,   -65,   -65,   253,
     256,   -76,   100,   186,   -76,   -77,   -78,   111,   -76,   115,
     -65,   262,   263,   -44,   -65,    98,   264,   236,   265,   266,
     -67,   185,   -67,   -67,   184,   235,   267,   186,   -45,   185,
      98,   -46,   273,   -67,   -67,   -48,   275,   276,   277,   -69,
     279,   -69,   -69,   280,   283,   288,   -67,   235,   289,   -86,
     -67,   183,   -69,   -69,   290,   335,    99,   336,   345,   235,
     185,   185,   185,   185,   152,   235,   337,    99,   -50,   -69,
     -50,   185,   186,   338,   339,   272,   340,   183,    99,   -84,
     -63,   236,   259,    99,   341,   342,   235,   235,   235,   235,
     235,   233,    99,   -63,   -63,   343,   344,   132,   349,   350,
     351,   183,   186,   352,   187,   -42,   186,   353,   354,   -42,
     -63,   355,   -42,   -79,   -85,   -51,   -52,   -53,   367,   -42,
     -42,   370,   371,   -42,   -42,   -42,   -42,   -42,   -42,   192,
     187,   -42,    28,   -42,   192,     0,   192,   -42,   347,     0,
       0,     0,    99,     0,   237,     0,   183,   -91,   186,   -91,
     -91,   185,   236,     0,   187,   233,   186,    99,     0,     0,
     -91,   -91,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -91,   236,     0,   183,   -91,   182,     0,
     183,     0,   -74,   296,   -74,   -74,   236,   186,   186,   186,
     186,   192,   236,     0,   309,   -74,   -74,     0,   186,   187,
       0,     0,     0,     0,   182,   320,     0,   -63,   237,    92,
     322,     0,   -74,   236,   236,   236,   236,   236,   232,   333,
     -63,   -63,   183,   131,     0,     0,   233,     0,   182,   187,
     183,     0,   -63,   187,     0,     0,     0,   -76,     0,   -76,
     -76,   155,   156,     0,   159,   160,     0,   -76,   233,     0,
     -76,   -76,     0,     0,     0,   181,     0,     0,   163,     0,
     233,   183,   183,   183,   302,   165,   233,   -76,     0,   357,
       0,     0,   183,   182,     0,   187,     0,     0,   186,   237,
       0,   181,   232,   187,   365,     0,     0,   233,   233,   233,
     233,   328,     0,     0,     0,   231,     0,     0,     0,   130,
       0,   237,     0,   182,     0,   181,     0,   182,     0,   -92,
     192,   -92,   -92,   237,   187,   187,   187,   187,     0,   237,
       0,   192,   -92,   -92,     0,   187,     0,     0,   180,     0,
       0,     0,   192,     0,     0,   -92,     0,   192,     0,   -92,
     237,   237,   237,   237,   237,     0,   192,     0,     0,   182,
     181,     0,   183,   232,   180,     0,     0,   182,     0,   231,
       0,     0,     0,     0,     0,     0,     0,     0,   230,   -69,
       0,   -69,   -69,   316,     0,   232,     0,     0,   180,   -86,
     181,     0,   -69,   -69,   181,     0,     0,   232,   182,   182,
     301,     0,     0,   232,   -69,     0,   192,     0,   -50,   182,
       0,     0,     0,     0,     0,   187,     0,   -84,     0,   -84,
     -84,   192,     0,     0,   232,   232,   232,   327,     0,     0,
     -84,   -84,     0,   180,     0,   -77,   181,   -77,   -77,     0,
     231,     0,   230,   -84,   181,   -77,     0,   -84,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,   359,   360,     0,
     363,   364,   231,   180,     0,   -77,     0,   180,     0,     0,
       0,     0,   369,     0,   231,   181,   300,     0,     0,     0,
     231,   372,   -77,     0,   -77,   -77,   181,     0,     0,   182,
       0,   -65,   -77,   -65,   260,   -77,   -77,     0,     0,     0,
       0,   231,   231,   326,   -65,   -65,     0,     0,   -77,   180,
       0,     0,   -77,   230,     0,     0,     0,   180,   -34,     0,
     -34,   -65,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,     0,   230,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,     0,   -34,   230,   180,   -34,
     -34,     0,     0,   230,     0,     0,     0,     0,     0,   180,
       0,     0,     0,     0,     0,     0,   181,     0,     0,   -35,
       0,   -35,     0,   -35,   230,   230,   -35,   -35,   -35,   -35,
     -35,   -35,     0,   -35,   -35,     0,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,     0,   -35,     0,   -35,     0,     0,
     -35,   -35,   -33,     0,   -33,     0,   -33,     0,     0,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,   -33,     0,     0,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   -33,     0,
     -33,     0,     0,   -33,   -33,     0,   -36,     0,   -36,   180,
     -36,     0,     0,   -36,   -36,   140,   -36,   -36,   -36,     0,
     -36,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,     0,   -36,     0,     0,   -36,   -36,   -32,
       0,   -32,     0,   -32,     0,     0,   -32,   -32,   -32,   -32,
     -32,   -32,     0,   -32,   -32,     0,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,     0,   -32,     0,   -32,     0,     0,
     -32,   -32,   -42,     0,   -42,     0,   -42,     0,     0,   -42,
     -42,   -42,   -42,   -42,   -42,     0,   -42,   -42,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,     0,
     -42,     0,     0,   -42,   -42,   -43,     0,   -43,     0,   -43,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,
     -43,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,   -43,     0,   -43,     0,     0,   -43,   -43,   -25,     0,
     -25,     0,   -25,     0,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,   -25,   -25,     0,     0,   -25,   -25,   -25,   -25,
     -25,   -25,     0,     0,   -25,     0,   -25,     0,     0,   -25,
     -25,   -26,     0,   -26,     0,   -26,     0,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,   -26,
     -26,   -26,   -26,   -26,   -26,     0,     0,   -26,     0,   -26,
       0,     0,   -26,   -26,   -24,     0,   -24,     0,   -24,     0,
       0,   -24,   -24,   -24,   -24,   -24,   -24,     0,   -24,   -24,
       0,     0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
     -24,     0,   -24,     0,     0,   -24,   -24,   -23,     0,   -23,
       0,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,   -23,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,
     -23,     0,     0,   -23,     0,   -23,     0,     0,   -23,   -23,
      -8,     0,    -8,     0,    -8,     0,     0,    -8,    -8,    -8,
      -8,    -8,    -8,     0,    -8,    -8,     0,     0,    -8,    -8,
      -8,    -8,    -8,    -8,     0,     0,    -8,     0,    -8,     0,
       0,    -8,    -8,   -40,     0,   -40,     0,   -40,     0,     0,
     -40,   -40,   -40,   -40,   -40,   -40,     0,   -40,   -40,     0,
       0,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,   -40,
       0,   -40,     0,     0,   -40,   -40,   -41,     0,   -41,     0,
     -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -41,   -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,   -41,     0,   -41,     0,     0,   -41,   -41,    -7,
       0,    -7,     0,    -7,     0,     0,    -7,    -7,    -7,    -7,
      -7,    -7,     0,    -7,    -7,     0,     0,    -7,    -7,    -7,
      -7,    -7,    -7,     0,     0,    -7,     0,    -7,     0,     0,
      -7,    -7,   -36,     0,   -36,     0,   -36,     0,     0,   -36,
     -36,   346,   -36,   -36,   -36,     0,   -36,   -36,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,     0,
     -36,     0,     0,   -36,   -36,   -37,     0,   -37,     0,   -37,
       0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
       0,   -37,     0,   -37,     0,     0,   -37,   -37,   -31,     0,
     -31,     0,   -31,     0,     0,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,     0,   -31,     0,     0,   -31,
     -31,   -30,     0,   -30,     0,   -30,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,   -30,
       0,     0,   -30,   -30,   -29,     0,   -29,     0,   -29,     0,
       0,   -29,   -29,   -29,   -29,   -29,   -29,     0,   -29,   -29,
       0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
     -29,     0,   -29,     0,     0,   -29,   -29,   -12,     0,   -12,
       0,   -12,     0,     0,   -12,   -12,   -12,   -12,   -12,   -12,
       0,   -12,   -12,     0,     0,   -12,   -12,   -12,   -12,   -12,
     -12,     0,     0,   -12,     0,   -12,     0,     0,   -12,   -12,
     -27,     0,   -27,     0,   -27,     0,     0,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,     0,   -27,     0,
       0,   -27,   -27,   -28,     0,   -28,     0,   -28,     0,     0,
     -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,     0,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,   -28,
       0,   -28,     0,     0,   -28,   -28,   -19,     0,   -19,     0,
     -19,     0,     0,   -19,   -19,     0,   -19,   -19,   -19,     0,
     -19,   -19,     0,     0,   -19,   -19,   -19,   -19,   -19,   -19,
       0,     0,   -19,     0,   -19,     0,     0,   -19,   -19,    29,
       0,   167,     0,    30,     0,     0,    31,    32,     0,    33,
      34,    35,     0,    36,    37,     0,     0,    38,    39,    40,
      41,    42,    43,     0,     0,    44,     0,    45,     0,     0,
      46,    47,   -42,     0,   -42,     0,   -42,     0,     0,   -42,
     -42,     0,   -42,   -42,   -42,     0,   -42,   -42,     0,     0,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,   -42,     0,
     -42,     0,     0,   -42,   -42,   -43,     0,   -43,     0,   -43,
       0,     0,   -43,   -43,     0,   -43,   -43,   -43,     0,   -43,
     -43,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,   -43,     0,   -43,     0,     0,   -43,   -43,   -20,     0,
     -20,     0,   -20,     0,     0,   -20,   -20,     0,   -20,   -20,
     -20,     0,   -20,   -20,     0,     0,   -20,   -20,   -20,   -20,
     -20,   -20,     0,     0,   -20,     0,   -20,     0,     0,   -20,
     -20,   -21,     0,   -21,     0,   -21,     0,     0,   -21,   -21,
       0,   -21,   -21,   -21,     0,   -21,   -21,     0,     0,   -21,
     -21,   -21,   -21,   -21,   -21,     0,     0,   -21,     0,   -21,
       0,     0,   -21,   -21,   -22,     0,   -22,     0,   -22,     0,
       0,   -22,   -22,     0,   -22,   -22,   -22,     0,   -22,   -22,
       0,     0,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,
     -22,     0,   -22,     0,     0,   -22,   -22,   -25,     0,   -25,
       0,   -25,     0,     0,   -25,   -25,     0,   -25,   -25,   -25,
       0,   -25,   -25,     0,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,     0,   -25,     0,     0,   -25,   -25,
     -26,     0,   -26,     0,   -26,     0,     0,   -26,   -26,     0,
     -26,   -26,   -26,     0,   -26,   -26,     0,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,   -26,     0,   -26,     0,
       0,   -26,   -26,   -24,     0,   -24,     0,   -24,     0,     0,
     -24,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,     0,
       0,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,   -24,
       0,   -24,     0,     0,   -24,   -24,   -23,     0,   -23,     0,
     -23,     0,     0,   -23,   -23,     0,   -23,   -23,   -23,     0,
     -23,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -23,     0,   -23,     0,     0,   -23,   -23,   204,
       0,   205,     0,    30,     0,     0,    31,   206,     0,   207,
     208,   209,     0,    36,    37,     0,     0,    38,    39,    40,
      41,    42,    43,     0,     0,    44,   -40,   210,   -40,   103,
     -40,    47,     0,   -40,   -40,     0,   -40,   -40,   -40,     0,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,   -40,     0,   -40,     0,     0,   -40,   -40,   -41,
       0,   -41,     0,   -41,     0,     0,   -41,   -41,     0,   -41,
     -41,   -41,     0,   -41,   -41,     0,     0,   -41,   -41,   -41,
     -41,   -41,   -41,     0,     0,   -41,     0,   -41,     0,     0,
     -41,   -41,   -39,     0,   -39,     0,   -39,     0,     0,   -39,
     -39,     0,   -39,   -39,   -39,     0,   -39,   -39,     0,     0,
     -39,   -39,   -39,   -39,   -39,   -39,     0,     0,   -39,   -38,
     -39,   -38,   -39,   -38,   -39,     0,   -38,   -38,     0,   -38,
     -38,   -38,     0,   -38,   -38,     0,     0,   -38,   -38,   -38,
     -38,   -38,   -38,     0,     0,   -38,    29,   -38,   167,   -38,
      30,   -38,     0,    31,    32,     0,    33,    34,    35,     0,
      36,    37,     0,     0,    38,    39,    40,    41,    42,    43,
       0,     0,    44,     0,    45,     0,     0,   154,    47,    29,
       0,   167,     0,    30,     0,     0,    31,    32,     0,    33,
      34,    35,     0,    36,    37,     0,     0,    38,    39,    40,
      41,    42,    43,     0,     0,    44,   -37,    45,   -37,   245,
     -37,    47,     0,   -37,   -37,     0,   -37,   -37,   -37,     0,
     -37,   -37,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,   -37,     0,   -37,     0,     0,   -37,   -37,   -31,
       0,   -31,     0,   -31,     0,     0,   -31,   -31,     0,   -31,
     -31,   -31,     0,   -31,   -31,     0,     0,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,   -31,     0,   -31,     0,     0,
     -31,   -31,   -30,     0,   -30,     0,   -30,     0,     0,   -30,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,     0,     0,
     -30,   -30,   -30,   -30,   -30,   -30,     0,     0,   -30,     0,
     -30,     0,     0,   -30,   -30,   -29,     0,   -29,     0,   -29,
       0,     0,   -29,   -29,     0,   -29,   -29,   -29,     0,   -29,
     -29,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,     0,
       0,   -29,     0,   -29,     0,     0,   -29,   -29,   -27,     0,
     -27,     0,   -27,     0,     0,   -27,   -27,     0,   -27,   -27,
     -27,     0,   -27,   -27,     0,     0,   -27,   -27,   -27,   -27,
     -27,   -27,     0,     0,   -27,     0,   -27,     0,     0,   -27,
     -27,   -28,     0,   -28,     0,   -28,     0,     0,   -28,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,     0,     0,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,   -28,     0,   -28,
       0,     0,   -28,   -28,   -34,     0,   -34,     0,   -34,     0,
       0,   -34,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
     -34,     0,   -34,     0,     0,   -34,   -34,   -35,     0,   -35,
       0,   -35,     0,     0,   -35,   -35,     0,   -35,   -35,   -35,
       0,   -35,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,
     -35,     0,     0,   -35,     0,   -35,     0,     0,   -35,   -35,
     -33,     0,   -33,     0,   -33,     0,     0,   -33,   -33,     0,
     -33,   -33,   -33,     0,   -33,   -33,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,     0,   -33,     0,
       0,   -33,   -33,    -8,     0,    -8,     0,    -8,     0,     0,
      -8,    -8,     0,    -8,    -8,    -8,     0,    -8,    -8,     0,
       0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,    -8,
       0,    -8,     0,     0,    -8,    -8,    29,     0,   167,     0,
      30,     0,     0,    31,    32,     0,    33,    34,    35,     0,
      36,    37,     0,     0,    38,    39,    40,    41,    42,    43,
       0,     0,    44,     0,    45,     0,     0,   334,    47,    -7,
       0,    -7,     0,    -7,     0,     0,    -7,    -7,     0,    -7,
      -7,    -7,     0,    -7,    -7,     0,     0,    -7,    -7,    -7,
      -7,    -7,    -7,     0,     0,    -7,     0,    -7,     0,     0,
      -7,    -7,   -32,     0,   -32,     0,   -32,     0,     0,   -32,
     -32,     0,   -32,   -32,   -32,     0,   -32,   -32,     0,     0,
     -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,     0,
     -32,     0,     0,   -32,   -32,    29,     0,   167,     0,    30,
       0,     0,    31,    32,     0,    33,    34,    35,     0,    36,
      37,     0,     0,    38,    39,    40,    41,    42,    43,     0,
       0,    44,     0,    45,     0,     0,   366,    47,    29,     0,
     167,     0,    30,     0,     0,    31,    32,     0,    33,    34,
      35,     0,    36,    37,     0,     0,    38,    39,    40,    41,
      42,    43,     0,     0,    44,     0,    45,     0,     0,   368,
      47,   -12,     0,   -12,     0,   -12,     0,     0,   -12,   -12,
       0,   -12,   -12,   -12,     0,   -12,   -12,     0,     0,   -12,
     -12,   -12,   -12,   -12,   -12,     0,     0,   -12,     0,   -12,
      29,     0,   -12,   -12,    30,     0,     0,    31,     0,     0,
       0,     0,     0,     0,    36,    37,     0,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,   108,    45,     0,
       0,    30,    47,     0,    31,     0,     0,     0,     0,     0,
       0,    36,    37,     0,     0,    38,    39,    40,    41,    42,
      43,     0,     0,    44,   241,   216,     0,     0,    30,    47,
       0,    31,     0,     0,     0,     0,     0,     0,    36,    37,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     0,
      44,   204,   242,     0,     0,    30,    47,     0,    31,     0,
       0,     0,     0,     0,     0,    36,    37,     0,     0,    38,
      39,    40,    41,    42,    43,     0,     0,    44,   -43,   210,
       0,     0,   -43,    47,     0,   -43,     0,     0,     0,     0,
       0,     0,   -43,   -43,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,   -43,   317,   -43,     0,     0,    30,
     -43,     0,    31,     0,     0,     0,     0,     0,     0,    36,
      37,     0,     0,    38,    39,    40,    41,    42,    43,     0,
       0,    44,   -41,   216,     0,     0,   -41,    47,     0,   -41,
       0,     0,     0,     0,     0,     0,   -41,   -41,     0,     0,
     -41,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,   101,
     -41,     0,     0,   193,   -41,     0,   194,     0,     0,     0,
       0,     0,     0,   170,   171,     0,     0,   172,   195,   196,
     197,   173,   174,     0,   -78,   175,   -78,   -78,     0,     0,
     -71,   176,   -71,   -71,   -78,     0,     0,   -78,   -78,   -72,
     -90,   -72,   -72,   -71,   -71,   -70,     0,   -70,   -70,   -88,
     -78,     0,   -72,   -72,   -78,   -89,   -71,     0,   -70,   -70,
     -71,     0,     0,     0,   -75,   -72,   -75,   -75,     0,   -72,
     -79,   -70,   -79,   -79,   -87,   -70,     0,   -75,   -75,   -78,
     -79,   -78,   -78,   -79,   -79,   -71,     0,   -71,   -71,   -78,
     -75,     0,   -78,   -78,   -75,   -90,   -79,     0,   -71,   -71,
     -79,     0,     0,   -72,     0,   -72,   -72,     0,   -70,   -78,
     -70,   -70,     0,   -88,     0,   -71,   -72,   -72,   -89,     0,
       0,   -70,   -70,     0,     0,     0,   -75,     0,   -75,   -75,
       0,     0,   -79,   -72,   -79,   -79,   -87,     0,   -70,   -75,
     -75,   -73,   -79,   -73,   -73,   -79,   -79,   -85,     0,   -85,
     -85,     0,     0,     0,   -73,   -73,   -75,     0,     0,     0,
     -85,   -85,   -79,     0,     0,     0,   -67,   -73,   -67,   -67,
       0,   -73,   -91,   -85,   -91,   -91,     0,   -85,     0,   -67,
     -67,   -92,     0,   -92,   -92,   -91,   -91,   -84,     0,   -84,
     -84,     0,     0,     0,   -92,   -92,   -67,     0,     0,     0,
     -84,   -84,   -91,     0,     0,   -73,     0,   -73,   -73,     0,
     -85,   -92,   -85,   -85,     0,     0,     0,   -84,   -73,   -73,
       0,     0,     0,   -85,   -85,     0,     0,   193,     0,     0,
     194,     0,     0,     0,     0,   -73,     0,   170,   171,     0,
     -85,   172,   195,   196,   197,   173,   174,   -42,     0,   175,
     -42,     0,     0,     0,     0,   176,   157,   -42,   -42,     0,
       0,   -42,   -42,   -42,   -42,   -42,   -42,   -43,     0,   -42,
     -43,     0,     0,     0,     0,   -42,   -42,   -43,   -43,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -43,   -41,     0,   -43,
     -41,     0,     0,     0,     0,   -43,   -43,   -41,   -41,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,   193,     0,   -41,
     194,     0,     0,     0,     0,   -41,   -41,   170,   171,     0,
       0,   172,   195,   196,   197,   173,   174,     0,     0,   175,
     219,     0,   168,     0,     0,   176,   361,   220,   221,    36,
      37,   222,     0,    38,     0,   223,   224,    42,    43,   225,
       0,    44,   169,     0,   219,   226,   -80,    47,     0,   170,
     171,   220,   221,   172,     0,   222,     0,   173,   174,   223,
     224,   175,   -76,   225,   -76,   -76,     0,   176,   -77,   226,
     -77,   -77,   -76,     0,     0,   -76,   -76,     0,   -77,     0,
       0,   -77,   -77,     0,     0,     0,   -78,   -76,   -78,   -78,
       0,     0,   -71,   -77,   -71,   -71,   -78,     0,     0,   -78,
     -78,     0,   -90,     0,     0,   -71,   -71,     0,     0,     0,
     -72,   -78,   -72,   -72,     0,     0,     0,   -71,   168,     0,
     -88,     0,     0,   -72,   -72,    36,    37,     0,   -70,     0,
     -70,   -70,     0,    42,    43,   -72,     0,    44,   -89,     0,
       0,   -70,   -70,    47,   -75,     0,   -75,   -75,     0,   -79,
       0,   -79,   -79,   -70,   -87,     0,     0,   -75,   -75,   -79,
     169,     0,   -79,   -79,     0,   219,     0,   170,   171,   -75,
       0,     0,   220,   221,   -79,   173,   174,     0,     0,   175,
     223,   224,     0,     0,   225,   176,   -66,     0,   -66,    93,
     226,   -68,     0,   -68,   -68,   -74,     0,   -74,   -74,   -66,
     -66,     0,     0,     0,   -68,   -68,     0,     0,   -74,   -74,
     -65,   -66,   -65,    93,     0,   -67,   -68,   -67,   -67,   -84,
     -74,   -84,   -84,   -65,   -65,     0,     0,     0,   -67,   -67,
       0,     0,   -84,   -84,   -73,   -65,   -73,   -73,     0,   -91,
     -67,   -91,   -91,   -92,   -84,   -92,   -92,   -73,   -73,     0,
       0,     0,   -91,   -91,     0,     0,   -92,   -92,   -85,   -73,
     -85,   -85,     0,     0,   -91,     0,     0,     0,   -92,     0,
       0,   -85,   -85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -85
};

static const yytype_int16 yycheck[] =
{
       2,    34,    84,    27,    74,    13,     2,   167,   251,    73,
     103,    73,    73,     1,    14,     3,     0,    47,    17,    18,
       1,     4,    94,     6,     7,    27,   256,     8,   271,     8,
      29,    27,   262,    33,    17,    18,     4,     1,     6,     7,
      31,    74,    75,    73,     8,   205,    34,    30,    17,    17,
      18,    34,    16,   283,    17,    18,    73,    87,    88,    23,
      24,    78,    30,    27,    34,    34,    34,    97,     1,    33,
      30,    34,     5,     8,    34,     8,   109,    94,   142,     4,
     142,   142,    15,    16,    31,     8,    19,    20,    21,    22,
      23,    24,    17,    18,    27,     0,    29,     4,     3,     6,
      33,    34,    25,    26,    33,    30,    35,    17,    18,    34,
      17,    18,   142,    17,    18,   139,   140,   141,    17,   143,
     144,   151,    17,    30,    34,   142,    30,    34,    74,    31,
      34,    30,    47,   157,    29,    34,     4,   139,   140,   141,
     164,   143,   144,   139,   140,   141,   176,   143,   144,    17,
      18,     4,   245,     6,     7,   157,     1,    31,    73,   167,
      38,   157,   164,     8,    17,    18,    34,     0,   164,    47,
       3,    17,    87,     4,    89,   208,    74,    30,    17,    18,
     252,    34,    97,    17,   266,   267,    17,    18,    34,   261,
      29,   263,     3,    17,    72,    73,   226,   205,    29,    77,
      34,    79,   272,     0,    82,    29,     3,   279,    38,    87,
      88,    89,    90,    91,    92,    93,   288,    47,    33,    97,
       4,     1,     6,     7,    17,    18,   256,   142,     8,    33,
      14,    17,   262,    17,    18,   252,   151,    30,   268,   272,
     273,    34,   335,    73,   261,    29,   263,    29,    34,    33,
       8,    35,   345,   283,    33,    17,   134,    87,    16,    30,
      90,   176,   279,    34,   142,    23,    24,    97,   292,    27,
      30,   288,    34,   151,    34,    33,   346,   347,     0,   349,
     350,     3,    17,    18,   348,   318,   348,   348,    17,    18,
     292,   361,    33,    17,   172,    30,   292,    33,   176,    34,
     370,    30,    17,   218,    29,    34,    30,    73,    74,    75,
      34,   226,   142,   346,   347,    33,   349,   350,   348,    34,
      33,   151,     4,    30,     6,     7,   272,    34,   361,   244,
      33,   348,   356,    47,   358,    17,    18,   370,    17,    18,
     218,   256,   172,   109,   222,    33,   176,   262,   226,    17,
      18,    30,    34,   268,   356,    34,   358,    29,    72,    73,
     356,    29,   358,    77,    29,    79,   244,    30,   283,     0,
      29,    34,     3,    87,   272,   253,   142,    14,   256,   257,
     258,   259,   260,    97,   262,    33,   264,   265,   218,    33,
     268,    35,   222,    17,    18,     0,   226,   275,     3,     8,
     346,   347,   280,   349,   350,   283,   284,   285,   286,   287,
      34,   289,    29,    30,   244,   361,     4,    33,     6,     7,
     134,    14,    17,    18,   370,    29,   256,   257,   142,    17,
      18,     0,   262,   348,     3,    17,    18,   151,   268,    34,
      29,    30,   208,     4,    33,     6,    34,    29,   346,   347,
      14,   349,   350,   283,   284,    34,    17,    18,   172,    34,
      47,   339,   176,   361,     4,    14,     6,     7,    29,    34,
     348,    34,   370,     1,    14,    34,   354,    17,    18,    34,
       8,    17,    18,    29,    30,    72,    73,    33,    16,     4,
      77,     6,    79,    33,    34,    23,    24,    34,    34,    27,
      87,    34,    17,    18,   218,    33,   272,   273,   222,    34,
      97,     4,   226,     6,     7,    30,    17,    18,   348,    34,
       0,    14,    34,     3,    17,    18,     5,    34,    29,     8,
     244,     5,     5,     5,     8,     8,     8,    30,    34,   253,
      33,    34,   256,   257,   258,   259,   260,   134,   262,     4,
     264,     6,   318,    34,   268,   142,    34,    34,    29,    30,
      14,   275,    17,    18,   151,    34,   280,    29,    30,   283,
     284,   285,   286,   287,    33,   289,    29,    30,    34,    34,
     346,   347,   348,   349,   350,   172,    29,    47,     4,   176,
       6,     7,    29,    30,     4,   361,     6,     7,    14,    29,
      29,    17,    18,    34,   370,    14,    34,    17,    18,    33,
      33,    14,    72,    73,    30,    14,    14,    77,    34,    79,
      30,    33,    14,    34,    34,   339,    33,    87,    33,    33,
       4,   218,     6,     7,   348,   222,    33,    97,    34,   226,
     354,    34,    33,    17,    18,    34,    33,    29,    29,     4,
      33,     6,     7,    33,    33,    14,    30,   244,    33,    14,
      34,    47,    17,    18,    29,    31,   253,    34,    31,   256,
     257,   258,   259,   260,   134,   262,    34,   264,    33,    34,
      35,   268,   142,    34,    33,   206,    34,    73,   275,    34,
       4,   151,     6,   280,    34,    34,   283,   284,   285,   286,
     287,    87,   289,    17,    18,    34,    34,    93,    34,    34,
      34,    97,   172,    34,    47,     1,   176,    34,    33,     5,
      34,    34,     8,    14,    34,    34,    34,    34,    34,    15,
      16,    34,    34,    19,    20,    21,    22,    23,    24,    72,
      73,    27,    25,    29,    77,    -1,    79,    33,    34,    -1,
      -1,    -1,   339,    -1,    87,    -1,   142,     4,   218,     6,
       7,   348,   222,    -1,    97,   151,   226,   354,    -1,    -1,
      17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,   244,    -1,   172,    34,    47,    -1,
     176,    -1,     4,   253,     6,     7,   256,   257,   258,   259,
     260,   134,   262,    -1,   264,    17,    18,    -1,   268,   142,
      -1,    -1,    -1,    -1,    73,   275,    -1,     4,   151,     6,
     280,    -1,    34,   283,   284,   285,   286,   287,    87,   289,
      17,    18,   218,    92,    -1,    -1,   222,    -1,    97,   172,
     226,    -1,    29,   176,    -1,    -1,    -1,     4,    -1,     6,
       7,   140,   141,    -1,   143,   144,    -1,    14,   244,    -1,
      17,    18,    -1,    -1,    -1,    47,    -1,    -1,   157,    -1,
     256,   257,   258,   259,   260,   164,   262,    34,    -1,   339,
      -1,    -1,   268,   142,    -1,   218,    -1,    -1,   348,   222,
      -1,    73,   151,   226,   354,    -1,    -1,   283,   284,   285,
     286,   287,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,
      -1,   244,    -1,   172,    -1,    97,    -1,   176,    -1,     4,
     253,     6,     7,   256,   257,   258,   259,   260,    -1,   262,
      -1,   264,    17,    18,    -1,   268,    -1,    -1,    47,    -1,
      -1,    -1,   275,    -1,    -1,    30,    -1,   280,    -1,    34,
     283,   284,   285,   286,   287,    -1,   289,    -1,    -1,   218,
     142,    -1,   348,   222,    73,    -1,    -1,   226,    -1,   151,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,     4,
      -1,     6,     7,   272,    -1,   244,    -1,    -1,    97,    14,
     172,    -1,    17,    18,   176,    -1,    -1,   256,   257,   258,
     259,    -1,    -1,   262,    29,    -1,   339,    -1,    33,   268,
      -1,    -1,    -1,    -1,    -1,   348,    -1,     4,    -1,     6,
       7,   354,    -1,    -1,   283,   284,   285,   286,    -1,    -1,
      17,    18,    -1,   142,    -1,     4,   218,     6,     7,    -1,
     222,    -1,   151,    30,   226,    14,    -1,    34,    17,    18,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   346,   347,    -1,
     349,   350,   244,   172,    -1,    34,    -1,   176,    -1,    -1,
      -1,    -1,   361,    -1,   256,   257,   258,    -1,    -1,    -1,
     262,   370,     4,    -1,     6,     7,   268,    -1,    -1,   348,
      -1,     4,    14,     6,     7,    17,    18,    -1,    -1,    -1,
      -1,   283,   284,   285,    17,    18,    -1,    -1,    30,   218,
      -1,    -1,    34,   222,    -1,    -1,    -1,   226,     1,    -1,
       3,    34,     5,    -1,    -1,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    -1,   244,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,   256,   257,    32,
      33,    -1,    -1,   262,    -1,    -1,    -1,    -1,    -1,   268,
      -1,    -1,    -1,    -1,    -1,    -1,   348,    -1,    -1,     1,
      -1,     3,    -1,     5,   283,   284,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    -1,
      32,    33,     1,    -1,     3,    -1,     5,    -1,    -1,     8,
       9,    10,    11,    12,    13,    -1,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    -1,    32,    33,    -1,     1,    -1,     3,   348,
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
      22,    23,    24,    -1,    -1,    27,     1,    29,     3,    31,
       5,    33,    -1,     8,     9,    -1,    11,    12,    13,    -1,
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
      22,    23,    24,    -1,    -1,    27,     1,    29,     3,    31,
       5,    33,    -1,     8,     9,    -1,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,
      -1,     3,    -1,     5,    -1,    -1,     8,     9,    -1,    11,
      12,    13,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,     1,    29,     3,    31,
       5,    33,    -1,     8,     9,    -1,    11,    12,    13,    -1,
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
       1,    -1,    32,    33,     5,    -1,    -1,     8,    -1,    -1,
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
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,     1,
      29,    -1,    -1,     5,    33,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,     4,    27,     6,     7,    -1,    -1,
       4,    33,     6,     7,    14,    -1,    -1,    17,    18,     4,
      14,     6,     7,    17,    18,     4,    -1,     6,     7,    14,
      30,    -1,    17,    18,    34,    14,    30,    -1,    17,    18,
      34,    -1,    -1,    -1,     4,    30,     6,     7,    -1,    34,
       4,    30,     6,     7,    14,    34,    -1,    17,    18,     4,
      14,     6,     7,    17,    18,     4,    -1,     6,     7,    14,
      30,    -1,    17,    18,    34,    14,    30,    -1,    17,    18,
      34,    -1,    -1,     4,    -1,     6,     7,    -1,     4,    34,
       6,     7,    -1,    14,    -1,    34,    17,    18,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,     4,    -1,     6,     7,
      -1,    -1,     4,    34,     6,     7,    14,    -1,    34,    17,
      18,     4,    14,     6,     7,    17,    18,     4,    -1,     6,
       7,    -1,    -1,    -1,    17,    18,    34,    -1,    -1,    -1,
      17,    18,    34,    -1,    -1,    -1,     4,    30,     6,     7,
      -1,    34,     4,    30,     6,     7,    -1,    34,    -1,    17,
      18,     4,    -1,     6,     7,    17,    18,     4,    -1,     6,
       7,    -1,    -1,    -1,    17,    18,    34,    -1,    -1,    -1,
      17,    18,    34,    -1,    -1,     4,    -1,     6,     7,    -1,
       4,    34,     6,     7,    -1,    -1,    -1,    34,    17,    18,
      -1,    -1,    -1,    17,    18,    -1,    -1,     5,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    34,    -1,    15,    16,    -1,
      34,    19,    20,    21,    22,    23,    24,     5,    -1,    27,
       8,    -1,    -1,    -1,    -1,    33,    34,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,     5,    -1,    27,
       8,    -1,    -1,    -1,    -1,    33,    34,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,     5,    -1,    27,
       8,    -1,    -1,    -1,    -1,    33,    34,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,     5,    -1,    27,
       8,    -1,    -1,    -1,    -1,    33,    34,    15,    16,    -1,
      -1,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
       8,    -1,     8,    -1,    -1,    33,    34,    15,    16,    15,
      16,    19,    -1,    19,    -1,    23,    24,    23,    24,    27,
      -1,    27,     8,    -1,     8,    33,    34,    33,    -1,    15,
      16,    15,    16,    19,    -1,    19,    -1,    23,    24,    23,
      24,    27,     4,    27,     6,     7,    -1,    33,     4,    33,
       6,     7,    14,    -1,    -1,    17,    18,    -1,    14,    -1,
      -1,    17,    18,    -1,    -1,    -1,     4,    29,     6,     7,
      -1,    -1,     4,    29,     6,     7,    14,    -1,    -1,    17,
      18,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
       4,    29,     6,     7,    -1,    -1,    -1,    29,     8,    -1,
      14,    -1,    -1,    17,    18,    15,    16,    -1,     4,    -1,
       6,     7,    -1,    23,    24,    29,    -1,    27,    14,    -1,
      -1,    17,    18,    33,     4,    -1,     6,     7,    -1,     4,
      -1,     6,     7,    29,    14,    -1,    -1,    17,    18,    14,
       8,    -1,    17,    18,    -1,     8,    -1,    15,    16,    29,
      -1,    -1,    15,    16,    29,    23,    24,    -1,    -1,    27,
      23,    24,    -1,    -1,    27,    33,     4,    -1,     6,     7,
      33,     4,    -1,     6,     7,     4,    -1,     6,     7,    17,
      18,    -1,    -1,    -1,    17,    18,    -1,    -1,    17,    18,
       4,    29,     6,     7,    -1,     4,    29,     6,     7,     4,
      29,     6,     7,    17,    18,    -1,    -1,    -1,    17,    18,
      -1,    -1,    17,    18,     4,    29,     6,     7,    -1,     4,
      29,     6,     7,     4,    29,     6,     7,    17,    18,    -1,
      -1,    -1,    17,    18,    -1,    -1,    17,    18,     4,    29,
       6,     7,    -1,    -1,    29,    -1,    -1,    -1,    29,    -1,
      -1,    17,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    29
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
      61,    62,    63,    64,    65,    66,    67,    68,    69,    72,
      73,    74,    33,    33,    52,    33,    54,    33,    33,    33,
      57,    63,    33,    33,    33,    61,    29,    33,    35,    17,
      18,     4,     6,     7,    14,     8,    16,    33,    68,    69,
      72,     1,    55,    31,    40,    43,    48,    50,     1,    54,
       1,    72,     8,    73,    75,    72,     8,    57,     8,    25,
      26,    60,    60,    34,    61,    70,    71,    61,    62,    63,
      65,    66,    67,    75,    33,    61,    34,    34,    34,    47,
      10,    34,    54,    34,    34,    34,    34,    34,    34,    34,
      34,    30,    72,    34,    32,    50,    50,    34,    55,    50,
      50,    61,    34,    50,    34,    50,     8,     3,     8,     8,
      15,    16,    19,    23,    24,    27,    33,    57,    62,    63,
      64,    65,    66,    67,    68,    69,    72,    74,    23,    24,
      27,    57,    74,     5,     8,    20,    21,    22,    56,    57,
      58,    59,    61,    73,     1,     3,     9,    11,    12,    13,
      29,    49,    51,    53,    54,    55,    29,    55,    17,     8,
      15,    16,    19,    23,    24,    27,    33,    57,    62,    63,
      64,    65,    66,    67,    68,    69,    72,    74,     5,     8,
      73,     1,    29,    55,    17,    31,    40,    43,    48,     1,
      41,    42,    33,    33,    63,    61,    33,    18,     4,     6,
       7,    14,    33,    14,    33,    33,    33,    33,    35,     1,
      41,    42,    52,    33,    54,    33,    29,    29,    62,    33,
      33,    63,    61,    33,    18,     4,     6,     7,    14,    33,
      29,    62,    47,    29,    44,    75,    72,    34,    70,    63,
      65,    66,    67,     5,     8,    73,    75,    70,    75,    72,
      57,    60,    60,    61,    29,    44,    50,     1,    54,     1,
      72,    75,    72,    34,    70,    63,    65,    66,    67,     5,
       8,    73,    75,    72,    32,    31,    34,    34,    34,    33,
      34,    34,    34,    34,    34,    31,    10,    34,    54,    34,
      34,    34,    34,    34,    33,    34,    47,    72,    47,    50,
      50,    34,    55,    50,    50,    72,    32,    34,    32,    50,
      34,    34,    50
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    43,    44,    44,    44,    45,    45,    46,    47,
      47,    47,    47,    48,    48,    48,    48,    49,    49,    49,
      49,    49,    50,    50,    50,    50,    51,    51,    52,    52,
      53,    54,    54,    54,    55,    55,    55,    55,    55,    56,
      57,    58,    59,    59,    60,    60,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    69,
      70,    70,    71,    71,    72,    73,    74,    74,    74,    74,
      74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     3,     2,     3,
       1,     1,     6,     2,     3,     3,     3,     1,     2,     0,
       2,     2,     2,     1,     1,     1,     1,     6,     7,     5,
       5,     5,     3,     1,     1,     1,     3,     5,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     4,     4,     4,     1,     1,     1,     3,     1,     3,
       1,     2,     1,     3,     1,     3,     1,     3,     1,     1,
       3,     1,     1,     4,     1,     4,     1,     1,     1,     4,
       0,     1,     3,     1,     3,     4,     1,     4,     1,     3,
       1,     1,     1
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
#line 52 "syntactic.y"
            {printf("freeing id %s\n", ((*yyvaluep).sval)); free(((*yyvaluep).sval));}
#line 1993 "syntactic.tab.c"
        break;

    case 26: /* STRING  */
#line 53 "syntactic.y"
            {printf("freeing string %s\n", ((*yyvaluep).sval)); free(((*yyvaluep).sval));}
#line 1999 "syntactic.tab.c"
        break;

    case 38: /* program  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2005 "syntactic.tab.c"
        break;

    case 39: /* declaration  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2011 "syntactic.tab.c"
        break;

    case 40: /* varDecl  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2017 "syntactic.tab.c"
        break;

    case 41: /* varList  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2023 "syntactic.tab.c"
        break;

    case 42: /* new_id  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2029 "syntactic.tab.c"
        break;

    case 43: /* funcDecl  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2035 "syntactic.tab.c"
        break;

    case 44: /* arguments  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2041 "syntactic.tab.c"
        break;

    case 45: /* argsList  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2047 "syntactic.tab.c"
        break;

    case 46: /* arg  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2053 "syntactic.tab.c"
        break;

    case 47: /* funcBody  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2059 "syntactic.tab.c"
        break;

    case 48: /* stmt  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2065 "syntactic.tab.c"
        break;

    case 49: /* iterStmt  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2071 "syntactic.tab.c"
        break;

    case 50: /* body  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2077 "syntactic.tab.c"
        break;

    case 51: /* condStmt  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2083 "syntactic.tab.c"
        break;

    case 52: /* cond  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2089 "syntactic.tab.c"
        break;

    case 53: /* returnStmt  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2095 "syntactic.tab.c"
        break;

    case 54: /* exprStmt  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2101 "syntactic.tab.c"
        break;

    case 55: /* expression  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2107 "syntactic.tab.c"
        break;

    case 56: /* assign  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2113 "syntactic.tab.c"
        break;

    case 57: /* var  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2119 "syntactic.tab.c"
        break;

    case 58: /* inExpr  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2125 "syntactic.tab.c"
        break;

    case 59: /* outExpr  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2131 "syntactic.tab.c"
        break;

    case 60: /* output  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2137 "syntactic.tab.c"
        break;

    case 61: /* simpleExpr  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2143 "syntactic.tab.c"
        break;

    case 62: /* disjExpr  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2149 "syntactic.tab.c"
        break;

    case 63: /* negExpr  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2155 "syntactic.tab.c"
        break;

    case 64: /* relExpr  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2161 "syntactic.tab.c"
        break;

    case 65: /* artExpr1  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2167 "syntactic.tab.c"
        break;

    case 66: /* artExpr2  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2173 "syntactic.tab.c"
        break;

    case 67: /* factor  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2179 "syntactic.tab.c"
        break;

    case 68: /* constant  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2185 "syntactic.tab.c"
        break;

    case 69: /* call  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2191 "syntactic.tab.c"
        break;

    case 70: /* params  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2197 "syntactic.tab.c"
        break;

    case 71: /* paramList  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2203 "syntactic.tab.c"
        break;

    case 72: /* pertExpr  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2209 "syntactic.tab.c"
        break;

    case 73: /* setExpr  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2215 "syntactic.tab.c"
        break;

    case 74: /* elem  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2221 "syntactic.tab.c"
        break;

    case 75: /* set  */
#line 51 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2227 "syntactic.tab.c"
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
#line 64 "syntactic.y"
                                                                {root = (yyvsp[0].tnode);}
#line 2497 "syntactic.tab.c"
    break;

  case 3:
#line 67 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2503 "syntactic.tab.c"
    break;

  case 4:
#line 68 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2509 "syntactic.tab.c"
    break;

  case 5:
#line 71 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2515 "syntactic.tab.c"
    break;

  case 6:
#line 72 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2521 "syntactic.tab.c"
    break;

  case 7:
#line 75 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = UnaryNode(VARDECL, (yyvsp[-1].tnode));
                                                                  setVarsType((yyvsp[-1].tnode), (yyvsp[-2].ival));
                                                                  insertGlobalLeafs((yyvsp[-1].tnode));
                                                                }
#line 2531 "syntactic.tab.c"
    break;

  case 8:
#line 80 "syntactic.y"
                                                               {printf("reduziu erro com varDecl\n"); (yyval.tnode) = nullLeaf(); yyerrok;}
#line 2537 "syntactic.tab.c"
    break;

  case 9:
#line 83 "syntactic.y"
                                                                   {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2543 "syntactic.tab.c"
    break;

  case 10:
#line 84 "syntactic.y"
                                                                   {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2549 "syntactic.tab.c"
    break;

  case 11:
#line 87 "syntactic.y"
                                                                    {
                                                                      (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));
                                                                      (yyval.tnode)->leaf->is_decl = 1;
                                                                    }
#line 2558 "syntactic.tab.c"
    break;

  case 12:
#line 93 "syntactic.y"
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
                                                                    }
#line 2580 "syntactic.tab.c"
    break;

  case 13:
#line 113 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2586 "syntactic.tab.c"
    break;

  case 14:
#line 114 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2592 "syntactic.tab.c"
    break;

  case 15:
#line 115 "syntactic.y"
                                                                {printf("reduziu erro com arguments\n"); (yyval.tnode) = nullLeaf(); yyerrok;}
#line 2598 "syntactic.tab.c"
    break;

  case 16:
#line 118 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2604 "syntactic.tab.c"
    break;

  case 17:
#line 119 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2610 "syntactic.tab.c"
    break;

  case 18:
#line 122 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level+1));
                                                                  (yyval.tnode)->leaf->is_decl = 1;
                                                                  (yyval.tnode)->leaf->ref->sym_kind = VARIABLE;
                                                                  (yyval.tnode)->leaf->ref->var_type = (yyvsp[-1].ival);
                                                                }
#line 2621 "syntactic.tab.c"
    break;

  case 19:
#line 130 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2627 "syntactic.tab.c"
    break;

  case 20:
#line 131 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2633 "syntactic.tab.c"
    break;

  case 21:
#line 132 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2639 "syntactic.tab.c"
    break;

  case 22:
#line 133 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2645 "syntactic.tab.c"
    break;

  case 23:
#line 136 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2651 "syntactic.tab.c"
    break;

  case 24:
#line 137 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2657 "syntactic.tab.c"
    break;

  case 25:
#line 138 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2663 "syntactic.tab.c"
    break;

  case 26:
#line 139 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2669 "syntactic.tab.c"
    break;

  case 27:
#line 142 "syntactic.y"
                                                                    {(yyval.tnode) = TernaryNode(FOR1, (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2675 "syntactic.tab.c"
    break;

  case 28:
#line 143 "syntactic.y"
                                                                    {(yyval.tnode) = QuaternaryNode(FOR2, (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2681 "syntactic.tab.c"
    break;

  case 29:
#line 144 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(FORALL, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2687 "syntactic.tab.c"
    break;

  case 30:
#line 145 "syntactic.y"
                                                                {printf("reduced with error forall\n"); (yyval.tnode) = BinaryNode(FORALL, nullLeaf(), (yyvsp[0].tnode)); yyerrok;}
#line 2693 "syntactic.tab.c"
    break;

  case 31:
#line 146 "syntactic.y"
                                                                {printf("reduced with error for\n"); (yyval.tnode) = BinaryNode(FOR, nullLeaf(), (yyvsp[0].tnode)); yyerrok;}
#line 2699 "syntactic.tab.c"
    break;

  case 32:
#line 150 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2705 "syntactic.tab.c"
    break;

  case 33:
#line 151 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2711 "syntactic.tab.c"
    break;

  case 34:
#line 152 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2717 "syntactic.tab.c"
    break;

  case 35:
#line 153 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2723 "syntactic.tab.c"
    break;

  case 36:
#line 157 "syntactic.y"
                                                  {(yyval.tnode) = BinaryNode(IF, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2729 "syntactic.tab.c"
    break;

  case 37:
#line 158 "syntactic.y"
                                                  {(yyval.tnode) = TernaryNode(IF_ELSE, (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2735 "syntactic.tab.c"
    break;

  case 38:
#line 161 "syntactic.y"
                                                  {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2741 "syntactic.tab.c"
    break;

  case 39:
#line 163 "syntactic.y"
                                                  {printf("reduced with cond error \n"); (yyval.tnode) = nullLeaf(); yyerrok;}
#line 2747 "syntactic.tab.c"
    break;

  case 40:
#line 166 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(RETURN, (yyvsp[0].tnode));}
#line 2753 "syntactic.tab.c"
    break;

  case 41:
#line 169 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2759 "syntactic.tab.c"
    break;

  case 42:
#line 170 "syntactic.y"
                                                                {printf("reduced with exprStmt error \n"); (yyval.tnode) = nullLeaf(); yyerrok;}
#line 2765 "syntactic.tab.c"
    break;

  case 43:
#line 171 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2771 "syntactic.tab.c"
    break;

  case 44:
#line 174 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2777 "syntactic.tab.c"
    break;

  case 45:
#line 175 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2783 "syntactic.tab.c"
    break;

  case 46:
#line 176 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2789 "syntactic.tab.c"
    break;

  case 47:
#line 177 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2795 "syntactic.tab.c"
    break;

  case 48:
#line 178 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2801 "syntactic.tab.c"
    break;

  case 49:
#line 181 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ASSIGN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2807 "syntactic.tab.c"
    break;

  case 50:
#line 184 "syntactic.y"
                                                                 {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));
                                                                }
#line 2815 "syntactic.tab.c"
    break;

  case 51:
#line 189 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(READ, (yyvsp[-1].tnode));}
#line 2821 "syntactic.tab.c"
    break;

  case 52:
#line 192 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITE, (yyvsp[-1].tnode));}
#line 2827 "syntactic.tab.c"
    break;

  case 53:
#line 193 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITELN, (yyvsp[-1].tnode));}
#line 2833 "syntactic.tab.c"
    break;

  case 54:
#line 196 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));
                                                                }
#line 2841 "syntactic.tab.c"
    break;

  case 55:
#line 199 "syntactic.y"
                                                                {(yyval.tnode) = charLeaf((yyvsp[0].cval));}
#line 2847 "syntactic.tab.c"
    break;

  case 56:
#line 200 "syntactic.y"
                                                                {(yyval.tnode) = stringLeaf((yyvsp[0].sval));}
#line 2853 "syntactic.tab.c"
    break;

  case 57:
#line 203 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(DISJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2859 "syntactic.tab.c"
    break;

  case 58:
#line 204 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2865 "syntactic.tab.c"
    break;

  case 59:
#line 207 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(CONJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2871 "syntactic.tab.c"
    break;

  case 60:
#line 208 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2877 "syntactic.tab.c"
    break;

  case 61:
#line 211 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(NEG, (yyvsp[0].tnode));}
#line 2883 "syntactic.tab.c"
    break;

  case 62:
#line 212 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2889 "syntactic.tab.c"
    break;

  case 63:
#line 215 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(RELOP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2895 "syntactic.tab.c"
    break;

  case 64:
#line 216 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2901 "syntactic.tab.c"
    break;

  case 65:
#line 219 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP1, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2907 "syntactic.tab.c"
    break;

  case 66:
#line 220 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2913 "syntactic.tab.c"
    break;

  case 67:
#line 223 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP2, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2919 "syntactic.tab.c"
    break;

  case 68:
#line 224 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2925 "syntactic.tab.c"
    break;

  case 69:
#line 227 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));}
#line 2931 "syntactic.tab.c"
    break;

  case 70:
#line 228 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2937 "syntactic.tab.c"
    break;

  case 71:
#line 229 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2943 "syntactic.tab.c"
    break;

  case 72:
#line 230 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2949 "syntactic.tab.c"
    break;

  case 73:
#line 231 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(IS_SET, (yyvsp[-1].tnode));}
#line 2955 "syntactic.tab.c"
    break;

  case 74:
#line 232 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2961 "syntactic.tab.c"
    break;

  case 75:
#line 233 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(EXISTS, (yyvsp[-1].tnode));}
#line 2967 "syntactic.tab.c"
    break;

  case 76:
#line 236 "syntactic.y"
                                                                {(yyval.tnode) = intLeaf((yyvsp[0].ival));}
#line 2973 "syntactic.tab.c"
    break;

  case 77:
#line 237 "syntactic.y"
                                                                {(yyval.tnode) = floatLeaf((yyvsp[0].fval));}
#line 2979 "syntactic.tab.c"
    break;

  case 78:
#line 238 "syntactic.y"
                                                                {(yyval.tnode) = setLeaf();}
#line 2985 "syntactic.tab.c"
    break;

  case 79:
#line 241 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(CALL, (yyvsp[-3].tnode), (yyvsp[-1].tnode));}
#line 2991 "syntactic.tab.c"
    break;

  case 80:
#line 246 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2997 "syntactic.tab.c"
    break;

  case 81:
#line 247 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3003 "syntactic.tab.c"
    break;

  case 82:
#line 250 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3009 "syntactic.tab.c"
    break;

  case 83:
#line 251 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3015 "syntactic.tab.c"
    break;

  case 84:
#line 254 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(IN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3021 "syntactic.tab.c"
    break;

  case 85:
#line 257 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(SETOP, (yyvsp[-1].tnode));  (yyval.tnode)->internal->op_specifier = (yyvsp[-3].ival);}
#line 3027 "syntactic.tab.c"
    break;

  case 86:
#line 261 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));
                                                                }
#line 3035 "syntactic.tab.c"
    break;

  case 87:
#line 264 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(EXISTS, (yyvsp[-1].tnode));}
#line 3041 "syntactic.tab.c"
    break;

  case 88:
#line 265 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3047 "syntactic.tab.c"
    break;

  case 89:
#line 266 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 3053 "syntactic.tab.c"
    break;

  case 90:
#line 267 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3059 "syntactic.tab.c"
    break;

  case 91:
#line 271 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));
                                                                }
#line 3067 "syntactic.tab.c"
    break;

  case 92:
#line 274 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3073 "syntactic.tab.c"
    break;


#line 3077 "syntactic.tab.c"

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
#line 279 "syntactic.y"

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
