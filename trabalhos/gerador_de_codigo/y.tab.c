/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "npr.y"


// Includes em C/C++ e outras definições.
#include <iostream>
#include <string>
#include <map>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Atributos {
  string v;
};

int linha = 1;
int coluna = 1;

// Tipo dos atributos: YYSTYPE é o tipo usado para os atributos.
#define YYSTYPE Atributos

void erro( string msg );
void print( string st );

// protótipo para o analisador léxico (gerado pelo lex)
int yylex();
void yyerror( const char* );


#line 101 "y.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ML_COMMENT = 258,              /* ML_COMMENT  */
    COMENTARIO = 259,              /* COMENTARIO  */
    _ID = 260,                     /* _ID  */
    _NUM = 261,                    /* _NUM  */
    _STRING = 262,                 /* _STRING  */
    _LET = 263,                    /* _LET  */
    _VAR = 264,                    /* _VAR  */
    _CONST = 265,                  /* _CONST  */
    _FOR = 266,                    /* _FOR  */
    _FUNCTION = 267,               /* _FUNCTION  */
    IF = 268,                      /* IF  */
    ELSE = 269,                    /* ELSE  */
    DO = 270,                      /* DO  */
    WHILE = 271,                   /* WHILE  */
    SWITCH = 272,                  /* SWITCH  */
    DEFAULT = 273,                 /* DEFAULT  */
    CASE = 274,                    /* CASE  */
    BREAK = 275,                   /* BREAK  */
    RETURN = 276                   /* RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define ML_COMMENT 258
#define COMENTARIO 259
#define _ID 260
#define _NUM 261
#define _STRING 262
#define _LET 263
#define _VAR 264
#define _CONST 265
#define _FOR 266
#define _FUNCTION 267
#define IF 268
#define ELSE 269
#define DO 270
#define WHILE 271
#define SWITCH 272
#define DEFAULT 273
#define CASE 274
#define BREAK 275
#define RETURN 276

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ML_COMMENT = 3,                 /* ML_COMMENT  */
  YYSYMBOL_COMENTARIO = 4,                 /* COMENTARIO  */
  YYSYMBOL__ID = 5,                        /* _ID  */
  YYSYMBOL__NUM = 6,                       /* _NUM  */
  YYSYMBOL__STRING = 7,                    /* _STRING  */
  YYSYMBOL__LET = 8,                       /* _LET  */
  YYSYMBOL__VAR = 9,                       /* _VAR  */
  YYSYMBOL__CONST = 10,                    /* _CONST  */
  YYSYMBOL__FOR = 11,                      /* _FOR  */
  YYSYMBOL__FUNCTION = 12,                 /* _FUNCTION  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_SWITCH = 17,                    /* SWITCH  */
  YYSYMBOL_DEFAULT = 18,                   /* DEFAULT  */
  YYSYMBOL_CASE = 19,                      /* CASE  */
  YYSYMBOL_BREAK = 20,                     /* BREAK  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_22_ = 22,                       /* '='  */
  YYSYMBOL_23_ = 23,                       /* '<'  */
  YYSYMBOL_24_ = 24,                       /* '>'  */
  YYSYMBOL_25_ = 25,                       /* '+'  */
  YYSYMBOL_26_ = 26,                       /* '-'  */
  YYSYMBOL_27_ = 27,                       /* '*'  */
  YYSYMBOL_28_ = 28,                       /* '/'  */
  YYSYMBOL_29_ = 29,                       /* '%'  */
  YYSYMBOL_30_ = 30,                       /* '['  */
  YYSYMBOL_31_ = 31,                       /* '('  */
  YYSYMBOL_32_ = 32,                       /* ';'  */
  YYSYMBOL_33_ = 33,                       /* ')'  */
  YYSYMBOL_34_ = 34,                       /* '{'  */
  YYSYMBOL_35_ = 35,                       /* '}'  */
  YYSYMBOL_36_ = 36,                       /* ','  */
  YYSYMBOL_37_ = 37,                       /* ':'  */
  YYSYMBOL_38_ = 38,                       /* ']'  */
  YYSYMBOL_39_ = 39,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 40,                  /* $accept  */
  YYSYMBOL_S = 41,                         /* S  */
  YYSYMBOL_CMDs = 42,                      /* CMDs  */
  YYSYMBOL_CMD = 43,                       /* CMD  */
  YYSYMBOL_STATEMENT = 44,                 /* STATEMENT  */
  YYSYMBOL_DECLARATIONS = 45,              /* DECLARATIONS  */
  YYSYMBOL_FUNCTION_DECLARATION = 46,      /* FUNCTION_DECLARATION  */
  YYSYMBOL_BLOCK = 47,                     /* BLOCK  */
  YYSYMBOL_VAR_CMD = 48,                   /* VAR_CMD  */
  YYSYMBOL_DECL_VARs = 49,                 /* DECL_VARs  */
  YYSYMBOL_DECL_VAR = 50,                  /* DECL_VAR  */
  YYSYMBOL_INITIALIZER = 51,               /* INITIALIZER  */
  YYSYMBOL_ASSIGNMENT_EXPRESSION = 52,     /* ASSIGNMENT_EXPRESSION  */
  YYSYMBOL_EXPRESSION_CMD = 53,            /* EXPRESSION_CMD  */
  YYSYMBOL_IF_CMD = 54,                    /* IF_CMD  */
  YYSYMBOL_ITERATION_CMD = 55,             /* ITERATION_CMD  */
  YYSYMBOL_FOR_E = 56,                     /* FOR_E  */
  YYSYMBOL_BREAK_CMD = 57,                 /* BREAK_CMD  */
  YYSYMBOL_RETURN_CMD = 58,                /* RETURN_CMD  */
  YYSYMBOL_SWITCH_CMD = 59,                /* SWITCH_CMD  */
  YYSYMBOL_CASE_BLOCK = 60,                /* CASE_BLOCK  */
  YYSYMBOL_CASE_CLAUSES = 61,              /* CASE_CLAUSES  */
  YYSYMBOL_CASE_CLAUSE = 62,               /* CASE_CLAUSE  */
  YYSYMBOL_DEFAULT_CASE = 63,              /* DEFAULT_CASE  */
  YYSYMBOL_EXPRESSION = 64,                /* EXPRESSION  */
  YYSYMBOL_LEFT_HAND = 65,                 /* LEFT_HAND  */
  YYSYMBOL_CALL_EXPRESSION = 66,           /* CALL_EXPRESSION  */
  YYSYMBOL_ARGUMENTS = 67,                 /* ARGUMENTS  */
  YYSYMBOL_ARGUMENT_LIST = 68,             /* ARGUMENT_LIST  */
  YYSYMBOL_NEW_EXPRESSION = 69,            /* NEW_EXPRESSION  */
  YYSYMBOL_E = 70,                         /* E  */
  YYSYMBOL_PRIMARY_EXPRESSION = 71,        /* PRIMARY_EXPRESSION  */
  YYSYMBOL_OBJECT_LITERAL = 72,            /* OBJECT_LITERAL  */
  YYSYMBOL_PROPRIETY_LIST = 73,            /* PROPRIETY_LIST  */
  YYSYMBOL_PROPRIETY = 74,                 /* PROPRIETY  */
  YYSYMBOL_PROPRIETY_NAME = 75,            /* PROPRIETY_NAME  */
  YYSYMBOL_ARRAY_LITERAL = 76,             /* ARRAY_LITERAL  */
  YYSYMBOL_ELISION_LIST = 77,              /* ELISION_LIST  */
  YYSYMBOL_FUNCTION_EXPRESSION = 78,       /* FUNCTION_EXPRESSION  */
  YYSYMBOL_FORMAL_PARAMS = 79,             /* FORMAL_PARAMS  */
  YYSYMBOL_FORMAL_PARAMS_LIST = 80,        /* FORMAL_PARAMS_LIST  */
  YYSYMBOL_FORMAL_PARAM = 81,              /* FORMAL_PARAM  */
  YYSYMBOL_FUNCTION_BODY = 82              /* FUNCTION_BODY  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
typedef yytype_uint8 yy_state_t;

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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  75
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   469

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  106
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  213

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   276


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    29,     2,     2,
      31,    33,    27,    25,    36,    26,    39,    28,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    32,
      23,    22,    24,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    30,     2,    38,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,    35,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    44,    44,    45,    48,    49,    52,    53,    54,    55,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    70,
      73,    74,    77,    80,    81,    82,    85,    86,    89,    90,
      93,    96,    97,   100,   103,   106,   107,   108,   109,   110,
     113,   114,   117,   120,   121,   124,   127,   128,   131,   132,
     135,   138,   141,   142,   145,   146,   149,   150,   153,   154,
     155,   158,   159,   162,   163,   164,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   178,   179,   180,   181,   182,
     183,   184,   187,   188,   189,   192,   193,   196,   197,   198,
     201,   202,   203,   206,   207,   210,   211,   214,   215,   218,
     219,   222,   223,   226,   227,   230,   231
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "ML_COMMENT",
  "COMENTARIO", "_ID", "_NUM", "_STRING", "_LET", "_VAR", "_CONST", "_FOR",
  "_FUNCTION", "IF", "ELSE", "DO", "WHILE", "SWITCH", "DEFAULT", "CASE",
  "BREAK", "RETURN", "'='", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'['", "'('", "';'", "')'", "'{'", "'}'", "','", "':'", "']'",
  "'.'", "$accept", "S", "CMDs", "CMD", "STATEMENT", "DECLARATIONS",
  "FUNCTION_DECLARATION", "BLOCK", "VAR_CMD", "DECL_VARs", "DECL_VAR",
  "INITIALIZER", "ASSIGNMENT_EXPRESSION", "EXPRESSION_CMD", "IF_CMD",
  "ITERATION_CMD", "FOR_E", "BREAK_CMD", "RETURN_CMD", "SWITCH_CMD",
  "CASE_BLOCK", "CASE_CLAUSES", "CASE_CLAUSE", "DEFAULT_CASE",
  "EXPRESSION", "LEFT_HAND", "CALL_EXPRESSION", "ARGUMENTS",
  "ARGUMENT_LIST", "NEW_EXPRESSION", "E", "PRIMARY_EXPRESSION",
  "OBJECT_LITERAL", "PROPRIETY_LIST", "PROPRIETY", "PROPRIETY_NAME",
  "ARRAY_LITERAL", "ELISION_LIST", "FUNCTION_EXPRESSION", "FORMAL_PARAMS",
  "FORMAL_PARAMS_LIST", "FORMAL_PARAM", "FUNCTION_BODY", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-136)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-99)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     206,  -136,  -136,  -136,  -136,  -136,    21,    21,    21,   -18,
      19,     2,   206,    15,    24,    30,   266,    23,   317,  -136,
     140,    63,  -136,   206,  -136,  -136,  -136,  -136,  -136,  -136,
    -136,  -136,  -136,  -136,  -136,  -136,    33,    93,    25,    25,
     433,  -136,  -136,  -136,  -136,    69,    62,    74,    66,    90,
     253,    94,   130,   317,   121,   317,   317,  -136,    27,  -136,
      10,   -12,   423,  -136,  -136,    59,   316,    99,   101,   104,
    -136,   107,     7,  -136,   117,  -136,  -136,  -136,   317,   317,
     317,   153,   274,  -136,  -136,   317,   317,   287,   317,   317,
     317,   317,   317,  -136,  -136,    21,  -136,  -136,   317,   127,
     129,   130,    69,   135,  -136,   133,    52,   132,   390,   401,
     156,   130,    -1,  -136,  -136,  -136,   317,  -136,  -136,  -136,
    -136,  -136,    32,   317,  -136,  -136,   126,  -136,  -136,  -136,
      56,   440,   440,  -136,    91,    91,  -136,  -136,  -136,  -136,
    -136,   159,   317,   162,  -136,   158,   130,    96,   317,   206,
     163,   130,   165,  -136,  -136,  -136,  -136,  -136,  -136,   304,
     317,   164,   166,   206,  -136,   185,   412,  -136,   201,  -136,
     191,   194,  -136,  -136,   192,   317,   206,  -136,   196,    96,
    -136,   317,    -4,   201,   195,   206,    96,   199,   198,   330,
    -136,   383,   197,  -136,   201,  -136,   206,   200,  -136,   236,
     348,   206,   206,   219,   220,  -136,   173,  -136,  -136,  -136,
    -136,  -136,   366
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     8,     7,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,     0,     2,     4,     6,     9,    19,    10,    11,    52,
      13,    14,    15,    16,    17,    18,     0,    74,    55,    54,
      31,    63,    79,    80,    78,    29,     0,    26,     0,     0,
      41,     0,   100,     0,     0,     0,     0,    42,     0,    43,
       0,    74,     0,    93,    95,     0,     0,    75,    76,    77,
      82,     0,     0,    85,     0,     1,     5,    33,     0,     0,
       0,     0,     0,    57,    56,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    24,     0,    23,    25,    41,     0,
      40,   100,   104,     0,    99,   101,     0,     0,     0,     0,
       0,   100,    87,    92,    91,    44,     0,    94,    81,    88,
      22,    83,     0,     0,    53,    32,     0,    65,    58,    61,
       0,    66,    71,    73,    68,    69,    67,    70,    72,    30,
      27,     0,    41,     0,   103,     0,     0,     0,     0,     0,
       0,   100,     0,    96,    84,    86,    89,    64,    59,     0,
      41,     0,     0,   106,   102,     0,     0,    36,    49,    45,
       0,     0,    60,    62,     0,    41,   106,   105,     0,     0,
      35,     0,     0,    49,     0,   106,     0,     0,     0,    21,
      34,     0,     0,    46,    49,    48,   106,     0,    37,     0,
      20,     0,     0,     0,     0,    98,     0,    38,    50,    51,
      47,    97,    39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -136,  -136,     0,   -10,  -135,  -136,  -136,  -136,   214,    -2,
    -136,   -34,     8,  -136,  -136,  -136,   -76,  -136,  -136,  -136,
    -136,  -134,  -136,  -136,   -46,   -15,  -136,   230,  -136,  -136,
      -8,  -136,  -136,  -136,   152,  -136,  -136,  -136,  -136,   -92,
     131,  -136,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    21,   177,    23,    24,    25,    26,    27,    28,    46,
      47,   119,    29,    30,    31,    32,    99,    33,    34,    35,
     169,   182,   183,   194,    36,    37,    38,    83,   130,    39,
      40,    41,    42,    72,    73,    74,    43,    65,    44,   103,
     104,   105,   178
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    61,    54,    61,   100,    48,    49,   106,    62,   143,
      66,    93,   165,    50,   192,   112,   113,   114,    80,   152,
      71,    92,   141,    76,    51,    64,    45,    81,     3,     4,
       5,   193,   110,    53,   126,    58,   -90,   112,   113,   114,
      61,    61,   121,   122,   190,    70,    55,   108,   109,   195,
      52,   198,   100,    17,    18,    56,    82,    60,   111,   170,
     203,    63,    57,    75,   207,    77,   161,   154,   144,    78,
      61,    61,    61,    61,    61,    61,    61,   131,   132,   134,
     135,   136,   137,   138,   174,   147,   124,   125,    78,   158,
     129,    92,   159,   140,    94,   116,   100,   117,    96,   187,
     139,     3,     4,     5,     6,     7,     8,     9,    58,    11,
      95,    12,    13,    14,   100,    79,    15,    16,    89,    90,
      91,    92,    97,    80,   153,   101,    17,    18,    19,   100,
      20,   156,    81,    61,   -87,   102,   -90,   107,   -92,   167,
     166,   -91,   120,     1,     2,    67,    68,    69,     6,     7,
       8,     9,    10,    11,   123,    12,    13,    14,   127,   142,
      15,    16,    78,   148,   157,    78,    61,   173,   145,   146,
      17,    18,    19,   191,    20,    70,     1,     2,    67,    68,
      69,     6,     7,     8,     9,    10,    11,   151,    12,    13,
      14,   160,   163,    15,    16,   162,   175,   168,   171,   179,
     176,   208,   209,    17,    18,    19,    71,    20,   212,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
     181,    12,    13,    14,   184,   186,    15,    16,   185,   196,
     188,   189,   199,   200,   202,   205,    17,    18,    19,   197,
      20,     3,     4,     5,     6,     7,     8,     9,    58,    11,
     204,    12,    13,    14,   210,   211,    15,    16,     3,     4,
       5,     6,     7,     8,    98,    58,    17,    18,    19,    84,
     206,     3,     4,     5,   155,     0,     0,   164,    58,     3,
       4,     5,     0,    17,    18,     0,    58,    60,     0,     0,
       0,     0,     3,     4,     5,     0,    17,    18,    59,    58,
      60,     0,     0,     0,    17,    18,     0,   128,    60,     3,
       4,     5,   133,     0,     0,     0,    58,    17,    18,     0,
       0,    60,     3,     4,     5,     0,     0,     0,     0,    58,
       0,     0,     0,     0,    17,    18,     0,   172,    60,    85,
      86,    87,    88,    89,    90,    91,     0,    17,    18,   118,
       0,    60,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,
       0,     0,     0,     0,     0,     0,   -98,     0,     0,   -98,
     -97,   -97,   -97,   -97,   -97,   -97,   -97,   -97,     0,     0,
       0,     0,     0,     0,   -97,     0,     0,   -97,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,     0,     0,     0,     0,
       0,     0,   -82,     0,     0,   -82,    85,    86,    87,    88,
      89,    90,    91,    85,    86,    87,    88,    89,    90,    91,
     201,     0,     0,   149,    85,    86,    87,    88,    89,    90,
      91,     0,     0,     0,   150,    85,    86,    87,    88,    89,
      90,    91,     0,     0,     0,   180,    85,    86,    87,    88,
      89,    90,    91,     0,     0,   115,    85,    86,    87,    88,
      89,    90,    91,   -99,   -99,    87,    88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
       0,    16,    12,    18,    50,     7,     8,    53,    16,   101,
      18,    45,   147,    31,    18,     5,     6,     7,    30,   111,
      20,    22,    98,    23,     5,    17,     5,    39,     5,     6,
       7,    35,     5,    31,    80,    12,    37,     5,     6,     7,
      55,    56,    35,    36,   179,    35,    31,    55,    56,   183,
      31,   186,    98,    30,    31,    31,    31,    34,    31,   151,
     194,    38,    32,     0,   199,    32,   142,    35,   102,    36,
      85,    86,    87,    88,    89,    90,    91,    85,    86,    87,
      88,    89,    90,    91,   160,    33,    78,    79,    36,    33,
      82,    22,    36,    95,    32,    36,   142,    38,    32,   175,
      92,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      36,    15,    16,    17,   160,    22,    20,    21,    27,    28,
      29,    22,    32,    30,   116,    31,    30,    31,    32,   175,
      34,   123,    39,   148,    35,     5,    37,    16,    37,   149,
     148,    37,    35,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    37,    15,    16,    17,     5,    32,
      20,    21,    36,    31,    38,    36,   181,   159,    33,    36,
      30,    31,    32,   181,    34,    35,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    31,    15,    16,
      17,    32,    34,    20,    21,    33,    32,    34,    33,    14,
      34,   201,   202,    30,    31,    32,   206,    34,    35,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      19,    15,    16,    17,    33,    33,    20,    21,    34,    34,
     176,    35,    33,    35,    37,    35,    30,    31,    32,   185,
      34,     5,     6,     7,     8,     9,    10,    11,    12,    13,
     196,    15,    16,    17,    35,    35,    20,    21,     5,     6,
       7,     8,     9,    10,    50,    12,    30,    31,    32,    39,
      34,     5,     6,     7,   122,    -1,    -1,   146,    12,     5,
       6,     7,    -1,    30,    31,    -1,    12,    34,    -1,    -1,
      -1,    -1,     5,     6,     7,    -1,    30,    31,    32,    12,
      34,    -1,    -1,    -1,    30,    31,    -1,    33,    34,     5,
       6,     7,    25,    -1,    -1,    -1,    12,    30,    31,    -1,
      -1,    34,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    30,    31,    -1,    33,    34,    23,
      24,    25,    26,    27,    28,    29,    -1,    30,    31,    33,
      -1,    34,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    39,    23,    24,    25,    26,
      27,    28,    29,    23,    24,    25,    26,    27,    28,    29,
      37,    -1,    -1,    33,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    33,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    33,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    23,    24,    25,    26,
      27,    28,    29,    23,    24,    25,    26,    27,    28,    29
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    15,    16,    17,    20,    21,    30,    31,    32,
      34,    41,    42,    43,    44,    45,    46,    47,    48,    52,
      53,    54,    55,    57,    58,    59,    64,    65,    66,    69,
      70,    71,    72,    76,    78,     5,    49,    50,    49,    49,
      31,     5,    31,    31,    43,    31,    31,    32,    12,    32,
      34,    65,    70,    38,    52,    77,    70,     5,     6,     7,
      35,    42,    73,    74,    75,     0,    42,    32,    36,    22,
      30,    39,    31,    67,    67,    23,    24,    25,    26,    27,
      28,    29,    22,    51,    32,    36,    32,    32,    48,    56,
      64,    31,     5,    79,    80,    81,    64,    16,    70,    70,
       5,    31,     5,     6,     7,    32,    36,    38,    33,    51,
      35,    35,    36,    37,    52,    52,    64,     5,    33,    52,
      68,    70,    70,    25,    70,    70,    70,    70,    70,    52,
      49,    56,    32,    79,    51,    33,    36,    33,    31,    33,
      33,    31,    79,    52,    35,    74,    52,    38,    33,    36,
      32,    56,    33,    34,    80,    44,    70,    43,    34,    60,
      79,    33,    33,    52,    56,    32,    34,    42,    82,    14,
      33,    19,    61,    62,    33,    34,    33,    56,    82,    35,
      44,    70,    18,    35,    63,    61,    34,    82,    44,    33,
      35,    37,    37,    61,    82,    35,    34,    44,    42,    42,
      35,    35,    35
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    41,    41,    42,    42,    43,    43,    43,    43,
      44,    44,    44,    44,    44,    44,    44,    44,    44,    45,
      46,    46,    47,    48,    48,    48,    49,    49,    50,    50,
      51,    52,    52,    53,    54,    55,    55,    55,    55,    55,
      56,    56,    57,    58,    58,    59,    60,    60,    61,    61,
      62,    63,    64,    64,    65,    65,    66,    66,    67,    67,
      67,    68,    68,    69,    69,    69,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    72,    72,    72,    73,    73,    74,    74,    74,
      75,    75,    75,    76,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       8,     7,     3,     3,     3,     3,     1,     3,     2,     1,
       2,     1,     3,     2,     7,     6,     5,     8,     9,    10,
       1,     0,     2,     2,     3,     5,     3,     5,     2,     0,
       4,     3,     1,     3,     1,     1,     2,     2,     2,     3,
       4,     1,     3,     1,     4,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     3,     4,     1,     3,     1,     2,     3,
       1,     1,     1,     2,     3,     1,     3,     8,     7,     1,
       0,     1,     3,     2,     1,     1,     0
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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

#line 1441 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 234 "npr.y"


#include "lex.yy.c"

void yyerror( const char* msg ) {
  cout << endl << "Erro: " << msg << endl
       << "Perto de : '" << yylval.v << "'" << endl;
  exit( 1 );
}

void print( string st ) {
  cout << st << " ";
}

int main() {
  yyparse();
  cout << "Gramática OK!" << endl;
  return 0;
}
