/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     CONSTANT_INT = 262,
     CONSTANT_DOUBLE = 263,
     PTR_OP = 264,
     INC_OP = 265,
     DEC_OP = 266,
     LEFT_OP = 267,
     RIGHT_OP = 268,
     LE_OP = 269,
     GE_OP = 270,
     EQ_OP = 271,
     NE_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     MUL_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     ADD_ASSIGN = 278,
     SUB_ASSIGN = 279,
     LEFT_ASSIGN = 280,
     RIGHT_ASSIGN = 281,
     AND_ASSIGN = 282,
     XOR_ASSIGN = 283,
     OR_ASSIGN = 284,
     TYPE_NAME = 285,
     CHAR = 286,
     INT = 287,
     DOUBLE = 288,
     VOID = 289,
     BOOL = 290,
     CASE = 291,
     IF = 292,
     ELSE = 293,
     SWITCH = 294,
     WHILE = 295,
     DO = 296,
     FOR = 297,
     GOTO = 298,
     CONTINUE = 299,
     BREAK = 300,
     RETURN = 301,
     TRUE = 302,
     FALSE = 303,
     LOWER_THAN_ELSE = 304
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define CONSTANT_INT 262
#define CONSTANT_DOUBLE 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPE_NAME 285
#define CHAR 286
#define INT 287
#define DOUBLE 288
#define VOID 289
#define BOOL 290
#define CASE 291
#define IF 292
#define ELSE 293
#define SWITCH 294
#define WHILE 295
#define DO 296
#define FOR 297
#define GOTO 298
#define CONTINUE 299
#define BREAK 300
#define RETURN 301
#define TRUE 302
#define FALSE 303
#define LOWER_THAN_ELSE 304




/* Copy the first part of user declarations.  */
#line 1 "c.y"

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
#include "Tree.h"

extern char *yytext;
extern int yylineno;

syntaxTree *root;
int yylex(void);
int yyerror(const char*); 


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 17 "c.y"
{
	struct syntaxTree *st;
}
/* Line 193 of yacc.c.  */
#line 213 "y.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 226 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   717

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  154
/* YYNRULES -- Number of states.  */
#define YYNSTATES  269

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,     2,    63,    56,     2,
      71,    72,    61,    60,    50,    59,    55,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    49,
      64,    52,    65,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    67,    70,    58,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    73
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      21,    26,    30,    35,    38,    41,    43,    47,    49,    52,
      55,    58,    60,    62,    64,    66,    68,    72,    76,    80,
      82,    86,    90,    92,    96,   100,   102,   106,   110,   114,
     118,   120,   124,   128,   130,   134,   136,   140,   142,   146,
     148,   152,   154,   158,   160,   164,   166,   168,   170,   172,
     174,   176,   178,   180,   182,   184,   186,   188,   192,   195,
     199,   201,   205,   207,   211,   213,   215,   217,   219,   221,
     223,   227,   232,   237,   241,   246,   251,   255,   257,   261,
     264,   267,   269,   271,   275,   279,   282,   286,   290,   295,
     299,   304,   307,   311,   315,   320,   322,   326,   331,   333,
     336,   340,   345,   348,   350,   353,   357,   360,   362,   364,
     366,   368,   370,   372,   376,   381,   384,   388,   390,   393,
     395,   397,   399,   402,   408,   416,   422,   428,   436,   443,
     451,   458,   466,   470,   473,   476,   479,   483,   485,   488,
     490,   492,   497,   501,   503
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      75,     0,    -1,   117,    -1,     3,    -1,    47,    -1,    48,
      -1,     7,    -1,     8,    -1,    71,    93,    72,    -1,    76,
      -1,    77,    53,    93,    54,    -1,    77,    71,    72,    -1,
      77,    71,    78,    72,    -1,    77,    10,    -1,    77,    11,
      -1,    91,    -1,    78,    50,    91,    -1,    77,    -1,    10,
      79,    -1,    11,    79,    -1,    80,    79,    -1,    60,    -1,
      59,    -1,    58,    -1,    57,    -1,    79,    -1,    81,    61,
      79,    -1,    81,    62,    79,    -1,    81,    63,    79,    -1,
      81,    -1,    82,    60,    81,    -1,    82,    59,    81,    -1,
      82,    -1,    83,    12,    82,    -1,    83,    13,    82,    -1,
      83,    -1,    84,    64,    83,    -1,    84,    65,    83,    -1,
      84,    14,    83,    -1,    84,    15,    83,    -1,    84,    -1,
      85,    16,    84,    -1,    85,    17,    84,    -1,    85,    -1,
      86,    56,    85,    -1,    86,    -1,    87,    66,    86,    -1,
      87,    -1,    88,    67,    87,    -1,    88,    -1,    89,    18,
      88,    -1,    89,    -1,    90,    19,    89,    -1,    90,    -1,
      79,    92,    91,    -1,    52,    -1,    20,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,    29,    -1,    91,    -1,    93,    50,
      91,    -1,    97,    49,    -1,    97,    95,    49,    -1,    96,
      -1,    95,    50,    96,    -1,    98,    -1,    98,    52,   103,
      -1,    34,    -1,    31,    -1,    32,    -1,    33,    -1,    35,
      -1,     3,    -1,    71,    98,    72,    -1,    98,    53,    91,
      54,    -1,    98,    53,    61,    54,    -1,    98,    53,    54,
      -1,    98,    71,    99,    72,    -1,    98,    71,   101,    72,
      -1,    98,    71,    72,    -1,   100,    -1,    99,    50,   100,
      -1,    97,    98,    -1,    97,   102,    -1,    97,    -1,     3,
      -1,   101,    50,     3,    -1,    71,   102,    72,    -1,    53,
      54,    -1,    53,    91,    54,    -1,   102,    53,    54,    -1,
     102,    53,    91,    54,    -1,    53,    61,    54,    -1,   102,
      53,    61,    54,    -1,    71,    72,    -1,    71,    99,    72,
      -1,   102,    71,    72,    -1,   102,    71,    99,    72,    -1,
      91,    -1,    69,   104,    70,    -1,    69,   104,    50,    70,
      -1,   103,    -1,   105,   103,    -1,   104,    50,   103,    -1,
     104,    50,   105,   103,    -1,   106,    52,    -1,   107,    -1,
     106,   107,    -1,    53,    90,    54,    -1,    55,     3,    -1,
     109,    -1,   110,    -1,   113,    -1,   114,    -1,   115,    -1,
     116,    -1,     3,    51,   108,    -1,    36,    90,    51,   108,
      -1,    69,    70,    -1,    69,   111,    70,    -1,   112,    -1,
     111,   112,    -1,    94,    -1,   108,    -1,    49,    -1,    93,
      49,    -1,    37,    71,    93,    72,   108,    -1,    37,    71,
      93,    72,   108,    38,   108,    -1,    39,    71,    93,    72,
     108,    -1,    40,    71,    93,    72,   108,    -1,    41,   108,
      40,    71,    93,    72,    49,    -1,    42,    71,   113,   113,
      72,   108,    -1,    42,    71,   113,   113,    93,    72,   108,
      -1,    42,    71,    94,   113,    72,   108,    -1,    42,    71,
      94,   113,    93,    72,   108,    -1,    43,     3,    49,    -1,
      44,    49,    -1,    45,    49,    -1,    46,    49,    -1,    46,
      93,    49,    -1,   118,    -1,   117,   118,    -1,   119,    -1,
      94,    -1,    97,    98,   120,   110,    -1,    97,    98,   110,
      -1,    94,    -1,   120,    94,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    63,    63,    70,    74,    80,    85,    92,    97,   104,
     107,   111,   115,   119,   123,   130,   133,   140,   144,   148,
     152,   159,   162,   165,   168,   175,   178,   181,   184,   191,
     194,   197,   204,   207,   211,   219,   222,   225,   228,   232,
     240,   243,   247,   254,   257,   264,   267,   274,   277,   284,
     287,   295,   298,   306,   310,   317,   320,   324,   328,   332,
     336,   340,   344,   348,   352,   356,   364,   368,   376,   379,
     386,   389,   395,   398,   406,   409,   412,   415,   418,   426,
     430,   434,   439,   443,   447,   451,   455,   464,   467,   473,
     476,   479,   485,   488,   494,   497,   500,   503,   506,   509,
     512,   515,   518,   521,   524,   531,   534,   538,   545,   548,
     551,   554,   560,   566,   569,   575,   578,   585,   588,   591,
     594,   597,   600,   607,   610,   617,   620,   626,   629,   635,
     638,   644,   647,   654,   657,   660,   667,   670,   673,   676,
     679,   682,   689,   692,   695,   698,   701,   707,   710,   716,
     721,   729,   732,   738,   741
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "CONSTANT_INT", "CONSTANT_DOUBLE", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "CHAR", "INT", "DOUBLE", "VOID",
  "BOOL", "CASE", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "TRUE", "FALSE", "';'", "','", "':'",
  "'='", "'['", "']'", "'.'", "'&'", "'!'", "'~'", "'-'", "'+'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'{'", "'}'", "'('",
  "')'", "LOWER_THAN_ELSE", "$accept", "Program", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "init_declarator_list", "init_declarator",
  "type_specifier", "declarator", "parameter_list",
  "parameter_declaration", "identifier_list", "abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    59,
      44,    58,    61,    91,    93,    46,    38,    33,   126,    45,
      43,    42,    47,    37,    60,    62,    94,   124,    63,   123,
     125,    40,    41,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    74,    75,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    77,    77,    78,    78,    79,    79,    79,
      79,    80,    80,    80,    80,    81,    81,    81,    81,    82,
      82,    82,    83,    83,    83,    84,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    97,    97,    98,
      98,    98,    98,    98,    98,    98,    98,    99,    99,   100,
     100,   100,   101,   101,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   103,   103,   103,   104,   104,
     104,   104,   105,   106,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   114,   114,   114,   115,   115,   115,   115,
     115,   115,   116,   116,   116,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     2,     2,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       3,     4,     4,     3,     4,     4,     3,     1,     3,     2,
       2,     1,     1,     3,     3,     2,     3,     3,     4,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     2,
       3,     4,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     2,     3,     1,     2,     1,
       1,     1,     2,     5,     7,     5,     5,     7,     6,     7,
       6,     7,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    75,    76,    77,    74,    78,     0,   150,     0,     2,
     147,   149,     1,    79,    68,     0,     0,    70,    72,   148,
       0,    69,     0,     0,     0,     0,     0,   153,     0,   152,
       0,    80,    71,    72,     3,     6,     7,     0,     0,     4,
       5,    24,    23,    22,    21,     0,     0,     9,    17,    25,
       0,    29,    32,    35,    40,    43,    45,    47,    49,    51,
      53,   105,    73,    83,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   131,   125,    66,
       0,   129,   130,   117,   118,     0,   127,   119,   120,   121,
     122,    92,    86,    91,     0,    87,     0,   154,   151,    18,
      19,     0,     0,   108,     0,     0,     0,   113,     0,    13,
      14,     0,     0,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    55,     0,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,    81,     0,    25,     0,     0,
       0,     0,     0,     0,     0,   143,   144,   145,     0,   132,
       0,   126,   128,     0,     0,    89,    90,     0,    84,     0,
      85,     0,   116,     0,   106,   109,   112,   114,     8,     0,
      11,     0,    15,    54,    26,    27,    28,    31,    30,    33,
      34,    38,    39,    36,    37,    41,    42,    44,    46,    48,
      50,    52,   123,     0,     0,     0,     0,     0,     0,     0,
     142,   146,    67,    95,     0,     0,   101,     0,     0,     0,
       0,    88,    93,   115,   107,   110,     0,    10,     0,    12,
     124,     0,     0,     0,     0,     0,     0,    99,    96,   102,
      94,    97,     0,     0,   103,     0,   111,    16,   133,   135,
     136,     0,     0,     0,     0,     0,   100,    98,   104,     0,
       0,   140,     0,   138,     0,   134,   137,   141,   139
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    47,    48,   181,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    79,   124,    80,
       7,    16,    17,    28,    20,    94,    95,    96,   166,    62,
     104,   105,   106,   107,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     9,    10,    11,    30
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -144
static const yytype_int16 yypact[] =
{
     183,  -144,  -144,  -144,  -144,  -144,    15,  -144,     4,   183,
    -144,  -144,  -144,  -144,  -144,     5,   133,  -144,   434,  -144,
      20,  -144,     5,   575,   486,   244,    94,  -144,     4,  -144,
     112,  -144,  -144,    97,  -144,  -144,  -144,   646,   646,  -144,
    -144,  -144,  -144,  -144,  -144,   470,   646,  -144,    33,   243,
     646,   127,   126,   195,    23,   205,   -34,   -38,   -36,    16,
      26,  -144,  -144,  -144,    11,    14,     3,   646,    27,    53,
      66,   374,    68,   177,   124,   143,   315,  -144,  -144,  -144,
     207,  -144,  -144,  -144,  -144,   309,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,    46,   -31,  -144,   -30,  -144,  -144,  -144,
    -144,   646,   199,  -144,   -23,   575,   122,  -144,   -15,  -144,
    -144,   646,    22,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,  -144,  -144,  -144,   646,  -144,   646,   646,   646,   646,
     646,   646,   646,   646,   646,   646,   646,   646,   646,   646,
     646,   646,   646,   646,  -144,  -144,   374,  -144,    -5,   646,
     646,   646,   171,   393,   197,  -144,  -144,  -144,   247,  -144,
     646,  -144,  -144,   545,    81,   105,   116,   183,  -144,   216,
    -144,    -6,  -144,   451,  -144,  -144,  -144,  -144,  -144,    10,
    -144,   -11,  -144,  -144,  -144,  -144,  -144,   127,   127,   126,
     126,   195,   195,   195,   195,    23,    23,   205,   -34,   -38,
     -36,    16,  -144,   374,   -10,     2,    28,   152,   640,   640,
    -144,  -144,  -144,  -144,   194,   204,  -144,    51,    50,   560,
     128,  -144,  -144,  -144,  -144,  -144,   575,  -144,   646,  -144,
    -144,   374,   374,   374,   646,    48,   202,  -144,  -144,  -144,
    -144,  -144,   228,   240,  -144,    82,  -144,  -144,   215,  -144,
    -144,    83,   374,   106,   374,   107,  -144,  -144,  -144,   374,
     251,  -144,   374,  -144,   374,  -144,  -144,  -144,  -144
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,  -144,    98,  -144,   169,   174,   109,
     170,   172,   181,   168,   182,   167,   -51,   -22,  -144,   -40,
     -13,  -144,   305,     0,    -4,  -143,   161,  -144,   165,   -42,
    -144,   157,  -144,   225,   -61,  -144,   100,  -144,   248,  -142,
    -144,  -144,  -144,  -144,   323,  -144,  -144
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
       8,    61,    65,   103,    18,    27,   108,    13,    13,     8,
     152,   209,    81,   143,   143,    12,   148,    97,    33,   167,
     169,   217,   139,    61,    33,    34,    93,   173,   140,    35,
      36,   141,    37,    38,   142,   160,   158,   133,   134,   228,
     160,   168,   170,   109,   110,   143,   203,   174,   223,    13,
     171,    34,   160,    14,   146,    35,    36,   178,    37,    38,
     160,   229,   231,   175,   227,   144,   235,   236,   145,    39,
      40,   179,    81,    24,   232,    15,    15,   245,   160,    41,
      42,    43,    44,    61,    13,   202,   111,   135,   136,   165,
     182,    26,    31,    46,   180,    39,    40,    91,   149,   163,
     233,   167,   183,   219,   112,    41,    42,    43,    44,   204,
     205,   206,     1,     2,     3,     4,     5,   164,    29,    46,
     252,   220,   240,   239,   150,     1,     2,     3,     4,     5,
      98,   225,   167,   160,   163,    99,   100,   151,   212,   153,
     208,   215,   230,     1,     2,     3,     4,     5,   125,    23,
      24,    61,   164,   216,   258,   260,   160,   160,    24,     1,
       2,     3,     4,     5,    93,   147,    92,    93,    26,   219,
     248,   249,   250,   155,   176,   101,    26,   102,   262,   264,
     154,    25,    21,    22,   246,   129,   130,   220,   126,   127,
     128,   261,   156,   263,   251,   253,   255,   243,   265,   147,
     244,   267,   172,   268,    61,    34,   247,   131,   132,    35,
      36,   207,    37,    38,     1,     2,     3,     4,     5,   222,
      93,   137,   138,   234,   184,   185,   186,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   191,   192,   193,   194,   210,    66,   237,    39,
      40,    35,    36,   259,    37,    38,   159,   160,   238,    41,
      42,    43,    44,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,    46,   254,     1,     2,     3,     4,     5,
      67,    68,   256,    69,    70,    71,    72,    73,    74,    75,
      76,    39,    40,    77,   257,   123,   211,   160,   187,   188,
     266,    41,    42,    43,    44,   189,   190,   195,   196,   199,
     201,   197,    66,    25,    78,    46,    35,    36,    34,    37,
      38,   198,    35,    36,   200,    37,    38,    32,   221,   218,
     226,   177,    19,   162,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,    67,    68,     0,    69,    70,
      71,    72,    73,    74,    75,    76,    39,    40,    77,     0,
       0,     0,    39,    40,   157,     0,    41,    42,    43,    44,
       0,     0,    41,    42,    43,    44,     0,    66,    25,   161,
      46,    35,    36,     0,    37,    38,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    34,     0,     0,     0,
      35,    36,     0,    37,    38,     0,     0,     0,     0,     0,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,    39,    40,    77,     1,     2,     3,     4,     5,     0,
       0,    41,    42,    43,    44,     0,     0,     0,     0,     0,
      39,    40,    77,    25,     0,    46,     0,     0,     0,     0,
      41,    42,    43,    44,    34,     0,     0,     0,    35,    36,
       0,    37,    38,     0,    46,     1,     2,     3,     4,     5,
       0,     0,     0,    34,     0,     0,     0,    35,    36,     0,
      37,    38,     0,     0,     0,     0,    23,    24,     0,    34,
       0,     0,     0,    35,    36,     0,    37,    38,    39,    40,
       0,     0,     0,    25,   101,    26,   102,     0,    41,    42,
      43,    44,     0,     0,     0,     0,     0,    39,    40,     0,
      45,   224,    46,   101,     0,   102,     0,    41,    42,    43,
      44,     0,     0,    39,    40,     0,     0,     0,     0,    45,
      63,    46,     0,    41,    42,    43,    44,    64,    34,     0,
       0,     0,    35,    36,     0,    37,    38,    46,     0,     0,
       0,     0,     0,    34,     0,     0,     0,    35,    36,     0,
      37,    38,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,    35,    36,     0,    37,    38,     0,     0,     0,
       0,     0,    39,    40,     0,     0,     0,     0,     0,   213,
       0,     0,    41,    42,    43,    44,   214,    39,    40,     0,
       0,     0,     0,     0,   241,     0,    46,    41,    42,    43,
      44,   242,    39,    40,     0,     0,     0,     0,     0,     0,
       0,    46,    41,    42,    43,    44,     0,     0,     0,     0,
       0,     0,     0,    34,    45,     0,    46,    35,    36,    34,
      37,    38,     0,    35,    36,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    77,
       0,     0,     0,    39,    40,     0,     0,    41,    42,    43,
      44,     0,     0,    41,    42,    43,    44,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
       0,    23,    24,    45,     8,    18,    46,     3,     3,     9,
      71,   153,    25,    19,    19,     0,    67,    30,    22,    50,
      50,   164,    56,    45,    28,     3,    26,    50,    66,     7,
       8,    67,    10,    11,    18,    50,    76,    14,    15,    50,
      50,    72,    72,    10,    11,    19,    51,    70,    54,     3,
     101,     3,    50,    49,    51,     7,     8,    72,    10,    11,
      50,    72,    72,   105,    54,    54,   208,   209,    54,    47,
      48,   111,    85,    53,    72,    71,    71,   220,    50,    57,
      58,    59,    60,   105,     3,   146,    53,    64,    65,    93,
     112,    71,    72,    71,    72,    47,    48,     3,    71,    53,
      72,    50,   124,    53,    71,    57,    58,    59,    60,   149,
     150,   151,    31,    32,    33,    34,    35,    71,    18,    71,
      72,    71,    72,    72,    71,    31,    32,    33,    34,    35,
      30,   173,    50,    50,    53,    37,    38,    71,   160,    71,
     153,   163,   203,    31,    32,    33,    34,    35,    50,    52,
      53,   173,    71,    72,    72,    72,    50,    50,    53,    31,
      32,    33,    34,    35,   164,    67,    72,   167,    71,    53,
     231,   232,   233,    49,    52,    53,    71,    55,    72,    72,
       3,    69,    49,    50,   226,    59,    60,    71,    61,    62,
      63,   252,    49,   254,   234,   235,   236,   219,   259,   101,
      72,   262,     3,   264,   226,     3,   228,    12,    13,     7,
       8,    40,    10,    11,    31,    32,    33,    34,    35,     3,
     220,    16,    17,    71,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   133,   134,   135,   136,    49,     3,    54,    47,
      48,     7,     8,    38,    10,    11,    49,    50,    54,    57,
      58,    59,    60,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    71,    72,    31,    32,    33,    34,    35,
      36,    37,    54,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    54,    52,    49,    50,   129,   130,
      49,    57,    58,    59,    60,   131,   132,   137,   138,   141,
     143,   139,     3,    69,    70,    71,     7,     8,     3,    10,
      11,   140,     7,     8,   142,    10,    11,    22,   167,   164,
     173,   106,     9,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      -1,    -1,    47,    48,    49,    -1,    57,    58,    59,    60,
      -1,    -1,    57,    58,    59,    60,    -1,     3,    69,    70,
      71,     7,     8,    -1,    10,    11,    71,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,
       7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,
      36,    37,    -1,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    31,    32,    33,    34,    35,    -1,
      -1,    57,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      47,    48,    49,    69,    -1,    71,    -1,    -1,    -1,    -1,
      57,    58,    59,    60,     3,    -1,    -1,    -1,     7,     8,
      -1,    10,    11,    -1,    71,    31,    32,    33,    34,    35,
      -1,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    52,    53,    -1,     3,
      -1,    -1,    -1,     7,     8,    -1,    10,    11,    47,    48,
      -1,    -1,    -1,    69,    53,    71,    55,    -1,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      69,    70,    71,    53,    -1,    55,    -1,    57,    58,    59,
      60,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    69,
      54,    71,    -1,    57,    58,    59,    60,    61,     3,    -1,
      -1,    -1,     7,     8,    -1,    10,    11,    71,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    57,    58,    59,    60,    61,    47,    48,    -1,
      -1,    -1,    -1,    -1,    54,    -1,    71,    57,    58,    59,
      60,    61,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    57,    58,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    69,    -1,    71,     7,     8,     3,
      10,    11,    -1,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,    47,    48,    -1,    -1,    57,    58,    59,
      60,    -1,    -1,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    71
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    32,    33,    34,    35,    75,    94,    97,   117,
     118,   119,     0,     3,    49,    71,    95,    96,    98,   118,
      98,    49,    50,    52,    53,    69,    71,    94,    97,   110,
     120,    72,    96,    98,     3,     7,     8,    10,    11,    47,
      48,    57,    58,    59,    60,    69,    71,    76,    77,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,   103,    54,    61,    91,     3,    36,    37,    39,
      40,    41,    42,    43,    44,    45,    46,    49,    70,    91,
      93,    94,   108,   109,   110,   111,   112,   113,   114,   115,
     116,     3,    72,    97,    99,   100,   101,    94,   110,    79,
      79,    53,    55,   103,   104,   105,   106,   107,    93,    10,
      11,    53,    71,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    52,    92,    79,    61,    62,    63,    59,
      60,    12,    13,    14,    15,    64,    65,    16,    17,    56,
      66,    67,    18,    19,    54,    54,    51,    79,    90,    71,
      71,    71,   108,    71,     3,    49,    49,    49,    93,    49,
      50,    70,   112,    53,    71,    98,   102,    50,    72,    50,
      72,    90,     3,    50,    70,   103,    52,   107,    72,    93,
      72,    78,    91,    91,    79,    79,    79,    81,    81,    82,
      82,    83,    83,    83,    83,    84,    84,    85,    86,    87,
      88,    89,   108,    51,    93,    93,    93,    40,    94,   113,
      49,    49,    91,    54,    61,    91,    72,    99,   102,    53,
      71,   100,     3,    54,    70,   103,   105,    54,    50,    72,
     108,    72,    72,    72,    71,   113,   113,    54,    54,    72,
      72,    54,    61,    91,    72,    99,   103,    91,   108,   108,
     108,    93,    72,    93,    72,    93,    54,    54,    72,    38,
      72,   108,    72,   108,    72,   108,    49,   108,   108
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

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
#line 63 "c.y"
    {
		root = createTree("Program",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 3:
#line 70 "c.y"
    {
		(yyval.st) = createTree("primary_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 4:
#line 74 "c.y"
    {
		(yyval.st) = createTree("primary_expression",1,(yyvsp[(1) - (1)].st));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
	}
    break;

  case 5:
#line 80 "c.y"
    {
		(yyval.st) = createTree("primary_expression",1,(yyvsp[(1) - (1)].st));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
	}
    break;

  case 6:
#line 85 "c.y"
    {
		//printf("%d",$1->int_value);
		(yyval.st) = createTree("primary_expression",1,(yyvsp[(1) - (1)].st));
		// $$->type = "int";
		// $$->int_value = $1->int_value;
		
	}
    break;

  case 7:
#line 92 "c.y"
    {
		(yyval.st) = createTree("primary_expression",1,(yyvsp[(1) - (1)].st));
		// $$->type = "double";
		// $$->double_value = $1->double_value;
	}
    break;

  case 8:
#line 97 "c.y"
    {
		(yyval.st) = createTree("primary_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 9:
#line 104 "c.y"
    {
		(yyval.st) = createTree("postfix_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 10:
#line 107 "c.y"
    {
		(yyval.st) = createTree("postfix_expression",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
		//数组调用
	}
    break;

  case 11:
#line 111 "c.y"
    {
		(yyval.st) = createTree("postfix_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
		//函数调用
	}
    break;

  case 12:
#line 115 "c.y"
    {
		(yyval.st) = createTree("postfix_expression",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
		//函数调用
	}
    break;

  case 13:
#line 119 "c.y"
    {
		//++
		(yyval.st) = createTree("postfix_expression",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 14:
#line 123 "c.y"
    {
		//--
		(yyval.st) = createTree("postfix_expression",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 15:
#line 130 "c.y"
    {
		(yyval.st) = createTree("argument_expression_list",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 16:
#line 133 "c.y"
    {
		(yyval.st) = createTree("argument_expression_list",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 17:
#line 140 "c.y"
    {
		//printf("postfix");
		(yyval.st) = createTree("unary_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 18:
#line 144 "c.y"
    {
		//++
		(yyval.st) = createTree("unary_expression",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 19:
#line 148 "c.y"
    {
		//--
		(yyval.st) = createTree("unary_expression",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 20:
#line 152 "c.y"
    {
		(yyval.st) = createTree("unary_expression",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 21:
#line 159 "c.y"
    {
		(yyval.st) = createTree("unary_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 22:
#line 162 "c.y"
    {
		(yyval.st) = createTree("unary_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 23:
#line 165 "c.y"
    {
		(yyval.st) = createTree("unary_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 24:
#line 168 "c.y"
    {
		(yyval.st) = createTree("unary_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 25:
#line 175 "c.y"
    {
		(yyval.st) = createTree("multiplicative_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 26:
#line 178 "c.y"
    {
		(yyval.st) = createTree("multiplicative_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 27:
#line 181 "c.y"
    {
		(yyval.st) = createTree("multiplicative_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 28:
#line 184 "c.y"
    {
		(yyval.st) = createTree("multiplicative_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 29:
#line 191 "c.y"
    {
		(yyval.st) = createTree("additive_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 30:
#line 194 "c.y"
    {
		(yyval.st) = createTree("additive_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 31:
#line 197 "c.y"
    {
		(yyval.st) = createTree("additive_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 32:
#line 204 "c.y"
    {
		(yyval.st) = createTree("shift_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 33:
#line 207 "c.y"
    {
		//<<
		(yyval.st) = createTree("shift_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 34:
#line 211 "c.y"
    {
		//<<
		(yyval.st) = createTree("shift_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 35:
#line 219 "c.y"
    {
		(yyval.st) = createTree("relational_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 36:
#line 222 "c.y"
    {
		(yyval.st) = createTree("relational_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 37:
#line 225 "c.y"
    {
		(yyval.st) = createTree("relational_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 38:
#line 228 "c.y"
    {
		// <= 
		(yyval.st) = createTree("relational_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 39:
#line 232 "c.y"
    {
		// >=
		(yyval.st) = createTree("relational_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 40:
#line 240 "c.y"
    {
		(yyval.st) = createTree("equality_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 41:
#line 243 "c.y"
    {
		// ==
		(yyval.st) = createTree("equality_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 42:
#line 247 "c.y"
    {
		// !=
		(yyval.st) = createTree("equality_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 43:
#line 254 "c.y"
    {
		(yyval.st) = createTree("and_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 44:
#line 257 "c.y"
    {
		(yyval.st) = createTree("and_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 45:
#line 264 "c.y"
    {
		(yyval.st) = createTree("exclusive_or_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 46:
#line 267 "c.y"
    {
		(yyval.st) = createTree("exclusive_or_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 47:
#line 274 "c.y"
    {
		(yyval.st) = createTree("inclusive_or_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 48:
#line 277 "c.y"
    {
		(yyval.st) = createTree("inclusive_or_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 49:
#line 284 "c.y"
    {
		(yyval.st) = createTree("logical_and_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 50:
#line 287 "c.y"
    {
		//&&
		(yyval.st) = createTree("logical_and_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 51:
#line 295 "c.y"
    {
		(yyval.st) = createTree("logical_or_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 52:
#line 298 "c.y"
    {
		//||
		(yyval.st) = createTree("logical_or_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 53:
#line 306 "c.y"
    {
		//条件表达式
		(yyval.st) = createTree("assignment_expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 54:
#line 310 "c.y"
    {
		(yyval.st) = createTree("assignment_expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 55:
#line 317 "c.y"
    {
		(yyval.st) = createTree("assignment_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 56:
#line 320 "c.y"
    {
		//*=
		(yyval.st) = createTree("assignment_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 57:
#line 324 "c.y"
    {
		// /=
		(yyval.st) = createTree("assignment_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 58:
#line 328 "c.y"
    {
		// %=
		(yyval.st) = createTree("assignment_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 59:
#line 332 "c.y"
    {
		// += 
		(yyval.st) = createTree("assignment_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 60:
#line 336 "c.y"
    {
		// -=
		(yyval.st) = createTree("assignment_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 61:
#line 340 "c.y"
    {
		// <<=
		(yyval.st) = createTree("assignment_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 62:
#line 344 "c.y"
    {
		// >>=
		(yyval.st) = createTree("assignment_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 63:
#line 348 "c.y"
    {
		// &=
		(yyval.st) = createTree("assignment_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 64:
#line 352 "c.y"
    {
		// ^=
		(yyval.st) = createTree("assignment_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 65:
#line 356 "c.y"
    {
		// |=
		(yyval.st) = createTree("assignment_operator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 66:
#line 364 "c.y"
    {
		//赋值表达式
		(yyval.st) = createTree("expression",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 67:
#line 368 "c.y"
    {
		//逗号表达式
		(yyval.st) = createTree("expression",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 68:
#line 376 "c.y"
    {
		(yyval.st) = createTree("declaration",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st)); //?
	}
    break;

  case 69:
#line 379 "c.y"
    {
		(yyval.st) = createTree("declaration",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 70:
#line 386 "c.y"
    {
		(yyval.st) = createTree("init_declarator_list",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 71:
#line 389 "c.y"
    {
		(yyval.st) = createTree("init_declarator_list",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 72:
#line 395 "c.y"
    {
		(yyval.st) = createTree("init_declarator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 73:
#line 398 "c.y"
    {
		(yyval.st) = createTree("init_declarator",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 74:
#line 406 "c.y"
    {
		(yyval.st) = createTree("type_specifier",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 75:
#line 409 "c.y"
    {
		(yyval.st) = createTree("type_specifier",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 76:
#line 412 "c.y"
    {
		(yyval.st) = createTree("type_specifier",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 77:
#line 415 "c.y"
    {
		(yyval.st) = createTree("type_specifier",1,(yyvsp[(1) - (1)].st));	
	}
    break;

  case 78:
#line 418 "c.y"
    {
		(yyval.st) = createTree("type_specifier",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 79:
#line 426 "c.y"
    {
		//变量
		(yyval.st) = createTree("declarator",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 80:
#line 430 "c.y"
    {
		//.....
		(yyval.st) = createTree("declarator",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 81:
#line 434 "c.y"
    {
		//数组
		//printf("assignment_expression");
		(yyval.st) = createTree("declarator",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
	}
    break;

  case 82:
#line 439 "c.y"
    {
		//....
		(yyval.st) = createTree("declarator",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
	}
    break;

  case 83:
#line 443 "c.y"
    {
		//数组
		(yyval.st) = createTree("declarator",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 84:
#line 447 "c.y"
    {
		//函数
		(yyval.st) = createTree("declarator",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
	}
    break;

  case 85:
#line 451 "c.y"
    {
		//函数
		(yyval.st) = createTree("declarator",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
	}
    break;

  case 86:
#line 455 "c.y"
    {
		//函数
		(yyval.st) = createTree("declarator",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 87:
#line 464 "c.y"
    {
		(yyval.st) = createTree("parameter_list",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 88:
#line 467 "c.y"
    {
		(yyval.st) = createTree("parameter_list",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 89:
#line 473 "c.y"
    {
		(yyval.st) = createTree("parameter_declaration",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 90:
#line 476 "c.y"
    {
		(yyval.st) = createTree("parameter_declaration",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 91:
#line 479 "c.y"
    {
		(yyval.st) = createTree("parameter_declaration",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 92:
#line 485 "c.y"
    {
		(yyval.st) = createTree("identifier_list",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 93:
#line 488 "c.y"
    {
		(yyval.st) = createTree("identifier_list",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 94:
#line 494 "c.y"
    {
		(yyval.st) = createTree("abstract_declarator",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 95:
#line 497 "c.y"
    {
		(yyval.st) = createTree("abstract_declarator",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 96:
#line 500 "c.y"
    {
		(yyval.st) = createTree("abstract_declarator",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 97:
#line 503 "c.y"
    {
		(yyval.st) = createTree("abstract_declarator",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 98:
#line 506 "c.y"
    {
		(yyval.st) = createTree("abstract_declarator",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
	}
    break;

  case 99:
#line 509 "c.y"
    {
		(yyval.st) = createTree("abstract_declarator",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 100:
#line 512 "c.y"
    {
		(yyval.st) = createTree("abstract_declarator",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
	}
    break;

  case 101:
#line 515 "c.y"
    {
		(yyval.st) = createTree("abstract_declarator",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 102:
#line 518 "c.y"
    {
		(yyval.st) = createTree("abstract_declarator",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 103:
#line 521 "c.y"
    {
		(yyval.st) = createTree("abstract_declarator",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 104:
#line 524 "c.y"
    {
		(yyval.st) = createTree("abstract_declarator",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
	}
    break;

  case 105:
#line 531 "c.y"
    {
		(yyval.st) = createTree("initializer",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 106:
#line 534 "c.y"
    {
		//列表初始化 {1,1,1}
		(yyval.st) = createTree("initializer",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 107:
#line 538 "c.y"
    {
		//列表初始化 {1,1,1,}
		(yyval.st) = createTree("initializer",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
	}
    break;

  case 108:
#line 545 "c.y"
    {
		(yyval.st) = createTree("initializer_list",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 109:
#line 548 "c.y"
    {
		(yyval.st) = createTree("initializer_list",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 110:
#line 551 "c.y"
    {
		(yyval.st) = createTree("initializer_list",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 111:
#line 554 "c.y"
    {
		(yyval.st) = createTree("initializer_list",3,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st));
	}
    break;

  case 112:
#line 560 "c.y"
    {
		(yyval.st) = createTree("designation",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 113:
#line 566 "c.y"
    {
		(yyval.st) = createTree("designator_list",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 114:
#line 569 "c.y"
    {
		(yyval.st) = createTree("designator_list",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 115:
#line 575 "c.y"
    {
		(yyval.st) = createTree("designator",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 116:
#line 578 "c.y"
    {
		(yyval.st) = createTree("designator",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 117:
#line 585 "c.y"
    {
		(yyval.st) = createTree("statement",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 118:
#line 588 "c.y"
    {
		(yyval.st) = createTree("statement",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 119:
#line 591 "c.y"
    {
		(yyval.st) = createTree("statement",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 120:
#line 594 "c.y"
    {
		(yyval.st) = createTree("statement",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 121:
#line 597 "c.y"
    {
		(yyval.st) = createTree("statement",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 122:
#line 600 "c.y"
    {
		(yyval.st) = createTree("statement",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 123:
#line 607 "c.y"
    {
		(yyval.st) = createTree("labeled_statement",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 124:
#line 610 "c.y"
    {
		(yyval.st) = createTree("labeled_statement",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
	}
    break;

  case 125:
#line 617 "c.y"
    {
		(yyval.st) = createTree("compound_statement",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 126:
#line 620 "c.y"
    {
		(yyval.st) = createTree("compound_statement",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 127:
#line 626 "c.y"
    {
		(yyval.st) = createTree("block_item_list",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 128:
#line 629 "c.y"
    {
		(yyval.st) = createTree("block_item_list",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 129:
#line 635 "c.y"
    {
		(yyval.st) = createTree("block_item",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 130:
#line 638 "c.y"
    {
		(yyval.st) = createTree("block_item",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 131:
#line 644 "c.y"
    {
		(yyval.st) = createTree("expression_statement",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 132:
#line 647 "c.y"
    {
		(yyval.st) = createTree("expression_statement",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 133:
#line 654 "c.y"
    {
		(yyval.st) = createTree("selection_statement",5,(yyvsp[(1) - (5)].st),(yyvsp[(2) - (5)].st),(yyvsp[(3) - (5)].st),(yyvsp[(4) - (5)].st),(yyvsp[(5) - (5)].st));
	}
    break;

  case 134:
#line 657 "c.y"
    {
		(yyval.st) = createTree("selection_statement",7,(yyvsp[(1) - (7)].st),(yyvsp[(2) - (7)].st),(yyvsp[(3) - (7)].st),(yyvsp[(4) - (7)].st),(yyvsp[(5) - (7)].st),(yyvsp[(6) - (7)].st),(yyvsp[(7) - (7)].st));
	}
    break;

  case 135:
#line 660 "c.y"
    {
		(yyval.st) = createTree("selection_statement",5,(yyvsp[(1) - (5)].st),(yyvsp[(2) - (5)].st),(yyvsp[(3) - (5)].st),(yyvsp[(4) - (5)].st),(yyvsp[(5) - (5)].st));
	}
    break;

  case 136:
#line 667 "c.y"
    {
		(yyval.st) = createTree("iteration_statement",5,(yyvsp[(1) - (5)].st),(yyvsp[(2) - (5)].st),(yyvsp[(3) - (5)].st),(yyvsp[(4) - (5)].st),(yyvsp[(5) - (5)].st));
	}
    break;

  case 137:
#line 670 "c.y"
    {
		(yyval.st) = createTree("iteration_statement",7,(yyvsp[(1) - (7)].st),(yyvsp[(2) - (7)].st),(yyvsp[(3) - (7)].st),(yyvsp[(4) - (7)].st),(yyvsp[(5) - (7)].st),(yyvsp[(6) - (7)].st),(yyvsp[(7) - (7)].st));
	}
    break;

  case 138:
#line 673 "c.y"
    {
		(yyval.st) = createTree("iteration_statement",6,(yyvsp[(1) - (6)].st),(yyvsp[(2) - (6)].st),(yyvsp[(3) - (6)].st),(yyvsp[(4) - (6)].st),(yyvsp[(5) - (6)].st),(yyvsp[(6) - (6)].st));
	}
    break;

  case 139:
#line 676 "c.y"
    {
		(yyval.st) = createTree("iteration_statement",7,(yyvsp[(1) - (7)].st),(yyvsp[(2) - (7)].st),(yyvsp[(3) - (7)].st),(yyvsp[(4) - (7)].st),(yyvsp[(5) - (7)].st),(yyvsp[(6) - (7)].st),(yyvsp[(7) - (7)].st));
	}
    break;

  case 140:
#line 679 "c.y"
    {
		(yyval.st) = createTree("iteration_statement",6,(yyvsp[(1) - (6)].st),(yyvsp[(2) - (6)].st),(yyvsp[(3) - (6)].st),(yyvsp[(4) - (6)].st),(yyvsp[(5) - (6)].st),(yyvsp[(6) - (6)].st));
	}
    break;

  case 141:
#line 682 "c.y"
    {
		(yyval.st) = createTree("iteration_statement",7,(yyvsp[(1) - (7)].st),(yyvsp[(2) - (7)].st),(yyvsp[(3) - (7)].st),(yyvsp[(4) - (7)].st),(yyvsp[(5) - (7)].st),(yyvsp[(6) - (7)].st),(yyvsp[(7) - (7)].st));
	}
    break;

  case 142:
#line 689 "c.y"
    {
		(yyval.st) = createTree("jump_statement",2,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st));
	}
    break;

  case 143:
#line 692 "c.y"
    {
		(yyval.st) = createTree("jump_statement",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 144:
#line 695 "c.y"
    {
		(yyval.st) = createTree("jump_statement",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 145:
#line 698 "c.y"
    {
		(yyval.st) = createTree("jump_statement",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 146:
#line 701 "c.y"
    {
		(yyval.st) = createTree("jump_statement",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 147:
#line 707 "c.y"
    {
		(yyval.st) = createTree("translation_unit",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 148:
#line 710 "c.y"
    {
		(yyval.st) = createTree("translation_unit",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;

  case 149:
#line 716 "c.y"
    {
		(yyval.st) = createTree("external_declaration",1,(yyvsp[(1) - (1)].st));
		//函数定义
		//printf("function_definition");
	}
    break;

  case 150:
#line 721 "c.y"
    {
		(yyval.st) = createTree("external_declaration",1,(yyvsp[(1) - (1)].st));
		//变量声明
		//printf("declaration");
	}
    break;

  case 151:
#line 729 "c.y"
    {
		(yyval.st) = createTree("function_definition",4,(yyvsp[(1) - (4)].st),(yyvsp[(2) - (4)].st),(yyvsp[(3) - (4)].st),(yyvsp[(4) - (4)].st));
	}
    break;

  case 152:
#line 732 "c.y"
    {
		(yyval.st) = createTree("function_definition",3,(yyvsp[(1) - (3)].st),(yyvsp[(2) - (3)].st),(yyvsp[(3) - (3)].st));
	}
    break;

  case 153:
#line 738 "c.y"
    {
		(yyval.st) = createTree("declaration_list",1,(yyvsp[(1) - (1)].st));
	}
    break;

  case 154:
#line 741 "c.y"
    {
		(yyval.st) = createTree("declaration_list",2,(yyvsp[(1) - (2)].st),(yyvsp[(2) - (2)].st));
	}
    break;


/* Line 1267 of yacc.c.  */
#line 2904 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 746 "c.y"


#include <stdio.h>

// extern char yytext[];
 int main()
 {

	const char* sFile="example.txt";
	FILE* fp=fopen(sFile, "r");
	if(fp==NULL)
	{
		printf("cannot open %s\n", sFile);
		return -1;
	}
	extern FILE* yyin;	
	yyin=fp;
	yyparse();
	printTree(root,0);
	// fclose(fp);
	return 0;
 }
int yyerror(char const *s)
{
	fflush(stdout);
	printf("Error: %sencountered at line number:%d\n", s, yylineno);
}
