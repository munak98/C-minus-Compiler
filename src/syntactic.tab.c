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
#define YYLAST   4485

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

#define YYPACT_NINF (-341)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      51,    25,   432,  -341,   177,   450,   459,   480,   482,   174,
     179,   264,    26,   488,    58,    12,    73,   280,   310,    43,
      74,    78,    30,    77,    83,    94,   361,   131,   107,  2652,
     369,  2686,  2720,   154,   853,   460,   198,   209,   612,   224,
     233,   238,  4148,   271,   330,   341,  4236,  4242,  4260,  2754,
     499,  4168,  2788,  2822,  2856,  2890,  2924,  2958,  2992,   127,
     161,   373,   192,   357,    79,   157,   125,   123,  1480,  4450,
    4266,  4284,  4290,  4308,  4314,  4332,  4168,   355,  4338,  3848,
    3026,   750,  3056,    97,   991,  4168,  4356,   385,    75,    75,
      17,  3090,  4148,   368,  4148,  4148,  4148,  4148,  4148,  4148,
    4148,    62,   391,   396,  3124,    65,   792,   406,   101,   414,
     135,   428,   452,   457,   470,   484,   485,   491,  4362,   132,
    4128,   335,   436,   197,  1618,  4455,  4380,  4386,  4404,  3154,
    3184,  2652,  1870,  1904,  1938,  1972,  3026,  4028,  3026,  3026,
    4410,  4428,   378,   441,   483,    76,   494,   394,  3214,  3248,
    3278,  3026,   497,  3278,  3278,  4434,  4188,  2006,  3026,  3308,
    3278,  3026,  3342,  3376,   146,  3278,  3410,  3278,  3444,  3478,
     307,   581,   489,  4201,   652,   506,   508,  4168,   245,   266,
     948,  4168,   355,    40,   149,     9,    38,   658,  1056,  1062,
    1096,  1486,  3895,  3913,   541,   509,   510,   516,   517,   424,
     518,   522,   188,  1181,   487,   524,   435,   527,   529,   532,
     533,   544,  4168,   355,   548,   549,  4168,  2040,   334,   198,
     556,  1702,   559,  2074,  2108,  2142,  2176,  2210,   564,  4048,
    4068,   571,   574,  4214,   714,   575,   576,  4188,   496,   692,
     887,  4168,   355,   268,    61,   114,   520,  1255,  1013,  1118,
    1160,  1391,  1425,  1446,  4188,  2652,  3512,  3546,  3580,  3614,
     174,   467,  4168,  3918,   991,  4168,  3936,   216,   578,  4168,
    4168,  4168,  4168,  4168,  4168,   385,    75,    75,  4168,  1768,
    4168,   991,  4168,   240,   580,   199,  2244,   174,   478,  3026,
    1819,  2278,   173,  2312,  4088,  4168,  1528,   991,  4168,  1550,
     247,   583,  4188,  4188,  4188,  4188,  4188,  4188,   302,  3648,
      26,  3682,   253,   588,   291,  3942,  4128,   353,    15,   351,
    1291,  3960,  3965,   589,   590,   592,   314,   324,   595,   332,
     603,  4128,    26,  2346,  3124,   908,   792,   604,   358,   362,
     606,   366,  1586,  4128,   313,  1022,  1611,  1358,  1645,  1663,
    3716,    73,  3983,  3989,  4007,   609,   614,   615,   620,   623,
     626,   633,   634,    73,  2380,  3026,  4108,  3026,  3026,  1730,
    1803,  3870,   639,   646,  4012,   650,   659,  3248,  3124,  3026,
     660,  3124,  3124,  3876,  2652,  2652,  3026,  2414,  3124,  3026,
    2448,  2482,  3750,  3784,  3124,  2516,  3124,  3818,  2550,  2584,
    2618
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
    -341,  -341,  -341,  -341,    -2,  -160,   680,     6,  -238,  -340,
    -293,  -341,   671,  -128,   -30,   -92,    46,   -69,   326,  -120,
     490,   -58,   -36,   140,   -75,   141,   -74,   -73,   -82,  1535,
    1488,  1397,  1246,  1143,  1076,   973,   410,   814,   300,   569,
     707,  -173,  -295,  -341
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
     261,   373,   224,    19,   271,    20,   150,   351,   153,   154,
     271,   355,   310,   376,   -65,     3,   268,   -65,   -65,    52,
     -64,   160,   216,   -64,   -64,   225,   362,    53,   165,   363,
     284,   167,   272,   -67,   -65,   106,   226,    21,   372,   332,
     -64,    -4,   118,   -67,    -4,   -61,   -67,   -67,   288,   269,
      15,    27,   198,   200,   201,    28,   -46,    17,   227,   301,
     137,   -46,   -46,   -67,   -46,   -61,   -63,   216,    25,   303,
     -63,   -46,   -46,    26,   111,   -46,   -46,   -46,   -46,   -46,
     -46,   254,   -63,   -46,    94,   -46,   -63,   128,   107,   -46,
     136,   113,   114,   172,   173,   -13,   174,   -93,   -19,   -51,
     -15,   -93,   -19,   175,   176,    29,   216,   177,    54,   304,
     258,   178,   179,   258,   258,   180,   -17,   309,    97,   -65,
     258,   181,   -65,   -65,    20,   258,   139,   258,   -65,   -16,
     -63,   -65,   -65,    96,   -63,   -65,    52,    94,   256,   -65,
     216,   256,   256,   -65,    53,   -63,   257,    91,   256,   257,
     257,   254,   -52,   256,   -63,   256,   257,   270,   -63,   334,
     141,   257,   -61,   257,   337,    77,    95,   -92,     8,   172,
     173,   -92,   174,    77,   -63,   291,     9,   -61,    76,   175,
     176,   -48,   182,   177,   324,   325,   159,   178,   179,   162,
     163,   180,    97,   216,   -11,   -11,   166,   181,   -12,    13,
      14,   168,   -64,   169,   -60,   -64,   -64,   182,   269,   103,
     199,   204,   -49,   -51,   182,   213,   182,   -64,   112,   115,
     115,   216,    79,    77,   -60,    77,    77,    77,    77,    77,
      77,    77,   224,    81,   228,   378,   231,   381,   382,   -85,
     -85,   315,   -85,   -85,   336,   216,   392,   393,    83,   388,
     -85,   242,   216,   -85,   -85,   225,   394,    84,   216,   396,
     -86,   -86,    85,   -86,   -86,   330,   226,   152,   199,    54,
     -85,   -86,   342,   -61,   -86,   -86,   224,   302,   352,   224,
     224,   198,   200,   201,   -10,   -10,   224,   242,   227,   -61,
     366,   -86,   224,   -61,   224,    87,   216,    52,   259,   225,
     -11,   -11,   225,   225,   182,    53,   260,   -60,   182,   225,
     226,   302,   182,   226,   226,   225,   354,   225,   -62,   216,
     226,   303,   -62,   -60,    78,   286,   226,   -60,   226,   216,
      -9,    -9,   227,   287,   -62,   227,   227,   216,   -62,   -52,
     -60,   191,   227,   182,    95,   272,   -66,   182,   227,   359,
     227,   228,    54,    54,    88,   -60,   -66,   361,   -62,   -66,
     -66,   270,   -62,   216,   242,    89,   191,   216,   242,   191,
     364,   216,   182,   191,   109,   191,   -66,   -50,   -62,   -88,
      52,    52,   -20,   368,   111,   242,   -20,   369,    53,    53,
     -18,   371,   120,   182,   -18,   213,   182,   -88,   -54,    92,
     182,   182,   182,   182,   182,   182,   323,   115,   115,   182,
     251,   182,   213,   182,   387,   156,   129,   390,   391,   -91,
     204,   130,    -2,   182,   395,     4,   182,   191,   213,   182,
     399,   138,   400,   242,   242,   242,   242,   242,   242,   140,
      -3,   -62,    86,    -3,    96,   -62,   251,   242,   -88,    -5,
     278,   189,    -5,   -53,   -78,   -78,   -62,   -78,   -78,   -53,
     -78,   -55,   242,   263,   228,   -78,   231,   191,   -78,   -78,
      -6,   191,    -8,    -6,   242,    -8,   189,   142,    -7,   189,
     -78,    -7,   -58,   189,   -53,   189,   -53,   311,    14,   -14,
     -85,   -85,   -14,   -85,   -85,   -59,   380,   199,   333,    14,
     127,   -85,   191,   -56,   -85,   -85,   191,   279,   228,   -57,
     143,   228,   228,   262,   305,   -67,   144,   -85,   228,   155,
     249,   -85,   161,   296,   228,   -67,   228,   251,   -67,   -67,
     264,   191,   265,   275,   276,   -78,   -78,   189,   -78,   -78,
     277,   -67,   -48,   -49,   251,   -67,   -78,   -50,   280,   -78,
     -78,   281,   191,   282,   313,   191,   249,   -85,   -86,   191,
     191,   191,   191,   191,   191,   -53,   -78,   -53,   191,   -87,
     191,   328,   191,   -80,   -81,   -78,   -78,   266,   -78,   -78,
     290,   189,   191,   292,   293,   191,   -78,   340,   191,   -78,
     -78,   294,   251,   251,   251,   251,   251,   251,   295,   297,
     298,   -78,   316,    32,   331,   -53,   251,   343,    33,    34,
     192,    35,   189,   353,   356,   357,   189,   358,    40,    41,
     360,   251,    42,    43,    44,    45,    46,    47,   -79,   367,
      48,   370,    49,   251,   374,   192,    51,   299,   192,   -54,
     -55,   189,   192,   214,   192,   -56,   -78,   -78,   -84,   -78,
     -78,   -82,   -69,   -69,   249,   273,   191,   -78,   -83,   375,
     -78,   -78,   189,   -69,   383,   189,   -69,   -69,   384,   189,
     189,   189,   189,   189,   322,   -89,   -53,   -78,   189,   252,
     189,   385,   189,   -69,    18,   389,   -86,   -86,    30,   -86,
     -86,     0,   189,   386,     0,   189,   192,   -86,   189,   289,
     -86,   -86,   249,   249,   249,   249,   249,   349,   -78,   -78,
       0,   -78,   -78,   -86,     0,   252,   249,   -86,     0,   -78,
       0,     0,   -78,   -78,     0,     0,     0,     0,     0,     0,
       0,   249,   192,     0,     0,   -78,   192,     0,   -53,   -78,
     192,   105,     0,   249,     0,     0,    33,    34,   193,    35,
       0,     0,     0,     0,     0,     0,    40,    41,     0,     0,
      42,    43,    44,    45,    46,    47,   189,     0,    48,     0,
     203,   192,     0,   193,    51,   192,   193,     0,     0,     0,
     193,   215,   193,   229,     0,     0,     0,     0,    33,    34,
       0,    35,   252,     0,     0,     0,   252,     0,    40,    41,
     192,     0,    42,    43,    44,    45,    46,    47,     0,     0,
      48,     0,   230,   252,     0,     0,    51,   253,     0,     0,
       0,   192,     0,   214,   192,     0,     0,     0,   192,   192,
     192,   192,   192,   192,   193,     0,     0,   192,     0,   192,
     214,   192,     0,     0,     0,     0,     0,     0,     0,    33,
       0,   192,   171,   253,   192,   190,   214,   192,     0,    40,
      41,   252,   252,   252,   252,   252,   252,    46,    47,     0,
     193,    48,     0,     0,   193,   252,     0,    51,   193,     0,
     190,   -87,   -87,   190,   -87,   -87,     0,   190,     0,   190,
     252,     0,   -87,     0,     0,   -87,   -87,     0,     0,   -46,
       0,     0,   252,     0,   -46,   -46,     0,   -46,   -87,   193,
       0,     0,   -87,   193,   -46,   -46,     0,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   250,   192,   -46,     0,   -46,     0,
     253,     0,   -46,   365,   253,     0,     0,     0,   193,     0,
       0,   190,   -87,   -87,     0,   -87,   -87,     0,     0,     0,
       0,   253,     0,   -87,     0,     0,   -87,   -87,     0,   193,
     250,   215,   193,     0,     0,     0,   193,   193,   193,   193,
     193,   193,     0,   -87,     0,   193,     0,   193,   215,   193,
       0,   190,     0,     0,     0,   190,     0,   205,     0,   193,
     206,     0,   193,     0,   215,   193,     0,   207,   208,   253,
     253,   253,   253,   253,   253,   209,   210,   -71,   -71,   211,
     -71,   307,     0,   253,   188,   212,   190,   304,   -71,     0,
     190,   -71,   -71,     0,     0,     0,     0,   -64,   253,     0,
     -64,   -64,     0,     0,   -71,     0,     0,     0,   -71,   188,
     253,   250,   188,   -64,     0,   190,   188,   -64,   188,     0,
     -71,   -71,     0,   -71,   274,     0,   -73,   -73,   250,   -73,
     -73,   -71,   126,   193,   -71,   -71,   190,   -73,     0,   190,
     -73,   -73,     0,   190,   190,   190,   190,   190,   190,     0,
       0,   -71,   190,   248,   190,     0,   190,   -73,     0,     0,
     -75,   -75,     0,   -75,   -75,     0,   190,     0,     0,   190,
     188,   -75,   190,     0,   -75,   -75,   250,   250,   250,   250,
     250,   250,   -73,   -73,     0,   -73,   -73,   187,     0,   248,
     250,   -75,     0,   -73,     0,     0,   -73,   -73,     0,     0,
       0,     0,     0,     0,     0,   250,     0,     0,     0,   -73,
       0,     0,   187,   -73,   188,   187,     0,   250,     0,   187,
       0,   187,     0,     0,   -75,   -75,     0,   -75,   -75,     0,
       0,     0,     0,     0,   125,   -75,     0,     0,   -75,   -75,
     190,     0,   -47,     0,     0,   188,     0,   -47,   -47,   188,
     -47,   -75,     0,     0,   186,   -75,   247,   -47,   -47,     0,
       0,   -47,   -47,   -47,   -47,   -47,   -47,     0,     0,   -47,
       0,   -47,     0,   187,   188,   -47,     0,     0,     0,   186,
       0,     0,   186,     0,     0,     0,   186,   248,   186,     0,
       0,     0,   247,     0,     0,   188,     0,     0,   188,     0,
     124,     0,   188,   188,   188,   188,   321,     0,     0,     0,
       0,   188,     0,   188,     0,   188,     0,   187,     0,   -69,
     -69,     0,   306,   246,     0,   188,     0,     0,   188,     0,
     -69,   188,     0,   -69,   -69,   248,   248,   248,   248,   348,
     186,     0,     0,     0,     0,     0,   -69,     0,   187,   248,
     -69,     0,   187,     0,     0,   -68,   -68,   185,   273,   246,
       0,     0,     0,     0,   248,     0,   -68,     0,     0,   -68,
     -68,     0,     0,     0,     0,     0,   248,   187,     0,     0,
       0,     0,   185,     0,   186,   185,   -68,     0,     0,   185,
     247,   185,     0,     0,     0,     0,     0,     0,   187,   188,
       0,   187,   123,     0,     0,   187,   187,   187,   320,     0,
       0,     0,     0,     0,   187,   186,   187,     0,   187,   186,
       0,     0,   -68,   -68,     0,   306,   245,     0,   187,     0,
       0,   187,     0,   -68,   187,     0,   -68,   -68,   247,   247,
     247,   347,     0,   185,   186,     0,     0,     0,     0,   -68,
       0,     0,   247,   -68,     0,   -77,   -77,   246,   -77,   -77,
       0,     0,   245,     0,     0,   186,   -77,   247,   186,   -77,
     -77,     0,   186,   186,   319,     0,     0,     0,     0,   247,
       0,   186,   -77,   186,     0,   186,   -77,   185,     0,   -80,
     -80,     0,   -80,   -80,     0,   186,     0,     0,   186,     0,
     -80,   186,   187,   -80,   -80,   246,   246,   346,   184,     0,
     -81,   -81,     0,   -81,   -81,     0,   -80,     0,   185,   246,
     -80,   -81,   185,     0,   -81,   -81,     0,     0,     0,     0,
       0,     0,     0,   184,   246,     0,   184,   -81,     0,     0,
     184,   -81,   184,     0,    98,   -67,   246,   185,     0,     0,
     -77,   -77,   122,   -77,   -77,   -67,     0,     0,   -67,   -67,
     245,   -77,     0,     0,   -77,   -77,     0,     0,   185,   186,
     -67,   185,     0,     0,     0,   185,   318,   244,     0,     0,
       0,   -77,     0,     0,   185,     0,   185,     0,   185,     0,
       0,     0,   -76,   -76,   184,   -76,   -76,     0,   185,   183,
       0,   185,     0,   -76,   185,     0,   -76,   -76,   245,   345,
       0,     0,     0,   244,   -74,   -74,     0,   -74,   -74,   -76,
       0,     0,   245,   -76,   183,   -74,     0,   183,   -74,   -74,
       0,   183,     0,   183,     0,     0,     0,   245,   184,     0,
       0,   -74,   121,     0,     0,   -74,    90,     0,     0,   245,
     -79,   -79,     0,   -79,   -79,     0,     0,     0,     0,     0,
       0,   -79,     0,     0,   -79,   -79,     0,     0,   243,   184,
       0,   101,   185,   184,   202,   305,   -66,   -79,   108,     0,
     110,   -79,    98,   -66,     0,   183,   -66,   119,     0,   -66,
     -66,     0,     0,   -66,     0,     0,   -66,   -66,   184,     0,
       0,     0,   -66,     0,   243,     0,   -66,     0,   -66,   -70,
     -70,   244,   -70,   307,     0,   145,     0,     0,     0,   184,
     -70,     0,   184,   -70,   -70,     0,   317,   -72,   -72,   183,
     -72,   -72,   202,     0,     0,   184,   -70,   184,   -72,   184,
     -70,   -72,   -72,     0,     0,     0,     0,     0,     0,   184,
       0,   164,   184,     0,   -72,   184,     0,     0,   -72,   344,
     183,     0,     0,   217,   285,     0,     0,     0,    33,    34,
       0,    35,     0,   244,     0,     0,   267,     0,    40,    41,
       0,     0,    42,    43,    44,    45,    46,    47,   244,   183,
      48,     0,   223,     0,   -84,   -84,    51,   -84,   -84,     0,
     244,     0,   308,     0,     0,   -84,     0,   283,   -84,   -84,
     183,     0,     0,   183,     0,     0,     0,     0,     0,     0,
       0,   -84,     0,   184,     0,   -84,   183,     0,   183,   -45,
     183,     0,     0,     0,   -45,   -45,   300,   -45,     0,     0,
     183,     0,     0,   183,   -45,   -45,   183,     0,   -45,   -45,
     -45,   -45,   -45,   -45,     0,     0,   -45,   312,   -45,     0,
     314,     0,   -45,     0,   243,     0,     0,   -82,   -82,     0,
     -82,   -82,     0,   326,     0,   327,     0,   329,   -82,   243,
     335,   -82,   -82,     0,     0,    33,    34,   338,    35,     0,
     339,   243,     0,   341,   -82,    40,    41,     0,   -82,    42,
      43,    44,    45,    46,    47,     0,     0,    48,     0,   203,
       0,   145,     0,    51,   183,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145,     0,     0,     0,
       0,   -36,     0,   -36,     0,     0,   -36,   -36,   145,   -36,
     -36,   -36,   -36,   -36,   -36,     0,   -36,   -36,     0,     0,
     -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,     0,
     -36,   202,     0,   -36,   -36,   -37,     0,   -37,     0,     0,
     -37,   -37,     0,   -37,   -37,   -37,   -37,   -37,   -37,     0,
     -37,   -37,     0,     0,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,   -37,     0,   -37,     0,     0,   -37,   -37,   -35,
       0,   -35,     0,     0,   -35,   -35,     0,   -35,   -35,   -35,
     -35,   -35,   -35,     0,   -35,   -35,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,   -35,     0,   -35,     0,
       0,   -35,   -35,   -38,     0,   -38,     0,     0,   -38,   -38,
       0,   -38,   -38,   149,   -38,   -38,   -38,     0,   -38,   -38,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
     -38,     0,   -38,     0,     0,   -38,   -38,   -34,     0,   -34,
       0,     0,   -34,   -34,     0,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,     0,   -34,     0,     0,   -34,
     -34,   -46,     0,   -46,     0,     0,   -46,   -46,     0,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,
     -46,   -46,   -46,   -46,   -46,   -46,     0,     0,   -46,     0,
     -46,     0,     0,   -46,   -46,   -47,     0,   -47,     0,     0,
     -47,   -47,     0,   -47,   -47,   -47,   -47,   -47,   -47,     0,
     -47,   -47,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
       0,     0,   -47,     0,   -47,     0,     0,   -47,   -47,   -27,
       0,   -27,     0,     0,   -27,   -27,     0,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -27,   -27,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,     0,   -27,     0,
       0,   -27,   -27,   -28,     0,   -28,     0,     0,   -28,   -28,
       0,   -28,   -28,   -28,   -28,   -28,   -28,     0,   -28,   -28,
       0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
     -28,     0,   -28,     0,     0,   -28,   -28,   -26,     0,   -26,
       0,     0,   -26,   -26,     0,   -26,   -26,   -26,   -26,   -26,
     -26,     0,   -26,   -26,     0,     0,   -26,   -26,   -26,   -26,
     -26,   -26,     0,     0,   -26,     0,   -26,     0,     0,   -26,
     -26,   -25,     0,   -25,     0,     0,   -25,   -25,     0,   -25,
     -25,   -25,   -25,   -25,   -25,     0,   -25,   -25,     0,     0,
     -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,     0,
     -25,     0,     0,   -25,   -25,    -8,     0,    -8,     0,     0,
      -8,    -8,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,
      -8,    -8,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,    -8,     0,    -8,     0,     0,    -8,    -8,   -44,
       0,   -44,     0,     0,   -44,   -44,     0,   -44,   -44,   -44,
     -44,   -44,   -44,     0,   -44,   -44,     0,     0,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,   -44,     0,   -44,     0,
       0,   -44,   -44,   -45,     0,   -45,     0,     0,   -45,   -45,
       0,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -45,   -45,
       0,     0,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,
     -45,     0,   -45,     0,     0,   -45,   -45,    -7,     0,    -7,
       0,     0,    -7,    -7,     0,    -7,    -7,    -7,    -7,    -7,
      -7,     0,    -7,    -7,     0,     0,    -7,    -7,    -7,    -7,
      -7,    -7,     0,     0,    -7,     0,    -7,     0,     0,    -7,
      -7,   -38,     0,   -38,     0,     0,   -38,   -38,     0,   -38,
     -38,   377,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,     0,
     -38,     0,     0,   -38,   -38,   -33,     0,   -33,     0,     0,
     -33,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -33,   -33,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,
       0,     0,   -33,     0,   -33,     0,     0,   -33,   -33,   -32,
       0,   -32,     0,     0,   -32,   -32,     0,   -32,   -32,   -32,
     -32,   -32,   -32,     0,   -32,   -32,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,     0,   -32,     0,   -32,     0,
       0,   -32,   -32,   -31,     0,   -31,     0,     0,   -31,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -31,     0,   -31,   -31,
       0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
     -31,     0,   -31,     0,     0,   -31,   -31,   -29,     0,   -29,
       0,     0,   -29,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -29,     0,   -29,   -29,     0,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,   -29,     0,   -29,     0,     0,   -29,
     -29,   -14,     0,   -14,     0,     0,   -14,   -14,     0,   -14,
     -14,   -14,   -14,   -14,   -14,     0,   -14,   -14,     0,     0,
     -14,   -14,   -14,   -14,   -14,   -14,     0,     0,   -14,     0,
     -14,     0,     0,   -14,   -14,   -40,     0,   -40,     0,     0,
     -40,   -40,     0,   -40,   -40,   -40,   -40,   -40,   -40,     0,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,   -40,     0,   -40,     0,     0,   -40,   -40,   -30,
       0,   -30,     0,     0,   -30,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -30,     0,   -30,   -30,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,   -30,     0,   -30,     0,
       0,   -30,   -30,   -21,     0,   -21,     0,     0,   -21,   -21,
       0,   -21,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,
       0,     0,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,
     -21,     0,   -21,     0,     0,   -21,   -21,    32,     0,   170,
       0,     0,    33,    34,     0,    35,    36,     0,    37,    38,
      39,     0,    40,    41,     0,     0,    42,    43,    44,    45,
      46,    47,     0,     0,    48,     0,    49,     0,     0,    50,
      51,   -46,     0,   -46,     0,     0,   -46,   -46,     0,   -46,
     -46,     0,   -46,   -46,   -46,     0,   -46,   -46,     0,     0,
     -46,   -46,   -46,   -46,   -46,   -46,     0,     0,   -46,     0,
     -46,     0,     0,   -46,   -46,   -47,     0,   -47,     0,     0,
     -47,   -47,     0,   -47,   -47,     0,   -47,   -47,   -47,     0,
     -47,   -47,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,
       0,     0,   -47,     0,   -47,     0,     0,   -47,   -47,   -22,
       0,   -22,     0,     0,   -22,   -22,     0,   -22,   -22,     0,
     -22,   -22,   -22,     0,   -22,   -22,     0,     0,   -22,   -22,
     -22,   -22,   -22,   -22,     0,     0,   -22,     0,   -22,     0,
       0,   -22,   -22,   -23,     0,   -23,     0,     0,   -23,   -23,
       0,   -23,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,
       0,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,
     -23,     0,   -23,     0,     0,   -23,   -23,   -24,     0,   -24,
       0,     0,   -24,   -24,     0,   -24,   -24,     0,   -24,   -24,
     -24,     0,   -24,   -24,     0,     0,   -24,   -24,   -24,   -24,
     -24,   -24,     0,     0,   -24,     0,   -24,     0,     0,   -24,
     -24,   -27,     0,   -27,     0,     0,   -27,   -27,     0,   -27,
     -27,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,     0,
     -27,     0,     0,   -27,   -27,   -28,     0,   -28,     0,     0,
     -28,   -28,     0,   -28,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   -28,     0,   -28,     0,     0,   -28,   -28,   -26,
       0,   -26,     0,     0,   -26,   -26,     0,   -26,   -26,     0,
     -26,   -26,   -26,     0,   -26,   -26,     0,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,   -26,     0,   -26,     0,
       0,   -26,   -26,   -25,     0,   -25,     0,     0,   -25,   -25,
       0,   -25,   -25,     0,   -25,   -25,   -25,     0,   -25,   -25,
       0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,
     -25,     0,   -25,     0,     0,   -25,   -25,   -41,     0,   -41,
       0,     0,   -41,   -41,     0,   -41,   -41,     0,   -41,   -41,
     -41,     0,   -41,   -41,     0,     0,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,   -41,     0,   -41,   -44,   -41,   -44,
     -41,     0,   -44,   -44,     0,   -44,   -44,     0,   -44,   -44,
     -44,     0,   -44,   -44,     0,     0,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,   -44,     0,   -44,     0,     0,   -44,
     -44,   -45,     0,   -45,     0,     0,   -45,   -45,     0,   -45,
     -45,     0,   -45,   -45,   -45,     0,   -45,   -45,     0,     0,
     -45,   -45,   -45,   -45,   -45,   -45,     0,     0,   -45,     0,
     -45,     0,     0,   -45,   -45,   217,     0,   218,     0,     0,
      33,    34,     0,    35,   219,     0,   220,   221,   222,     0,
      40,    41,     0,     0,    42,    43,    44,    45,    46,    47,
       0,     0,    48,     0,   223,   -43,   131,   -43,    51,     0,
     -43,   -43,     0,   -43,   -43,     0,   -43,   -43,   -43,     0,
     -43,   -43,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,   -43,     0,   -43,   -42,   -43,   -42,   -43,     0,
     -42,   -42,     0,   -42,   -42,     0,   -42,   -42,   -42,     0,
     -42,   -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,   -42,     0,   -42,    32,   -42,   170,   -42,     0,
      33,    34,     0,    35,    36,     0,    37,    38,    39,     0,
      40,    41,     0,     0,    42,    43,    44,    45,    46,    47,
       0,     0,    48,     0,    49,     0,     0,   157,    51,   -39,
       0,   -39,     0,     0,   -39,   -39,     0,   -39,   -39,     0,
     -39,   -39,   -39,     0,   -39,   -39,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,   -39,     0,   -39,    32,
     -39,   170,   -39,     0,    33,    34,     0,    35,    36,     0,
      37,    38,    39,     0,    40,    41,     0,     0,    42,    43,
      44,    45,    46,    47,     0,     0,    48,     0,    49,   -33,
     255,   -33,    51,     0,   -33,   -33,     0,   -33,   -33,     0,
     -33,   -33,   -33,     0,   -33,   -33,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,     0,     0,   -33,     0,   -33,     0,
       0,   -33,   -33,   -32,     0,   -32,     0,     0,   -32,   -32,
       0,   -32,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,
       0,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,
     -32,     0,   -32,     0,     0,   -32,   -32,   -31,     0,   -31,
       0,     0,   -31,   -31,     0,   -31,   -31,     0,   -31,   -31,
     -31,     0,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,     0,   -31,     0,     0,   -31,
     -31,   -29,     0,   -29,     0,     0,   -29,   -29,     0,   -29,
     -29,     0,   -29,   -29,   -29,     0,   -29,   -29,     0,     0,
     -29,   -29,   -29,   -29,   -29,   -29,     0,     0,   -29,     0,
     -29,     0,     0,   -29,   -29,   -40,     0,   -40,     0,     0,
     -40,   -40,     0,   -40,   -40,     0,   -40,   -40,   -40,     0,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
       0,     0,   -40,     0,   -40,     0,     0,   -40,   -40,   -30,
       0,   -30,     0,     0,   -30,   -30,     0,   -30,   -30,     0,
     -30,   -30,   -30,     0,   -30,   -30,     0,     0,   -30,   -30,
     -30,   -30,   -30,   -30,     0,     0,   -30,     0,   -30,     0,
       0,   -30,   -30,   -36,     0,   -36,     0,     0,   -36,   -36,
       0,   -36,   -36,     0,   -36,   -36,   -36,     0,   -36,   -36,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
     -36,     0,   -36,     0,     0,   -36,   -36,   -37,     0,   -37,
       0,     0,   -37,   -37,     0,   -37,   -37,     0,   -37,   -37,
     -37,     0,   -37,   -37,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,   -37,     0,   -37,     0,     0,   -37,
     -37,   -35,     0,   -35,     0,     0,   -35,   -35,     0,   -35,
     -35,     0,   -35,   -35,   -35,     0,   -35,   -35,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,     0,
     -35,     0,     0,   -35,   -35,    -8,     0,    -8,     0,     0,
      -8,    -8,     0,    -8,    -8,     0,    -8,    -8,    -8,     0,
      -8,    -8,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,    -8,     0,    -8,     0,     0,    -8,    -8,    32,
       0,   170,     0,     0,    33,    34,     0,    35,    36,     0,
      37,    38,    39,     0,    40,    41,     0,     0,    42,    43,
      44,    45,    46,    47,     0,     0,    48,     0,    49,     0,
       0,   350,    51,    -7,     0,    -7,     0,     0,    -7,    -7,
       0,    -7,    -7,     0,    -7,    -7,    -7,     0,    -7,    -7,
       0,     0,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,
      -7,     0,    -7,     0,     0,    -7,    -7,   -34,     0,   -34,
       0,     0,   -34,   -34,     0,   -34,   -34,     0,   -34,   -34,
     -34,     0,   -34,   -34,     0,     0,   -34,   -34,   -34,   -34,
     -34,   -34,     0,     0,   -34,     0,   -34,     0,     0,   -34,
     -34,    32,     0,   170,     0,     0,    33,    34,     0,    35,
      36,     0,    37,    38,    39,     0,    40,    41,     0,     0,
      42,    43,    44,    45,    46,    47,     0,     0,    48,     0,
      49,     0,     0,   397,    51,    32,     0,   170,     0,     0,
      33,    34,     0,    35,    36,     0,    37,    38,    39,     0,
      40,    41,     0,     0,    42,    43,    44,    45,    46,    47,
       0,     0,    48,     0,    49,     0,     0,   398,    51,   -14,
       0,   -14,     0,     0,   -14,   -14,     0,   -14,   -14,     0,
     -14,   -14,   -14,     0,   -14,   -14,     0,     0,   -14,   -14,
     -14,   -14,   -14,   -14,     0,     0,   -14,     0,   -14,   102,
       0,   -14,   -14,     0,   172,   173,     0,   194,     0,     0,
       0,     0,     0,     0,   175,   176,     0,     0,   177,   195,
     196,   197,   178,   179,   -83,   -83,   180,   -83,   -83,     0,
     -89,   -89,   181,   -89,   -89,   -83,     0,     0,   -83,   -83,
       0,   -89,     0,     0,   -89,   -89,     0,     0,     0,   -80,
     -80,   -83,   -80,   -80,     0,   -83,     0,   -89,     0,     0,
     -80,   -89,     0,   -80,   -80,     0,     0,   -81,   -81,     0,
     -81,   -81,   -76,   -76,     0,   -76,   -76,     0,   -81,     0,
     -80,   -81,   -81,   -76,     0,     0,   -76,   -76,     0,     0,
     -74,   -74,     0,   -74,   -74,     0,   -79,   -79,   -81,   -79,
     -79,   -74,     0,   -76,   -74,   -74,     0,   -79,     0,     0,
     -79,   -79,     0,     0,   -70,   -70,     0,   -70,   274,   -72,
     -72,   -74,   -72,   -72,     0,   -70,     0,   -79,   -70,   -70,
     -72,     0,     0,   -72,   -72,     0,     0,   -84,   -84,     0,
     -84,   -84,     0,   -82,   -82,   -70,   -82,   -82,   -84,     0,
     -72,   -84,   -84,     0,   -82,     0,     0,   -82,   -82,     0,
       0,   -83,   -83,     0,   -83,   -83,   -89,   -89,   -84,   -89,
     -89,     0,   -83,     0,   -82,   -83,   -83,   -89,     0,     0,
     -89,   -89,     0,     0,   172,   173,     0,   194,     0,     0,
       0,     0,   -83,     0,   175,   176,     0,   -89,   177,   195,
     196,   197,   178,   179,   -46,   -46,   180,   -46,     0,     0,
       0,     0,   181,   151,   -46,   -46,     0,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -47,   -47,   -46,   -47,     0,     0,
       0,     0,   -46,   -46,   -47,   -47,     0,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -45,   -45,   -47,   -45,     0,     0,
       0,     0,   -47,   -47,   -45,   -45,     0,     0,   -45,   -45,
     -45,   -45,   -45,   -45,   172,   173,   -45,   194,     0,     0,
       0,     0,   -45,   -45,   175,   176,     0,     0,   177,   195,
     196,   197,   178,   179,   232,   233,   180,   234,     0,     0,
       0,     0,   181,   379,   235,   236,     0,     0,   237,     0,
       0,     0,   238,   239,    33,    34,   240,   171,     0,     0,
       0,     0,   241,   -90,    40,    41,     0,     0,    42,     0,
       0,     0,    46,    47,   172,   173,    48,   174,     0,     0,
       0,     0,    51,     0,   175,   176,     0,     0,   177,     0,
       0,     0,   178,   179,   232,   233,   180,   234,     0,     0,
       0,     0,   181,     0,   235,   236,     0,   172,   237,     0,
     174,     0,   238,   239,     0,     0,   240,   175,   176,     0,
     232,     0,   241,   234,     0,   178,   179,     0,     0,   180,
     235,   236,     0,     0,     0,   181,     0,     0,   238,   239,
     -85,   -85,   240,   -85,   -85,     0,   -86,   -86,   241,   -86,
     -86,   -85,     0,     0,   -85,   -85,     0,   -86,     0,     0,
     -86,   -86,     0,     0,   -87,   -87,   -85,   -87,   -87,     0,
     -71,   -71,   -86,   -71,   100,   -87,     0,     0,   -87,   -87,
       0,   -71,     0,     0,   -71,   -71,     0,     0,   -73,   -73,
     -87,   -73,   -73,     0,   -75,   -75,   -71,   -75,   -75,   -73,
       0,     0,   -73,   -73,     0,   -75,     0,     0,   -75,   -75,
       0,     0,   -77,   -77,   -73,   -77,   -77,     0,   -80,   -80,
     -75,   -80,   -80,   -77,     0,     0,   -77,   -77,     0,   -80,
       0,     0,   -80,   -80,     0,     0,   -81,   -81,   -77,   -81,
     -81,     0,   -76,   -76,   -80,   -76,   -76,   -81,     0,     0,
     -81,   -81,     0,   -76,     0,     0,   -76,   -76,     0,     0,
     -74,   -74,   -81,   -74,   -74,     0,   -79,   -79,   -76,   -79,
     -79,   -74,     0,     0,   -74,   -74,     0,   -79,     0,     0,
     -79,   -79,     0,     0,   -70,   -70,   -74,   -70,   100,     0,
     -72,   -72,   -79,   -72,   -72,   -70,     0,     0,   -70,   -70,
       0,   -72,     0,     0,   -72,   -72,     0,     0,   -84,   -84,
     -70,   -84,   -84,     0,   -82,   -82,   -72,   -82,   -82,   -84,
       0,     0,   -84,   -84,     0,   -82,     0,     0,   -82,   -82,
       0,     0,   -83,   -83,   -84,   -83,   -83,     0,   -89,   -89,
     -82,   -89,   -89,   -83,     0,     0,   -83,   -83,     0,   -89,
       0,     0,   -89,   -89,   -69,   -69,     0,    99,   -83,   -68,
     -68,     0,    99,     0,   -89,   -69,     0,     0,   -69,   -69,
     -68,     0,     0,   -68,   -68,     0,     0,     0,     0,     0,
     -69,     0,     0,     0,     0,   -68
};

static const yytype_int16 yycheck[] =
{
       2,    31,    38,   131,    79,    79,    79,    89,     2,   182,
     170,   351,   104,     1,     5,     3,   136,   310,   138,   139,
       5,   316,   260,   363,    15,     0,   199,    18,    19,    31,
      15,   151,    15,    18,    19,   104,   331,    31,   158,   332,
     213,   161,     4,     5,    35,    81,   104,    35,   343,   287,
      35,     0,    35,    15,     3,    15,    18,    19,   218,    19,
      34,    31,   137,   137,   137,    35,     1,     9,   104,   242,
     106,     6,     7,    35,     9,    35,    15,    15,    35,    18,
      19,    16,    17,     9,     9,    20,    21,    22,    23,    24,
      25,    15,    31,    28,    15,    30,    35,    35,     1,    34,
      35,    26,    27,     6,     7,    32,     9,    31,    31,    30,
      32,    35,    35,    16,    17,    32,    15,    20,   148,     5,
     150,    24,    25,   153,   154,    28,    32,   255,     5,    15,
     160,    34,    18,    19,     3,   165,    35,   167,    15,    32,
      15,    18,    19,    18,    19,    31,   148,    15,   150,    35,
      15,   153,   154,    30,   148,    30,   150,    30,   160,   153,
     154,    15,    30,   165,    15,   167,   160,    18,    19,   289,
      35,   165,    15,   167,     1,    34,    19,    31,     1,     6,
       7,    35,     9,    42,    35,   221,     9,    30,    34,    16,
      17,    30,    51,    20,   276,   277,   150,    24,    25,   153,
     154,    28,     5,    15,    30,    31,   160,    34,    34,    30,
      31,   165,    15,   167,    15,    18,    19,    76,    19,    79,
      79,    81,    30,    35,    83,    84,    85,    30,    87,    88,
      89,    15,    34,    92,    35,    94,    95,    96,    97,    98,
      99,   100,   334,    34,   104,   365,   106,   367,   368,     4,
       5,    35,     7,     8,   290,    15,   384,   385,    34,   379,
      15,   120,    15,    18,    19,   334,   386,    34,    15,   389,
       4,     5,    34,     7,     8,    35,   334,   137,   137,   309,
      35,    15,    35,    15,    18,    19,   378,    19,    35,   381,
     382,   366,   366,   366,    30,    31,   388,   156,   334,    31,
     336,    35,   394,    35,   396,    34,    15,   309,     1,   378,
      30,    31,   381,   382,   173,   309,     9,    15,   177,   388,
     378,    19,   181,   381,   382,   394,    35,   396,    15,    15,
     388,    18,    19,    31,    34,     1,   394,    35,   396,    15,
      30,    31,   378,     9,    31,   381,   382,    15,    35,    35,
      15,    51,   388,   212,    19,     4,     5,   216,   394,    35,
     396,   221,   392,   393,    34,    30,    15,    35,    15,    18,
      19,    18,    19,    15,   233,    34,    76,    15,   237,    79,
     334,    15,   241,    83,    84,    85,    35,    30,    35,    34,
     392,   393,    31,    35,     9,   254,    35,    35,   392,   393,
      31,    35,    34,   262,    35,   264,   265,    34,    30,    36,
     269,   270,   271,   272,   273,   274,   275,   276,   277,   278,
     120,   280,   281,   282,   378,    31,    35,   381,   382,    35,
     290,    35,     0,   292,   388,     3,   295,   137,   297,   298,
     394,    35,   396,   302,   303,   304,   305,   306,   307,    35,
       0,    15,    42,     3,    18,    19,   156,   316,    34,     0,
      36,    51,     3,    35,     4,     5,    30,     7,     8,    34,
      35,    30,   331,   173,   334,    15,   336,   177,    18,    19,
       0,   181,     0,     3,   343,     3,    76,    35,     0,    79,
      30,     3,    35,    83,    34,    85,    36,    30,    31,     0,
       4,     5,     3,     7,     8,    35,   366,   366,    30,    31,
     100,    15,   212,    30,    18,    19,   216,    30,   378,    35,
      35,   381,   382,    34,     4,     5,    35,    31,   388,    35,
     120,    35,    35,   233,   394,    15,   396,   237,    18,    19,
      34,   241,    34,    34,    34,     4,     5,   137,     7,     8,
      34,    31,    35,    35,   254,    35,    15,    35,    34,    18,
      19,    34,   262,    34,   264,   265,   156,    35,    35,   269,
     270,   271,   272,   273,   274,    34,    35,    36,   278,    35,
     280,   281,   282,    35,    35,     4,     5,   177,     7,     8,
      34,   181,   292,    34,    30,   295,    15,   297,   298,    18,
      19,    30,   302,   303,   304,   305,   306,   307,    34,    34,
      34,    30,    34,     1,    34,    34,   316,    34,     6,     7,
      51,     9,   212,    35,    35,    35,   216,    35,    16,    17,
      35,   331,    20,    21,    22,    23,    24,    25,    35,    35,
      28,    35,    30,   343,    35,    76,    34,   237,    79,    35,
      35,   241,    83,    84,    85,    35,     4,     5,    35,     7,
       8,    35,     4,     5,   254,     7,   366,    15,    35,    35,
      18,    19,   262,    15,    35,   265,    18,    19,    32,   269,
     270,   271,   272,   273,   274,    35,    34,    35,   278,   120,
     280,    32,   282,    35,    14,    35,     4,     5,    27,     7,
       8,    -1,   292,   377,    -1,   295,   137,    15,   298,   219,
      18,    19,   302,   303,   304,   305,   306,   307,     4,     5,
      -1,     7,     8,    31,    -1,   156,   316,    35,    -1,    15,
      -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   331,   173,    -1,    -1,    31,   177,    -1,    34,    35,
     181,     1,    -1,   343,    -1,    -1,     6,     7,    51,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,   366,    -1,    28,    -1,
      30,   212,    -1,    76,    34,   216,    79,    -1,    -1,    -1,
      83,    84,    85,     1,    -1,    -1,    -1,    -1,     6,     7,
      -1,     9,   233,    -1,    -1,    -1,   237,    -1,    16,    17,
     241,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      28,    -1,    30,   254,    -1,    -1,    34,   120,    -1,    -1,
      -1,   262,    -1,   264,   265,    -1,    -1,    -1,   269,   270,
     271,   272,   273,   274,   137,    -1,    -1,   278,    -1,   280,
     281,   282,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     6,
      -1,   292,     9,   156,   295,    51,   297,   298,    -1,    16,
      17,   302,   303,   304,   305,   306,   307,    24,    25,    -1,
     173,    28,    -1,    -1,   177,   316,    -1,    34,   181,    -1,
      76,     4,     5,    79,     7,     8,    -1,    83,    -1,    85,
     331,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,     1,
      -1,    -1,   343,    -1,     6,     7,    -1,     9,    31,   212,
      -1,    -1,    35,   216,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,   120,   366,    28,    -1,    30,    -1,
     233,    -1,    34,    35,   237,    -1,    -1,    -1,   241,    -1,
      -1,   137,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,   254,    -1,    15,    -1,    -1,    18,    19,    -1,   262,
     156,   264,   265,    -1,    -1,    -1,   269,   270,   271,   272,
     273,   274,    -1,    35,    -1,   278,    -1,   280,   281,   282,
      -1,   177,    -1,    -1,    -1,   181,    -1,     6,    -1,   292,
       9,    -1,   295,    -1,   297,   298,    -1,    16,    17,   302,
     303,   304,   305,   306,   307,    24,    25,     4,     5,    28,
       7,     8,    -1,   316,    51,    34,   212,     5,    15,    -1,
     216,    18,    19,    -1,    -1,    -1,    -1,    15,   331,    -1,
      18,    19,    -1,    -1,    31,    -1,    -1,    -1,    35,    76,
     343,   237,    79,    31,    -1,   241,    83,    35,    85,    -1,
       4,     5,    -1,     7,     8,    -1,     4,     5,   254,     7,
       8,    15,    99,   366,    18,    19,   262,    15,    -1,   265,
      18,    19,    -1,   269,   270,   271,   272,   273,   274,    -1,
      -1,    35,   278,   120,   280,    -1,   282,    35,    -1,    -1,
       4,     5,    -1,     7,     8,    -1,   292,    -1,    -1,   295,
     137,    15,   298,    -1,    18,    19,   302,   303,   304,   305,
     306,   307,     4,     5,    -1,     7,     8,    51,    -1,   156,
     316,    35,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   331,    -1,    -1,    -1,    31,
      -1,    -1,    76,    35,   181,    79,    -1,   343,    -1,    83,
      -1,    85,    -1,    -1,     4,     5,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    98,    15,    -1,    -1,    18,    19,
     366,    -1,     1,    -1,    -1,   212,    -1,     6,     7,   216,
       9,    31,    -1,    -1,    51,    35,   120,    16,    17,    -1,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    28,
      -1,    30,    -1,   137,   241,    34,    -1,    -1,    -1,    76,
      -1,    -1,    79,    -1,    -1,    -1,    83,   254,    85,    -1,
      -1,    -1,   156,    -1,    -1,   262,    -1,    -1,   265,    -1,
      97,    -1,   269,   270,   271,   272,   273,    -1,    -1,    -1,
      -1,   278,    -1,   280,    -1,   282,    -1,   181,    -1,     4,
       5,    -1,     7,   120,    -1,   292,    -1,    -1,   295,    -1,
      15,   298,    -1,    18,    19,   302,   303,   304,   305,   306,
     137,    -1,    -1,    -1,    -1,    -1,    31,    -1,   212,   316,
      35,    -1,   216,    -1,    -1,     4,     5,    51,     7,   156,
      -1,    -1,    -1,    -1,   331,    -1,    15,    -1,    -1,    18,
      19,    -1,    -1,    -1,    -1,    -1,   343,   241,    -1,    -1,
      -1,    -1,    76,    -1,   181,    79,    35,    -1,    -1,    83,
     254,    85,    -1,    -1,    -1,    -1,    -1,    -1,   262,   366,
      -1,   265,    96,    -1,    -1,   269,   270,   271,   272,    -1,
      -1,    -1,    -1,    -1,   278,   212,   280,    -1,   282,   216,
      -1,    -1,     4,     5,    -1,     7,   120,    -1,   292,    -1,
      -1,   295,    -1,    15,   298,    -1,    18,    19,   302,   303,
     304,   305,    -1,   137,   241,    -1,    -1,    -1,    -1,    31,
      -1,    -1,   316,    35,    -1,     4,     5,   254,     7,     8,
      -1,    -1,   156,    -1,    -1,   262,    15,   331,   265,    18,
      19,    -1,   269,   270,   271,    -1,    -1,    -1,    -1,   343,
      -1,   278,    31,   280,    -1,   282,    35,   181,    -1,     4,
       5,    -1,     7,     8,    -1,   292,    -1,    -1,   295,    -1,
      15,   298,   366,    18,    19,   302,   303,   304,    51,    -1,
       4,     5,    -1,     7,     8,    -1,    31,    -1,   212,   316,
      35,    15,   216,    -1,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,   331,    -1,    79,    31,    -1,    -1,
      83,    35,    85,    -1,     4,     5,   343,   241,    -1,    -1,
       4,     5,    95,     7,     8,    15,    -1,    -1,    18,    19,
     254,    15,    -1,    -1,    18,    19,    -1,    -1,   262,   366,
      30,   265,    -1,    -1,    -1,   269,   270,   120,    -1,    -1,
      -1,    35,    -1,    -1,   278,    -1,   280,    -1,   282,    -1,
      -1,    -1,     4,     5,   137,     7,     8,    -1,   292,    51,
      -1,   295,    -1,    15,   298,    -1,    18,    19,   302,   303,
      -1,    -1,    -1,   156,     4,     5,    -1,     7,     8,    31,
      -1,    -1,   316,    35,    76,    15,    -1,    79,    18,    19,
      -1,    83,    -1,    85,    -1,    -1,    -1,   331,   181,    -1,
      -1,    31,    94,    -1,    -1,    35,    51,    -1,    -1,   343,
       4,     5,    -1,     7,     8,    -1,    -1,    -1,    -1,    -1,
      -1,    15,    -1,    -1,    18,    19,    -1,    -1,   120,   212,
      -1,    76,   366,   216,    79,     4,     5,    31,    83,    -1,
      85,    35,     4,     5,    -1,   137,    15,    92,    -1,    18,
      19,    -1,    -1,    15,    -1,    -1,    18,    19,   241,    -1,
      -1,    -1,    31,    -1,   156,    -1,    35,    -1,    30,     4,
       5,   254,     7,     8,    -1,   120,    -1,    -1,    -1,   262,
      15,    -1,   265,    18,    19,    -1,   269,     4,     5,   181,
       7,     8,   137,    -1,    -1,   278,    31,   280,    15,   282,
      35,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,   292,
      -1,   156,   295,    -1,    31,   298,    -1,    -1,    35,   302,
     212,    -1,    -1,     1,   216,    -1,    -1,    -1,     6,     7,
      -1,     9,    -1,   316,    -1,    -1,   181,    -1,    16,    17,
      -1,    -1,    20,    21,    22,    23,    24,    25,   331,   241,
      28,    -1,    30,    -1,     4,     5,    34,     7,     8,    -1,
     343,    -1,   254,    -1,    -1,    15,    -1,   212,    18,    19,
     262,    -1,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,   366,    -1,    35,   278,    -1,   280,     1,
     282,    -1,    -1,    -1,     6,     7,   241,     9,    -1,    -1,
     292,    -1,    -1,   295,    16,    17,   298,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,   262,    30,    -1,
     265,    -1,    34,    -1,   316,    -1,    -1,     4,     5,    -1,
       7,     8,    -1,   278,    -1,   280,    -1,   282,    15,   331,
       1,    18,    19,    -1,    -1,     6,     7,   292,     9,    -1,
     295,   343,    -1,   298,    31,    16,    17,    -1,    35,    20,
      21,    22,    23,    24,    25,    -1,    -1,    28,    -1,    30,
      -1,   316,    -1,    34,   366,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   331,    -1,    -1,    -1,
      -1,     1,    -1,     3,    -1,    -1,     6,     7,   343,     9,
      10,    11,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,   366,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
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
      24,    25,    -1,    -1,    28,    -1,    30,     1,    32,     3,
      34,    -1,     6,     7,    -1,     9,    10,    -1,    12,    13,
      14,    -1,    16,    17,    -1,    -1,    20,    21,    22,    23,
      24,    25,    -1,    -1,    28,    -1,    30,    -1,    -1,    33,
      34,     1,    -1,     3,    -1,    -1,     6,     7,    -1,     9,
      10,    -1,    12,    13,    14,    -1,    16,    17,    -1,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    28,    -1,
      30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,     1,    32,     3,    34,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,     1,    32,     3,    34,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,     1,    32,     3,    34,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,     1,
      32,     3,    34,    -1,     6,     7,    -1,     9,    10,    -1,
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
      30,    -1,    -1,    33,    34,     1,    -1,     3,    -1,    -1,
       6,     7,    -1,     9,    10,    -1,    12,    13,    14,    -1,
      16,    17,    -1,    -1,    20,    21,    22,    23,    24,    25,
      -1,    -1,    28,    -1,    30,    -1,    -1,    33,    34,     1,
      -1,     3,    -1,    -1,     6,     7,    -1,     9,    10,    -1,
      12,    13,    14,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,    -1,    -1,    28,    -1,    30,     1,
      -1,    33,    34,    -1,     6,     7,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,     4,     5,    28,     7,     8,    -1,
       4,     5,    34,     7,     8,    15,    -1,    -1,    18,    19,
      -1,    15,    -1,    -1,    18,    19,    -1,    -1,    -1,     4,
       5,    31,     7,     8,    -1,    35,    -1,    31,    -1,    -1,
      15,    35,    -1,    18,    19,    -1,    -1,     4,     5,    -1,
       7,     8,     4,     5,    -1,     7,     8,    -1,    15,    -1,
      35,    18,    19,    15,    -1,    -1,    18,    19,    -1,    -1,
       4,     5,    -1,     7,     8,    -1,     4,     5,    35,     7,
       8,    15,    -1,    35,    18,    19,    -1,    15,    -1,    -1,
      18,    19,    -1,    -1,     4,     5,    -1,     7,     8,     4,
       5,    35,     7,     8,    -1,    15,    -1,    35,    18,    19,
      15,    -1,    -1,    18,    19,    -1,    -1,     4,     5,    -1,
       7,     8,    -1,     4,     5,    35,     7,     8,    15,    -1,
      35,    18,    19,    -1,    15,    -1,    -1,    18,    19,    -1,
      -1,     4,     5,    -1,     7,     8,     4,     5,    35,     7,
       8,    -1,    15,    -1,    35,    18,    19,    15,    -1,    -1,
      18,    19,    -1,    -1,     6,     7,    -1,     9,    -1,    -1,
      -1,    -1,    35,    -1,    16,    17,    -1,    35,    20,    21,
      22,    23,    24,    25,     6,     7,    28,     9,    -1,    -1,
      -1,    -1,    34,    35,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,     6,     7,    28,     9,    -1,    -1,
      -1,    -1,    34,    35,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,     6,     7,    28,     9,    -1,    -1,
      -1,    -1,    34,    35,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,     6,     7,    28,     9,    -1,    -1,
      -1,    -1,    34,    35,    16,    17,    -1,    -1,    20,    21,
      22,    23,    24,    25,     6,     7,    28,     9,    -1,    -1,
      -1,    -1,    34,    35,    16,    17,    -1,    -1,    20,    -1,
      -1,    -1,    24,    25,     6,     7,    28,     9,    -1,    -1,
      -1,    -1,    34,    35,    16,    17,    -1,    -1,    20,    -1,
      -1,    -1,    24,    25,     6,     7,    28,     9,    -1,    -1,
      -1,    -1,    34,    -1,    16,    17,    -1,    -1,    20,    -1,
      -1,    -1,    24,    25,     6,     7,    28,     9,    -1,    -1,
      -1,    -1,    34,    -1,    16,    17,    -1,     6,    20,    -1,
       9,    -1,    24,    25,    -1,    -1,    28,    16,    17,    -1,
       6,    -1,    34,     9,    -1,    24,    25,    -1,    -1,    28,
      16,    17,    -1,    -1,    -1,    34,    -1,    -1,    24,    25,
       4,     5,    28,     7,     8,    -1,     4,     5,    34,     7,
       8,    15,    -1,    -1,    18,    19,    -1,    15,    -1,    -1,
      18,    19,    -1,    -1,     4,     5,    30,     7,     8,    -1,
       4,     5,    30,     7,     8,    15,    -1,    -1,    18,    19,
      -1,    15,    -1,    -1,    18,    19,    -1,    -1,     4,     5,
      30,     7,     8,    -1,     4,     5,    30,     7,     8,    15,
      -1,    -1,    18,    19,    -1,    15,    -1,    -1,    18,    19,
      -1,    -1,     4,     5,    30,     7,     8,    -1,     4,     5,
      30,     7,     8,    15,    -1,    -1,    18,    19,    -1,    15,
      -1,    -1,    18,    19,    -1,    -1,     4,     5,    30,     7,
       8,    -1,     4,     5,    30,     7,     8,    15,    -1,    -1,
      18,    19,    -1,    15,    -1,    -1,    18,    19,    -1,    -1,
       4,     5,    30,     7,     8,    -1,     4,     5,    30,     7,
       8,    15,    -1,    -1,    18,    19,    -1,    15,    -1,    -1,
      18,    19,    -1,    -1,     4,     5,    30,     7,     8,    -1,
       4,     5,    30,     7,     8,    15,    -1,    -1,    18,    19,
      -1,    15,    -1,    -1,    18,    19,    -1,    -1,     4,     5,
      30,     7,     8,    -1,     4,     5,    30,     7,     8,    15,
      -1,    -1,    18,    19,    -1,    15,    -1,    -1,    18,    19,
      -1,    -1,     4,     5,    30,     7,     8,    -1,     4,     5,
      30,     7,     8,    15,    -1,    -1,    18,    19,    -1,    15,
      -1,    -1,    18,    19,     4,     5,    -1,     7,    30,     4,
       5,    -1,     7,    -1,    30,    15,    -1,    -1,    18,    19,
      15,    -1,    -1,    18,    19,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    30
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
      57,    34,    59,    34,    34,    34,    73,    34,    34,    34,
      66,    30,    36,    78,    15,    19,    18,     5,     4,     7,
       8,    66,     1,    60,    56,     1,    59,     1,    66,    75,
      66,     9,    62,    26,    27,    62,    65,    65,    35,    66,
      34,    67,    68,    69,    70,    71,    72,    73,    35,    35,
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
       9,    42,    34,    75,    34,    34,    73,    66,    78,    19,
      18,     5,     4,     7,     8,    34,    34,    34,    36,    30,
      34,    34,    34,    66,    78,    67,     1,     9,    42,    57,
      34,    59,    34,    30,    30,    34,    75,    34,    34,    73,
      66,    78,    19,    18,     5,     4,     7,     8,    67,    50,
      45,    30,    66,    75,    66,    35,    34,    68,    69,    70,
      71,    72,    73,    62,    65,    65,    66,    66,    75,    66,
      35,    34,    45,    30,    56,     1,    59,     1,    66,    66,
      75,    66,    35,    34,    68,    69,    70,    71,    72,    73,
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
#line 55 "syntactic.y"
            {free(((*yyvaluep).sval));}
#line 2151 "syntactic.tab.c"
        break;

    case 27: /* STRING  */
#line 56 "syntactic.y"
            {free(((*yyvaluep).sval));}
#line 2157 "syntactic.tab.c"
        break;

    case 39: /* program  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2163 "syntactic.tab.c"
        break;

    case 40: /* declaration  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2169 "syntactic.tab.c"
        break;

    case 41: /* varDecl  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2175 "syntactic.tab.c"
        break;

    case 42: /* varList  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2181 "syntactic.tab.c"
        break;

    case 43: /* new_id  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2187 "syntactic.tab.c"
        break;

    case 44: /* funcDecl  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2193 "syntactic.tab.c"
        break;

    case 47: /* arguments  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2199 "syntactic.tab.c"
        break;

    case 48: /* argsList  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2205 "syntactic.tab.c"
        break;

    case 49: /* arg  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2211 "syntactic.tab.c"
        break;

    case 50: /* funcBody  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2217 "syntactic.tab.c"
        break;

    case 51: /* stmt  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2223 "syntactic.tab.c"
        break;

    case 52: /* iterStmt  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2229 "syntactic.tab.c"
        break;

    case 53: /* body  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2235 "syntactic.tab.c"
        break;

    case 54: /* condStmt  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2241 "syntactic.tab.c"
        break;

    case 57: /* cond  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2247 "syntactic.tab.c"
        break;

    case 58: /* returnStmt  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2253 "syntactic.tab.c"
        break;

    case 59: /* exprStmt  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2259 "syntactic.tab.c"
        break;

    case 60: /* expression  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2265 "syntactic.tab.c"
        break;

    case 61: /* assign  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2271 "syntactic.tab.c"
        break;

    case 62: /* var  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2277 "syntactic.tab.c"
        break;

    case 63: /* inExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2283 "syntactic.tab.c"
        break;

    case 64: /* outExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2289 "syntactic.tab.c"
        break;

    case 65: /* output  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2295 "syntactic.tab.c"
        break;

    case 66: /* simpleExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2301 "syntactic.tab.c"
        break;

    case 67: /* conjExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2307 "syntactic.tab.c"
        break;

    case 68: /* disjExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2313 "syntactic.tab.c"
        break;

    case 69: /* compExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2319 "syntactic.tab.c"
        break;

    case 70: /* relExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2325 "syntactic.tab.c"
        break;

    case 71: /* artExpr1  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2331 "syntactic.tab.c"
        break;

    case 72: /* artExpr2  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2337 "syntactic.tab.c"
        break;

    case 73: /* negExpr  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2343 "syntactic.tab.c"
        break;

    case 74: /* minusFactor  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2349 "syntactic.tab.c"
        break;

    case 75: /* factor  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2355 "syntactic.tab.c"
        break;

    case 76: /* constant  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2361 "syntactic.tab.c"
        break;

    case 77: /* call  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2367 "syntactic.tab.c"
        break;

    case 79: /* params  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2373 "syntactic.tab.c"
        break;

    case 80: /* paramList  */
#line 54 "syntactic.y"
            {freeSymbol(((*yyvaluep).tnode));}
#line 2379 "syntactic.tab.c"
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
#line 2649 "syntactic.tab.c"
    break;

  case 3:
#line 70 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2655 "syntactic.tab.c"
    break;

  case 4:
#line 71 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2661 "syntactic.tab.c"
    break;

  case 5:
#line 74 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2667 "syntactic.tab.c"
    break;

  case 6:
#line 75 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2673 "syntactic.tab.c"
    break;

  case 7:
#line 78 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(VARDECL, (yyvsp[-1].tnode)); setVarsType((yyvsp[-1].tnode), (yyvsp[-2].ival));}
#line 2679 "syntactic.tab.c"
    break;

  case 8:
#line 79 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2685 "syntactic.tab.c"
    break;

  case 9:
#line 83 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2691 "syntactic.tab.c"
    break;

  case 10:
#line 84 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2697 "syntactic.tab.c"
    break;

  case 11:
#line 87 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(declare((yyvsp[0].sval), UNDEF, VARIABLE));}
#line 2703 "syntactic.tab.c"
    break;

  case 12:
#line 90 "syntactic.y"
                        { aux = declare((yyvsp[0].sval), (yyvsp[-1].ival), FUNCTION);
                          pushScope(newScope((yyvsp[0].sval), curr_level+1));
                          n_args = 0;
                          curr_level += 1;}
#line 2712 "syntactic.tab.c"
    break;

  case 13:
#line 95 "syntactic.y"
                                          {aux->n_args = n_args; aux->args_type = (int *)calloc(n_args, sizeof(int)); setArgsInfo(aux, (yyvsp[0].tnode), 0);}
#line 2718 "syntactic.tab.c"
    break;

  case 14:
#line 97 "syntactic.y"
                                          {(yyval.tnode) = BinaryNode(FUNCDECL, (yyvsp[-4].tnode), (yyvsp[-1].tnode)); (yyval.tnode)->ref = aux; hideScope(); curr_level-=1;}
#line 2724 "syntactic.tab.c"
    break;

  case 15:
#line 101 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2730 "syntactic.tab.c"
    break;

  case 16:
#line 102 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2736 "syntactic.tab.c"
    break;

  case 17:
#line 103 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2742 "syntactic.tab.c"
    break;

  case 18:
#line 106 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2748 "syntactic.tab.c"
    break;

  case 19:
#line 107 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2754 "syntactic.tab.c"
    break;

  case 20:
#line 110 "syntactic.y"
                                                                { n_args += 1;
                                                                  (yyval.tnode) = idLeaf(declare((yyvsp[0].sval), (yyvsp[-1].ival), VARIABLE)); }
#line 2761 "syntactic.tab.c"
    break;

  case 21:
#line 114 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2767 "syntactic.tab.c"
    break;

  case 22:
#line 115 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2773 "syntactic.tab.c"
    break;

  case 23:
#line 116 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2779 "syntactic.tab.c"
    break;

  case 24:
#line 117 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2785 "syntactic.tab.c"
    break;

  case 25:
#line 120 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2791 "syntactic.tab.c"
    break;

  case 26:
#line 121 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2797 "syntactic.tab.c"
    break;

  case 27:
#line 122 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2803 "syntactic.tab.c"
    break;

  case 28:
#line 123 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2809 "syntactic.tab.c"
    break;

  case 29:
#line 126 "syntactic.y"
                                                                             {(yyval.tnode) = TernaryNode(FOR1, (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2815 "syntactic.tab.c"
    break;

  case 30:
#line 127 "syntactic.y"
                                                                             {(yyval.tnode) = QuaternaryNode(FOR2, (yyvsp[-5].tnode), (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2821 "syntactic.tab.c"
    break;

  case 31:
#line 128 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FORALL, (yyvsp[-3].tnode), (yyvsp[0].tnode));  hideScope(); curr_level -= 1;}
#line 2827 "syntactic.tab.c"
    break;

  case 32:
#line 129 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FORALL, nullLeaf(), (yyvsp[0].tnode)); yyerrok;  hideScope(); curr_level -= 1;}
#line 2833 "syntactic.tab.c"
    break;

  case 33:
#line 130 "syntactic.y"
                                                                             {(yyval.tnode) = BinaryNode(FOR, nullLeaf(), (yyvsp[0].tnode)); yyerrok;  hideScope(); curr_level -= 1;}
#line 2839 "syntactic.tab.c"
    break;

  case 34:
#line 134 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2845 "syntactic.tab.c"
    break;

  case 35:
#line 135 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2851 "syntactic.tab.c"
    break;

  case 36:
#line 136 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2857 "syntactic.tab.c"
    break;

  case 37:
#line 137 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2863 "syntactic.tab.c"
    break;

  case 38:
#line 141 "syntactic.y"
                                                                              {(yyval.tnode) = BinaryNode(IF, (yyvsp[-2].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1; }
#line 2869 "syntactic.tab.c"
    break;

  case 39:
#line 143 "syntactic.y"
                        {hideScope(); curr_level -= 1;}
#line 2875 "syntactic.tab.c"
    break;

  case 40:
#line 143 "syntactic.y"
                                                                                                    {(yyval.tnode) = TernaryNode(IF_ELSE, (yyvsp[-6].tnode), (yyvsp[-4].tnode), (yyvsp[0].tnode)); hideScope(); curr_level -= 1;}
#line 2881 "syntactic.tab.c"
    break;

  case 41:
#line 146 "syntactic.y"
                      {curr_level += 1; pushScope(newScope(curr_scope->name, curr_level));}
#line 2887 "syntactic.tab.c"
    break;

  case 42:
#line 149 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2893 "syntactic.tab.c"
    break;

  case 43:
#line 150 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2899 "syntactic.tab.c"
    break;

  case 44:
#line 153 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(RETURN, (yyvsp[0].tnode));}
#line 2905 "syntactic.tab.c"
    break;

  case 45:
#line 156 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2911 "syntactic.tab.c"
    break;

  case 46:
#line 157 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2917 "syntactic.tab.c"
    break;

  case 47:
#line 158 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2923 "syntactic.tab.c"
    break;

  case 48:
#line 161 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2929 "syntactic.tab.c"
    break;

  case 49:
#line 162 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2935 "syntactic.tab.c"
    break;

  case 50:
#line 163 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2941 "syntactic.tab.c"
    break;

  case 51:
#line 164 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2947 "syntactic.tab.c"
    break;

  case 52:
#line 167 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(ASSIGN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2953 "syntactic.tab.c"
    break;

  case 53:
#line 170 "syntactic.y"
                                                                {(yyval.tnode) = idLeaf(findDecl((yyvsp[0].sval)));}
#line 2959 "syntactic.tab.c"
    break;

  case 54:
#line 173 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(READ, (yyvsp[-1].tnode));}
#line 2965 "syntactic.tab.c"
    break;

  case 55:
#line 176 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITE, (yyvsp[-1].tnode));}
#line 2971 "syntactic.tab.c"
    break;

  case 56:
#line 177 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITELN, (yyvsp[-1].tnode));}
#line 2977 "syntactic.tab.c"
    break;

  case 57:
#line 180 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2983 "syntactic.tab.c"
    break;

  case 58:
#line 181 "syntactic.y"
                                                                {(yyval.tnode) = charLeaf((yyvsp[0].cval));}
#line 2989 "syntactic.tab.c"
    break;

  case 59:
#line 182 "syntactic.y"
                                                                {(yyval.tnode) = stringLeaf((yyvsp[0].sval));}
#line 2995 "syntactic.tab.c"
    break;

  case 60:
#line 185 "syntactic.y"
                                                                  {(yyval.tnode) = typeCheck(IN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3001 "syntactic.tab.c"
    break;

  case 61:
#line 186 "syntactic.y"
                                                                  {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3007 "syntactic.tab.c"
    break;

  case 62:
#line 189 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(CONJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3013 "syntactic.tab.c"
    break;

  case 63:
#line 190 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3019 "syntactic.tab.c"
    break;

  case 64:
#line 193 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(DISJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 3025 "syntactic.tab.c"
    break;

  case 65:
#line 194 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3031 "syntactic.tab.c"
    break;

  case 66:
#line 197 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(COMP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3037 "syntactic.tab.c"
    break;

  case 67:
#line 198 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3043 "syntactic.tab.c"
    break;

  case 68:
#line 201 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(RELOP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3049 "syntactic.tab.c"
    break;

  case 69:
#line 202 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3055 "syntactic.tab.c"
    break;

  case 70:
#line 205 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(ARTOP1, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3061 "syntactic.tab.c"
    break;

  case 71:
#line 206 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3067 "syntactic.tab.c"
    break;

  case 72:
#line 209 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(ARTOP2, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3073 "syntactic.tab.c"
    break;

  case 73:
#line 210 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3079 "syntactic.tab.c"
    break;

  case 74:
#line 213 "syntactic.y"
                                                                {(yyval.tnode) = typeCheck(NEG, (yyvsp[0].tnode), NULL);}
#line 3085 "syntactic.tab.c"
    break;

  case 75:
#line 214 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3091 "syntactic.tab.c"
    break;

  case 76:
#line 217 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(ARTOP1, (yyvsp[0].tnode)); (yyval.tnode)->sem_type = (yyvsp[0].tnode)->sem_type; (yyval.tnode)->op_specifier = (yyvsp[-1].ival);}
#line 3097 "syntactic.tab.c"
    break;

  case 77:
#line 218 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3103 "syntactic.tab.c"
    break;

  case 78:
#line 221 "syntactic.y"
                                                                 {(yyval.tnode) = idLeaf(findDecl((yyvsp[0].sval)));}
#line 3109 "syntactic.tab.c"
    break;

  case 79:
#line 222 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 3115 "syntactic.tab.c"
    break;

  case 80:
#line 223 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3121 "syntactic.tab.c"
    break;

  case 81:
#line 224 "syntactic.y"
                                                                 {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3127 "syntactic.tab.c"
    break;

  case 82:
#line 225 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(IS_SET, (yyvsp[-1].tnode), NULL);}
#line 3133 "syntactic.tab.c"
    break;

  case 83:
#line 226 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(EXISTS, (yyvsp[-1].tnode), NULL);}
#line 3139 "syntactic.tab.c"
    break;

  case 84:
#line 227 "syntactic.y"
                                                                 {(yyval.tnode) = typeCheck(SETOP, (yyvsp[-1].tnode), NULL); (yyval.tnode)->op_specifier = (yyvsp[-3].ival);}
#line 3145 "syntactic.tab.c"
    break;

  case 85:
#line 230 "syntactic.y"
                                                                {(yyval.tnode) = intLeaf((yyvsp[0].ival));}
#line 3151 "syntactic.tab.c"
    break;

  case 86:
#line 231 "syntactic.y"
                                                                {(yyval.tnode) = floatLeaf((yyvsp[0].fval));}
#line 3157 "syntactic.tab.c"
    break;

  case 87:
#line 232 "syntactic.y"
                                                                {(yyval.tnode) = setLeaf();}
#line 3163 "syntactic.tab.c"
    break;

  case 88:
#line 235 "syntactic.y"
                    {aux = (yyvsp[0].tnode)->ref; n_params = 0;}
#line 3169 "syntactic.tab.c"
    break;

  case 89:
#line 235 "syntactic.y"
                                                                    {(yyval.tnode) = BinaryNode(CALL, (yyvsp[-4].tnode), (yyvsp[-1].tnode)); (yyval.tnode)->sem_type = (yyvsp[-4].tnode)->sem_type;}
#line 3175 "syntactic.tab.c"
    break;

  case 90:
#line 240 "syntactic.y"
                                                                {(yyval.tnode) = checkParam(UNDEF, aux, NULL, NULL, n_params);}
#line 3181 "syntactic.tab.c"
    break;

  case 91:
#line 241 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 3187 "syntactic.tab.c"
    break;

  case 92:
#line 244 "syntactic.y"
                                                                {(yyval.tnode) = checkParam(SEQ, aux, (yyvsp[-2].tnode), (yyvsp[0].tnode), n_params); n_params += 1; }
#line 3193 "syntactic.tab.c"
    break;

  case 93:
#line 245 "syntactic.y"
                                                                {(yyval.tnode) = checkParam(UNDEF, aux, NULL, (yyvsp[0].tnode), n_params); n_params += 1;}
#line 3199 "syntactic.tab.c"
    break;


#line 3203 "syntactic.tab.c"

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
