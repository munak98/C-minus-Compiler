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
#define YYLAST   3362

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  384

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
static const yytype_int16 yyrline[] =
{
       0,    58,    58,    61,    62,    65,    66,    69,    72,    75,
      76,    79,    86,   104,   109,   110,   113,   114,   117,   126,
     127,   128,   129,   132,   133,   134,   135,   138,   139,   140,
     141,   142,   145,   146,   153,   154,   155,   156,   160,   161,
     164,   166,   167,   168,   171,   172,   173,   174,   175,   178,
     181,   191,   194,   195,   198,   206,   207,   210,   211,   214,
     215,   218,   219,   222,   223,   226,   227,   230,   231,   234,
     242,   243,   244,   245,   246,   249,   250,   251,   254,   259,
     260,   263,   264,   267,   270,   271,   275,   283,   284,   285,
     286,   290,   298
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
  "varDecl", "varList", "new_id", "funcDecl", "arguments", "argsList",
  "arg", "funcBody", "stmt", "iterStmt", "init", "body", "condStmt",
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
      44,    40,    41,   123,   125,    61
};
# endif

#define YYPACT_NINF (-293)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-93)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     174,    41,   267,  -293,    90,   274,   286,   296,    52,   221,
     -13,   505,   301,   313,    84,     6,   214,    88,   140,   144,
       7,   299,   167,   309,   194,   219,   340,  1800,   376,  1827,
     209,   225,    71,   250,   304,  1107,   314,   318,   326,  3300,
     337,   379,   383,  3179,  3185,  3203,  1854,  3157,   370,  1881,
    1908,  1935,  1962,  1989,  2016,  2043,   390,   394,   133,   411,
     421,    50,   126,   149,    95,    78,   686,  1157,  3209,  3227,
    3242,   427,   413,  2070,   414,  3137,   565,  2097,   188,   455,
     414,   441,   369,   455,    48,    48,    -9,   442,  2124,   967,
    3300,  3300,  3300,   604,   604,   604,   386,    28,  3157,   462,
     467,   458,   469,    93,   486,  2664,  2689,   477,   481,   487,
     491,   492,   511,   519,   520,   526,   531,   533,  3233,   561,
     117,   551,   416,    92,   435,   499,   349,  3257,  3266,   560,
    3272,  3281,    87,   564,   446,  2151,   566,  3037,  2178,  2637,
    3287,   568,   570,   573,   579,  3251,  3313,   414,   576,  1800,
     992,  1168,  1195,  1233,  2714,  2637,   581,  2205,   139,   583,
    2232,  2637,  2259,  2637,  3296,  1260,  2286,  2313,   292,   197,
    1030,   585,   634,   587,   594,  3326,   122,   805,   848,  3157,
     595,    15,   367,     8,   265,   523,  2968,   901,  2845,  2975,
     618,   620,   623,   628,   599,   630,   398,   615,   619,   622,
     617,   179,   629,   632,   106,   636,  2739,   645,  3326,   365,
     639,  3313,   542,   741,   762,  3157,   654,   155,   330,   480,
     177,   910,  2849,   768,   881,  2867,   674,  2764,   665,   670,
    3057,   672,  3313,   673,   200,   675,   676,  2789,   677,  1287,
    1314,  1341,  1368,  1395,   684,  1800,  2340,  2367,  2394,   688,
     334,   647,   414,   455,   414,   400,   128,   967,  3326,  1060,
    1060,  1060,   420,   967,   426,   455,    48,    48,  3326,  2814,
     482,   455,   515,   185,   967,  3313,  3331,  3331,  3331,   559,
    3077,  3097,   637,  1422,   691,   360,   652,  3137,  1050,  1449,
     264,  1476,  2421,  2448,  2475,    21,   694,   698,   699,  2876,
     701,   490,   641,  2984,  2991,   678,  3007,  3011,   702,   704,
     705,   711,   712,   714,   717,   189,   718,   937,   720,   771,
     680,  2885,  2894,   725,  2903,  2912,  1503,  1530,    54,   728,
     547,  2664,   731,   733,  2502,   735,   738,   745,  3015,   749,
    2932,   414,   770,   414,   764,   767,   772,  2941,  2840,   414,
     774,   776,   446,  1557,  3117,  1584,   446,   769,   777,   783,
     784,   785,   787,   788,  1611,   446,   793,  1638,  2529,  1800,
    3031,   796,  2948,  1665,  1800,   446,  1692,   446,  2556,  2583,
    1719,  1746,  2610,  1773
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -293,  -293,  -293,  -293,    -2,  -164,     1,     2,  -292,  -293,
     804,  -115,   -28,   -99,   544,    36,   -41,   -19,   -33,   -47,
     -69,   -29,   -61,   -54,   -74,   883,   263,     5,   885,   831,
     689,   616,   228,   346,  -244,  -293,   464,   -27,   582,  -148
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,   150,    10,    11,   151,    19,    20,
      21,    29,   152,    52,   105,   153,    53,    54,    55,    56,
      57,    58,    59,    60,   116,    61,    62,    63,    64,    65,
      66,    67,    68,    69,   121,   122,    70,    71,    72,   131
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    51,    77,   336,     7,   250,   200,    17,   208,    18,
      81,   117,   259,   300,   202,    16,    13,    14,   180,   308,
      87,   203,   335,   118,    18,   -62,   -62,    49,   102,   207,
     318,    50,   -58,   258,   160,   240,   351,    25,   -14,   -15,
     -62,     3,   -86,   106,    82,   194,   201,   -58,   205,   194,
     110,   194,   182,   -14,   112,   350,   113,    18,   231,   -50,
     216,    81,    81,    81,    81,    81,    81,    91,   200,   180,
     285,    87,   137,   114,   115,   -69,   202,   -69,   -69,   -47,
     182,    12,   -64,   203,    94,   -86,   -14,   244,   -69,   -69,
     156,     8,   168,   241,   218,   -64,   -64,   125,     9,    93,
     -69,   243,   -50,   182,   208,   136,   -50,   -64,   201,    91,
     205,   248,   -62,   -62,   307,   242,   311,   216,   194,   148,
      22,   -49,   227,   208,   -62,   135,   -75,   248,   -75,   -75,
     292,   325,    51,   248,   232,   248,   -75,   246,   -47,   -75,
     -75,   247,   182,   -58,    92,   208,   180,   -82,    23,   -82,
     180,   218,    87,   246,   -75,   -58,   232,   247,    49,   246,
     299,   246,    50,   247,    89,   247,   -60,   -60,    90,   -81,
     251,   -81,   -58,   275,    -4,   157,    24,    -4,   -60,   180,
     255,   -64,   216,   277,   182,   -58,   180,   -58,    87,   107,
     244,   162,   313,   314,   -64,   -64,    97,   166,   249,   167,
      26,   284,   208,   216,   289,     9,   208,   -64,     9,   -64,
     257,   191,   192,   182,   268,   193,   272,   317,   200,    98,
     182,   -49,    18,   194,   297,   194,   202,    27,   216,   180,
     180,   180,   180,   203,   216,   286,   312,   218,    73,   180,
     329,   207,   316,    -9,    -9,   216,   216,   216,   216,   216,
     -11,   -11,   -11,   240,   378,   106,    74,   240,   201,   379,
     205,   194,   218,   301,    51,   332,   240,    -2,   218,   -64,
       4,   260,    97,   182,    -3,   187,   240,    -3,   240,   218,
     319,    75,   -64,   -64,   231,   200,    -5,   191,   192,    -5,
      49,   193,   182,   202,    50,    98,    -6,   -64,   354,    -6,
     203,    -8,    99,   187,    -8,   244,    99,   366,    99,   244,
     181,   241,   194,    -7,   194,   241,    -7,   223,   244,   243,
     194,   -11,   -11,   243,   241,   201,   187,   205,   244,   -17,
     244,   -17,   243,   242,   241,    76,   241,   242,   181,   -18,
     -13,   -18,   243,   -13,   243,    78,   242,   -60,   -60,    79,
      51,    51,   217,   -63,   124,    94,   242,    80,   242,   182,
     -60,   181,   -60,   294,    14,   187,   -63,   -63,    83,   -69,
     -12,   -69,   -69,   -12,   223,    99,    49,    49,   -63,   -86,
      50,    50,   -69,   -69,   -60,   -60,   -61,   -61,   364,   327,
      14,   129,   367,   188,   130,   -69,   -50,   -69,   -61,   -60,
     181,   376,   -69,   187,   -69,   -69,   -16,   187,   -16,   217,
      84,   380,   -86,   381,    85,   -69,   -69,   -61,   -61,    88,
     100,   188,    97,   -44,   100,   305,   100,    96,   306,   -50,
     -69,   309,   -61,   -50,   310,   224,   187,   191,   192,   223,
     -45,   193,   181,   187,   188,    98,   146,   233,   -80,   234,
     -46,    31,   -57,    92,    32,   235,   -48,   236,   237,   238,
     223,    37,    38,   109,   -57,    39,    40,    41,    42,    43,
      44,   270,    89,    45,   119,   239,   -90,    47,   181,   149,
      99,   -88,    99,   188,   276,   223,   187,   187,   187,   187,
     133,   223,   224,   100,   228,   282,   187,   -62,   -62,   -57,
     258,   134,   223,   223,   223,   223,   223,   -59,   -59,   138,
     -62,   189,   -62,   139,   -57,   187,   -59,   -59,    99,   -50,
     217,   188,   -59,   140,   141,   188,   217,   -66,   -59,   -66,
     261,   181,   -61,   -61,   -10,   -10,    15,   217,   101,   189,
     -66,   -66,   108,   142,   111,   -61,   -75,   -61,   -75,   -75,
     181,   -54,   -55,   225,   188,   -66,   -75,   224,   -56,   -75,
     -75,   188,   189,   143,   323,   144,   103,   324,   104,    99,
      31,    99,   -75,    32,   -75,   -87,   227,    99,   224,   353,
      37,    38,   187,   145,    39,    40,    41,    42,    43,    44,
     -89,   147,    45,   -84,   206,   154,    47,   -85,   100,   -51,
     100,   189,   -52,   224,   188,   188,   188,   188,   -53,   224,
     225,   159,   170,   163,   188,   164,   252,   181,   253,    37,
     224,   224,   224,   224,   224,   254,   257,    43,    44,   190,
     263,    45,   262,   188,   -75,    47,   100,   -76,   -69,   189,
     -69,   -69,   -77,   189,   264,   -63,   265,   260,   -86,   -44,
     266,   -69,   -69,   267,   -57,   275,   195,   190,   -63,   -63,
     195,   -45,   195,   186,   -46,   -50,   -69,   -57,   -48,   -57,
     271,   226,   189,   -63,   269,   225,   -10,   -10,   295,   189,
     190,   -10,   -10,   328,   -63,   274,   277,   100,   279,   100,
     -66,   186,   -66,    95,   -11,   100,   225,   -63,   -63,   280,
     188,   281,   283,   -66,   -66,   222,   287,   288,   290,   341,
     -63,   128,   -63,   291,   186,   -66,   296,   293,   298,   190,
     326,   225,   189,   189,   189,   189,   337,   225,   226,   195,
     338,   339,   189,   340,   342,   343,   185,   -91,   225,   225,
     225,   225,   225,   -83,   344,   -76,   345,   -76,   -76,   346,
     347,   189,   348,   186,   333,   -76,   349,   190,   -76,   -76,
     352,   190,   222,   355,   185,   356,   -77,   357,   -77,   -77,
     358,   -76,   -71,   -76,   -71,   -71,   -77,   -84,   221,   -77,
     -77,   -85,   -90,   127,   -78,   -71,   -71,   185,   -59,   -59,
     190,   186,   -77,   226,   -77,   186,   -51,   190,   -71,   -52,
     -71,   -59,   368,   -59,   -53,   359,   362,   360,   363,   -76,
     369,   -76,   -76,   361,   226,   370,   371,   372,   189,   -76,
     373,   374,   -76,   -76,   186,   377,   185,   222,   -92,    28,
       0,   186,   331,     0,   195,   221,   195,   -76,     0,   226,
     190,   190,   190,   190,     0,   226,     0,     0,   222,     0,
     190,     0,   -77,     0,   -77,   -77,   226,   226,   226,   226,
     226,     0,   -77,     0,   185,   -77,   -77,     0,   185,   190,
       0,     0,   195,   222,   186,   186,   186,   304,   184,   222,
     -77,     0,     0,     0,   186,   -72,     0,   -72,   -72,     0,
     222,   222,   222,   222,   322,   -88,     0,   185,   -72,   -72,
     221,     0,     0,   186,   185,   -71,   184,   -71,   -71,     0,
       0,   -72,     0,   -72,   -66,   -90,   -66,   278,   -71,   -71,
     220,   221,     0,   195,   126,   195,     0,   -66,   -66,   184,
      86,   195,   183,   -71,     0,     0,   190,     0,     0,     0,
     -66,   -70,   -66,   -70,   -70,     0,   221,   185,   185,   303,
       0,   -89,   221,     0,   -70,   -70,     0,   185,   204,     0,
     183,     0,     0,   221,   221,   221,   321,   -70,   184,   -70,
     186,     0,   120,   123,   219,   209,   185,   220,     0,     0,
       0,   132,   210,   183,     0,     0,   211,     0,     0,     0,
     212,   213,     0,   -36,   214,   -36,     0,   -36,   215,   -79,
     -36,   -36,   -36,   -36,   -36,   -36,   184,   -36,   -36,     0,
     184,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,   -36,
     204,   -36,   183,   -36,     0,     0,   -36,     0,     0,   158,
       0,   219,     0,     0,   -69,     0,   -69,   -69,     0,   184,
       0,     0,   220,   185,   -86,     0,   184,   -69,   -69,     0,
       0,   330,     0,   104,     0,    31,     0,     0,    32,   -69,
     183,   -50,   256,   220,   183,    37,    38,     0,   172,    39,
      40,    41,    42,    43,    44,   173,     0,    45,     0,   206,
       0,    47,     0,   176,   177,     0,     0,   178,   220,   184,
     302,   179,     0,   183,   220,     0,   219,     0,   273,   184,
     183,     0,     0,     0,     0,   220,   220,   320,    30,     0,
       0,     0,    31,     0,     0,    32,     0,   219,   184,     0,
       0,     0,    37,    38,     0,     0,    39,    40,    41,    42,
      43,    44,     0,     0,    45,     0,    46,     0,    47,     0,
     120,     0,   219,   183,     0,     0,   120,     0,   219,     0,
       0,   315,     0,   183,     0,     0,     0,   120,     0,   219,
     219,   -68,     0,   -68,   -68,     0,     0,     0,     0,   -37,
     204,   -37,   183,   -37,   -68,   -68,   -37,   -37,   -37,   -37,
     -37,   -37,     0,   -37,   -37,   184,   -68,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -35,   -37,   -35,   -37,
     -35,     0,   -37,   -35,   -35,   -35,   -35,   -35,   -35,     0,
     -35,   -35,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,
       0,     0,   -35,     0,   -35,     0,   -35,     0,     0,   -35,
       0,     0,     0,     0,   -38,     0,   -38,   204,   -38,   183,
       0,   -38,   -38,   161,   -38,   -38,   -38,     0,   -38,   -38,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,
     -38,   -34,   -38,   -34,   -38,   -34,     0,   -38,   -34,   -34,
     -34,   -34,   -34,   -34,     0,   -34,   -34,     0,     0,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,   -34,   -42,   -34,
     -42,   -34,   -42,     0,   -34,   -42,   -42,   -42,   -42,   -42,
     -42,     0,   -42,   -42,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,   -42,   -25,   -42,   -25,   -42,   -25,
       0,   -42,   -25,   -25,   -25,   -25,   -25,   -25,     0,   -25,
     -25,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -26,   -25,   -26,   -25,   -26,     0,   -25,   -26,
     -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,   -24,
     -26,   -24,   -26,   -24,     0,   -26,   -24,   -24,   -24,   -24,
     -24,   -24,     0,   -24,   -24,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,   -24,   -23,   -24,   -23,   -24,
     -23,     0,   -24,   -23,   -23,   -23,   -23,   -23,   -23,     0,
     -23,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -43,   -23,   -43,   -23,   -43,     0,   -23,
     -43,   -43,   -43,   -43,   -43,   -43,     0,   -43,   -43,     0,
       0,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,   -43,
     -40,   -43,   -40,   -43,   -40,     0,   -43,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,     0,     0,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -40,   -41,   -40,   -41,
     -40,   -41,     0,   -40,   -41,   -41,   -41,   -41,   -41,   -41,
       0,   -41,   -41,     0,     0,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,   -41,    -8,   -41,    -8,   -41,    -8,     0,
     -41,    -8,    -8,    -8,    -8,    -8,    -8,     0,    -8,    -8,
       0,     0,    -8,    -8,    -8,    -8,    -8,    -8,     0,     0,
      -8,    -7,    -8,    -7,    -8,    -7,     0,    -8,    -7,    -7,
      -7,    -7,    -7,    -7,     0,    -7,    -7,     0,     0,    -7,
      -7,    -7,    -7,    -7,    -7,     0,     0,    -7,   -31,    -7,
     -31,    -7,   -31,     0,    -7,   -31,   -31,   -31,   -31,   -31,
     -31,     0,   -31,   -31,     0,     0,   -31,   -31,   -31,   -31,
     -31,   -31,     0,     0,   -31,   -30,   -31,   -30,   -31,   -30,
       0,   -31,   -30,   -30,   -30,   -30,   -30,   -30,     0,   -30,
     -30,     0,     0,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,   -30,   -38,   -30,   -38,   -30,   -38,     0,   -30,   -38,
     -38,   375,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,   -29,
     -38,   -29,   -38,   -29,     0,   -38,   -29,   -29,   -29,   -29,
     -29,   -29,     0,   -29,   -29,     0,     0,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,   -29,   -13,   -29,   -13,   -29,
     -13,     0,   -29,   -13,   -13,   -13,   -13,   -13,   -13,     0,
     -13,   -13,     0,     0,   -13,   -13,   -13,   -13,   -13,   -13,
       0,     0,   -13,   -27,   -13,   -27,   -13,   -27,     0,   -13,
     -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,   -27,     0,
       0,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,
     -39,   -27,   -39,   -27,   -39,     0,   -27,   -39,   -39,   -39,
     -39,   -39,   -39,     0,   -39,   -39,     0,     0,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,   -39,   -28,   -39,   -28,
     -39,   -28,     0,   -39,   -28,   -28,   -28,   -28,   -28,   -28,
       0,   -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,
     -28,     0,     0,   -28,   -12,   -28,   -12,   -28,   -12,     0,
     -28,   -12,   -12,   -12,   -12,   -12,   -12,     0,   -12,   -12,
       0,     0,   -12,   -12,   -12,   -12,   -12,   -12,     0,     0,
     -12,   -19,   -12,   -19,   -12,   -19,     0,   -12,   -19,   -19,
       0,   -19,   -19,   -19,     0,   -19,   -19,     0,     0,   -19,
     -19,   -19,   -19,   -19,   -19,     0,     0,   -19,    30,   -19,
     169,   -19,    31,     0,   -19,    32,    33,     0,    34,    35,
      36,     0,    37,    38,     0,     0,    39,    40,    41,    42,
      43,    44,     0,     0,    45,   -42,    46,   -42,    47,   -42,
       0,    48,   -42,   -42,     0,   -42,   -42,   -42,     0,   -42,
     -42,     0,     0,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,   -42,   -20,   -42,   -20,   -42,   -20,     0,   -42,   -20,
     -20,     0,   -20,   -20,   -20,     0,   -20,   -20,     0,     0,
     -20,   -20,   -20,   -20,   -20,   -20,     0,     0,   -20,   -21,
     -20,   -21,   -20,   -21,     0,   -20,   -21,   -21,     0,   -21,
     -21,   -21,     0,   -21,   -21,     0,     0,   -21,   -21,   -21,
     -21,   -21,   -21,     0,     0,   -21,   -22,   -21,   -22,   -21,
     -22,     0,   -21,   -22,   -22,     0,   -22,   -22,   -22,     0,
     -22,   -22,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,
       0,     0,   -22,   -25,   -22,   -25,   -22,   -25,     0,   -22,
     -25,   -25,     0,   -25,   -25,   -25,     0,   -25,   -25,     0,
       0,   -25,   -25,   -25,   -25,   -25,   -25,     0,     0,   -25,
     -26,   -25,   -26,   -25,   -26,     0,   -25,   -26,   -26,     0,
     -26,   -26,   -26,     0,   -26,   -26,     0,     0,   -26,   -26,
     -26,   -26,   -26,   -26,     0,     0,   -26,   -24,   -26,   -24,
     -26,   -24,     0,   -26,   -24,   -24,     0,   -24,   -24,   -24,
       0,   -24,   -24,     0,     0,   -24,   -24,   -24,   -24,   -24,
     -24,     0,     0,   -24,   -23,   -24,   -23,   -24,   -23,     0,
     -24,   -23,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,
       0,     0,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,
     -23,   -43,   -23,   -43,   -23,   -43,     0,   -23,   -43,   -43,
       0,   -43,   -43,   -43,     0,   -43,   -43,     0,     0,   -43,
     -43,   -43,   -43,   -43,   -43,     0,     0,   -43,   -40,   -43,
     -40,   -43,   -40,     0,   -43,   -40,   -40,     0,   -40,   -40,
     -40,     0,   -40,   -40,     0,     0,   -40,   -40,   -40,   -40,
     -40,   -40,     0,     0,   -40,   -41,   -40,   -41,   -40,   -41,
       0,   -40,   -41,   -41,     0,   -41,   -41,   -41,     0,   -41,
     -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -31,   -41,   -31,   -41,   -31,     0,   -41,   -31,
     -31,     0,   -31,   -31,   -31,     0,   -31,   -31,     0,     0,
     -31,   -31,   -31,   -31,   -31,   -31,     0,     0,   -31,   -30,
     -31,   -30,   -31,   -30,     0,   -31,   -30,   -30,     0,   -30,
     -30,   -30,     0,   -30,   -30,     0,     0,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,   -30,   -29,   -30,   -29,   -30,
     -29,     0,   -30,   -29,   -29,     0,   -29,   -29,   -29,     0,
     -29,   -29,     0,     0,   -29,   -29,   -29,   -29,   -29,   -29,
       0,     0,   -29,    30,   -29,   169,   -29,    31,     0,   -29,
      32,    33,     0,    34,    35,    36,     0,    37,    38,     0,
       0,    39,    40,    41,    42,    43,    44,     0,     0,    45,
     -27,    46,   -27,    47,   -27,     0,   165,   -27,   -27,     0,
     -27,   -27,   -27,     0,   -27,   -27,     0,     0,   -27,   -27,
     -27,   -27,   -27,   -27,     0,     0,   -27,   -39,   -27,   -39,
     -27,   -39,     0,   -27,   -39,   -39,     0,   -39,   -39,   -39,
       0,   -39,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,   -39,   -28,   -39,   -28,   -39,   -28,     0,
     -39,   -28,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,
       0,     0,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,
     -28,   -36,   -28,   -36,   -28,   -36,     0,   -28,   -36,   -36,
       0,   -36,   -36,   -36,     0,   -36,   -36,     0,     0,   -36,
     -36,   -36,   -36,   -36,   -36,     0,     0,   -36,   -37,   -36,
     -37,   -36,   -37,     0,   -36,   -37,   -37,     0,   -37,   -37,
     -37,     0,   -37,   -37,     0,     0,   -37,   -37,   -37,   -37,
     -37,   -37,     0,     0,   -37,   -35,   -37,   -35,   -37,   -35,
       0,   -37,   -35,   -35,     0,   -35,   -35,   -35,     0,   -35,
     -35,     0,     0,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,   -35,    30,   -35,   169,   -35,    31,     0,   -35,    32,
      33,     0,    34,    35,    36,     0,    37,    38,     0,     0,
      39,    40,    41,    42,    43,    44,     0,     0,    45,    -8,
      46,    -8,    47,    -8,     0,   334,    -8,    -8,     0,    -8,
      -8,    -8,     0,    -8,    -8,     0,     0,    -8,    -8,    -8,
      -8,    -8,    -8,     0,     0,    -8,    -7,    -8,    -7,    -8,
      -7,     0,    -8,    -7,    -7,     0,    -7,    -7,    -7,     0,
      -7,    -7,     0,     0,    -7,    -7,    -7,    -7,    -7,    -7,
       0,     0,    -7,   -34,    -7,   -34,    -7,   -34,     0,    -7,
     -34,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,
     -13,   -34,   -13,   -34,   -13,     0,   -34,   -13,   -13,     0,
     -13,   -13,   -13,     0,   -13,   -13,     0,     0,   -13,   -13,
     -13,   -13,   -13,   -13,     0,     0,   -13,    30,   -13,   169,
     -13,    31,     0,   -13,    32,    33,     0,    34,    35,    36,
       0,    37,    38,     0,     0,    39,    40,    41,    42,    43,
      44,     0,     0,    45,    30,    46,   169,    47,    31,     0,
     382,    32,    33,     0,    34,    35,    36,     0,    37,    38,
       0,     0,    39,    40,    41,    42,    43,    44,     0,     0,
      45,   -12,    46,   -12,    47,   -12,     0,   383,   -12,   -12,
       0,   -12,   -12,   -12,     0,   -12,   -12,     0,     0,   -12,
     -12,   -12,   -12,   -12,   -12,     0,     0,   -12,    30,   -12,
     169,   -12,    31,     0,   -12,    32,    33,     0,    34,    35,
      36,     0,    37,    38,     0,     0,    39,    40,    41,    42,
      43,    44,     0,     0,    45,   229,    46,     0,    47,    31,
     245,     0,    32,     0,     0,     0,     0,     0,     0,    37,
      38,     0,     0,    39,    40,    41,    42,    43,    44,     0,
     -32,    45,     0,   230,   -32,    47,     0,   -32,     0,     0,
       0,     0,     0,     0,   -32,   -32,     0,     0,   -32,   -32,
     -32,   -32,   -32,   -32,     0,   -33,   -32,     0,   -32,   -33,
     -32,     0,   -33,     0,     0,     0,     0,     0,     0,   -33,
     -33,     0,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
     -42,   -33,     0,   -33,   -42,   -33,     0,   -42,     0,     0,
       0,     0,     0,     0,   -42,   -42,     0,     0,   -42,   -42,
     -42,   -42,   -42,   -42,     0,   -43,   -42,     0,   -42,   -43,
     -42,     0,   -43,     0,     0,     0,     0,     0,     0,   -43,
     -43,     0,     0,   -43,   -43,   -43,   -43,   -43,   -43,     0,
     233,   -43,     0,   -43,    31,   -43,     0,    32,     0,     0,
       0,     0,     0,     0,    37,    38,     0,     0,    39,    40,
      41,    42,    43,    44,     0,   -41,    45,     0,   239,   -41,
      47,     0,   -41,     0,     0,     0,     0,     0,     0,   -41,
     -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,   -41,     0,   -41,   -78,   -41,   -78,   -78,     0,   -72,
       0,   -72,   -72,   -68,   -78,   -68,   -68,   -78,   -78,   -88,
       0,     0,   -72,   -72,     0,     0,   -68,   -68,     0,     0,
     -78,   -74,   -78,   -74,   -74,     0,     0,   -72,     0,   -68,
     -70,   -68,   -70,   -70,   -74,   -74,     0,     0,     0,   -65,
     -89,   -65,   278,   -70,   -70,     0,     0,   -74,   -67,   -74,
     -67,   -67,   -65,   -65,     0,     0,     0,   -91,   -70,   -91,
     -91,   -67,   -67,     0,     0,   -65,   -83,   -65,   -83,   -83,
     -91,   -91,     0,     0,   -67,     0,   -67,     0,     0,   -83,
     -83,     0,     0,   -91,     0,   -91,   -78,     0,   -78,   -78,
       0,     0,   -83,     0,   -83,   -73,   -78,   -73,   -73,   -78,
     -78,     0,   -92,     0,   -92,   -92,     0,     0,   -73,   -73,
       0,     0,     0,     0,   -78,   -92,   -92,     0,     0,     0,
       0,   -73,   -68,   -73,   -68,   -68,     0,     0,   -92,   -74,
     -92,   -74,   -74,     0,     0,   -68,   -68,     0,   -65,     0,
     -65,   261,   -74,   -74,     0,   -67,     0,   -67,   -67,     0,
     -68,   -65,   -65,     0,     0,     0,     0,   -74,   -67,   -67,
       0,   -91,     0,   -91,   -91,   -83,   -65,   -83,   -83,   -73,
       0,   -73,   -73,   -67,   -91,   -91,     0,     0,   -83,   -83,
       0,     0,   -73,   -73,     0,   -92,     0,   -92,   -92,   -91,
       0,     0,   171,   -83,     0,   196,     0,   -73,   -92,   -92,
       0,     0,   173,   174,     0,     0,   175,   197,   198,   199,
     176,   177,   -42,   -92,   178,   -42,     0,     0,   179,   155,
       0,     0,   -42,   -42,     0,     0,   -42,   -42,   -42,   -42,
     -42,   -42,   -43,     0,   -42,   -43,     0,     0,   -42,   -42,
       0,     0,   -43,   -43,     0,     0,   -43,   -43,   -43,   -43,
     -43,   -43,   -41,     0,   -43,   -41,     0,     0,   -43,   -43,
       0,     0,   -41,   -41,     0,     0,   -41,   -41,   -41,   -41,
     -41,   -41,   171,     0,   -41,   196,     0,     0,   -41,   -41,
       0,     0,   173,   174,     0,     0,   175,   197,   198,   199,
     176,   177,   171,     0,   178,   196,     0,     0,   179,   365,
       0,     0,   173,   174,     0,     0,   175,   197,   198,   199,
     176,   177,   171,     0,   178,   172,     0,     0,   179,     0,
       0,     0,   173,   174,     0,     0,   175,     0,     0,     0,
     176,   177,     0,   -75,   178,   -75,   -75,     0,   179,   -76,
       0,   -76,   -76,   -75,     0,     0,   -75,   -75,     0,   -76,
       0,     0,   -76,   -76,     0,     0,     0,   -77,   -75,   -77,
     -77,     0,     0,   -71,   -76,   -71,   -71,   -77,     0,     0,
     -77,   -77,     0,   -90,     0,     0,   -71,   -71,     0,     0,
       0,   -72,   -77,   -72,   -72,     0,     0,   -70,   -71,   -70,
     -70,   -88,     0,     0,   -72,   -72,   -74,   -89,   -74,   -74,
     -70,   -70,     0,     0,     0,   -78,   -72,   -78,   -78,   -74,
     -74,   -65,   -70,   -65,    95,   -78,     0,     0,   -78,   -78,
     -67,   -74,   -67,   -67,   -65,   -65,   -91,     0,   -91,   -91,
     -78,     0,     0,   -67,   -67,   -83,   -65,   -83,   -83,   -91,
     -91,   -73,     0,   -73,   -73,   -67,     0,     0,   -83,   -83,
     -92,   -91,   -92,   -92,   -73,   -73,     0,     0,   170,     0,
     -83,     0,     0,   -92,   -92,    37,   -73,     0,     0,    39,
       0,   209,     0,    43,    44,   -92,     0,    45,   210,     0,
       0,    47,   211,     0,   172,     0,   212,   213,     0,   209,
     214,   173,     0,     0,   215,   175,   210,     0,     0,   176,
     177,     0,     0,   178,   212,   213,     0,   179,   214,     0,
       0,     0,   215
};

static const yytype_int16 yycheck[] =
{
       2,    29,    35,   295,     2,   169,    75,     1,    17,     3,
      39,    85,     4,   257,    75,    14,    29,    30,    47,   263,
      47,    75,     1,    32,     3,    17,    18,    29,    75,    76,
     274,    29,    17,    18,   149,   134,   328,    30,    32,    32,
      32,     0,    14,    76,    39,    74,    75,    32,    75,    78,
      79,    80,    47,    32,    83,     1,     8,     3,   105,    31,
      89,    90,    91,    92,    93,    94,    95,    17,   137,    98,
     234,    98,   105,    25,    26,     4,   137,     6,     7,    29,
      75,    29,     4,   137,     6,    14,    32,   134,    17,    18,
     137,     1,     8,   134,    89,    17,    18,    92,     8,     4,
      29,   134,    31,    98,    17,   104,    35,    29,   137,    17,
     137,   139,    17,    18,   262,   134,   264,   146,   147,    32,
      32,    29,    29,    17,    29,    32,     4,   155,     6,     7,
     245,   279,   160,   161,    17,   163,    14,   139,    32,    17,
      18,   139,   137,    17,    18,    17,   175,    30,     8,    32,
     179,   146,   179,   155,    32,    29,    17,   155,   160,   161,
      32,   163,   160,   161,    31,   163,    17,    18,    35,    30,
     169,    32,    17,    18,     0,   139,    32,     3,    29,   208,
     175,     4,   211,     6,   179,    30,   215,    32,   215,     1,
     237,   155,   266,   267,    17,    18,     8,   161,     1,   163,
      33,     1,    17,   232,   237,     8,    17,    30,     8,    32,
      31,    23,    24,   208,    35,    27,   211,    32,   287,    31,
     215,    32,     3,   252,   253,   254,   287,    33,   257,   258,
     259,   260,   261,   287,   263,   234,   265,   232,    29,   268,
     287,   288,   271,    29,    30,   274,   275,   276,   277,   278,
      29,    30,    31,   352,   369,   288,    31,   356,   287,   374,
     287,   290,   257,   258,   292,     1,   365,     0,   263,     4,
       3,     6,     8,   268,     0,    47,   375,     3,   377,   274,
     275,    31,    17,    18,   331,   354,     0,    23,    24,     3,
     292,    27,   287,   354,   292,    31,     0,    32,   331,     3,
     354,     0,    74,    75,     3,   352,    78,   354,    80,   356,
      47,   352,   341,     0,   343,   356,     3,    89,   365,   352,
     349,    29,    30,   356,   365,   354,    98,   354,   375,    30,
     377,    32,   365,   352,   375,    31,   377,   356,    75,    30,
       0,    32,   375,     3,   377,    31,   365,    17,    18,    31,
     378,   379,    89,     4,    91,     6,   375,    31,   377,   354,
      30,    98,    32,    29,    30,   137,    17,    18,    31,     4,
       0,     6,     7,     3,   146,   147,   378,   379,    29,    14,
     378,   379,    17,    18,    17,    18,    17,    18,   352,    29,
      30,     5,   356,    47,     8,    30,    31,    32,    29,    32,
     137,   365,     4,   175,     6,     7,    30,   179,    32,   146,
      31,   375,    14,   377,    31,    17,    18,    17,    18,    29,
      74,    75,     8,    29,    78,     5,    80,    14,     8,    31,
      32,     5,    32,    35,     8,    89,   208,    23,    24,   211,
      29,    27,   179,   215,    98,    31,    30,     1,    32,     3,
      29,     5,    17,    18,     8,     9,    29,    11,    12,    13,
     232,    15,    16,     8,    29,    19,    20,    21,    22,    23,
      24,   208,    31,    27,    32,    29,    14,    31,   215,    33,
     252,    14,   254,   137,     4,   257,   258,   259,   260,   261,
      32,   263,   146,   147,     8,   232,   268,    17,    18,    17,
      18,    32,   274,   275,   276,   277,   278,    17,    18,    32,
      30,    47,    32,    32,    32,   287,    17,    18,   290,    32,
     257,   175,    32,    32,    32,   179,   263,     4,    29,     6,
       7,   268,    17,    18,    29,    30,    31,   274,    74,    75,
      17,    18,    78,    32,    80,    30,     4,    32,     6,     7,
     287,    32,    32,    89,   208,    32,    14,   211,    32,    17,
      18,   215,    98,    32,     5,    32,     1,     8,     3,   341,
       5,   343,    30,     8,    32,    14,    29,   349,   232,    32,
      15,    16,   354,    32,    19,    20,    21,    22,    23,    24,
      14,    31,    27,    29,    29,    29,    31,    29,   252,    29,
     254,   137,    29,   257,   258,   259,   260,   261,    29,   263,
     146,   147,     8,    32,   268,    32,    31,   354,    31,    15,
     274,   275,   276,   277,   278,    31,    31,    23,    24,    47,
      31,    27,    14,   287,    14,    31,   290,    14,     4,   175,
       6,     7,    14,   179,    14,     4,    31,     6,    14,    32,
      31,    17,    18,    31,    17,    18,    74,    75,    17,    18,
      78,    32,    80,    47,    32,    31,    32,    30,    32,    32,
      31,    89,   208,    32,    29,   211,    29,    30,    31,   215,
      98,    29,    30,    31,     4,    31,     6,   341,    14,   343,
       4,    75,     6,     7,    29,   349,   232,    17,    18,    29,
     354,    29,    29,    17,    18,    89,    31,    31,    31,    31,
      30,    95,    32,    29,    98,    29,   252,    29,   254,   137,
      29,   257,   258,   259,   260,   261,    32,   263,   146,   147,
      32,    32,   268,    32,    32,    31,    47,    32,   274,   275,
     276,   277,   278,    32,    32,     4,    32,     6,     7,    32,
      32,   287,    32,   137,   290,    14,    31,   175,    17,    18,
      32,   179,   146,    32,    75,    32,     4,    32,     6,     7,
      32,    30,     4,    32,     6,     7,    14,    32,    89,    17,
      18,    32,    14,    94,    14,    17,    18,    98,    17,    18,
     208,   175,    30,   211,    32,   179,    32,   215,    30,    32,
      32,    30,    33,    32,    32,   341,    32,   343,    32,     4,
      33,     6,     7,   349,   232,    32,    32,    32,   354,    14,
      33,    33,    17,    18,   208,    32,   137,   211,    32,    25,
      -1,   215,   288,    -1,   252,   146,   254,    32,    -1,   257,
     258,   259,   260,   261,    -1,   263,    -1,    -1,   232,    -1,
     268,    -1,     4,    -1,     6,     7,   274,   275,   276,   277,
     278,    -1,    14,    -1,   175,    17,    18,    -1,   179,   287,
      -1,    -1,   290,   257,   258,   259,   260,   261,    47,   263,
      32,    -1,    -1,    -1,   268,     4,    -1,     6,     7,    -1,
     274,   275,   276,   277,   278,    14,    -1,   208,    17,    18,
     211,    -1,    -1,   287,   215,     4,    75,     6,     7,    -1,
      -1,    30,    -1,    32,     4,    14,     6,     7,    17,    18,
      89,   232,    -1,   341,    93,   343,    -1,    17,    18,    98,
      47,   349,    47,    32,    -1,    -1,   354,    -1,    -1,    -1,
      30,     4,    32,     6,     7,    -1,   257,   258,   259,   260,
      -1,    14,   263,    -1,    17,    18,    -1,   268,    75,    -1,
      75,    -1,    -1,   274,   275,   276,   277,    30,   137,    32,
     354,    -1,    89,    90,    89,     8,   287,   146,    -1,    -1,
      -1,    98,    15,    98,    -1,    -1,    19,    -1,    -1,    -1,
      23,    24,    -1,     1,    27,     3,    -1,     5,    31,    32,
       8,     9,    10,    11,    12,    13,   175,    15,    16,    -1,
     179,    19,    20,    21,    22,    23,    24,    -1,    -1,    27,
     137,    29,   137,    31,    -1,    -1,    34,    -1,    -1,   146,
      -1,   146,    -1,    -1,     4,    -1,     6,     7,    -1,   208,
      -1,    -1,   211,   354,    14,    -1,   215,    17,    18,    -1,
      -1,     1,    -1,     3,    -1,     5,    -1,    -1,     8,    29,
     175,    31,   179,   232,   179,    15,    16,    -1,     8,    19,
      20,    21,    22,    23,    24,    15,    -1,    27,    -1,    29,
      -1,    31,    -1,    23,    24,    -1,    -1,    27,   257,   258,
     259,    31,    -1,   208,   263,    -1,   211,    -1,   215,   268,
     215,    -1,    -1,    -1,    -1,   274,   275,   276,     1,    -1,
      -1,    -1,     5,    -1,    -1,     8,    -1,   232,   287,    -1,
      -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,    -1,    29,    -1,    31,    -1,
     257,    -1,   257,   258,    -1,    -1,   263,    -1,   263,    -1,
      -1,   268,    -1,   268,    -1,    -1,    -1,   274,    -1,   274,
     275,     4,    -1,     6,     7,    -1,    -1,    -1,    -1,     1,
     287,     3,   287,     5,    17,    18,     8,     9,    10,    11,
      12,    13,    -1,    15,    16,   354,    29,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,     1,    29,     3,    31,
       5,    -1,    34,     8,     9,    10,    11,    12,    13,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    31,    -1,    -1,    34,
      -1,    -1,    -1,    -1,     1,    -1,     3,   354,     5,   354,
      -1,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
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
       1,    29,     3,    31,     5,    -1,    34,     8,     9,    10,
      11,    12,    13,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,    -1,    27,     1,    29,     3,
      31,     5,    -1,    34,     8,     9,    10,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,     1,    29,     3,    31,     5,    -1,
      34,     8,     9,    10,    11,    12,    13,    -1,    15,    16,
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
      27,     1,    29,     3,    31,     5,    -1,    34,     8,     9,
      -1,    11,    12,    13,    -1,    15,    16,    -1,    -1,    19,
      20,    21,    22,    23,    24,    -1,    -1,    27,     1,    29,
       3,    31,     5,    -1,    34,     8,     9,    -1,    11,    12,
      13,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,    -1,    -1,    27,     1,    29,    -1,    31,     5,
      33,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
       1,    27,    -1,    29,     5,    31,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,     1,    27,    -1,    29,     5,
      31,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
       1,    27,    -1,    29,     5,    31,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,     1,    27,    -1,    29,     5,
      31,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
       1,    27,    -1,    29,     5,    31,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    15,    16,    -1,    -1,    19,    20,
      21,    22,    23,    24,    -1,     1,    27,    -1,    29,     5,
      31,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,
      16,    -1,    -1,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,     4,    31,     6,     7,    -1,     4,
      -1,     6,     7,     4,    14,     6,     7,    17,    18,    14,
      -1,    -1,    17,    18,    -1,    -1,    17,    18,    -1,    -1,
      30,     4,    32,     6,     7,    -1,    -1,    32,    -1,    30,
       4,    32,     6,     7,    17,    18,    -1,    -1,    -1,     4,
      14,     6,     7,    17,    18,    -1,    -1,    30,     4,    32,
       6,     7,    17,    18,    -1,    -1,    -1,     4,    32,     6,
       7,    17,    18,    -1,    -1,    30,     4,    32,     6,     7,
      17,    18,    -1,    -1,    30,    -1,    32,    -1,    -1,    17,
      18,    -1,    -1,    30,    -1,    32,     4,    -1,     6,     7,
      -1,    -1,    30,    -1,    32,     4,    14,     6,     7,    17,
      18,    -1,     4,    -1,     6,     7,    -1,    -1,    17,    18,
      -1,    -1,    -1,    -1,    32,    17,    18,    -1,    -1,    -1,
      -1,    30,     4,    32,     6,     7,    -1,    -1,    30,     4,
      32,     6,     7,    -1,    -1,    17,    18,    -1,     4,    -1,
       6,     7,    17,    18,    -1,     4,    -1,     6,     7,    -1,
      32,    17,    18,    -1,    -1,    -1,    -1,    32,    17,    18,
      -1,     4,    -1,     6,     7,     4,    32,     6,     7,     4,
      -1,     6,     7,    32,    17,    18,    -1,    -1,    17,    18,
      -1,    -1,    17,    18,    -1,     4,    -1,     6,     7,    32,
      -1,    -1,     5,    32,    -1,     8,    -1,    32,    17,    18,
      -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,     5,    32,    27,     8,    -1,    -1,    31,    32,
      -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,     5,    -1,    27,     8,    -1,    -1,    31,    32,
      -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,     5,    -1,    27,     8,    -1,    -1,    31,    32,
      -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,     5,    -1,    27,     8,    -1,    -1,    31,    32,
      -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,     5,    -1,    27,     8,    -1,    -1,    31,    32,
      -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,    22,
      23,    24,     5,    -1,    27,     8,    -1,    -1,    31,    -1,
      -1,    -1,    15,    16,    -1,    -1,    19,    -1,    -1,    -1,
      23,    24,    -1,     4,    27,     6,     7,    -1,    31,     4,
      -1,     6,     7,    14,    -1,    -1,    17,    18,    -1,    14,
      -1,    -1,    17,    18,    -1,    -1,    -1,     4,    29,     6,
       7,    -1,    -1,     4,    29,     6,     7,    14,    -1,    -1,
      17,    18,    -1,    14,    -1,    -1,    17,    18,    -1,    -1,
      -1,     4,    29,     6,     7,    -1,    -1,     4,    29,     6,
       7,    14,    -1,    -1,    17,    18,     4,    14,     6,     7,
      17,    18,    -1,    -1,    -1,     4,    29,     6,     7,    17,
      18,     4,    29,     6,     7,    14,    -1,    -1,    17,    18,
       4,    29,     6,     7,    17,    18,     4,    -1,     6,     7,
      29,    -1,    -1,    17,    18,     4,    29,     6,     7,    17,
      18,     4,    -1,     6,     7,    29,    -1,    -1,    17,    18,
       4,    29,     6,     7,    17,    18,    -1,    -1,     8,    -1,
      29,    -1,    -1,    17,    18,    15,    29,    -1,    -1,    19,
      -1,     8,    -1,    23,    24,    29,    -1,    27,    15,    -1,
      -1,    31,    19,    -1,     8,    -1,    23,    24,    -1,     8,
      27,    15,    -1,    -1,    31,    19,    15,    -1,    -1,    23,
      24,    -1,    -1,    27,    23,    24,    -1,    31,    27,    -1,
      -1,    -1,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    38,     0,     3,    39,    40,    43,     1,     8,
      41,    42,    29,    29,    30,    31,    42,     1,     3,    44,
      45,    46,    32,     8,    32,    30,    33,    33,    46,    47,
       1,     5,     8,     9,    11,    12,    13,    15,    16,    19,
      20,    21,    22,    23,    24,    27,    29,    31,    34,    40,
      43,    48,    49,    52,    53,    54,    55,    56,    57,    58,
      59,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      72,    73,    74,    29,    31,    31,    31,    54,    31,    31,
      31,    57,    63,    31,    31,    31,    61,    73,    29,    31,
      35,    17,    18,     4,     6,     7,    14,     8,    31,    68,
      69,    72,    55,     1,     3,    50,    54,     1,    72,     8,
      57,    72,    57,     8,    25,    26,    60,    60,    32,    32,
      61,    70,    71,    61,    62,    63,    65,    66,    67,     5,
       8,    75,    61,    32,    32,    32,    42,    54,    32,    32,
      32,    32,    32,    32,    32,    32,    30,    31,    32,    33,
      40,    43,    48,    51,    29,    32,    55,    51,    61,    72,
      47,    10,    51,    32,    32,    34,    51,    51,     8,     3,
       8,     5,     8,    15,    16,    19,    23,    24,    27,    31,
      57,    62,    63,    64,    65,    66,    67,    68,    69,    72,
      74,    23,    24,    27,    57,    74,     8,    20,    21,    22,
      56,    57,    58,    59,    61,    73,    29,    55,    17,     8,
      15,    19,    23,    24,    27,    31,    57,    62,    63,    64,
      65,    66,    67,    68,    69,    72,    74,    29,     8,     1,
      29,    55,    17,     1,     3,     9,    11,    12,    13,    29,
      49,    52,    53,    54,    55,    33,    40,    43,    48,     1,
      41,    42,    31,    31,    31,    63,    61,    31,    18,     4,
       6,     7,    14,    31,    14,    31,    31,    31,    35,    29,
      62,    31,    63,    61,    31,    18,     4,     6,     7,    14,
      29,    29,    62,    29,     1,    41,    42,    31,    31,    54,
      31,    29,    47,    29,    29,    31,    72,    57,    72,    32,
      70,    63,    65,    66,    67,     5,     8,    75,    70,     5,
       8,    75,    57,    60,    60,    61,    57,    32,    70,    63,
      65,    66,    67,     5,     8,    75,    29,    29,    31,    55,
       1,    50,     1,    72,    34,     1,    44,    32,    32,    32,
      32,    31,    32,    31,    32,    32,    32,    32,    32,    31,
       1,    44,    32,    32,    54,    32,    32,    32,    32,    72,
      72,    72,    32,    32,    51,    32,    55,    51,    33,    33,
      32,    32,    32,    33,    33,    10,    51,    32,    47,    47,
      51,    51,    34,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    43,    43,    44,    44,    45,    45,    46,    47,
      47,    47,    47,    48,    48,    48,    48,    49,    49,    49,
      49,    49,    50,    50,    51,    51,    51,    51,    52,    52,
      53,    54,    54,    54,    55,    55,    55,    55,    55,    56,
      57,    58,    59,    59,    60,    60,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    67,    68,    68,    68,    69,    70,
      70,    71,    71,    72,    73,    73,    74,    74,    74,    74,
      74,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     3,     3,     3,
       1,     1,     8,     6,     0,     1,     3,     1,     2,     0,
       2,     2,     2,     1,     1,     1,     1,     6,     7,     5,
       4,     4,     1,     3,     3,     1,     1,     1,     5,     7,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       1,     4,     4,     4,     1,     1,     1,     3,     1,     3,
       1,     2,     1,     3,     1,     3,     1,     3,     1,     1,
       3,     1,     1,     4,     1,     1,     1,     1,     4,     0,
       1,     3,     1,     3,     4,     4,     1,     3,     1,     3,
       1,     1,     4
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
#line 2175 "syntactic.tab.c"
    break;

  case 3:
#line 61 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2181 "syntactic.tab.c"
    break;

  case 4:
#line 62 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2187 "syntactic.tab.c"
    break;

  case 5:
#line 65 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2193 "syntactic.tab.c"
    break;

  case 6:
#line 66 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2199 "syntactic.tab.c"
    break;

  case 7:
#line 69 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(VARDECL, (yyvsp[-1].tnode));
                                                                  setVarsType((yyvsp[-1].tnode), (yyvsp[-2].ival));
                                                                  if (tables_list == global_scope) insertLeafs(global_scope, (yyvsp[-1].tnode));}
#line 2207 "syntactic.tab.c"
    break;

  case 8:
#line 72 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2213 "syntactic.tab.c"
    break;

  case 9:
#line 75 "syntactic.y"
                                                                   {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2219 "syntactic.tab.c"
    break;

  case 10:
#line 76 "syntactic.y"
                                                                   {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2225 "syntactic.tab.c"
    break;

  case 11:
#line 79 "syntactic.y"
                                                                   {(yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval)));
                                                                    (yyval.tnode)->leaf->ref->level_found = curr_level;
                                                                    (yyval.tnode)->leaf->is_decl = 1;
                                                                    printf("id %s\n", (yyval.tnode)->leaf->ref->identifier);
                                                                    }
#line 2235 "syntactic.tab.c"
    break;

  case 12:
#line 86 "syntactic.y"
                                                                    {
                                                                        insertInScope((yyvsp[-6].tnode)->leaf->ref, global_scope);

                                                                        (yyval.tnode) = TernaryNode(FUNCDECL, (yyvsp[-6].tnode), (yyvsp[-4].tnode), (yyvsp[-1].tnode));
                                                                        table *func_table = createNewTable((yyvsp[-6].tnode)->leaf->ref->identifier, 0);
                                                                        pushScope(func_table);

                                                                        insertLeafs(func_table, (yyvsp[-4].tnode));

                                                                        insertLeafs(func_table, (yyvsp[-1].tnode));

                                                                        (yyval.tnode)->internal->ref = (yyvsp[-6].tnode)->leaf->ref;
                                                                        (yyval.tnode)->internal->ref->sym_kind = FUNCTION;
                                                                        (yyval.tnode)->internal->ref->return_type = (yyvsp[-7].ival);
                                                                        (yyval.tnode)->internal->ref->n_args = countArgs((yyvsp[-4].tnode), 0);
                                                                        (yyval.tnode)->internal->ref->args_type = malloc(sizeof(int)*(yyval.tnode)->internal->ref->n_args);
                                                                        setArgsInfo((yyval.tnode)->internal->ref, (yyvsp[-4].tnode), 0);
                                                                    }
#line 2258 "syntactic.tab.c"
    break;

  case 13:
#line 104 "syntactic.y"
                                                                    {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2264 "syntactic.tab.c"
    break;

  case 14:
#line 109 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2270 "syntactic.tab.c"
    break;

  case 15:
#line 110 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2276 "syntactic.tab.c"
    break;

  case 16:
#line 113 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2282 "syntactic.tab.c"
    break;

  case 17:
#line 114 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2288 "syntactic.tab.c"
    break;

  case 18:
#line 117 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval)));
                                                                  (yyval.tnode)->leaf->ref->level_found = curr_level+1;
                                                                  (yyval.tnode)->leaf->is_decl = 1;
                                                                  (yyval.tnode)->leaf->ref->sym_kind = VARIABLE;
                                                                  (yyval.tnode)->leaf->ref->var_type = (yyvsp[-1].ival);
                                                                }
#line 2300 "syntactic.tab.c"
    break;

  case 19:
#line 126 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2306 "syntactic.tab.c"
    break;

  case 20:
#line 127 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2312 "syntactic.tab.c"
    break;

  case 21:
#line 128 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2318 "syntactic.tab.c"
    break;

  case 22:
#line 129 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2324 "syntactic.tab.c"
    break;

  case 23:
#line 132 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2330 "syntactic.tab.c"
    break;

  case 24:
#line 133 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2336 "syntactic.tab.c"
    break;

  case 25:
#line 134 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2342 "syntactic.tab.c"
    break;

  case 26:
#line 135 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2348 "syntactic.tab.c"
    break;

  case 27:
#line 138 "syntactic.y"
                                                                {(yyval.tnode) = TernaryNode(FOR1, (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2354 "syntactic.tab.c"
    break;

  case 28:
#line 139 "syntactic.y"
                                                                {(yyval.tnode) = QuaternaryNode(FOR2, (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2360 "syntactic.tab.c"
    break;

  case 29:
#line 140 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(FORALL, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2366 "syntactic.tab.c"
    break;

  case 30:
#line 141 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2372 "syntactic.tab.c"
    break;

  case 31:
#line 142 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2378 "syntactic.tab.c"
    break;

  case 32:
#line 145 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2384 "syntactic.tab.c"
    break;

  case 33:
#line 146 "syntactic.y"
                                                                {
                                                                  (yyval.tnode) = (yyvsp[-1].tnode);
                                                                  (yyvsp[-1].tnode)->leaf->ref->sym_kind = VARIABLE;
                                                                  (yyvsp[-1].tnode)->leaf->ref->var_type = (yyvsp[-2].ival);
                                                                }
#line 2394 "syntactic.tab.c"
    break;

  case 34:
#line 153 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2400 "syntactic.tab.c"
    break;

  case 35:
#line 154 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2406 "syntactic.tab.c"
    break;

  case 36:
#line 155 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2412 "syntactic.tab.c"
    break;

  case 37:
#line 156 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2418 "syntactic.tab.c"
    break;

  case 38:
#line 160 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(IF, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2424 "syntactic.tab.c"
    break;

  case 39:
#line 161 "syntactic.y"
                                                                {(yyval.tnode) = TernaryNode(IF_ELSE, (yyvsp[-4].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2430 "syntactic.tab.c"
    break;

  case 40:
#line 164 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(RETURN, (yyvsp[0].tnode));}
#line 2436 "syntactic.tab.c"
    break;

  case 41:
#line 166 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2442 "syntactic.tab.c"
    break;

  case 42:
#line 167 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2448 "syntactic.tab.c"
    break;

  case 43:
#line 168 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2454 "syntactic.tab.c"
    break;

  case 44:
#line 171 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2460 "syntactic.tab.c"
    break;

  case 45:
#line 172 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2466 "syntactic.tab.c"
    break;

  case 46:
#line 173 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2472 "syntactic.tab.c"
    break;

  case 47:
#line 174 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2478 "syntactic.tab.c"
    break;

  case 48:
#line 175 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2484 "syntactic.tab.c"
    break;

  case 49:
#line 178 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ASSIGN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2490 "syntactic.tab.c"
    break;

  case 50:
#line 181 "syntactic.y"
                                                                 {
                                                                  sym * ref = findRef((yyvsp[0].sval));
                                                                  if (ref == NULL){
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval)));
                                                                  (yyval.tnode)->leaf->ref->level_found = curr_level;
                                                                  (yyval.tnode)->leaf->ref->sym_kind = VARIABLE;}
                                                                  else (yyval.tnode) = idLeaf(ref);
                                                                }
#line 2503 "syntactic.tab.c"
    break;

  case 51:
#line 191 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(READ, (yyvsp[-1].tnode));}
#line 2509 "syntactic.tab.c"
    break;

  case 52:
#line 194 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITE, (yyvsp[-1].tnode));}
#line 2515 "syntactic.tab.c"
    break;

  case 53:
#line 195 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITELN, (yyvsp[-1].tnode));}
#line 2521 "syntactic.tab.c"
    break;

  case 54:
#line 198 "syntactic.y"
                                                                {
                                                                  sym * ref = findRef((yyvsp[0].sval));
                                                                  if (ref == NULL){
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval)));
                                                                  (yyval.tnode)->leaf->ref->level_found = curr_level;
                                                                  (yyval.tnode)->leaf->ref->sym_kind = VARIABLE;}
                                                                  else (yyval.tnode) = idLeaf(ref);
                                                                }
#line 2534 "syntactic.tab.c"
    break;

  case 55:
#line 206 "syntactic.y"
                                                                {(yyval.tnode) = charLeaf((yyvsp[0].cval));}
#line 2540 "syntactic.tab.c"
    break;

  case 56:
#line 207 "syntactic.y"
                                                                {(yyval.tnode) = stringLeaf((yyvsp[0].sval));}
#line 2546 "syntactic.tab.c"
    break;

  case 57:
#line 210 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(DISJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2552 "syntactic.tab.c"
    break;

  case 58:
#line 211 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2558 "syntactic.tab.c"
    break;

  case 59:
#line 214 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(CONJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2564 "syntactic.tab.c"
    break;

  case 60:
#line 215 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2570 "syntactic.tab.c"
    break;

  case 61:
#line 218 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(NEG, (yyvsp[0].tnode));}
#line 2576 "syntactic.tab.c"
    break;

  case 62:
#line 219 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2582 "syntactic.tab.c"
    break;

  case 63:
#line 222 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(RELOP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2588 "syntactic.tab.c"
    break;

  case 64:
#line 223 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2594 "syntactic.tab.c"
    break;

  case 65:
#line 226 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP1, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2600 "syntactic.tab.c"
    break;

  case 66:
#line 227 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2606 "syntactic.tab.c"
    break;

  case 67:
#line 230 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP2, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2612 "syntactic.tab.c"
    break;

  case 68:
#line 231 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2618 "syntactic.tab.c"
    break;

  case 69:
#line 234 "syntactic.y"
                                                                {
                                                                  sym * ref = findRef((yyvsp[0].sval));
                                                                  if (ref == NULL){
                                                                    (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval)));
                                                                    (yyval.tnode)->leaf->ref->level_found = curr_level;
                                                                    (yyval.tnode)->leaf->ref->sym_kind = VARIABLE;}
                                                                  else (yyval.tnode) = idLeaf(ref);
                                                                }
#line 2631 "syntactic.tab.c"
    break;

  case 70:
#line 242 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2637 "syntactic.tab.c"
    break;

  case 71:
#line 243 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2643 "syntactic.tab.c"
    break;

  case 72:
#line 244 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2649 "syntactic.tab.c"
    break;

  case 73:
#line 245 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(IS_SET, (yyvsp[-1].tnode));}
#line 2655 "syntactic.tab.c"
    break;

  case 74:
#line 246 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2661 "syntactic.tab.c"
    break;

  case 75:
#line 249 "syntactic.y"
                                                                {(yyval.tnode) = intLeaf((yyvsp[0].ival));}
#line 2667 "syntactic.tab.c"
    break;

  case 76:
#line 250 "syntactic.y"
                                                                {(yyval.tnode) = floatLeaf((yyvsp[0].fval));}
#line 2673 "syntactic.tab.c"
    break;

  case 77:
#line 251 "syntactic.y"
                                                                {(yyval.tnode) = setLeaf();}
#line 2679 "syntactic.tab.c"
    break;

  case 78:
#line 254 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(CALL, (yyvsp[-3].tnode), (yyvsp[-1].tnode));}
#line 2685 "syntactic.tab.c"
    break;

  case 79:
#line 259 "syntactic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2691 "syntactic.tab.c"
    break;

  case 80:
#line 260 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2697 "syntactic.tab.c"
    break;

  case 81:
#line 263 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2703 "syntactic.tab.c"
    break;

  case 82:
#line 264 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2709 "syntactic.tab.c"
    break;

  case 83:
#line 267 "syntactic.y"
                                                                {(yyval.tnode) = BinaryNode(IN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2715 "syntactic.tab.c"
    break;

  case 84:
#line 270 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(SETOP, (yyvsp[-1].tnode));  (yyval.tnode)->internal->op_specifier = (yyvsp[-3].ival);}
#line 2721 "syntactic.tab.c"
    break;

  case 85:
#line 271 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(EXISTS, (yyvsp[-1].tnode));}
#line 2727 "syntactic.tab.c"
    break;

  case 86:
#line 275 "syntactic.y"
                                                                {
                                                                  sym * ref = findRef((yyvsp[0].sval));
                                                                  if (ref == NULL){
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval)));
                                                                  (yyval.tnode)->leaf->ref->level_found = curr_level;
                                                                  (yyval.tnode)->leaf->ref->sym_kind = VARIABLE;}
                                                                  else (yyval.tnode) = idLeaf(ref);
                                                                }
#line 2740 "syntactic.tab.c"
    break;

  case 87:
#line 283 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2746 "syntactic.tab.c"
    break;

  case 88:
#line 284 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2752 "syntactic.tab.c"
    break;

  case 89:
#line 285 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2758 "syntactic.tab.c"
    break;

  case 90:
#line 286 "syntactic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2764 "syntactic.tab.c"
    break;

  case 91:
#line 290 "syntactic.y"
                                                                {
                                                                  sym * ref = findRef((yyvsp[0].sval));
                                                                  if (ref == NULL){
                                                                  (yyval.tnode) = idLeaf(createNewEntry((yyvsp[0].sval)));
                                                                  (yyval.tnode)->leaf->ref->level_found = curr_level;
                                                                  (yyval.tnode)->leaf->ref->sym_kind = VARIABLE;}
                                                                  else (yyval.tnode) = idLeaf(ref);
                                                                }
#line 2777 "syntactic.tab.c"
    break;

  case 92:
#line 298 "syntactic.y"
                                                                {(yyval.tnode) = UnaryNode(SETOP, (yyvsp[-1].tnode));  (yyval.tnode)->internal->op_specifier = (yyvsp[-3].ival);}
#line 2783 "syntactic.tab.c"
    break;


#line 2787 "syntactic.tab.c"

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
#line 303 "syntactic.y"

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
