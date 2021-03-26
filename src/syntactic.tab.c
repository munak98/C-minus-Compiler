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
#define YYLAST   3722

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  372

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
       0,    58,    58,    61,    62,    65,    66,    69,    75,    78,
      79,    82,    88,   108,   109,   110,   113,   114,   117,   125,
     126,   127,   128,   131,   132,   133,   134,   137,   138,   139,
     140,   141,   144,   145,   152,   153,   154,   155,   159,   160,
     163,   164,   167,   170,   171,   172,   175,   176,   177,   178,
     179,   182,   185,   190,   193,   194,   197,   200,   201,   204,
     205,   208,   209,   212,   213,   216,   217,   220,   221,   224,
     225,   228,   229,   230,   231,   232,   233,   236,   237,   238,
     241,   246,   247,   250,   251,   254,   257,   258,   262,   265,
     266,   267,   268,   272,   275
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
  "arg", "funcBody", "stmt", "iterStmt", "init", "body", "condStmt",
  "cond", "returnStmt", "exprStmt", "expression", "assign", "var",
  "inExpr", "outExpr", "output", "simpleExpr", "disjExpr", "negExpr",
  "relExpr", "artExpr1", "artExpr2", "factor", "constant", "call",
  "params", "paramList", "pertExpr", "setExpr", "elem", "set", YY_NULLPTR
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

#define YYPACT_NINF (-250)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-95)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     307,    56,   415,  -250,    20,   429,   453,   464,   495,   232,
      35,   238,   496,    27,    12,    60,   128,    65,   111,   146,
       2,   260,  1890,   156,   317,   131,   182,  1923,   348,  1956,
     135,   810,   185,   193,  3042,   195,   203,   221,   774,   236,
     282,   293,   562,  3537,  3554,  1989,   504,  3503,  2022,  2055,
    2088,  2121,  2154,  2187,  2220,   309,   323,    90,   325,   336,
      95,   409,   452,   399,   998,  1041,  3629,  3563,  3572,  3635,
     344,   372,   310,  3231,  2253,  2988,  2280,    49,   518,   310,
     358,   462,   387,    14,    14,    53,   362,  2313,  3523,   774,
     774,   774,  1078,  1078,  1078,   522,    -4,  3503,   392,   394,
     376,   385,   397,  1890,  1125,  1164,  1197,  1230,   657,   425,
    3069,  3096,   408,   413,   430,   428,   442,   469,   475,   477,
     478,   488,   494,   499,   515,  3581,   540,    21,   521,   354,
     164,   472,   476,  1186,  3644,  3650,  3659,    68,   536,  2346,
    2373,  2400,  2433,  2433,   542,  3393,  2433,  2433,   310,  3665,
     544,   549,   557,   561,  3590,  3594,   580,  1263,  2460,  2493,
    3123,  2433,   563,  2526,  2559,   568,   103,  2592,  2433,   569,
    2625,   262,    89,  3495,   574,   217,   578,   579,  3607,    13,
     223,   305,  3503,   582,   -11,    44,   215,   405,   353,   454,
     632,   737,   530,   587,   602,   603,   606,   589,   609,   592,
     591,   596,   597,   598,   172,   600,   607,    77,   610,  1296,
     237,   185,   604,  3150,   614,  1329,  1362,  1395,  1428,  1461,
     616,  3177,   623,  3607,   816,   624,  3594,   698,   900,   918,
    3503,   627,   112,   186,    41,    97,    62,  3259,   979,  1004,
    3268,   617,   630,  3674,   638,  3413,  3433,   639,  3594,  1890,
    2658,  2691,  2724,  2757,   268,   238,   310,   518,   310,   158,
     121,  3523,  3607,  3678,  3678,  3678,   527,  3523,   518,   387,
      14,    14,  3607,  1494,   291,   238,  2253,  3015,  1527,   127,
    1560,  3204,   168,   518,   328,   161,  3523,  3594,  3689,  3689,
    3689,   567,   310,  3453,   359,  2790,  2823,   625,   635,   640,
     641,  1026,   648,   242,   636,   937,  3339,   650,  3348,  3354,
     653,   654,   655,   658,   659,   191,  1593,   666,  1626,  1098,
    3069,   667,   673,   674,  1058,   676,   407,   166,  3274,  3293,
     678,  3299,  3308,   679,  2856,  1890,   680,  3372,   683,  1090,
     310,   704,   685,   686,   688,  1890,  2253,  2253,  3473,  2253,
    2253,  3314,  3253,   310,  3692,  2889,   689,  2922,  1659,  1692,
    2253,   690,  1725,  1758,   691,  2955,  3377,  1791,  1824,  2253,
    3333,  1857
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
       0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -250,  -250,  -250,  -250,    -2,  -167,    -9,     6,  -231,  -250,
     701,   -87,   -25,    52,   450,   -94,    99,   519,   105,   -33,
     137,   -64,    16,   -62,   -59,   -81,   347,   764,   118,   823,
     794,   703,   612,   252,   295,  -249,  -250,   473,   -13,   516,
     -69
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,   104,    10,    11,   105,    15,    20,
      21,    27,   106,    51,   110,   107,    52,    74,    53,    54,
      55,    56,    57,    58,    59,   123,    60,    61,    62,    63,
      64,    65,    66,    67,    68,   128,   129,    69,    70,    71,
     116
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    76,    50,   124,    16,   254,   -60,   262,     7,   203,
     -88,   205,   302,    17,   206,    18,   141,   -77,   310,   -77,
     -77,     8,   120,   -60,   297,    48,   136,   -77,     9,   -52,
     -77,   -77,    25,    49,    86,   171,    26,   325,   248,   121,
     122,   219,   111,   274,   317,   288,    19,   -77,   158,   159,
     112,   -84,   163,   164,    80,   -84,     3,    96,   -64,   -64,
     208,   -62,   -62,   183,    12,    13,   -68,   167,   -68,   290,
     223,   -64,   194,   195,   170,   -64,   196,   145,   -62,   -68,
     -68,   203,    97,   205,    86,   223,   206,   125,   197,   204,
     253,    22,   -68,   197,   223,   197,   -68,     9,   119,    23,
     144,   -66,   156,   289,   231,    80,    80,    80,    80,    80,
      80,   -49,    90,   183,   -66,   -66,    50,   252,   252,    24,
     248,   252,   252,    88,   -49,    89,   216,   -66,   321,   -60,
     287,   -66,   208,   -83,    18,    96,   252,   -83,   223,    48,
     250,   250,   -60,   252,   250,   250,   -60,    49,   251,   251,
     194,   195,   251,   251,   196,   301,    81,    -9,    -9,   250,
      97,   204,   295,   255,   197,   185,   250,   251,    72,    86,
     -65,   231,   289,   217,   251,   -63,   -63,   -13,   223,   218,
     278,    90,   318,   -65,   -65,   -59,   262,   -15,   299,   313,
     314,   185,   -63,   -51,   183,   324,   -65,   309,   183,   311,
     -65,   275,   -59,   -62,   -62,   261,   233,   272,   223,   132,
     102,   220,   222,   -14,   323,   185,   -62,    86,    73,   263,
     -62,   -71,   332,   -71,   -71,   -51,    75,   -78,    77,   -78,
     -78,   -88,   -64,   -64,   -71,   -71,    78,   -78,   273,   183,
     -78,   -78,   231,   219,   111,     9,   183,   247,   355,   -64,
     -52,   -71,   358,   359,    79,   362,   363,   -78,   357,   -61,
     -61,   -11,   -11,   185,   231,   -11,   368,   -10,   -10,    82,
      50,    14,   197,   233,   197,   371,   -61,   231,   183,   183,
     183,   183,   162,   231,   203,   312,   205,   348,   183,   206,
     -17,   -11,   -11,    48,   -17,   197,   259,   296,    13,   190,
     185,    49,   231,   231,   231,   231,   231,    -4,   197,   -79,
      -4,   -79,   -79,   219,   219,    83,   219,   219,    96,   -79,
     316,    13,   -79,   -79,    98,   190,    84,   219,   216,    98,
      50,    98,    50,   194,   195,   208,   219,   196,    87,   -79,
     238,   185,   191,    97,   284,   -63,   -63,   -18,   185,   190,
     220,   -18,   -46,    48,   -47,    48,   197,   -68,   -63,   -68,
     265,    49,   -63,    49,   204,   -48,   233,    99,   191,   197,
     -68,   -68,    99,   -50,    99,   217,   -59,   287,   -16,   233,
     303,   218,   -16,   239,   155,   233,    95,   -68,   -82,   -59,
     185,    88,   191,   -59,    85,   118,   126,   190,   216,   216,
      98,   216,   216,    92,   233,   326,   -92,   238,   -90,   -66,
     138,   264,   216,   220,   222,    -2,   -64,   -64,     4,   139,
     207,   216,   -66,   -66,   -61,   -61,   -60,    91,   -64,    -3,
     190,   140,    -3,   244,   190,   127,   130,   -61,   -60,   -66,
     191,   -61,   146,    99,   137,   217,   217,   147,   217,   217,
     239,   218,   218,    -5,   218,   218,    -5,   247,   -70,   217,
     -70,   -70,   -93,   148,    -6,   218,   185,    -6,   217,   -62,
     -62,   -70,   -70,   191,   218,   190,   149,   191,   238,   -63,
     -63,   -62,   190,   220,   220,   361,   220,   220,   -70,   -59,
      91,   -63,   207,   -61,   -61,    -8,    -7,   220,    -8,    -7,
     238,   -59,   166,   150,   -12,   -61,   220,   -12,    98,   -52,
      98,   151,   -56,   238,   190,   190,   190,   190,   191,   238,
     192,   239,   -57,   114,   190,   191,   115,   242,   -58,   260,
     243,    98,   307,   152,   -76,   308,   -76,   -76,   238,   238,
     238,   238,   238,   239,    98,   100,   192,   -76,   -76,   153,
     113,    99,   117,    99,   -89,   154,   239,   191,   191,   191,
     191,   240,   239,   193,   -76,   -86,   -77,   191,   -77,   -77,
     192,   160,   330,   -87,    99,   331,   -77,   285,   -53,   -77,
     -77,   239,   239,   239,   239,   239,   -54,    99,   198,   193,
     -55,   -77,    98,   198,   -91,   198,   -71,   168,   -71,   -71,
     190,   266,   169,   -94,   241,    98,   -88,   256,   127,   -71,
     -71,   257,   258,   193,   127,   261,   -77,   -78,   192,   315,
     -79,   165,   267,   268,   269,   -52,   -71,   -52,   240,   270,
     271,   291,   -46,   127,   -47,    99,   -73,   277,   -73,   -73,
     -65,   -48,   264,   191,   -50,   280,   -92,   279,    99,   -73,
     -73,   192,   281,   -65,   -65,   192,   335,   283,   -44,   189,
     286,   193,   -44,   292,   198,   -44,   -73,   -11,   293,   336,
     -65,   241,   -44,   -44,   337,   338,   -44,   -44,   -44,   -44,
     -44,   -44,   339,   340,   -44,   189,   -44,   341,   -85,   342,
     -44,   143,   343,   344,   193,   207,   192,   345,   193,   240,
     237,   349,   -77,   192,   -77,   -77,   135,   350,   351,   189,
     352,   353,   -77,   354,   -86,   -77,   -77,   -87,   -80,   -53,
     -54,   240,   -55,   366,   369,   370,    28,   320,   -77,   298,
     276,   300,   -77,     0,   240,   192,   192,   192,   192,   193,
     240,   -74,   241,   -74,   -74,   192,   193,     0,     0,     0,
     188,   -90,   322,     0,   -74,   -74,     0,   189,     0,   240,
     240,   240,   240,   240,   241,   333,     0,   237,     0,     0,
       0,   -74,   198,     0,   198,     0,   188,   241,   193,   193,
     193,   193,   173,   241,     0,     0,     0,     0,   193,    36,
     189,   236,     0,    38,   189,   198,   134,    42,    43,     0,
     188,    44,   241,   241,   241,   241,   241,    47,   198,     0,
       0,   184,     0,   356,   -71,     0,   -71,   -71,     0,     0,
     -71,   192,   -71,   -71,   -88,     0,   364,   -71,   -71,     0,
     -88,     0,     0,   -71,   -71,   189,     0,   184,   237,   -71,
       0,   187,   189,   -52,     0,   -52,   -71,     0,   188,   -52,
     -71,     0,   232,     0,   131,     0,   198,     0,   236,     0,
     237,   184,     0,     0,   193,     0,     0,   187,     0,   198,
     186,     0,     0,   237,   189,   189,   189,   306,     0,   237,
       0,   188,   235,     0,   189,   188,   133,     0,     0,     0,
       0,   187,     0,     0,     0,     0,   186,     0,   237,   237,
     237,   237,   329,     0,   -78,     0,   -78,   -78,     0,   184,
       0,   234,     0,     0,   -78,     0,     0,   -78,   -78,   232,
     186,     0,   -79,     0,   -79,   -79,   188,     0,     0,   236,
     -78,     0,   -79,   188,   -78,   -79,   -79,     0,     0,   187,
       0,   -67,     0,   -67,   265,     0,   184,     0,   -79,   235,
       0,   236,   -79,     0,   -67,   -67,     0,     0,     0,     0,
     189,     0,     0,     0,   236,   188,   188,   305,   186,     0,
     236,   -67,   187,     0,     0,   188,   187,     0,   234,     0,
       0,     0,     0,   -73,     0,   -73,   -73,   282,     0,   236,
     236,   236,   328,   -92,   184,     0,   -73,   -73,     0,     0,
       0,   186,   -66,     0,    93,   186,     0,     0,   -74,   -73,
     -74,   -74,   294,   -73,     0,   -66,   -66,   187,   -90,     0,
     235,   -74,   -74,     0,   187,   232,     0,   -66,     0,     0,
     -72,   232,   -72,   -72,   -74,     0,   184,     0,   -74,     0,
     -91,     0,   235,   -72,   -72,   -68,   186,   -68,    94,   234,
     232,   188,     0,   186,     0,   235,   187,   304,   -68,   -68,
     -72,   235,   -72,     0,   -72,   -72,   187,     0,     0,     0,
     -68,   234,   -91,     0,     0,   -72,   -72,     0,     0,     0,
     235,   235,   327,     0,   234,   186,   173,     0,   -72,     0,
     234,     0,   -72,    36,   -80,   186,   -80,   -80,     0,   -44,
       0,    42,    43,   -44,   -80,    44,   -44,   -80,   -80,   234,
     234,    47,   184,   -44,   -44,     0,     0,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -80,   -44,   -36,   -44,   -36,     0,
     -36,   -44,   347,   -36,   -36,   -36,   -36,   -36,   -36,     0,
     -36,   -36,   187,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,     0,   -36,     0,     0,   -36,   -36,     0,
       0,     0,     0,     0,     0,   -37,     0,   -37,     0,   -37,
       0,   186,   -37,   -37,   -37,   -37,   -37,   -37,     0,   -37,
     -37,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -65,   -37,    93,   -37,     0,     0,   -37,   -37,   -35,     0,
     -35,     0,   -35,   -65,   -65,   -35,   -35,   -35,   -35,   -35,
     -35,     0,   -35,   -35,     0,   -65,   -35,   -35,   -35,   -35,
     -35,   -35,     0,     0,   -35,     0,   -35,     0,     0,   -35,
     -35,   -38,     0,   -38,     0,   -38,     0,     0,   -38,   -38,
     142,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,   -38,     0,   -38,
       0,     0,   -38,   -38,   -34,     0,   -34,     0,   -34,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,   -34,
       0,     0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,
     -34,     0,   -34,     0,     0,   -34,   -34,   -44,     0,   -44,
       0,   -44,     0,     0,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   -44,   -44,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,     0,     0,   -44,     0,   -44,     0,     0,   -44,   -44,
     -45,     0,   -45,     0,   -45,     0,     0,   -45,   -45,   -45,
     -45,   -45,   -45,     0,   -45,   -45,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   -45,     0,   -45,     0,
       0,   -45,   -45,   -25,     0,   -25,     0,   -25,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,
       0,   -25,     0,     0,   -25,   -25,   -26,     0,   -26,     0,
     -26,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
     -26,   -26,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,
       0,     0,   -26,     0,   -26,     0,     0,   -26,   -26,   -24,
       0,   -24,     0,   -24,     0,     0,   -24,   -24,   -24,   -24,
     -24,   -24,     0,   -24,   -24,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,   -24,     0,   -24,     0,     0,
     -24,   -24,   -23,     0,   -23,     0,   -23,     0,     0,   -23,
     -23,   -23,   -23,   -23,   -23,     0,   -23,   -23,     0,     0,
     -23,   -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,
     -23,     0,     0,   -23,   -23,    -8,     0,    -8,     0,    -8,
       0,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,
      -8,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,
       0,    -8,     0,    -8,     0,     0,    -8,    -8,   -42,     0,
     -42,     0,   -42,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,   -42,     0,   -42,     0,     0,   -42,
     -42,   -43,     0,   -43,     0,   -43,     0,     0,   -43,   -43,
     -43,   -43,   -43,   -43,     0,   -43,   -43,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,   -43,     0,   -43,
       0,     0,   -43,   -43,    -7,     0,    -7,     0,    -7,     0,
       0,    -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,
       0,     0,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,
      -7,     0,    -7,     0,     0,    -7,    -7,   -38,     0,   -38,
       0,   -38,     0,     0,   -38,   -38,   346,   -38,   -38,   -38,
       0,   -38,   -38,     0,     0,   -38,   -38,   -38,   -38,   -38,
     -38,     0,     0,   -38,     0,   -38,     0,     0,   -38,   -38,
     -39,     0,   -39,     0,   -39,     0,     0,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,   -39,     0,   -39,     0,
       0,   -39,   -39,   -31,     0,   -31,     0,   -31,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,     0,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,
       0,   -31,     0,     0,   -31,   -31,   -30,     0,   -30,     0,
     -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
     -30,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,
       0,     0,   -30,     0,   -30,     0,     0,   -30,   -30,   -29,
       0,   -29,     0,   -29,     0,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,     0,     0,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,   -29,     0,   -29,     0,     0,
     -29,   -29,   -12,     0,   -12,     0,   -12,     0,     0,   -12,
     -12,   -12,   -12,   -12,   -12,     0,   -12,   -12,     0,     0,
     -12,   -12,   -12,   -12,   -12,   -12,     0,     0,   -12,     0,
     -12,     0,     0,   -12,   -12,   -27,     0,   -27,     0,   -27,
       0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,     0,   -27,     0,     0,   -27,   -27,   -28,     0,
     -28,     0,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,
     -28,     0,   -28,   -28,     0,     0,   -28,   -28,   -28,   -28,
     -28,   -28,     0,     0,   -28,     0,   -28,     0,     0,   -28,
     -28,   -19,     0,   -19,     0,   -19,     0,     0,   -19,   -19,
       0,   -19,   -19,   -19,     0,   -19,   -19,     0,     0,   -19,
     -19,   -19,   -19,   -19,   -19,     0,     0,   -19,     0,   -19,
       0,     0,   -19,   -19,    29,     0,   172,     0,    30,     0,
       0,    31,    32,     0,    33,    34,    35,     0,    36,    37,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     0,
      44,     0,    45,     0,     0,    46,    47,   -44,     0,   -44,
       0,   -44,     0,     0,   -44,   -44,     0,   -44,   -44,   -44,
       0,   -44,   -44,     0,     0,   -44,   -44,   -44,   -44,   -44,
     -44,     0,     0,   -44,     0,   -44,     0,     0,   -44,   -44,
     -45,     0,   -45,     0,   -45,     0,     0,   -45,   -45,     0,
     -45,   -45,   -45,     0,   -45,   -45,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   -45,     0,   -45,     0,
       0,   -45,   -45,   -20,     0,   -20,     0,   -20,     0,     0,
     -20,   -20,     0,   -20,   -20,   -20,     0,   -20,   -20,     0,
       0,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,
       0,   -20,     0,     0,   -20,   -20,   -21,     0,   -21,     0,
     -21,     0,     0,   -21,   -21,     0,   -21,   -21,   -21,     0,
     -21,   -21,     0,     0,   -21,   -21,   -21,   -21,   -21,   -21,
       0,     0,   -21,     0,   -21,     0,     0,   -21,   -21,   -22,
       0,   -22,     0,   -22,     0,     0,   -22,   -22,     0,   -22,
     -22,   -22,     0,   -22,   -22,     0,     0,   -22,   -22,   -22,
     -22,   -22,   -22,     0,     0,   -22,     0,   -22,     0,     0,
     -22,   -22,   -25,     0,   -25,     0,   -25,     0,     0,   -25,
     -25,     0,   -25,   -25,   -25,     0,   -25,   -25,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,     0,
     -25,     0,     0,   -25,   -25,   -26,     0,   -26,     0,   -26,
       0,     0,   -26,   -26,     0,   -26,   -26,   -26,     0,   -26,
     -26,     0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,   -26,     0,   -26,     0,     0,   -26,   -26,   -24,     0,
     -24,     0,   -24,     0,     0,   -24,   -24,     0,   -24,   -24,
     -24,     0,   -24,   -24,     0,     0,   -24,   -24,   -24,   -24,
     -24,   -24,     0,     0,   -24,     0,   -24,     0,     0,   -24,
     -24,   -23,     0,   -23,     0,   -23,     0,     0,   -23,   -23,
       0,   -23,   -23,   -23,     0,   -23,   -23,     0,     0,   -23,
     -23,   -23,   -23,   -23,   -23,     0,     0,   -23,     0,   -23,
       0,     0,   -23,   -23,   209,     0,   210,     0,    30,     0,
       0,    31,   211,     0,   212,   213,   214,     0,    36,    37,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     0,
      44,   -42,   215,   -42,   103,   -42,    47,     0,   -42,   -42,
       0,   -42,   -42,   -42,     0,   -42,   -42,     0,     0,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,   -42,     0,   -42,
       0,     0,   -42,   -42,   -43,     0,   -43,     0,   -43,     0,
       0,   -43,   -43,     0,   -43,   -43,   -43,     0,   -43,   -43,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,
     -43,     0,   -43,     0,     0,   -43,   -43,   -41,     0,   -41,
       0,   -41,     0,     0,   -41,   -41,     0,   -41,   -41,   -41,
       0,   -41,   -41,     0,     0,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,   -41,   -40,   -41,   -40,   -41,   -40,   -41,
       0,   -40,   -40,     0,   -40,   -40,   -40,     0,   -40,   -40,
       0,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
     -40,    29,   -40,   172,   -40,    30,   -40,     0,    31,    32,
       0,    33,    34,    35,     0,    36,    37,     0,     0,    38,
      39,    40,    41,    42,    43,     0,     0,    44,     0,    45,
       0,     0,   157,    47,    29,     0,   172,     0,    30,     0,
       0,    31,    32,     0,    33,    34,    35,     0,    36,    37,
       0,     0,    38,    39,    40,    41,    42,    43,     0,     0,
      44,   -39,    45,   -39,   249,   -39,    47,     0,   -39,   -39,
       0,   -39,   -39,   -39,     0,   -39,   -39,     0,     0,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,   -39,     0,   -39,
       0,     0,   -39,   -39,   -31,     0,   -31,     0,   -31,     0,
       0,   -31,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,
       0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
     -31,     0,   -31,     0,     0,   -31,   -31,   -30,     0,   -30,
       0,   -30,     0,     0,   -30,   -30,     0,   -30,   -30,   -30,
       0,   -30,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,     0,   -30,     0,   -30,     0,     0,   -30,   -30,
     -29,     0,   -29,     0,   -29,     0,     0,   -29,   -29,     0,
     -29,   -29,   -29,     0,   -29,   -29,     0,     0,   -29,   -29,
     -29,   -29,   -29,   -29,     0,     0,   -29,     0,   -29,     0,
       0,   -29,   -29,   -27,     0,   -27,     0,   -27,     0,     0,
     -27,   -27,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
       0,   -27,     0,     0,   -27,   -27,   -28,     0,   -28,     0,
     -28,     0,     0,   -28,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   -28,     0,   -28,     0,     0,   -28,   -28,   -36,
       0,   -36,     0,   -36,     0,     0,   -36,   -36,     0,   -36,
     -36,   -36,     0,   -36,   -36,     0,     0,   -36,   -36,   -36,
     -36,   -36,   -36,     0,     0,   -36,     0,   -36,     0,     0,
     -36,   -36,   -37,     0,   -37,     0,   -37,     0,     0,   -37,
     -37,     0,   -37,   -37,   -37,     0,   -37,   -37,     0,     0,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,     0,
     -37,     0,     0,   -37,   -37,   -35,     0,   -35,     0,   -35,
       0,     0,   -35,   -35,     0,   -35,   -35,   -35,     0,   -35,
     -35,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,   -35,     0,   -35,     0,     0,   -35,   -35,    -8,     0,
      -8,     0,    -8,     0,     0,    -8,    -8,     0,    -8,    -8,
      -8,     0,    -8,    -8,     0,     0,    -8,    -8,    -8,    -8,
      -8,    -8,     0,     0,    -8,     0,    -8,     0,     0,    -8,
      -8,    29,     0,   172,     0,    30,     0,     0,    31,    32,
       0,    33,    34,    35,     0,    36,    37,     0,     0,    38,
      39,    40,    41,    42,    43,     0,     0,    44,     0,    45,
       0,     0,   334,    47,    -7,     0,    -7,     0,    -7,     0,
       0,    -7,    -7,     0,    -7,    -7,    -7,     0,    -7,    -7,
       0,     0,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,
      -7,     0,    -7,     0,     0,    -7,    -7,   -34,     0,   -34,
       0,   -34,     0,     0,   -34,   -34,     0,   -34,   -34,   -34,
       0,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,   -34,     0,   -34,     0,     0,   -34,   -34,
      29,     0,   172,     0,    30,     0,     0,    31,    32,     0,
      33,    34,    35,     0,    36,    37,     0,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,     0,    45,     0,
       0,   365,    47,    29,     0,   172,     0,    30,     0,     0,
      31,    32,     0,    33,    34,    35,     0,    36,    37,     0,
       0,    38,    39,    40,    41,    42,    43,     0,     0,    44,
       0,    45,     0,     0,   367,    47,   -12,     0,   -12,     0,
     -12,     0,     0,   -12,   -12,     0,   -12,   -12,   -12,     0,
     -12,   -12,     0,     0,   -12,   -12,   -12,   -12,   -12,   -12,
       0,     0,   -12,     0,   -12,     0,     0,   -12,   -12,   108,
       0,   109,     0,    30,     0,     0,    31,     0,     0,     0,
       0,     0,     0,    36,    37,     0,     0,    38,    39,    40,
      41,    42,    43,     0,     0,    44,   319,   221,   109,     0,
      30,    47,     0,    31,     0,     0,     0,     0,     0,     0,
      36,    37,     0,     0,    38,    39,    40,    41,    42,    43,
       0,     0,    44,    29,   221,     0,     0,    30,    47,     0,
      31,     0,     0,     0,     0,     0,     0,    36,    37,     0,
       0,    38,    39,    40,    41,    42,    43,     0,     0,    44,
     245,    45,     0,     0,    30,    47,     0,    31,     0,     0,
       0,     0,     0,     0,    36,    37,     0,     0,    38,    39,
      40,    41,    42,    43,     0,     0,    44,   -32,   246,     0,
       0,   -32,    47,     0,   -32,     0,     0,     0,     0,     0,
       0,   -32,   -32,     0,     0,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,   -32,   -33,   -32,     0,     0,   -33,   -32,
       0,   -33,     0,     0,     0,     0,     0,     0,   -33,   -33,
       0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
     -33,   209,   -33,     0,     0,    30,   -33,     0,    31,     0,
       0,     0,     0,     0,     0,    36,    37,     0,     0,    38,
      39,    40,    41,    42,    43,     0,     0,    44,   -45,   215,
       0,     0,   -45,    47,     0,   -45,     0,     0,     0,     0,
       0,     0,   -45,   -45,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,     0,     0,   -45,   -43,   -45,     0,     0,   -43,
     -45,     0,   -43,     0,     0,     0,     0,     0,     0,   -43,
     -43,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,   -43,   101,   -43,     0,     0,   174,   -43,     0,   199,
       0,     0,     0,     0,     0,     0,   176,   177,     0,     0,
     178,   200,   201,   202,   179,   180,     0,   -80,   181,   -80,
     -80,     0,     0,   -70,   182,   -70,   -70,   -80,     0,     0,
     -80,   -80,   -76,     0,   -76,   -76,   -70,   -70,   -67,     0,
     -67,   290,     0,   -80,     0,   -76,   -76,   -80,     0,   -70,
       0,   -67,   -67,   -70,     0,     0,     0,   -69,   -76,   -69,
     -69,     0,   -76,   -93,   -67,   -93,   -93,     0,   -67,     0,
     -69,   -69,   -85,     0,   -85,   -85,   -93,   -93,   -75,     0,
     -75,   -75,     0,   -69,     0,   -85,   -85,   -69,     0,   -93,
       0,   -75,   -75,   -93,     0,     0,     0,   -94,   -85,   -94,
     -94,     0,   -85,   -69,   -75,   -69,   -69,     0,   -75,     0,
     -94,   -94,   -93,     0,   -93,   -93,   -69,   -69,   -85,     0,
     -85,   -85,     0,   -94,     0,   -93,   -93,   -94,     0,     0,
       0,   -85,   -85,   -69,     0,     0,   -75,     0,   -75,   -75,
       0,   -94,   -93,   -94,   -94,     0,     0,     0,   -85,   -75,
     -75,     0,     0,     0,   -94,   -94,     0,     0,   174,     0,
       0,   199,     0,     0,     0,     0,   -75,     0,   176,   177,
       0,   -94,   178,   200,   201,   202,   179,   180,   -44,     0,
     181,   -44,     0,     0,     0,     0,   182,   161,   -44,   -44,
       0,     0,   -44,   -44,   -44,   -44,   -44,   -44,   -45,     0,
     -44,   -45,     0,     0,     0,     0,   -44,   -44,   -45,   -45,
       0,     0,   -45,   -45,   -45,   -45,   -45,   -45,   -43,     0,
     -45,   -43,     0,     0,     0,     0,   -45,   -45,   -43,   -43,
       0,     0,   -43,   -43,   -43,   -43,   -43,   -43,   174,     0,
     -43,   199,     0,     0,     0,     0,   -43,   -43,   176,   177,
       0,     0,   178,   200,   201,   202,   179,   180,     0,   -71,
     181,   -71,   -71,     0,     0,     0,   182,   360,   174,   -88,
       0,   175,   -71,   -71,     0,     0,     0,     0,   176,   177,
       0,     0,   178,     0,   -71,     0,   179,   180,   -52,     0,
     181,   224,     0,     0,     0,     0,   182,     0,   225,     0,
       0,   -78,   226,   -78,   -78,     0,   227,   228,     0,     0,
     229,   -78,     0,     0,   -78,   -78,   230,   -81,   -79,     0,
     -79,   -79,     0,     0,     0,     0,   -78,   -73,   -79,   -73,
     -73,   -79,   -79,     0,     0,     0,   -74,   -92,   -74,   -74,
     -73,   -73,     0,   -79,     0,   -72,   -90,   -72,   -72,   -74,
     -74,     0,   -73,     0,   -80,   -91,   -80,   -80,   -72,   -72,
       0,   -74,   224,     0,   -80,     0,     0,   -80,   -80,   225,
     -72,     0,     0,   226,     0,   175,     0,   227,   228,   -80,
       0,   229,   176,     0,     0,     0,   178,   230,     0,     0,
     179,   180,     0,   -70,   181,   -70,   -70,     0,     0,   -76,
     182,   -76,   -76,     0,     0,     0,   -70,   -70,   -67,     0,
     -67,    94,   -76,   -76,   -69,     0,   -69,   -69,   -70,     0,
       0,   -67,   -67,   -85,   -76,   -85,   -85,   -69,   -69,   -75,
       0,   -75,   -75,   -67,     0,     0,   -85,   -85,   -93,   -69,
     -93,   -93,   -75,   -75,     0,     0,   175,     0,   -85,     0,
       0,   -93,   -93,   176,   -75,     0,   -94,   224,   -94,   -94,
       0,   179,   180,   -93,   225,   181,     0,     0,     0,   -94,
     -94,   182,   227,   228,     0,     0,   229,     0,     0,     0,
       0,   -94,   230
};

static const yytype_int16 yycheck[] =
{
       2,    34,    27,    84,    13,   172,    17,    18,     2,    73,
      14,    73,   261,     1,    73,     3,   103,     4,   267,     6,
       7,     1,     8,    34,   255,    27,    95,    14,     8,    33,
      17,    18,    30,    27,    47,     8,    34,   286,    17,    25,
      26,    74,    75,   210,   275,     4,    34,    34,   142,   143,
       1,    30,   146,   147,    38,    34,     0,     8,    17,    18,
      73,    17,    18,    47,    29,    30,     4,   161,     6,     7,
      17,    30,    23,    24,   168,    34,    27,   110,    34,    17,
      18,   145,    33,   145,    97,    17,   145,    34,    72,    73,
       1,    31,    30,    77,    17,    79,    34,     8,    82,    34,
     109,     4,    34,     6,    88,    89,    90,    91,    92,    93,
      94,    34,    17,    97,    17,    18,   141,   142,   143,     8,
      17,   146,   147,    33,    29,    35,    74,    30,     1,    17,
      18,    34,   145,    30,     3,     8,   161,    34,    17,   141,
     142,   143,    30,   168,   146,   147,    34,   141,   142,   143,
      23,    24,   146,   147,    27,    34,    38,    29,    30,   161,
      33,   145,   249,   172,   148,    47,   168,   161,    33,   182,
       4,   155,     6,    74,   168,    17,    18,    31,    17,    74,
     213,    17,   276,    17,    18,    17,    18,    31,   257,   270,
     271,    73,    34,    29,   178,    34,    30,   266,   182,   268,
      34,   210,    34,    17,    18,    33,    88,    35,    17,    91,
      73,    74,    75,    31,   283,    97,    30,   230,    33,     4,
      34,     4,   291,     6,     7,    34,    33,     4,    33,     6,
       7,    14,    17,    18,    17,    18,    33,    14,     1,   223,
      17,    18,   226,   276,   277,     8,   230,   110,   335,    34,
      33,    34,   346,   347,    33,   349,   350,    34,   345,    17,
      18,    29,    30,   145,   248,    33,   360,    29,    30,    33,
     295,    33,   256,   155,   258,   369,    34,   261,   262,   263,
     264,   265,   145,   267,   348,   269,   348,   320,   272,   348,
      30,    29,    30,   295,    34,   279,   178,    29,    30,    47,
     182,   295,   286,   287,   288,   289,   290,     0,   292,     4,
       3,     6,     7,   346,   347,    33,   349,   350,     8,    14,
      29,    30,    17,    18,    72,    73,    33,   360,   276,    77,
     355,    79,   357,    23,    24,   348,   369,    27,    29,    34,
      88,   223,    47,    33,   226,    17,    18,    30,   230,    97,
     213,    34,    29,   355,    29,   357,   340,     4,    30,     6,
       7,   355,    34,   357,   348,    29,   248,    72,    73,   353,
      17,    18,    77,    29,    79,   276,    17,    18,    30,   261,
     262,   276,    34,    88,    30,   267,    14,    34,    34,    30,
     272,    33,    97,    34,    47,     8,    34,   145,   346,   347,
     148,   349,   350,     4,   286,   287,    14,   155,    14,     4,
      34,     6,   360,   276,   277,     0,    17,    18,     3,    34,
      73,   369,    17,    18,    17,    18,    17,    18,    29,     0,
     178,    34,     3,     8,   182,    88,    89,    30,    29,    34,
     145,    34,    34,   148,    97,   346,   347,    34,   349,   350,
     155,   346,   347,     0,   349,   350,     3,   320,     4,   360,
       6,     7,    34,    33,     0,   360,   348,     3,   369,    17,
      18,    17,    18,   178,   369,   223,    34,   182,   226,    17,
      18,    29,   230,   346,   347,   348,   349,   350,    34,    17,
      18,    29,   145,    17,    18,     0,     0,   360,     3,     3,
     248,    29,   155,    34,     0,    29,   369,     3,   256,    34,
     258,    34,    34,   261,   262,   263,   264,   265,   223,   267,
      47,   226,    34,     5,   272,   230,     8,     5,    34,   182,
       8,   279,     5,    34,     4,     8,     6,     7,   286,   287,
     288,   289,   290,   248,   292,    72,    73,    17,    18,    34,
      77,   256,    79,   258,    14,    34,   261,   262,   263,   264,
     265,    88,   267,    47,    34,    29,     4,   272,     6,     7,
      97,    29,     5,    29,   279,     8,    14,   230,    29,    17,
      18,   286,   287,   288,   289,   290,    29,   292,    72,    73,
      29,    29,   340,    77,    14,    79,     4,    34,     6,     7,
     348,    14,    34,    34,    88,   353,    14,    33,   261,    17,
      18,    33,    33,    97,   267,    33,    14,    14,   145,   272,
      14,   148,    33,    14,    33,    33,    34,    35,   155,    33,
      33,    14,    34,   286,    34,   340,     4,    33,     6,     7,
       4,    34,     6,   348,    34,    29,    14,    33,   353,    17,
      18,   178,    29,    17,    18,   182,    31,    33,     1,    47,
      33,   145,     5,    33,   148,     8,    34,    29,    29,    34,
      34,   155,    15,    16,    34,    34,    19,    20,    21,    22,
      23,    24,    34,    33,    27,    73,    29,    34,    34,    34,
      33,    34,    34,    34,   178,   348,   223,    31,   182,   226,
      88,    34,     4,   230,     6,     7,    94,    34,    34,    97,
      34,    33,    14,    34,    34,    17,    18,    34,    14,    34,
      34,   248,    34,    34,    34,    34,    25,   277,    30,   256,
     211,   258,    34,    -1,   261,   262,   263,   264,   265,   223,
     267,     4,   226,     6,     7,   272,   230,    -1,    -1,    -1,
      47,    14,   279,    -1,    17,    18,    -1,   145,    -1,   286,
     287,   288,   289,   290,   248,   292,    -1,   155,    -1,    -1,
      -1,    34,   256,    -1,   258,    -1,    73,   261,   262,   263,
     264,   265,     8,   267,    -1,    -1,    -1,    -1,   272,    15,
     178,    88,    -1,    19,   182,   279,    93,    23,    24,    -1,
      97,    27,   286,   287,   288,   289,   290,    33,   292,    -1,
      -1,    47,    -1,   340,     4,    -1,     6,     7,    -1,    -1,
       4,   348,     6,     7,    14,    -1,   353,    17,    18,    -1,
      14,    -1,    -1,    17,    18,   223,    -1,    73,   226,    29,
      -1,    47,   230,    33,    -1,    35,    30,    -1,   145,    33,
      34,    -1,    88,    -1,    90,    -1,   340,    -1,   155,    -1,
     248,    97,    -1,    -1,   348,    -1,    -1,    73,    -1,   353,
      47,    -1,    -1,   261,   262,   263,   264,   265,    -1,   267,
      -1,   178,    88,    -1,   272,   182,    92,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,    73,    -1,   286,   287,
     288,   289,   290,    -1,     4,    -1,     6,     7,    -1,   145,
      -1,    88,    -1,    -1,    14,    -1,    -1,    17,    18,   155,
      97,    -1,     4,    -1,     6,     7,   223,    -1,    -1,   226,
      30,    -1,    14,   230,    34,    17,    18,    -1,    -1,   145,
      -1,     4,    -1,     6,     7,    -1,   182,    -1,    30,   155,
      -1,   248,    34,    -1,    17,    18,    -1,    -1,    -1,    -1,
     348,    -1,    -1,    -1,   261,   262,   263,   264,   145,    -1,
     267,    34,   178,    -1,    -1,   272,   182,    -1,   155,    -1,
      -1,    -1,    -1,     4,    -1,     6,     7,   223,    -1,   286,
     287,   288,   289,    14,   230,    -1,    17,    18,    -1,    -1,
      -1,   178,     4,    -1,     6,   182,    -1,    -1,     4,    30,
       6,     7,   248,    34,    -1,    17,    18,   223,    14,    -1,
     226,    17,    18,    -1,   230,   261,    -1,    29,    -1,    -1,
       4,   267,     6,     7,    30,    -1,   272,    -1,    34,    -1,
      14,    -1,   248,    17,    18,     4,   223,     6,     7,   226,
     286,   348,    -1,   230,    -1,   261,   262,   263,    17,    18,
      34,   267,     4,    -1,     6,     7,   272,    -1,    -1,    -1,
      29,   248,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,
     286,   287,   288,    -1,   261,   262,     8,    -1,    30,    -1,
     267,    -1,    34,    15,     4,   272,     6,     7,    -1,     1,
      -1,    23,    24,     5,    14,    27,     8,    17,    18,   286,
     287,    33,   348,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    34,    27,     1,    29,     3,    -1,
       5,    33,    34,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,   348,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    -1,    32,    33,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,    -1,     5,
      -1,   348,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
       4,    27,     6,    29,    -1,    -1,    32,    33,     1,    -1,
       3,    -1,     5,    17,    18,     8,     9,    10,    11,    12,
      13,    -1,    15,    16,    -1,    29,    19,    20,    21,    22,
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
      -1,    -1,     8,     9,    10,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,
       3,    -1,     5,    -1,    -1,     8,     9,    10,    11,    12,
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
      27,     1,    29,     3,    31,     5,    33,    -1,     8,     9,
      -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,
      -1,     8,     9,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,    -1,    29,    -1,    -1,    32,    33,     1,    -1,     3,
      -1,     5,    -1,    -1,     8,     9,    -1,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,     1,    29,     3,    31,     5,    33,
      -1,     8,     9,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,     1,    29,     3,    31,     5,    33,    -1,     8,     9,
      -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    -1,    32,    33,     1,    -1,     3,    -1,     5,    -1,
      -1,     8,     9,    -1,    11,    12,    13,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,    -1,
      27,     1,    29,     3,    31,     5,    33,    -1,     8,     9,
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
      -1,     3,    -1,     5,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,     1,    29,     3,    -1,
       5,    33,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,     1,    29,    -1,    -1,     5,    33,    -1,
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
      17,    18,     4,    -1,     6,     7,    17,    18,     4,    -1,
       6,     7,    -1,    30,    -1,    17,    18,    34,    -1,    30,
      -1,    17,    18,    34,    -1,    -1,    -1,     4,    30,     6,
       7,    -1,    34,     4,    30,     6,     7,    -1,    34,    -1,
      17,    18,     4,    -1,     6,     7,    17,    18,     4,    -1,
       6,     7,    -1,    30,    -1,    17,    18,    34,    -1,    30,
      -1,    17,    18,    34,    -1,    -1,    -1,     4,    30,     6,
       7,    -1,    34,     4,    30,     6,     7,    -1,    34,    -1,
      17,    18,     4,    -1,     6,     7,    17,    18,     4,    -1,
       6,     7,    -1,    30,    -1,    17,    18,    34,    -1,    -1,
      -1,    17,    18,    34,    -1,    -1,     4,    -1,     6,     7,
      -1,     4,    34,     6,     7,    -1,    -1,    -1,    34,    17,
      18,    -1,    -1,    -1,    17,    18,    -1,    -1,     5,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    34,    -1,    15,    16,
      -1,    34,    19,    20,    21,    22,    23,    24,     5,    -1,
      27,     8,    -1,    -1,    -1,    -1,    33,    34,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,     5,    -1,
      27,     8,    -1,    -1,    -1,    -1,    33,    34,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,     5,    -1,
      27,     8,    -1,    -1,    -1,    -1,    33,    34,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,     5,    -1,
      27,     8,    -1,    -1,    -1,    -1,    33,    34,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,     4,
      27,     6,     7,    -1,    -1,    -1,    33,    34,     5,    14,
      -1,     8,    17,    18,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    19,    -1,    29,    -1,    23,    24,    33,    -1,
      27,     8,    -1,    -1,    -1,    -1,    33,    -1,    15,    -1,
      -1,     4,    19,     6,     7,    -1,    23,    24,    -1,    -1,
      27,    14,    -1,    -1,    17,    18,    33,    34,     4,    -1,
       6,     7,    -1,    -1,    -1,    -1,    29,     4,    14,     6,
       7,    17,    18,    -1,    -1,    -1,     4,    14,     6,     7,
      17,    18,    -1,    29,    -1,     4,    14,     6,     7,    17,
      18,    -1,    29,    -1,     4,    14,     6,     7,    17,    18,
      -1,    29,     8,    -1,    14,    -1,    -1,    17,    18,    15,
      29,    -1,    -1,    19,    -1,     8,    -1,    23,    24,    29,
      -1,    27,    15,    -1,    -1,    -1,    19,    33,    -1,    -1,
      23,    24,    -1,     4,    27,     6,     7,    -1,    -1,     4,
      33,     6,     7,    -1,    -1,    -1,    17,    18,     4,    -1,
       6,     7,    17,    18,     4,    -1,     6,     7,    29,    -1,
      -1,    17,    18,     4,    29,     6,     7,    17,    18,     4,
      -1,     6,     7,    29,    -1,    -1,    17,    18,     4,    29,
       6,     7,    17,    18,    -1,    -1,     8,    -1,    29,    -1,
      -1,    17,    18,    15,    29,    -1,     4,     8,     6,     7,
      -1,    23,    24,    29,    15,    27,    -1,    -1,    -1,    17,
      18,    33,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    29,    33
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
      48,    49,    52,    54,    55,    56,    57,    58,    59,    60,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    73,
      74,    75,    33,    33,    53,    33,    55,    33,    33,    33,
      58,    64,    33,    33,    33,    62,    74,    29,    33,    35,
      17,    18,     4,     6,     7,    14,     8,    33,    69,    70,
      73,     1,    56,    31,    40,    43,    48,    51,     1,     3,
      50,    55,     1,    73,     5,     8,    76,    73,     8,    58,
       8,    25,    26,    61,    61,    34,    34,    62,    71,    72,
      62,    63,    64,    66,    67,    68,    76,    62,    34,    34,
      34,    47,    10,    34,    42,    55,    34,    34,    33,    34,
      34,    34,    34,    34,    34,    30,    34,    32,    51,    51,
      29,    34,    56,    51,    51,    73,    62,    51,    34,    34,
      51,     8,     3,     8,     5,     8,    15,    16,    19,    23,
      24,    27,    33,    58,    63,    64,    65,    66,    67,    68,
      69,    70,    73,    75,    23,    24,    27,    58,    75,     8,
      20,    21,    22,    57,    58,    59,    60,    62,    74,     1,
       3,     9,    11,    12,    13,    29,    49,    52,    54,    55,
      56,    29,    56,    17,     8,    15,    19,    23,    24,    27,
      33,    58,    63,    64,    65,    66,    67,    68,    69,    70,
      73,    75,     5,     8,     8,     1,    29,    56,    17,    31,
      40,    43,    48,     1,    41,    42,    33,    33,    33,    64,
      62,    33,    18,     4,     6,     7,    14,    33,    14,    33,
      33,    33,    35,     1,    41,    42,    53,    33,    55,    33,
      29,    29,    63,    33,    64,    62,    33,    18,     4,     6,
       7,    14,    33,    29,    63,    47,    29,    44,    73,    76,
      73,    34,    71,    64,    66,    67,    68,     5,     8,    76,
      71,    76,    58,    61,    61,    62,    29,    44,    51,     1,
      50,     1,    73,    76,    34,    71,    64,    66,    67,    68,
       5,     8,    76,    73,    32,    31,    34,    34,    34,    34,
      33,    34,    34,    34,    34,    31,    10,    34,    55,    34,
      34,    34,    34,    33,    34,    47,    73,    47,    51,    51,
      34,    56,    51,    51,    73,    32,    34,    32,    51,    34,
      34,    51
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    43,    44,    44,    44,    45,    45,    46,    47,
      47,    47,    47,    48,    48,    48,    48,    49,    49,    49,
      49,    49,    50,    50,    51,    51,    51,    51,    52,    52,
      53,    53,    54,    55,    55,    55,    56,    56,    56,    56,
      56,    57,    58,    59,    60,    60,    61,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      70,    71,    71,    72,    72,    73,    74,    74,    75,    75,
      75,    75,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     3,     2,     3,
       1,     1,     6,     2,     3,     3,     3,     1,     2,     0,
       2,     2,     2,     1,     1,     1,     1,     6,     7,     5,
       5,     5,     1,     3,     3,     1,     1,     1,     3,     5,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     4,     4,     4,     1,     1,     1,     3,
       1,     3,     1,     2,     1,     3,     1,     3,     1,     3,
       1,     1,     3,     1,     1,     4,     1,     1,     1,     1,
       4,     0,     1,     3,     1,     3,     4,     4,     1,     3,
       1,     3,     1,     1,     4
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
#line 58 "syntactic.y"
                                                                {root = (yyvsp[0].tnode);}
#line 2246 "syntactic.tab.c"
    break;

  case 3:
#line 61 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2252 "syntactic.tab.c"
    break;

  case 4:
#line 62 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2258 "syntactic.tab.c"
    break;

  case 5:
#line 65 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2264 "syntactic.tab.c"
    break;

  case 6:
#line 66 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2270 "syntactic.tab.c"
    break;

  case 7:
#line 69 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = UnaryNode(VARDECL, (yyvsp[-1].tnode));
                                                                  setVarsType((yyvsp[-1].tnode), (yyvsp[-2].ival));
                                                                  printf("%d\n", curr_level);
                                                                  insertGlobalLeafs((yyvsp[-1].tnode));
                                                                }
#line 2281 "syntactic.tab.c"
    break;

  case 8:
#line 75 "syntactic.y"
                                                               {printf("reduziu erro com varDecl\n"); (yyval.tnode) = nullLeaf(); yyerrok;}
#line 2287 "syntactic.tab.c"
    break;

  case 9:
#line 78 "syntactic.y"
                                                                   {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2293 "syntactic.tab.c"
    break;

  case 10:
#line 79 "syntactic.y"
                                                                   {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2299 "syntactic.tab.c"
    break;

  case 11:
#line 82 "syntactic.y"
                                                                    {
                                                                      (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));
                                                                      (yyval.tnode)->leaf->is_decl = 1;
                                                                    }
#line 2308 "syntactic.tab.c"
    break;

  case 12:
#line 88 "syntactic.y"
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
#line 2330 "syntactic.tab.c"
    break;

  case 13:
#line 108 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2336 "syntactic.tab.c"
    break;

  case 14:
#line 109 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2342 "syntactic.tab.c"
    break;

  case 15:
#line 110 "syntactic.y"
                                                                {printf("reduziu erro com arguments\n"); (yyval.tnode) = nullLeaf(); yyerrok;}
#line 2348 "syntactic.tab.c"
    break;

  case 16:
#line 113 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2354 "syntactic.tab.c"
    break;

  case 17:
#line 114 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2360 "syntactic.tab.c"
    break;

  case 18:
#line 117 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level+1));
                                                                  (yyval.tnode)->leaf->is_decl = 1;
                                                                  (yyval.tnode)->leaf->ref->sym_kind = VARIABLE;
                                                                  (yyval.tnode)->leaf->ref->var_type = (yyvsp[-1].ival);
                                                                }
#line 2371 "syntactic.tab.c"
    break;

  case 19:
#line 125 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2377 "syntactic.tab.c"
    break;

  case 20:
#line 126 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2383 "syntactic.tab.c"
    break;

  case 21:
#line 127 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2389 "syntactic.tab.c"
    break;

  case 22:
#line 128 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2395 "syntactic.tab.c"
    break;

  case 23:
#line 131 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2401 "syntactic.tab.c"
    break;

  case 24:
#line 132 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2407 "syntactic.tab.c"
    break;

  case 25:
#line 133 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2413 "syntactic.tab.c"
    break;

  case 26:
#line 134 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2419 "syntactic.tab.c"
    break;

  case 27:
#line 137 "syntactic.y"
                                                                {(yyval.tnode) = TernaryNode(FOR1, (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2425 "syntactic.tab.c"
    break;

  case 28:
#line 138 "syntactic.y"
                                                                {(yyval.tnode) = QuaternaryNode(FOR2, (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2431 "syntactic.tab.c"
    break;

  case 29:
#line 139 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(FORALL, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2437 "syntactic.tab.c"
    break;

  case 30:
#line 140 "syntactic.y"
                                                                {printf("reduced with error forall\n");(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2443 "syntactic.tab.c"
    break;

  case 31:
#line 141 "syntactic.y"
                                                                {printf("reduced with error for\n"); (yyval.tnode) = nullLeaf(); yyerrok;}
#line 2449 "syntactic.tab.c"
    break;

  case 32:
#line 144 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2455 "syntactic.tab.c"
    break;

  case 33:
#line 145 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = (yyvsp[-1].tnode);
                                                                  (yyvsp[-1].tnode)->leaf->ref->sym_kind = VARIABLE;
                                                                  (yyvsp[-1].tnode)->leaf->ref->var_type = (yyvsp[-2].ival);
                                                                }
#line 2465 "syntactic.tab.c"
    break;

  case 34:
#line 152 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2471 "syntactic.tab.c"
    break;

  case 35:
#line 153 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2477 "syntactic.tab.c"
    break;

  case 36:
#line 154 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2483 "syntactic.tab.c"
    break;

  case 37:
#line 155 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2489 "syntactic.tab.c"
    break;

  case 38:
#line 159 "syntactic.y"
                                                  {(yyval.tnode) = BinaryNode(IF, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2495 "syntactic.tab.c"
    break;

  case 39:
#line 160 "syntactic.y"
                                                  {(yyval.tnode) = TernaryNode(IF_ELSE, (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2501 "syntactic.tab.c"
    break;

  case 40:
#line 163 "syntactic.y"
                                                  {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2507 "syntactic.tab.c"
    break;

  case 41:
#line 164 "syntactic.y"
                                                  {printf("reduced with cond error \n"); (yyval.tnode) = nullLeaf(); yyerrok;}
#line 2513 "syntactic.tab.c"
    break;

  case 42:
#line 167 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(RETURN, (yyvsp[0].tnode));}
#line 2519 "syntactic.tab.c"
    break;

  case 43:
#line 170 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2525 "syntactic.tab.c"
    break;

  case 44:
#line 171 "syntactic.y"
                                                                {printf("reduced with exprStmt error \n"); (yyval.tnode) = nullLeaf(); yyerrok;}
#line 2531 "syntactic.tab.c"
    break;

  case 45:
#line 172 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2537 "syntactic.tab.c"
    break;

  case 46:
#line 175 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2543 "syntactic.tab.c"
    break;

  case 47:
#line 176 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2549 "syntactic.tab.c"
    break;

  case 48:
#line 177 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2555 "syntactic.tab.c"
    break;

  case 49:
#line 178 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2561 "syntactic.tab.c"
    break;

  case 50:
#line 179 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2567 "syntactic.tab.c"
    break;

  case 51:
#line 182 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ASSIGN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2573 "syntactic.tab.c"
    break;

  case 52:
#line 185 "syntactic.y"
                                                                 {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));
                                                                }
#line 2581 "syntactic.tab.c"
    break;

  case 53:
#line 190 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(READ, (yyvsp[-1].tnode));}
#line 2587 "syntactic.tab.c"
    break;

  case 54:
#line 193 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITE, (yyvsp[-1].tnode));}
#line 2593 "syntactic.tab.c"
    break;

  case 55:
#line 194 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITELN, (yyvsp[-1].tnode));}
#line 2599 "syntactic.tab.c"
    break;

  case 56:
#line 197 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));
                                                                }
#line 2607 "syntactic.tab.c"
    break;

  case 57:
#line 200 "syntactic.y"
                                                                {(yyval.tnode) = charLeaf((yyvsp[0].cval));}
#line 2613 "syntactic.tab.c"
    break;

  case 58:
#line 201 "syntactic.y"
                                                                {(yyval.tnode) = stringLeaf((yyvsp[0].sval));}
#line 2619 "syntactic.tab.c"
    break;

  case 59:
#line 204 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(DISJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2625 "syntactic.tab.c"
    break;

  case 60:
#line 205 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2631 "syntactic.tab.c"
    break;

  case 61:
#line 208 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(CONJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2637 "syntactic.tab.c"
    break;

  case 62:
#line 209 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2643 "syntactic.tab.c"
    break;

  case 63:
#line 212 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(NEG, (yyvsp[0].tnode));}
#line 2649 "syntactic.tab.c"
    break;

  case 64:
#line 213 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2655 "syntactic.tab.c"
    break;

  case 65:
#line 216 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(RELOP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2661 "syntactic.tab.c"
    break;

  case 66:
#line 217 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2667 "syntactic.tab.c"
    break;

  case 67:
#line 220 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP1, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2673 "syntactic.tab.c"
    break;

  case 68:
#line 221 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2679 "syntactic.tab.c"
    break;

  case 69:
#line 224 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP2, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2685 "syntactic.tab.c"
    break;

  case 70:
#line 225 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2691 "syntactic.tab.c"
    break;

  case 71:
#line 228 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));}
#line 2697 "syntactic.tab.c"
    break;

  case 72:
#line 229 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2703 "syntactic.tab.c"
    break;

  case 73:
#line 230 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2709 "syntactic.tab.c"
    break;

  case 74:
#line 231 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2715 "syntactic.tab.c"
    break;

  case 75:
#line 232 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(IS_SET, (yyvsp[-1].tnode));}
#line 2721 "syntactic.tab.c"
    break;

  case 76:
#line 233 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2727 "syntactic.tab.c"
    break;

  case 77:
#line 236 "syntactic.y"
                                                                {(yyval.tnode) = intLeaf((yyvsp[0].ival));}
#line 2733 "syntactic.tab.c"
    break;

  case 78:
#line 237 "syntactic.y"
                                                                {(yyval.tnode) = floatLeaf((yyvsp[0].fval));}
#line 2739 "syntactic.tab.c"
    break;

  case 79:
#line 238 "syntactic.y"
                                                                {(yyval.tnode) = setLeaf();}
#line 2745 "syntactic.tab.c"
    break;

  case 80:
#line 241 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(CALL, (yyvsp[-3].tnode), (yyvsp[-1].tnode));}
#line 2751 "syntactic.tab.c"
    break;

  case 81:
#line 246 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2757 "syntactic.tab.c"
    break;

  case 82:
#line 247 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2763 "syntactic.tab.c"
    break;

  case 83:
#line 250 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2769 "syntactic.tab.c"
    break;

  case 84:
#line 251 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2775 "syntactic.tab.c"
    break;

  case 85:
#line 254 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(IN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2781 "syntactic.tab.c"
    break;

  case 86:
#line 257 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(SETOP, (yyvsp[-1].tnode));  (yyval.tnode)->internal->op_specifier = (yyvsp[-3].ival);}
#line 2787 "syntactic.tab.c"
    break;

  case 87:
#line 258 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(EXISTS, (yyvsp[-1].tnode));}
#line 2793 "syntactic.tab.c"
    break;

  case 88:
#line 262 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));
                                                                }
#line 2801 "syntactic.tab.c"
    break;

  case 89:
#line 265 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2807 "syntactic.tab.c"
    break;

  case 90:
#line 266 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2813 "syntactic.tab.c"
    break;

  case 91:
#line 267 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2819 "syntactic.tab.c"
    break;

  case 92:
#line 268 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2825 "syntactic.tab.c"
    break;

  case 93:
#line 272 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval), curr_level));
                                                                }
#line 2833 "syntactic.tab.c"
    break;

  case 94:
#line 275 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(SETOP, (yyvsp[-1].tnode));  (yyval.tnode)->internal->op_specifier = (yyvsp[-3].ival);}
#line 2839 "syntactic.tab.c"
    break;


#line 2843 "syntactic.tab.c"

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
#line 280 "syntactic.y"

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
