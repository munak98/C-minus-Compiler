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
#include "../include/tree.h"
#include <stdio.h>
#include <stdlib.h>



void yyerror(const char *s);
extern int yylex();
extern int yylex_destroy();
extern int yyparse();
extern FILE *yyin;
extern node *root;
extern int line;
extern int column;
extern int curr_scope;
int varType;

#line 90 "semantic.tab.c"

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
#line 23 "semantic.y"

  int ival;
  float fval;
  char cval;
  char* sval;
  struct NODE *tnode;

#line 179 "semantic.tab.c"

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
#define YYLAST   3272

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  379

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
       0,    58,    58,    61,    62,    65,    66,    69,    70,    73,
      74,    77,    80,    90,    95,    96,    99,   100,   103,   110,
     111,   112,   113,   116,   117,   118,   119,   122,   123,   124,
     125,   126,   129,   130,   131,   132,   136,   137,   140,   142,
     143,   144,   147,   148,   149,   150,   151,   154,   157,   165,
     168,   169,   172,   177,   178,   181,   182,   185,   186,   189,
     190,   193,   194,   197,   198,   201,   202,   205,   210,   211,
     212,   213,   214,   217,   218,   219,   222,   227,   228,   231,
     232,   235,   238,   239,   243,   248,   249,   250,   251,   255,
     260
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
  "arg", "funcBody", "stmt", "iterStmt", "body", "condStmt", "returnStmt",
  "exprStmt", "expression", "assign", "var", "inExpr", "outExpr", "output",
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

#define YYPACT_NINF (-285)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     184,    12,   246,  -285,    85,   255,   273,   283,     0,   496,
      87,   709,   322,   323,    39,     6,   402,    40,   125,    94,
     312,   320,   107,   326,   127,   191,   335,  1752,   372,  1779,
     181,   173,   446,   210,   223,   904,   231,   264,   272,  3188,
     333,   353,   361,   118,  3067,  3073,  1806,  3045,   359,  1833,
    1860,  1887,  1914,  1941,  1968,  1995,   183,   248,    -5,   379,
     383,   149,   227,   356,   147,   470,   610,  3130,  3091,  3097,
    3136,   391,   298,  2022,   399,  3025,  1030,  2049,    88,   457,
     399,   436,   369,   457,     7,     7,    37,   440,  2076,  3182,
    3188,  3188,  3188,  3228,  3228,  3228,    65,    11,  3045,   464,
     469,   477,   491,   395,  2643,   497,   504,   506,   517,   518,
     520,   523,   528,   530,   535,   536,  3115,   505,    33,   539,
     415,   180,   419,   444,   820,  3145,  3151,   543,  3160,  3166,
      66,   546,  2589,  2103,  2925,  2130,  2616,  3175,   551,   557,
     566,   568,  3121,  3208,   399,   567,  1752,   481,  1131,  1158,
    1185,  2616,   569,  2157,   139,   572,  2184,  2616,  2211,  2616,
    3181,  1212,  2238,  2265,   484,    89,   877,   580,   274,   584,
     588,  3210,     4,   363,   811,  3045,   591,   185,   235,   164,
     411,   639,   717,   846,   988,   795,   586,   611,   612,   615,
     600,   619,    70,   604,   609,   613,   617,   170,   620,   623,
     113,   626,  2668,   638,  3210,   606,   628,  3208,   514,   547,
     552,  3045,   637,   630,   658,    74,  2825,  1007,  1026,   647,
     758,  1058,   667,  2693,   654,  2945,   660,  3208,   662,   106,
     656,   663,  2718,   666,  1239,  1266,  1293,  1320,  1347,   664,
    1752,  2292,  2319,  2346,   670,   487,   802,   399,   457,   399,
     281,   135,  3182,  3210,  3230,  3230,  3230,   360,  3182,   461,
     457,     7,     7,  3210,  2743,   299,   457,   686,   157,  3182,
    3208,  3241,  3241,  3241,   490,  2965,  2985,   725,  1374,   671,
     512,   871,  3025,  2768,  1401,   119,  1428,  2373,  2400,  2427,
      16,   675,   687,   688,  1075,   694,   316,   678,  2860,  2864,
     696,  2868,  2884,   701,   705,   716,   727,   728,   731,   734,
     175,   741,   930,   745,   764,  2889,  1092,  2794,   748,  2798,
    2802,  1455,  1482,    34,   752,   422,  2643,   753,   755,  2454,
     757,   759,   760,  2905,   766,  1113,   399,   790,   399,   774,
     779,   784,  2829,   971,   399,   787,   788,  2589,  1509,  3005,
    1536,  2589,   565,   789,   791,   814,   816,   818,   832,  1563,
    2589,   835,  1590,  2481,  1752,  2911,   836,  2833,  1617,  1752,
    2589,  1644,  2589,  2508,  2535,  1671,  1698,  2562,  1725
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -285,  -285,  -285,  -285,    -2,  -162,    14,     2,  -284,  -285,
     845,  -122,   -28,   -51,    49,   -19,    31,   -33,   765,   -59,
     -34,   -55,   -52,   -71,     5,    97,   136,   815,   746,   711,
     603,   186,   336,    13,  -285,   459,   -13,   498,  -206
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,   147,    10,    11,   148,    19,    20,
      21,    29,   149,    52,   150,    53,    54,    55,    56,    57,
      58,    59,    60,   114,    61,    62,    63,    64,    65,    66,
      67,    68,    69,   119,   120,    70,    71,    72,   129
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       6,    51,    77,   245,     7,    81,   331,    17,   -73,    18,
     -73,   -73,     3,   176,   115,   111,   196,   330,   -73,    18,
     198,   -73,   -73,   199,   156,   -84,    89,    49,    16,    12,
      90,    50,   112,   113,    87,   345,   -73,    18,   -14,   346,
     190,   197,   -48,   104,   190,   108,   190,   164,   -14,   110,
     227,   302,    86,   306,   204,   212,    81,    81,    81,    81,
      81,    81,   201,   -80,   176,   -80,   -14,   280,   320,   116,
     127,   134,    22,   128,   -67,   196,   -67,   -67,   271,   198,
     200,   235,   199,   204,   -84,    87,     8,   -67,   -67,   105,
     244,   -60,   -60,     9,   118,   121,    97,     9,   145,   238,
     197,   -48,   -67,   130,   -60,   -48,   -60,   279,   243,   212,
     190,   187,   188,   236,     9,   189,    13,    14,   287,    98,
     327,   201,   -73,   243,   -73,   -73,    24,    97,    51,   243,
     204,   243,   -73,    23,   241,   -73,   -73,   176,   242,   200,
      26,   176,   187,   188,   177,   -45,   189,   -73,   154,   241,
      98,    93,   204,   242,    49,   241,   227,   241,    50,   242,
      27,   242,    87,   237,   -60,   -60,    91,   294,   254,   -79,
     176,   -79,   177,   212,   204,    82,   -60,   176,   -45,   246,
     251,   -60,   -60,   178,    -4,   153,   213,    -4,   122,   312,
     308,   309,   204,   212,    18,   177,   -60,    91,    87,   284,
     158,   252,   -56,   253,    74,   263,   162,   -47,   163,   -47,
      73,   178,    88,   190,   292,   190,   268,   -56,   212,   176,
     176,   176,   176,   196,   212,   214,   307,   198,   123,   176,
     199,   177,   311,   183,   178,   212,   212,   212,   212,   212,
     213,    75,   373,   281,   -56,    92,    -2,   374,   197,     4,
     326,   190,   -58,   -58,    76,    -3,   -56,   118,    -3,    51,
      99,   183,    78,   118,    99,   295,    99,   -58,   310,   201,
     178,   303,   177,    -5,   118,   219,    -5,   -42,   -67,   214,
     -67,   -67,   313,    -6,   183,    49,    -6,   200,   -84,    50,
     196,   -67,   -67,   349,   198,    79,   235,   199,   -59,   -59,
     235,   265,   190,    80,   190,   -48,   -67,   250,   177,   235,
     190,   178,    96,   -59,   238,   197,   -55,   253,   238,   235,
     183,   235,    -8,    -7,   277,    -8,    -7,   238,   236,   219,
      99,   -55,   236,   -57,   -57,   -13,   201,   238,   -13,   238,
     178,   236,    25,   267,   -15,    51,    51,   178,   -57,   213,
     -17,   236,   -17,   236,   200,   213,   -18,   183,   -18,   -12,
     177,   183,   -12,   214,    83,   300,   213,   -74,   301,   -74,
     -74,    49,    49,   -58,   -58,    50,    50,   -74,   237,   177,
     -74,   -74,   237,   184,    84,   -58,   -59,   -59,   214,   296,
     183,   237,    85,   219,   214,   -74,   359,   183,   -59,   178,
     362,   237,   -16,   237,   -16,   214,   314,    97,   -43,   371,
     100,   184,   -44,   219,   100,   -62,   100,   255,   178,   375,
     -46,   376,   187,   188,   223,   220,   189,   133,   -62,   -62,
      98,    -9,    -9,    99,   184,    99,   -55,    92,   219,   183,
     183,   183,   183,   -62,   219,   143,   177,   -78,   -55,   183,
     -67,   223,   -67,   -67,   348,   219,   219,   219,   219,   219,
     -84,   -57,   -57,   -67,   -67,   107,   304,    89,   183,   305,
     184,    99,   117,   -57,   -62,   -67,    94,   -48,   -88,   220,
     100,   -48,   -34,   -86,   -34,   178,   -34,   -62,   -62,   -34,
     -34,   -34,   -34,   -34,   -34,   318,   -34,   -34,   319,   -62,
     -34,   -34,   -34,   -34,   -34,   -34,   185,   184,   -34,   131,
     -34,   184,   -34,   -11,   -11,   -34,   289,    14,   -73,   -85,
     -73,   -73,    99,   132,    99,   -11,   -11,   -11,   -73,   135,
      99,   -73,   -73,   101,   185,   183,   136,   106,   -48,   109,
     184,   322,    14,   220,   -73,   186,   -73,   184,   221,   137,
     138,   -74,   139,   -74,   -74,   -52,   -75,   185,   -75,   -75,
     -53,   -74,   -54,   220,   -74,   -74,   -75,   140,   141,   -75,
     -75,   142,   191,   186,   144,   -82,   191,   -74,   191,   -74,
     -83,   -87,   -75,   100,   -75,   100,   -49,   222,   220,   184,
     184,   184,   184,   185,   220,   -50,   186,   -51,   363,   184,
     257,   159,   221,   155,   160,   220,   220,   220,   220,   220,
     -67,   247,   -67,   -67,   -64,   248,   -64,    95,   184,   249,
     -84,   100,   252,   -67,   -67,   -73,   -74,   -64,   -64,   -75,
     185,   258,   186,   259,   185,   260,   -67,   -48,   -67,   -64,
     261,   222,   191,   -64,   262,   -64,   256,   -56,   270,   -42,
     182,   -69,   -43,   -69,   -69,   -44,   -64,   -64,   -46,   266,
     -56,   -88,   -56,   185,   -69,   -69,   221,   264,   269,   186,
     185,   -64,   100,   186,   100,   -58,   -58,   -69,   182,   -69,
     100,   274,   -61,   275,   255,   184,   221,   282,   -58,   276,
     -58,   278,   218,   286,   283,   -61,   -61,   285,   126,   288,
     321,   182,   186,   -59,   -59,   222,   291,   332,   293,   186,
     -61,   221,   185,   185,   185,   185,   -59,   221,   -59,   333,
     334,   -66,   185,   -66,   -66,   222,   335,   336,   221,   221,
     221,   221,   221,   337,   -66,   -66,   338,   182,   -10,   -10,
      15,   185,   -55,   270,   328,   191,   218,   191,   -89,   -66,
     222,   186,   186,   186,   186,   -55,   222,   -55,   181,   -81,
     339,   186,   -70,   340,   -70,   -70,   341,   222,   222,   222,
     222,   222,   -86,   342,   182,   -70,   -70,   343,   182,   344,
     186,   -57,   -57,   191,   347,   350,   181,   351,   -70,   352,
     -70,   353,   -82,   180,   -57,   354,   -57,   355,   -83,   -72,
     217,   -72,   -72,   356,   -76,   125,   -49,   182,   185,   181,
     218,   -50,   -72,   -72,   182,   -75,   -51,   -75,   -75,   357,
     358,   180,   364,   365,   -61,   -75,    94,   -72,   -75,   -75,
     218,   -10,   -10,   290,   191,   216,   191,   -61,   -61,   124,
     102,   203,   191,   -75,   180,   181,   366,   186,   367,   -61,
     -69,   368,   -69,   -69,   217,   218,   182,   182,   182,   299,
     -88,   218,   179,   -69,   -69,   369,   182,   372,   -90,   226,
      28,     0,   218,   218,   218,   218,   317,     0,   -69,     0,
     180,   -67,   181,   -67,   -67,   182,   181,     0,     0,   216,
     179,   -84,     0,     0,   -67,   -67,     0,   239,     0,   152,
     -10,   -10,   323,     0,   215,    30,   -67,     0,   -48,    31,
       0,     0,    32,   179,     0,   181,     0,   180,   217,    37,
      38,   180,   181,    39,    40,    41,    42,    43,    44,     0,
       0,    45,     0,    46,   -68,    47,   -68,   -68,   217,     0,
       0,     0,     0,     0,   -87,     0,     0,   -68,   -68,   179,
     180,     0,   182,   216,     0,     0,     0,   180,   215,     0,
     -68,     0,   -68,   217,   181,   181,   298,     0,     0,   217,
       0,     0,     0,   216,   181,   -76,     0,   -76,   -76,     0,
     217,   217,   217,   316,     0,   -76,   179,     0,   -76,   -76,
     179,     0,   -70,   181,   -70,   -70,     0,   239,   216,   180,
     297,   -76,   -86,   -76,   216,   -70,   -70,     0,     0,   180,
       0,   -64,     0,   -64,   273,   216,   216,   315,     0,   179,
     -70,     0,   215,     0,   -64,   -64,   179,     0,   180,     0,
     -66,   103,   -66,   -66,     0,    31,     0,   -64,    32,   -64,
       0,     0,   215,   -66,   -66,    37,    38,   324,   203,    39,
      40,    41,    42,    43,    44,     0,   -66,    45,   -66,   202,
     181,    47,   -72,     0,   -72,   -72,     0,   215,   179,     0,
       0,     0,     0,   215,     0,   -72,   -72,     0,   179,   -68,
       0,   -68,   -68,     0,   215,   215,     0,     0,   -72,   -87,
     -72,   226,   -68,   -68,     0,   180,   -63,   179,   -63,   273,
       0,     0,     0,     0,     0,     0,     0,   -68,     0,   -63,
     -63,     0,   239,     0,   361,     0,   239,   -76,     0,   -76,
     -76,     0,   -63,     0,   -63,   239,     0,   -76,     0,     0,
     -76,   -76,   -35,     0,   -35,   239,   -35,   239,     0,   -35,
     -35,   -35,   -35,   -35,   -35,   -76,   -35,   -35,     0,     0,
     -35,   -35,   -35,   -35,   -35,   -35,     0,     0,   -35,   -33,
     -35,   -33,   -35,   -33,   179,   -35,   -33,   -33,   -33,   -33,
     -33,   -33,     0,   -33,   -33,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,   -33,   -36,   -33,   -36,   -33,
     -36,     0,   -33,   -36,   -36,   157,   -36,   -36,   -36,     0,
     -36,   -36,     0,     0,   -36,   -36,   -36,   -36,   -36,   -36,
       0,     0,   -36,   -32,   -36,   -32,   -36,   -32,     0,   -36,
     -32,   -32,   -32,   -32,   -32,   -32,     0,   -32,   -32,     0,
       0,   -32,   -32,   -32,   -32,   -32,   -32,     0,     0,   -32,
     -40,   -32,   -40,   -32,   -40,     0,   -32,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -40,   -40,     0,     0,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,   -40,   -25,   -40,   -25,
     -40,   -25,     0,   -40,   -25,   -25,   -25,   -25,   -25,   -25,
       0,   -25,   -25,     0,     0,   -25,   -25,   -25,   -25,   -25,
     -25,     0,     0,   -25,   -26,   -25,   -26,   -25,   -26,     0,
     -25,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -26,   -26,
       0,     0,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,
     -26,   -24,   -26,   -24,   -26,   -24,     0,   -26,   -24,   -24,
     -24,   -24,   -24,   -24,     0,   -24,   -24,     0,     0,   -24,
     -24,   -24,   -24,   -24,   -24,     0,     0,   -24,   -23,   -24,
     -23,   -24,   -23,     0,   -24,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -23,   -23,     0,     0,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -23,   -41,   -23,   -41,   -23,   -41,
       0,   -23,   -41,   -41,   -41,   -41,   -41,   -41,     0,   -41,
     -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,   -41,   -38,   -41,   -38,   -41,   -38,     0,   -41,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -38,   -38,     0,     0,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,   -38,   -39,
     -38,   -39,   -38,   -39,     0,   -38,   -39,   -39,   -39,   -39,
     -39,   -39,     0,   -39,   -39,     0,     0,   -39,   -39,   -39,
     -39,   -39,   -39,     0,     0,   -39,    -8,   -39,    -8,   -39,
      -8,     0,   -39,    -8,    -8,    -8,    -8,    -8,    -8,     0,
      -8,    -8,     0,     0,    -8,    -8,    -8,    -8,    -8,    -8,
       0,     0,    -8,    -7,    -8,    -7,    -8,    -7,     0,    -8,
      -7,    -7,    -7,    -7,    -7,    -7,     0,    -7,    -7,     0,
       0,    -7,    -7,    -7,    -7,    -7,    -7,     0,     0,    -7,
     -31,    -7,   -31,    -7,   -31,     0,    -7,   -31,   -31,   -31,
     -31,   -31,   -31,     0,   -31,   -31,     0,     0,   -31,   -31,
     -31,   -31,   -31,   -31,     0,     0,   -31,   -30,   -31,   -30,
     -31,   -30,     0,   -31,   -30,   -30,   -30,   -30,   -30,   -30,
       0,   -30,   -30,     0,     0,   -30,   -30,   -30,   -30,   -30,
     -30,     0,     0,   -30,   -36,   -30,   -36,   -30,   -36,     0,
     -30,   -36,   -36,   370,   -36,   -36,   -36,     0,   -36,   -36,
       0,     0,   -36,   -36,   -36,   -36,   -36,   -36,     0,     0,
     -36,   -29,   -36,   -29,   -36,   -29,     0,   -36,   -29,   -29,
     -29,   -29,   -29,   -29,     0,   -29,   -29,     0,     0,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,   -29,   -13,   -29,
     -13,   -29,   -13,     0,   -29,   -13,   -13,   -13,   -13,   -13,
     -13,     0,   -13,   -13,     0,     0,   -13,   -13,   -13,   -13,
     -13,   -13,     0,     0,   -13,   -27,   -13,   -27,   -13,   -27,
       0,   -13,   -27,   -27,   -27,   -27,   -27,   -27,     0,   -27,
     -27,     0,     0,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,   -27,   -37,   -27,   -37,   -27,   -37,     0,   -27,   -37,
     -37,   -37,   -37,   -37,   -37,     0,   -37,   -37,     0,     0,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -37,   -28,
     -37,   -28,   -37,   -28,     0,   -37,   -28,   -28,   -28,   -28,
     -28,   -28,     0,   -28,   -28,     0,     0,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,   -28,   -12,   -28,   -12,   -28,
     -12,     0,   -28,   -12,   -12,   -12,   -12,   -12,   -12,     0,
     -12,   -12,     0,     0,   -12,   -12,   -12,   -12,   -12,   -12,
       0,     0,   -12,   -19,   -12,   -19,   -12,   -19,     0,   -12,
     -19,   -19,     0,   -19,   -19,   -19,     0,   -19,   -19,     0,
       0,   -19,   -19,   -19,   -19,   -19,   -19,     0,     0,   -19,
      30,   -19,   165,   -19,    31,     0,   -19,    32,    33,     0,
      34,    35,    36,     0,    37,    38,     0,     0,    39,    40,
      41,    42,    43,    44,     0,     0,    45,   -40,    46,   -40,
      47,   -40,     0,    48,   -40,   -40,     0,   -40,   -40,   -40,
       0,   -40,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,
     -40,     0,     0,   -40,   -20,   -40,   -20,   -40,   -20,     0,
     -40,   -20,   -20,     0,   -20,   -20,   -20,     0,   -20,   -20,
       0,     0,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,
     -20,   -21,   -20,   -21,   -20,   -21,     0,   -20,   -21,   -21,
       0,   -21,   -21,   -21,     0,   -21,   -21,     0,     0,   -21,
     -21,   -21,   -21,   -21,   -21,     0,     0,   -21,   -22,   -21,
     -22,   -21,   -22,     0,   -21,   -22,   -22,     0,   -22,   -22,
     -22,     0,   -22,   -22,     0,     0,   -22,   -22,   -22,   -22,
     -22,   -22,     0,     0,   -22,   -25,   -22,   -25,   -22,   -25,
       0,   -22,   -25,   -25,     0,   -25,   -25,   -25,     0,   -25,
     -25,     0,     0,   -25,   -25,   -25,   -25,   -25,   -25,     0,
       0,   -25,   -26,   -25,   -26,   -25,   -26,     0,   -25,   -26,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,     0,     0,
     -26,   -26,   -26,   -26,   -26,   -26,     0,     0,   -26,   -24,
     -26,   -24,   -26,   -24,     0,   -26,   -24,   -24,     0,   -24,
     -24,   -24,     0,   -24,   -24,     0,     0,   -24,   -24,   -24,
     -24,   -24,   -24,     0,     0,   -24,   -23,   -24,   -23,   -24,
     -23,     0,   -24,   -23,   -23,     0,   -23,   -23,   -23,     0,
     -23,   -23,     0,     0,   -23,   -23,   -23,   -23,   -23,   -23,
       0,     0,   -23,   -41,   -23,   -41,   -23,   -41,     0,   -23,
     -41,   -41,     0,   -41,   -41,   -41,     0,   -41,   -41,     0,
       0,   -41,   -41,   -41,   -41,   -41,   -41,     0,     0,   -41,
     -38,   -41,   -38,   -41,   -38,     0,   -41,   -38,   -38,     0,
     -38,   -38,   -38,     0,   -38,   -38,     0,     0,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -38,   -39,   -38,   -39,
     -38,   -39,     0,   -38,   -39,   -39,     0,   -39,   -39,   -39,
       0,   -39,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,   -39,   -31,   -39,   -31,   -39,   -31,     0,
     -39,   -31,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,
       0,     0,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,
     -31,   -30,   -31,   -30,   -31,   -30,     0,   -31,   -30,   -30,
       0,   -30,   -30,   -30,     0,   -30,   -30,     0,     0,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,   -30,   -29,   -30,
     -29,   -30,   -29,     0,   -30,   -29,   -29,     0,   -29,   -29,
     -29,     0,   -29,   -29,     0,     0,   -29,   -29,   -29,   -29,
     -29,   -29,     0,     0,   -29,    30,   -29,   165,   -29,    31,
       0,   -29,    32,    33,     0,    34,    35,    36,     0,    37,
      38,     0,     0,    39,    40,    41,    42,    43,    44,     0,
       0,    45,   -27,    46,   -27,    47,   -27,     0,   161,   -27,
     -27,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,     0,
     -27,   -27,   -27,   -27,   -27,   -27,     0,     0,   -27,   -37,
     -27,   -37,   -27,   -37,     0,   -27,   -37,   -37,     0,   -37,
     -37,   -37,     0,   -37,   -37,     0,     0,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,   -37,   -28,   -37,   -28,   -37,
     -28,     0,   -37,   -28,   -28,     0,   -28,   -28,   -28,     0,
     -28,   -28,     0,     0,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   -28,   -34,   -28,   -34,   -28,   -34,     0,   -28,
     -34,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,     0,
       0,   -34,   -34,   -34,   -34,   -34,   -34,     0,     0,   -34,
     -35,   -34,   -35,   -34,   -35,     0,   -34,   -35,   -35,     0,
     -35,   -35,   -35,     0,   -35,   -35,     0,     0,   -35,   -35,
     -35,   -35,   -35,   -35,     0,     0,   -35,   -33,   -35,   -33,
     -35,   -33,     0,   -35,   -33,   -33,     0,   -33,   -33,   -33,
       0,   -33,   -33,     0,     0,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,   -33,    30,   -33,   165,   -33,    31,     0,
     -33,    32,    33,     0,    34,    35,    36,     0,    37,    38,
       0,     0,    39,    40,    41,    42,    43,    44,     0,     0,
      45,    -8,    46,    -8,    47,    -8,     0,   329,    -8,    -8,
       0,    -8,    -8,    -8,     0,    -8,    -8,     0,     0,    -8,
      -8,    -8,    -8,    -8,    -8,     0,     0,    -8,    -7,    -8,
      -7,    -8,    -7,     0,    -8,    -7,    -7,     0,    -7,    -7,
      -7,     0,    -7,    -7,     0,     0,    -7,    -7,    -7,    -7,
      -7,    -7,     0,     0,    -7,   -32,    -7,   -32,    -7,   -32,
       0,    -7,   -32,   -32,     0,   -32,   -32,   -32,     0,   -32,
     -32,     0,     0,   -32,   -32,   -32,   -32,   -32,   -32,     0,
       0,   -32,   -13,   -32,   -13,   -32,   -13,     0,   -32,   -13,
     -13,     0,   -13,   -13,   -13,     0,   -13,   -13,     0,     0,
     -13,   -13,   -13,   -13,   -13,   -13,     0,     0,   -13,    30,
     -13,   165,   -13,    31,     0,   -13,    32,    33,     0,    34,
      35,    36,     0,    37,    38,     0,     0,    39,    40,    41,
      42,    43,    44,     0,     0,    45,    30,    46,   165,    47,
      31,     0,   377,    32,    33,     0,    34,    35,    36,     0,
      37,    38,     0,     0,    39,    40,    41,    42,    43,    44,
       0,     0,    45,   -12,    46,   -12,    47,   -12,     0,   378,
     -12,   -12,     0,   -12,   -12,   -12,     0,   -12,   -12,     0,
       0,   -12,   -12,   -12,   -12,   -12,   -12,     0,     0,   -12,
     228,   -12,   229,   -12,    31,     0,   -12,    32,   230,     0,
     231,   232,   233,     0,    37,    38,     0,     0,    39,    40,
      41,    42,    43,    44,     0,     0,    45,    30,   234,   165,
      47,    31,   146,     0,    32,    33,     0,    34,    35,    36,
       0,    37,    38,     0,     0,    39,    40,    41,    42,    43,
      44,     0,     0,    45,   224,    46,     0,    47,    31,   240,
       0,    32,     0,     0,     0,     0,     0,     0,    37,    38,
       0,     0,    39,    40,    41,    42,    43,    44,     0,   -40,
      45,     0,   225,   -40,    47,     0,   -40,     0,     0,     0,
       0,     0,     0,   -40,   -40,     0,     0,   -40,   -40,   -40,
     -40,   -40,   -40,     0,   -41,   -40,     0,   -40,   -41,   -40,
       0,   -41,     0,     0,     0,     0,     0,     0,   -41,   -41,
       0,     0,   -41,   -41,   -41,   -41,   -41,   -41,     0,   228,
     -41,     0,   -41,    31,   -41,     0,    32,     0,     0,     0,
       0,     0,     0,    37,    38,     0,     0,    39,    40,    41,
      42,    43,    44,     0,   -39,    45,     0,   234,   -39,    47,
       0,   -39,     0,     0,     0,     0,     0,     0,   -39,   -39,
       0,     0,   -39,   -39,   -39,   -39,   -39,   -39,     0,   325,
     -39,     0,   -39,    31,   -39,     0,    32,     0,     0,     0,
       0,     0,     0,    37,    38,     0,     0,    39,    40,    41,
      42,    43,    44,     0,     0,    45,     0,   202,   -65,    47,
     -65,   -65,   -89,     0,   -89,   -89,   -81,     0,   -81,   -81,
       0,   -65,   -65,     0,     0,   -89,   -89,     0,     0,   -81,
     -81,     0,     0,     0,   -65,     0,   -65,     0,   -89,   -62,
     -89,   272,   -81,   -71,   -81,   -71,   -71,   -90,     0,   -90,
     -90,     0,   -62,   -62,     0,     0,   -71,   -71,     0,     0,
     -90,   -90,     0,     0,     0,   -62,     0,   -62,     0,   -71,
       0,   -71,     0,   -90,   -63,   -90,   -63,   256,   -65,     0,
     -65,   -65,   -89,     0,   -89,   -89,     0,   -63,   -63,     0,
       0,   -65,   -65,     0,     0,   -89,   -89,     0,   -81,     0,
     -81,   -81,   -63,   -61,     0,   272,   -65,     0,     0,     0,
     -89,   -81,   -81,     0,     0,     0,   -61,   -61,     0,   -71,
       0,   -71,   -71,     0,     0,   -90,   -81,   -90,   -90,   -61,
       0,   -61,   -71,   -71,     0,     0,     0,     0,   -90,   -90,
     167,     0,     0,   192,     0,     0,     0,   -71,     0,     0,
     169,   170,     0,   -90,   171,   193,   194,   195,   172,   173,
     -40,     0,   174,   -40,     0,     0,   175,   151,     0,     0,
     -40,   -40,     0,     0,   -40,   -40,   -40,   -40,   -40,   -40,
     -41,     0,   -40,   -41,     0,     0,   -40,   -40,     0,     0,
     -41,   -41,     0,     0,   -41,   -41,   -41,   -41,   -41,   -41,
     -39,     0,   -41,   -39,     0,     0,   -41,   -41,     0,     0,
     -39,   -39,     0,     0,   -39,   -39,   -39,   -39,   -39,   -39,
     167,     0,   -39,   192,     0,     0,   -39,   -39,     0,     0,
     169,   170,     0,     0,   171,   193,   194,   195,   172,   173,
     167,     0,   174,   192,     0,     0,   175,   360,     0,     0,
     169,   170,     0,     0,   171,   193,   194,   195,   172,   173,
     167,     0,   174,   168,     0,     0,   175,     0,     0,     0,
     169,   170,     0,     0,   171,     0,     0,     0,   172,   173,
       0,   -74,   174,   -74,   -74,     0,   175,   -75,     0,   -75,
     -75,   -74,     0,     0,   -74,   -74,     0,   -75,     0,     0,
     -75,   -75,     0,     0,     0,   -69,   -74,   -69,   -69,     0,
       0,   -70,   -75,   -70,   -70,   -88,     0,     0,   -69,   -69,
       0,   -86,     0,     0,   -70,   -70,     0,     0,     0,   -68,
     -69,   -68,   -68,     0,     0,   -76,   -70,   -76,   -76,   -87,
       0,     0,   -68,   -68,   -66,   -76,   -66,   -66,   -76,   -76,
     -72,     0,   -72,   -72,   -68,     0,     0,   -66,   -66,   -63,
     -76,   -63,    95,   -72,   -72,   -65,     0,   -65,   -65,   -66,
       0,     0,   -63,   -63,   -89,   -72,   -89,   -89,   -65,   -65,
     -81,     0,   -81,   -81,   -63,     0,     0,   -89,   -89,   -71,
     -65,   -71,   -71,   -81,   -81,   -90,     0,   -90,   -90,   -89,
     205,     0,   -71,   -71,     0,   -81,   166,   206,   -90,   -90,
       0,   207,     0,    37,   -71,   208,   209,    39,     0,   210,
     -90,    43,    44,   211,   -77,    45,   205,     0,   168,    47,
       0,     0,     0,   206,     0,   169,     0,   207,     0,   171,
       0,   208,   209,   172,   173,   210,   166,   174,   168,   211,
       0,   175,     0,    37,     0,   169,     0,     0,     0,   205,
       0,    43,    44,   172,   173,    45,   206,   174,     0,    47,
       0,   175,     0,     0,   208,   209,     0,     0,   210,     0,
       0,     0,   211
};

static const yytype_int16 yycheck[] =
{
       2,    29,    35,   165,     2,    39,   290,     1,     4,     3,
       6,     7,     0,    47,    85,     8,    75,     1,    14,     3,
      75,    17,    18,    75,   146,    14,    31,    29,    14,    29,
      35,    29,    25,    26,    47,     1,    32,     3,    32,   323,
      74,    75,    31,    76,    78,    79,    80,     8,    32,    83,
      17,   257,    47,   259,    17,    89,    90,    91,    92,    93,
      94,    95,    75,    30,    98,    32,    32,   229,   274,    32,
       5,   104,    32,     8,     4,   134,     6,     7,     4,   134,
      75,   132,   134,    17,    14,    98,     1,    17,    18,     1,
       1,    17,    18,     8,    89,    90,     8,     8,    32,   132,
     134,    31,    32,    98,    30,    35,    32,     1,   136,   143,
     144,    23,    24,   132,     8,    27,    29,    30,   240,    31,
       1,   134,     4,   151,     6,     7,    32,     8,   156,   157,
      17,   159,    14,     8,   136,    17,    18,   171,   136,   134,
      33,   175,    23,    24,    47,    32,    27,    29,   143,   151,
      31,     4,    17,   151,   156,   157,    17,   159,   156,   157,
      33,   159,   175,   132,    17,    18,    17,    32,     4,    30,
     204,    32,    75,   207,    17,    39,    29,   211,    29,   165,
     175,    17,    18,    47,     0,   136,    89,     3,    91,    32,
     261,   262,    17,   227,     3,    98,    32,    17,   211,   232,
     151,    31,    17,    18,    31,    35,   157,    32,   159,    29,
      29,    75,    29,   247,   248,   249,   211,    32,   252,   253,
     254,   255,   256,   282,   258,    89,   260,   282,    92,   263,
     282,   134,   266,    47,    98,   269,   270,   271,   272,   273,
     143,    31,   364,   229,    17,    18,     0,   369,   282,     3,
     283,   285,    17,    18,    31,     0,    29,   252,     3,   287,
      74,    75,    31,   258,    78,   252,    80,    32,   263,   282,
     134,   258,   175,     0,   269,    89,     3,    29,     4,   143,
       6,     7,   269,     0,    98,   287,     3,   282,    14,   287,
     349,    17,    18,   326,   349,    31,   347,   349,    17,    18,
     351,   204,   336,    31,   338,    31,    32,   171,   211,   360,
     344,   175,    14,    32,   347,   349,    17,    18,   351,   370,
     134,   372,     0,     0,   227,     3,     3,   360,   347,   143,
     144,    32,   351,    17,    18,     0,   349,   370,     3,   372,
     204,   360,    30,   207,    32,   373,   374,   211,    32,   252,
      30,   370,    32,   372,   349,   258,    30,   171,    32,     0,
     263,   175,     3,   227,    31,     5,   269,     4,     8,     6,
       7,   373,   374,    17,    18,   373,   374,    14,   347,   282,
      17,    18,   351,    47,    31,    29,    17,    18,   252,   253,
     204,   360,    31,   207,   258,    32,   347,   211,    29,   263,
     351,   370,    30,   372,    32,   269,   270,     8,    29,   360,
      74,    75,    29,   227,    78,     4,    80,     6,   282,   370,
      29,   372,    23,    24,    29,    89,    27,    32,    17,    18,
      31,    29,    30,   247,    98,   249,    17,    18,   252,   253,
     254,   255,   256,    32,   258,    30,   349,    32,    29,   263,
       4,    29,     6,     7,    32,   269,   270,   271,   272,   273,
      14,    17,    18,    17,    18,     8,     5,    31,   282,     8,
     134,   285,    32,    29,     4,    29,     6,    31,    14,   143,
     144,    35,     1,    14,     3,   349,     5,    17,    18,     8,
       9,    10,    11,    12,    13,     5,    15,    16,     8,    29,
      19,    20,    21,    22,    23,    24,    47,   171,    27,    32,
      29,   175,    31,    29,    30,    34,    29,    30,     4,    14,
       6,     7,   336,    32,   338,    29,    30,    31,    14,    32,
     344,    17,    18,    74,    75,   349,    32,    78,    32,    80,
     204,    29,    30,   207,    30,    47,    32,   211,    89,    32,
      32,     4,    32,     6,     7,    32,     4,    98,     6,     7,
      32,    14,    32,   227,    17,    18,    14,    32,    32,    17,
      18,    32,    74,    75,    31,    29,    78,    30,    80,    32,
      29,    14,    30,   247,    32,   249,    29,    89,   252,   253,
     254,   255,   256,   134,   258,    29,    98,    29,    33,   263,
      14,    32,   143,   144,    32,   269,   270,   271,   272,   273,
       4,    31,     6,     7,     4,    31,     6,     7,   282,    31,
      14,   285,    31,    17,    18,    14,    14,    17,    18,    14,
     171,    31,   134,    14,   175,    31,    30,    31,    32,    29,
      31,   143,   144,     4,    31,     6,     7,    17,    18,    32,
      47,     4,    32,     6,     7,    32,    17,    18,    32,    31,
      30,    14,    32,   204,    17,    18,   207,    29,    31,   171,
     211,    32,   336,   175,   338,    17,    18,    30,    75,    32,
     344,    14,     4,    29,     6,   349,   227,    31,    30,    29,
      32,    29,    89,    29,    31,    17,    18,    31,    95,    29,
      29,    98,   204,    17,    18,   207,   247,    32,   249,   211,
      32,   252,   253,   254,   255,   256,    30,   258,    32,    32,
      32,     4,   263,     6,     7,   227,    32,    31,   269,   270,
     271,   272,   273,    32,    17,    18,    31,   134,    29,    30,
      31,   282,    17,    18,   285,   247,   143,   249,    32,    32,
     252,   253,   254,   255,   256,    30,   258,    32,    47,    32,
      32,   263,     4,    32,     6,     7,    32,   269,   270,   271,
     272,   273,    14,    32,   171,    17,    18,    32,   175,    31,
     282,    17,    18,   285,    32,    32,    75,    32,    30,    32,
      32,    32,    32,    47,    30,   336,    32,   338,    32,     4,
      89,     6,     7,   344,    14,    94,    32,   204,   349,    98,
     207,    32,    17,    18,   211,     4,    32,     6,     7,    32,
      32,    75,    33,    32,     4,    14,     6,    32,    17,    18,
     227,    29,    30,    31,   336,    89,   338,    17,    18,    93,
      75,    76,   344,    32,    98,   134,    32,   349,    32,    29,
       4,    33,     6,     7,   143,   252,   253,   254,   255,   256,
      14,   258,    47,    17,    18,    33,   263,    32,    32,   104,
      25,    -1,   269,   270,   271,   272,   273,    -1,    32,    -1,
     134,     4,   171,     6,     7,   282,   175,    -1,    -1,   143,
      75,    14,    -1,    -1,    17,    18,    -1,   132,    -1,   134,
      29,    30,    31,    -1,    89,     1,    29,    -1,    31,     5,
      -1,    -1,     8,    98,    -1,   204,    -1,   171,   207,    15,
      16,   175,   211,    19,    20,    21,    22,    23,    24,    -1,
      -1,    27,    -1,    29,     4,    31,     6,     7,   227,    -1,
      -1,    -1,    -1,    -1,    14,    -1,    -1,    17,    18,   134,
     204,    -1,   349,   207,    -1,    -1,    -1,   211,   143,    -1,
      30,    -1,    32,   252,   253,   254,   255,    -1,    -1,   258,
      -1,    -1,    -1,   227,   263,     4,    -1,     6,     7,    -1,
     269,   270,   271,   272,    -1,    14,   171,    -1,    17,    18,
     175,    -1,     4,   282,     6,     7,    -1,   232,   252,   253,
     254,    30,    14,    32,   258,    17,    18,    -1,    -1,   263,
      -1,     4,    -1,     6,     7,   269,   270,   271,    -1,   204,
      32,    -1,   207,    -1,    17,    18,   211,    -1,   282,    -1,
       4,     1,     6,     7,    -1,     5,    -1,    30,     8,    32,
      -1,    -1,   227,    17,    18,    15,    16,   282,   283,    19,
      20,    21,    22,    23,    24,    -1,    30,    27,    32,    29,
     349,    31,     4,    -1,     6,     7,    -1,   252,   253,    -1,
      -1,    -1,    -1,   258,    -1,    17,    18,    -1,   263,     4,
      -1,     6,     7,    -1,   269,   270,    -1,    -1,    30,    14,
      32,   326,    17,    18,    -1,   349,     4,   282,     6,     7,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    -1,    17,
      18,    -1,   347,    -1,   349,    -1,   351,     4,    -1,     6,
       7,    -1,    30,    -1,    32,   360,    -1,    14,    -1,    -1,
      17,    18,     1,    -1,     3,   370,     5,   372,    -1,     8,
       9,    10,    11,    12,    13,    32,    15,    16,    -1,    -1,
      19,    20,    21,    22,    23,    24,    -1,    -1,    27,     1,
      29,     3,    31,     5,   349,    34,     8,     9,    10,    11,
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
      31,     5,    33,    -1,     8,     9,    -1,    11,    12,    13,
      -1,    15,    16,    -1,    -1,    19,    20,    21,    22,    23,
      24,    -1,    -1,    27,     1,    29,    -1,    31,     5,    33,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,     1,
      27,    -1,    29,     5,    31,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,     1,    27,    -1,    29,     5,    31,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,     1,
      27,    -1,    29,     5,    31,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,     1,    27,    -1,    29,     5,    31,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    15,    16,
      -1,    -1,    19,    20,    21,    22,    23,    24,    -1,     1,
      27,    -1,    29,     5,    31,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    15,    16,    -1,    -1,    19,    20,    21,
      22,    23,    24,    -1,    -1,    27,    -1,    29,     4,    31,
       6,     7,     4,    -1,     6,     7,     4,    -1,     6,     7,
      -1,    17,    18,    -1,    -1,    17,    18,    -1,    -1,    17,
      18,    -1,    -1,    -1,    30,    -1,    32,    -1,    30,     4,
      32,     6,    30,     4,    32,     6,     7,     4,    -1,     6,
       7,    -1,    17,    18,    -1,    -1,    17,    18,    -1,    -1,
      17,    18,    -1,    -1,    -1,    30,    -1,    32,    -1,    30,
      -1,    32,    -1,    30,     4,    32,     6,     7,     4,    -1,
       6,     7,     4,    -1,     6,     7,    -1,    17,    18,    -1,
      -1,    17,    18,    -1,    -1,    17,    18,    -1,     4,    -1,
       6,     7,    32,     4,    -1,     6,    32,    -1,    -1,    -1,
      32,    17,    18,    -1,    -1,    -1,    17,    18,    -1,     4,
      -1,     6,     7,    -1,    -1,     4,    32,     6,     7,    30,
      -1,    32,    17,    18,    -1,    -1,    -1,    -1,    17,    18,
       5,    -1,    -1,     8,    -1,    -1,    -1,    32,    -1,    -1,
      15,    16,    -1,    32,    19,    20,    21,    22,    23,    24,
       5,    -1,    27,     8,    -1,    -1,    31,    32,    -1,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
       5,    -1,    27,     8,    -1,    -1,    31,    32,    -1,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
       5,    -1,    27,     8,    -1,    -1,    31,    32,    -1,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
       5,    -1,    27,     8,    -1,    -1,    31,    32,    -1,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
       5,    -1,    27,     8,    -1,    -1,    31,    32,    -1,    -1,
      15,    16,    -1,    -1,    19,    20,    21,    22,    23,    24,
       5,    -1,    27,     8,    -1,    -1,    31,    -1,    -1,    -1,
      15,    16,    -1,    -1,    19,    -1,    -1,    -1,    23,    24,
      -1,     4,    27,     6,     7,    -1,    31,     4,    -1,     6,
       7,    14,    -1,    -1,    17,    18,    -1,    14,    -1,    -1,
      17,    18,    -1,    -1,    -1,     4,    29,     6,     7,    -1,
      -1,     4,    29,     6,     7,    14,    -1,    -1,    17,    18,
      -1,    14,    -1,    -1,    17,    18,    -1,    -1,    -1,     4,
      29,     6,     7,    -1,    -1,     4,    29,     6,     7,    14,
      -1,    -1,    17,    18,     4,    14,     6,     7,    17,    18,
       4,    -1,     6,     7,    29,    -1,    -1,    17,    18,     4,
      29,     6,     7,    17,    18,     4,    -1,     6,     7,    29,
      -1,    -1,    17,    18,     4,    29,     6,     7,    17,    18,
       4,    -1,     6,     7,    29,    -1,    -1,    17,    18,     4,
      29,     6,     7,    17,    18,     4,    -1,     6,     7,    29,
       8,    -1,    17,    18,    -1,    29,     8,    15,    17,    18,
      -1,    19,    -1,    15,    29,    23,    24,    19,    -1,    27,
      29,    23,    24,    31,    32,    27,     8,    -1,     8,    31,
      -1,    -1,    -1,    15,    -1,    15,    -1,    19,    -1,    19,
      -1,    23,    24,    23,    24,    27,     8,    27,     8,    31,
      -1,    31,    -1,    15,    -1,    15,    -1,    -1,    -1,     8,
      -1,    23,    24,    23,    24,    27,    15,    27,    -1,    31,
      -1,    31,    -1,    -1,    23,    24,    -1,    -1,    27,    -1,
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
      43,    48,    49,    51,    52,    53,    54,    55,    56,    57,
      58,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      71,    72,    73,    29,    31,    31,    31,    53,    31,    31,
      31,    56,    62,    31,    31,    31,    60,    72,    29,    31,
      35,    17,    18,     4,     6,     7,    14,     8,    31,    67,
      68,    71,    54,     1,    53,     1,    71,     8,    56,    71,
      56,     8,    25,    26,    59,    59,    32,    32,    60,    69,
      70,    60,    61,    62,    64,    65,    66,     5,     8,    74,
      60,    32,    32,    32,    53,    32,    32,    32,    32,    32,
      32,    32,    32,    30,    31,    32,    33,    40,    43,    48,
      50,    32,    54,    50,    60,    71,    47,    10,    50,    32,
      32,    34,    50,    50,     8,     3,     8,     5,     8,    15,
      16,    19,    23,    24,    27,    31,    56,    61,    62,    63,
      64,    65,    66,    67,    68,    71,    73,    23,    24,    27,
      56,    73,     8,    20,    21,    22,    55,    56,    57,    58,
      60,    72,    29,    54,    17,     8,    15,    19,    23,    24,
      27,    31,    56,    61,    62,    63,    64,    65,    66,    67,
      68,    71,    73,    29,     1,    29,    54,    17,     1,     3,
       9,    11,    12,    13,    29,    49,    51,    52,    53,    54,
      33,    40,    43,    48,     1,    41,    42,    31,    31,    31,
      62,    60,    31,    18,     4,     6,     7,    14,    31,    14,
      31,    31,    31,    35,    29,    61,    31,    62,    60,    31,
      18,     4,     6,     7,    14,    29,    29,    61,    29,     1,
      41,    42,    31,    31,    53,    31,    29,    47,    29,    29,
      31,    71,    56,    71,    32,    69,    62,    64,    65,    66,
       5,     8,    74,    69,     5,     8,    74,    56,    59,    59,
      60,    56,    32,    69,    62,    64,    65,    66,     5,     8,
      74,    29,    29,    31,    54,     1,    53,     1,    71,    34,
       1,    44,    32,    32,    32,    32,    31,    32,    31,    32,
      32,    32,    32,    32,    31,     1,    44,    32,    32,    53,
      32,    32,    32,    32,    71,    71,    71,    32,    32,    50,
      32,    54,    50,    33,    33,    32,    32,    32,    33,    33,
      10,    50,    32,    47,    47,    50,    50,    34,    34
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    37,    38,    38,    39,    39,    40,    40,    41,
      41,    42,    43,    43,    44,    44,    45,    45,    46,    47,
      47,    47,    47,    48,    48,    48,    48,    49,    49,    49,
      49,    49,    50,    50,    50,    50,    51,    51,    52,    53,
      53,    53,    54,    54,    54,    54,    54,    55,    56,    57,
      58,    58,    59,    59,    59,    60,    60,    61,    61,    62,
      62,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    68,    69,    69,    70,
      70,    71,    72,    72,    73,    73,    73,    73,    73,    74,
      74
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     3,     3,     3,
       1,     1,     8,     6,     0,     1,     3,     1,     2,     0,
       2,     2,     2,     1,     1,     1,     1,     6,     7,     5,
       4,     4,     3,     1,     1,     1,     5,     7,     2,     2,
       1,     2,     1,     1,     1,     1,     1,     3,     1,     4,
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
#line 58 "semantic.y"
                                                                {root = (yyvsp[0].tnode);}
#line 2154 "semantic.tab.c"
    break;

  case 3:
#line 61 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2160 "semantic.tab.c"
    break;

  case 4:
#line 62 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2166 "semantic.tab.c"
    break;

  case 5:
#line 65 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2172 "semantic.tab.c"
    break;

  case 6:
#line 66 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2178 "semantic.tab.c"
    break;

  case 7:
#line 69 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(VARDECL, (yyvsp[-1].tnode)); setVarsType((yyvsp[-1].tnode), (yyvsp[-2].ival));}
#line 2184 "semantic.tab.c"
    break;

  case 8:
#line 70 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2190 "semantic.tab.c"
    break;

  case 9:
#line 73 "semantic.y"
                                                                   {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2196 "semantic.tab.c"
    break;

  case 10:
#line 74 "semantic.y"
                                                                   {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2202 "semantic.tab.c"
    break;

  case 11:
#line 77 "semantic.y"
                                                               {(yyval.tnode) = idLeaf(insert((yyvsp[0].sval), curr_scope));}
#line 2208 "semantic.tab.c"
    break;

  case 12:
#line 80 "semantic.y"
                                                                    {
                                                                        showAllTables();
                                                                        (yyval.tnode) = TernaryNode(FUNCDECL, (yyvsp[-6].tnode), (yyvsp[-4].tnode), (yyvsp[-1].tnode));
                                                                        (yyval.tnode)->internal->ref = (yyvsp[-6].tnode)->leaf->ref;
                                                                        (yyval.tnode)->internal->ref->sym_kind = FUNCTION;
                                                                        (yyval.tnode)->internal->ref->return_type = (yyvsp[-7].ival);
                                                                        (yyval.tnode)->internal->ref->n_args = countArgs((yyvsp[-4].tnode), 0);
                                                                        (yyval.tnode)->internal->ref->args_type = malloc(sizeof(int)*(yyval.tnode)->internal->ref->n_args);
                                                                        setArgsInfo((yyval.tnode)->internal->ref, (yyvsp[-4].tnode), 0);
                                                                }
#line 2223 "semantic.tab.c"
    break;

  case 13:
#line 90 "semantic.y"
                                                                    {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2229 "semantic.tab.c"
    break;

  case 14:
#line 95 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2235 "semantic.tab.c"
    break;

  case 15:
#line 96 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2241 "semantic.tab.c"
    break;

  case 16:
#line 99 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2247 "semantic.tab.c"
    break;

  case 17:
#line 100 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2253 "semantic.tab.c"
    break;

  case 18:
#line 103 "semantic.y"
                                                                {
                                                                  (yyval.tnode) = idLeaf(insert((yyvsp[0].sval), curr_scope+1));
                                                                  (yyval.tnode)->leaf->ref->sym_kind = VARIABLE;
                                                                  (yyval.tnode)->leaf->ref->var_type = (yyvsp[-1].ival);
                                                                }
#line 2263 "semantic.tab.c"
    break;

  case 19:
#line 110 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2269 "semantic.tab.c"
    break;

  case 20:
#line 111 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2275 "semantic.tab.c"
    break;

  case 21:
#line 112 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2281 "semantic.tab.c"
    break;

  case 22:
#line 113 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-1].tnode), (yyvsp[0].tnode));}
#line 2287 "semantic.tab.c"
    break;

  case 23:
#line 116 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2293 "semantic.tab.c"
    break;

  case 24:
#line 117 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2299 "semantic.tab.c"
    break;

  case 25:
#line 118 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2305 "semantic.tab.c"
    break;

  case 26:
#line 119 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2311 "semantic.tab.c"
    break;

  case 27:
#line 122 "semantic.y"
                                                                {(yyval.tnode) = TernaryNode(FOR1, (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2317 "semantic.tab.c"
    break;

  case 28:
#line 123 "semantic.y"
                                                                {(yyval.tnode) = QuaternaryNode(FOR2, (yyvsp[-4].tnode), (yyvsp[-3].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2323 "semantic.tab.c"
    break;

  case 29:
#line 124 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(FORALL, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2329 "semantic.tab.c"
    break;

  case 30:
#line 125 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2335 "semantic.tab.c"
    break;

  case 31:
#line 126 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2341 "semantic.tab.c"
    break;

  case 32:
#line 129 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2347 "semantic.tab.c"
    break;

  case 33:
#line 130 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2353 "semantic.tab.c"
    break;

  case 34:
#line 131 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2359 "semantic.tab.c"
    break;

  case 35:
#line 132 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2365 "semantic.tab.c"
    break;

  case 36:
#line 136 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(IF, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2371 "semantic.tab.c"
    break;

  case 37:
#line 137 "semantic.y"
                                                                {(yyval.tnode) = TernaryNode(IF_ELSE, (yyvsp[-4].tnode), (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2377 "semantic.tab.c"
    break;

  case 38:
#line 140 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(RETURN, (yyvsp[0].tnode));}
#line 2383 "semantic.tab.c"
    break;

  case 39:
#line 142 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2389 "semantic.tab.c"
    break;

  case 40:
#line 143 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2395 "semantic.tab.c"
    break;

  case 41:
#line 144 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf(); yyerrok;}
#line 2401 "semantic.tab.c"
    break;

  case 42:
#line 147 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2407 "semantic.tab.c"
    break;

  case 43:
#line 148 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2413 "semantic.tab.c"
    break;

  case 44:
#line 149 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2419 "semantic.tab.c"
    break;

  case 45:
#line 150 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2425 "semantic.tab.c"
    break;

  case 46:
#line 151 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2431 "semantic.tab.c"
    break;

  case 47:
#line 154 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(ASSIGN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2437 "semantic.tab.c"
    break;

  case 48:
#line 157 "semantic.y"
                                                                 {
                                                                  sym *ref = findRef((yyvsp[0].sval));

                                                                  if (ref == NULL) {printf("%s\n", (yyvsp[0].sval)); (yyval.tnode) = idLeaf(insert((yyvsp[0].sval), curr_scope));}
                                                                  else {(yyval.tnode) = idLeaf(ref), free((yyvsp[0].sval));};
                                                                }
#line 2448 "semantic.tab.c"
    break;

  case 49:
#line 165 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(READ, (yyvsp[-1].tnode));}
#line 2454 "semantic.tab.c"
    break;

  case 50:
#line 168 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITE, (yyvsp[-1].tnode));}
#line 2460 "semantic.tab.c"
    break;

  case 51:
#line 169 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(WRITELN, (yyvsp[-1].tnode));}
#line 2466 "semantic.tab.c"
    break;

  case 52:
#line 172 "semantic.y"
                                                                {
                                                                  sym *ref = findRef((yyvsp[0].sval));
                                                                  if (ref == NULL) (yyval.tnode) = idLeaf(insert((yyvsp[0].sval), curr_scope));
                                                                  else {(yyval.tnode) = idLeaf(ref); free((yyvsp[0].sval));}
                                                                }
#line 2476 "semantic.tab.c"
    break;

  case 53:
#line 177 "semantic.y"
                                                                {(yyval.tnode) = charLeaf((yyvsp[0].cval));}
#line 2482 "semantic.tab.c"
    break;

  case 54:
#line 178 "semantic.y"
                                                                {(yyval.tnode) = stringLeaf((yyvsp[0].sval));}
#line 2488 "semantic.tab.c"
    break;

  case 55:
#line 181 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(DISJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2494 "semantic.tab.c"
    break;

  case 56:
#line 182 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2500 "semantic.tab.c"
    break;

  case 57:
#line 185 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(CONJ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2506 "semantic.tab.c"
    break;

  case 58:
#line 186 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2512 "semantic.tab.c"
    break;

  case 59:
#line 189 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(NEG, (yyvsp[0].tnode));}
#line 2518 "semantic.tab.c"
    break;

  case 60:
#line 190 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2524 "semantic.tab.c"
    break;

  case 61:
#line 193 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(RELOP, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2530 "semantic.tab.c"
    break;

  case 62:
#line 194 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2536 "semantic.tab.c"
    break;

  case 63:
#line 197 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP1, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2542 "semantic.tab.c"
    break;

  case 64:
#line 198 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2548 "semantic.tab.c"
    break;

  case 65:
#line 201 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(ARTOP2, (yyvsp[-2].tnode), (yyvsp[0].tnode)); (yyval.tnode)->internal->op_specifier = (yyvsp[-1].ival);}
#line 2554 "semantic.tab.c"
    break;

  case 66:
#line 202 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2560 "semantic.tab.c"
    break;

  case 67:
#line 205 "semantic.y"
                                                                {
                                                                  sym *ref = findRef((yyvsp[0].sval));
                                                                  if (ref == NULL) (yyval.tnode) = idLeaf(insert((yyvsp[0].sval), curr_scope));
                                                                  else {(yyval.tnode) = idLeaf(ref); free((yyvsp[0].sval));}
                                                                }
#line 2570 "semantic.tab.c"
    break;

  case 68:
#line 210 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2576 "semantic.tab.c"
    break;

  case 69:
#line 211 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2582 "semantic.tab.c"
    break;

  case 70:
#line 212 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2588 "semantic.tab.c"
    break;

  case 71:
#line 213 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(IS_SET, (yyvsp[-1].tnode));}
#line 2594 "semantic.tab.c"
    break;

  case 72:
#line 214 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2600 "semantic.tab.c"
    break;

  case 73:
#line 217 "semantic.y"
                                                                {(yyval.tnode) = intLeaf((yyvsp[0].ival));}
#line 2606 "semantic.tab.c"
    break;

  case 74:
#line 218 "semantic.y"
                                                                {(yyval.tnode) = floatLeaf((yyvsp[0].fval));}
#line 2612 "semantic.tab.c"
    break;

  case 75:
#line 219 "semantic.y"
                                                                {(yyval.tnode) = setLeaf();}
#line 2618 "semantic.tab.c"
    break;

  case 76:
#line 222 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(CALL, (yyvsp[-3].tnode), (yyvsp[-1].tnode));}
#line 2624 "semantic.tab.c"
    break;

  case 77:
#line 227 "semantic.y"
                                                                {(yyval.tnode) = nullLeaf();}
#line 2630 "semantic.tab.c"
    break;

  case 78:
#line 228 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2636 "semantic.tab.c"
    break;

  case 79:
#line 231 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(SEQ, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2642 "semantic.tab.c"
    break;

  case 80:
#line 232 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2648 "semantic.tab.c"
    break;

  case 81:
#line 235 "semantic.y"
                                                                {(yyval.tnode) = BinaryNode(IN, (yyvsp[-2].tnode), (yyvsp[0].tnode));}
#line 2654 "semantic.tab.c"
    break;

  case 82:
#line 238 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(SETOP, (yyvsp[-1].tnode));  (yyval.tnode)->internal->op_specifier = (yyvsp[-3].ival);}
#line 2660 "semantic.tab.c"
    break;

  case 83:
#line 239 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(EXISTS, (yyvsp[-1].tnode));}
#line 2666 "semantic.tab.c"
    break;

  case 84:
#line 243 "semantic.y"
                                                                {
                                                                  sym *ref = findRef((yyvsp[0].sval));
                                                                  if (ref == NULL) (yyval.tnode) = idLeaf(insert((yyvsp[0].sval), curr_scope));
                                                                  else {(yyval.tnode) = idLeaf(ref); free((yyvsp[0].sval));}
                                                                }
#line 2676 "semantic.tab.c"
    break;

  case 85:
#line 248 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2682 "semantic.tab.c"
    break;

  case 86:
#line 249 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2688 "semantic.tab.c"
    break;

  case 87:
#line 250 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[-1].tnode);}
#line 2694 "semantic.tab.c"
    break;

  case 88:
#line 251 "semantic.y"
                                                                {(yyval.tnode) = (yyvsp[0].tnode);}
#line 2700 "semantic.tab.c"
    break;

  case 89:
#line 255 "semantic.y"
                                                                {
                                                                  sym *ref = findRef((yyvsp[0].sval));
                                                                  if (ref == NULL) (yyval.tnode) = idLeaf(insert((yyvsp[0].sval), curr_scope));
                                                                  else {(yyval.tnode) = idLeaf(ref); free((yyvsp[0].sval));}
                                                                }
#line 2710 "semantic.tab.c"
    break;

  case 90:
#line 260 "semantic.y"
                                                                {(yyval.tnode) = UnaryNode(SETOP, (yyvsp[-1].tnode));  (yyval.tnode)->internal->op_specifier = (yyvsp[-3].ival);}
#line 2716 "semantic.tab.c"
    break;


#line 2720 "semantic.tab.c"

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
#line 265 "semantic.y"

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
