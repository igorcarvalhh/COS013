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
#include <vector>

  using namespace std;

    struct Atributos {
    vector<string> c;
    };

    vector<string> concatena( vector<string> a, vector<string> b );
    vector<string> operator+( vector<string> a, vector<string> b );
    vector<string> operator+( vector<string> a, string b );
    string gera_label( string prefixo );
    vector<string> resolve_enderecos( vector<string> entrada );

    int linha = 1;
    int coluna = 1;

    // Tipo dos atributos: YYSTYPE é o tipo usado para os atributos.
    #define YYSTYPE Atributos

    void erro( string msg );
    void imprime_codigo( vector<string> codigo );

    // protótipo para o analisador léxico (gerado pelo lex)
    extern "C" int yylex();
    void yyerror( const char* );


#line 108 "y.tab.c"

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
    ID = 260,                      /* ID  */
    NUM = 261,                     /* NUM  */
    STRING = 262,                  /* STRING  */
    LET = 263,                     /* LET  */
    VAR = 264,                     /* VAR  */
    CONST = 265,                   /* CONST  */
    FOR = 266,                     /* FOR  */
    FUNCTION = 267,                /* FUNCTION  */
    IF = 268,                      /* IF  */
    ELSE = 269,                    /* ELSE  */
    DO = 270,                      /* DO  */
    WHILE = 271,                   /* WHILE  */
    SWITCH = 272,                  /* SWITCH  */
    DEFAULT = 273,                 /* DEFAULT  */
    CASE = 274,                    /* CASE  */
    BREAK = 275,                   /* BREAK  */
    RETURN = 276,                  /* RETURN  */
    MAIS_IGUAL = 277,              /* MAIS_IGUAL  */
    INC = 278,                     /* INC  */
    EQ = 279                       /* EQ  */
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
#define ID 260
#define NUM 261
#define STRING 262
#define LET 263
#define VAR 264
#define CONST 265
#define FOR 266
#define FUNCTION 267
#define IF 268
#define ELSE 269
#define DO 270
#define WHILE 271
#define SWITCH 272
#define DEFAULT 273
#define CASE 274
#define BREAK 275
#define RETURN 276
#define MAIS_IGUAL 277
#define INC 278
#define EQ 279

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
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_NUM = 6,                        /* NUM  */
  YYSYMBOL_STRING = 7,                     /* STRING  */
  YYSYMBOL_LET = 8,                        /* LET  */
  YYSYMBOL_VAR = 9,                        /* VAR  */
  YYSYMBOL_CONST = 10,                     /* CONST  */
  YYSYMBOL_FOR = 11,                       /* FOR  */
  YYSYMBOL_FUNCTION = 12,                  /* FUNCTION  */
  YYSYMBOL_IF = 13,                        /* IF  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_SWITCH = 17,                    /* SWITCH  */
  YYSYMBOL_DEFAULT = 18,                   /* DEFAULT  */
  YYSYMBOL_CASE = 19,                      /* CASE  */
  YYSYMBOL_BREAK = 20,                     /* BREAK  */
  YYSYMBOL_RETURN = 21,                    /* RETURN  */
  YYSYMBOL_MAIS_IGUAL = 22,                /* MAIS_IGUAL  */
  YYSYMBOL_INC = 23,                       /* INC  */
  YYSYMBOL_EQ = 24,                        /* EQ  */
  YYSYMBOL_25_ = 25,                       /* '='  */
  YYSYMBOL_26_ = 26,                       /* '<'  */
  YYSYMBOL_27_ = 27,                       /* '>'  */
  YYSYMBOL_28_ = 28,                       /* '+'  */
  YYSYMBOL_29_ = 29,                       /* '-'  */
  YYSYMBOL_30_ = 30,                       /* '*'  */
  YYSYMBOL_31_ = 31,                       /* '/'  */
  YYSYMBOL_32_ = 32,                       /* '%'  */
  YYSYMBOL_33_ = 33,                       /* '['  */
  YYSYMBOL_34_ = 34,                       /* '('  */
  YYSYMBOL_35_ = 35,                       /* ';'  */
  YYSYMBOL_36_ = 36,                       /* ')'  */
  YYSYMBOL_37_ = 37,                       /* '{'  */
  YYSYMBOL_38_ = 38,                       /* '}'  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_40_ = 40,                       /* ':'  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 43,                  /* $accept  */
  YYSYMBOL_S = 44,                         /* S  */
  YYSYMBOL_CMDs = 45,                      /* CMDs  */
  YYSYMBOL_CMD = 46,                       /* CMD  */
  YYSYMBOL_STATEMENT = 47,                 /* STATEMENT  */
  YYSYMBOL_DECLARATIONS = 48,              /* DECLARATIONS  */
  YYSYMBOL_FUNCTION_DECLARATION = 49,      /* FUNCTION_DECLARATION  */
  YYSYMBOL_BLOCK = 50,                     /* BLOCK  */
  YYSYMBOL_VAR_CMD = 51,                   /* VAR_CMD  */
  YYSYMBOL_DECL_VARs = 52,                 /* DECL_VARs  */
  YYSYMBOL_DECL_VAR = 53,                  /* DECL_VAR  */
  YYSYMBOL_INITIALIZER = 54,               /* INITIALIZER  */
  YYSYMBOL_ASSIGNMENT_EXPRESSION = 55,     /* ASSIGNMENT_EXPRESSION  */
  YYSYMBOL_EXPRESSION_CMD = 56,            /* EXPRESSION_CMD  */
  YYSYMBOL_IF_CMD = 57,                    /* IF_CMD  */
  YYSYMBOL_ITERATION_CMD = 58,             /* ITERATION_CMD  */
  YYSYMBOL_FOR_E = 59,                     /* FOR_E  */
  YYSYMBOL_BREAK_CMD = 60,                 /* BREAK_CMD  */
  YYSYMBOL_RETURN_CMD = 61,                /* RETURN_CMD  */
  YYSYMBOL_SWITCH_CMD = 62,                /* SWITCH_CMD  */
  YYSYMBOL_CASE_BLOCK = 63,                /* CASE_BLOCK  */
  YYSYMBOL_CASE_CLAUSES = 64,              /* CASE_CLAUSES  */
  YYSYMBOL_CASE_CLAUSE = 65,               /* CASE_CLAUSE  */
  YYSYMBOL_DEFAULT_CASE = 66,              /* DEFAULT_CASE  */
  YYSYMBOL_EXPRESSION = 67,                /* EXPRESSION  */
  YYSYMBOL_LEFT_HAND = 68,                 /* LEFT_HAND  */
  YYSYMBOL_CALL_EXPRESSION = 69,           /* CALL_EXPRESSION  */
  YYSYMBOL_ARGUMENTS = 70,                 /* ARGUMENTS  */
  YYSYMBOL_ARGUMENT_LIST = 71,             /* ARGUMENT_LIST  */
  YYSYMBOL_NEW_EXPRESSION = 72,            /* NEW_EXPRESSION  */
  YYSYMBOL_E = 73,                         /* E  */
  YYSYMBOL_R_VALUES = 74,                  /* R_VALUES  */
  YYSYMBOL_PRIMARY_EXPRESSION = 75,        /* PRIMARY_EXPRESSION  */
  YYSYMBOL_OBJECT_LITERAL = 76,            /* OBJECT_LITERAL  */
  YYSYMBOL_PROPRIETY_LIST = 77,            /* PROPRIETY_LIST  */
  YYSYMBOL_PROPRIETY = 78,                 /* PROPRIETY  */
  YYSYMBOL_PROPRIETY_NAME = 79,            /* PROPRIETY_NAME  */
  YYSYMBOL_ARRAY_LITERAL = 80,             /* ARRAY_LITERAL  */
  YYSYMBOL_ELISION_LIST = 81,              /* ELISION_LIST  */
  YYSYMBOL_FUNCTION_EXPRESSION = 82,       /* FUNCTION_EXPRESSION  */
  YYSYMBOL_FORMAL_PARAMS = 83,             /* FORMAL_PARAMS  */
  YYSYMBOL_FORMAL_PARAMS_LIST = 84,        /* FORMAL_PARAMS_LIST  */
  YYSYMBOL_FORMAL_PARAM = 85,              /* FORMAL_PARAM  */
  YYSYMBOL_FUNCTION_BODY = 86              /* FUNCTION_BODY  */
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
#define YYFINAL  76
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   450

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  202

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   279


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
       2,     2,     2,     2,     2,     2,     2,    32,     2,     2,
      34,    36,    30,    28,    39,    29,    42,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    40,    35,
      26,    25,    27,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    33,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    54,    55,    58,    59,    60,    61,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    76,    79,
      82,    85,    86,    87,    90,    91,    94,    95,    98,   101,
     102,   103,   107,   110,   119,   128,   129,   130,   131,   134,
     135,   138,   141,   142,   145,   148,   149,   152,   153,   156,
     159,   162,   163,   166,   167,   170,   171,   174,   175,   176,
     179,   180,   183,   184,   185,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   200,   201,   202,   203,   204,
     205,   206,   209,   210,   211,   212,   213,   214,   215,   218,
     219,   222,   223,   226,   230,   231,   232,   235,   236,   239,
     240,   243,   247,   248,   251,   252,   255,   256,   259
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
  "COMENTARIO", "ID", "NUM", "STRING", "LET", "VAR", "CONST", "FOR",
  "FUNCTION", "IF", "ELSE", "DO", "WHILE", "SWITCH", "DEFAULT", "CASE",
  "BREAK", "RETURN", "MAIS_IGUAL", "INC", "EQ", "'='", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'['", "'('", "';'", "')'", "'{'", "'}'",
  "','", "':'", "']'", "'.'", "$accept", "S", "CMDs", "CMD", "STATEMENT",
  "DECLARATIONS", "FUNCTION_DECLARATION", "BLOCK", "VAR_CMD", "DECL_VARs",
  "DECL_VAR", "INITIALIZER", "ASSIGNMENT_EXPRESSION", "EXPRESSION_CMD",
  "IF_CMD", "ITERATION_CMD", "FOR_E", "BREAK_CMD", "RETURN_CMD",
  "SWITCH_CMD", "CASE_BLOCK", "CASE_CLAUSES", "CASE_CLAUSE",
  "DEFAULT_CASE", "EXPRESSION", "LEFT_HAND", "CALL_EXPRESSION",
  "ARGUMENTS", "ARGUMENT_LIST", "NEW_EXPRESSION", "E", "R_VALUES",
  "PRIMARY_EXPRESSION", "OBJECT_LITERAL", "PROPRIETY_LIST", "PROPRIETY",
  "PROPRIETY_NAME", "ARRAY_LITERAL", "ELISION_LIST", "FUNCTION_EXPRESSION",
  "FORMAL_PARAMS", "FORMAL_PARAMS_LIST", "FORMAL_PARAM", "FUNCTION_BODY", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-174)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-97)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     177,  -174,  -174,   269,   273,   287,    35,    35,    35,   -29,
       1,    20,   177,    24,    28,    22,    32,    19,   105,  -174,
     141,    63,  -174,   177,  -174,  -174,  -174,  -174,  -174,  -174,
    -174,  -174,  -174,  -174,  -174,  -174,   -19,    98,    30,    30,
     409,  -174,  -174,   291,   305,   309,    46,    56,    59,    64,
      65,   195,    73,   109,   105,   100,   105,   105,  -174,    84,
    -174,    23,    82,   399,  -174,  -174,    29,   355,   216,   244,
     248,  -174,   177,    -6,  -174,    79,  -174,  -174,  -174,   105,
     105,  -174,   105,   105,   120,    96,  -174,  -174,   105,   105,
     105,   105,   105,   105,   105,   105,   105,  -174,  -174,    35,
    -174,  -174,   105,    92,    97,   109,    46,   101,  -174,   116,
     -18,   126,   366,   377,  -174,  -174,  -174,  -174,   105,  -174,
     323,   125,  -174,    40,   105,  -174,  -174,  -174,    55,  -174,
    -174,  -174,   -17,   409,   418,   418,   135,   135,   144,   144,
     144,  -174,  -174,   136,   105,   134,  -174,   140,   109,   210,
     105,   177,   154,  -174,  -174,  -174,  -174,  -174,  -174,   228,
     105,   138,   162,   177,  -174,   192,   388,  -174,   189,  -174,
    -174,  -174,   173,   105,   177,  -174,   175,   210,  -174,   105,
      -4,   189,   210,   188,   198,  -174,  -174,   340,   197,  -174,
     189,  -174,  -174,   210,  -174,   177,   177,   204,  -174,  -174,
    -174,  -174
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     7,     6,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,     2,     4,     5,     8,    18,     9,    10,    51,
      12,    13,    14,    15,    16,    17,     0,     0,    54,    53,
      29,    74,    62,    79,    80,    78,    27,     0,    24,     0,
       0,    40,     0,   103,     0,     0,     0,     0,    41,     0,
      42,     0,     0,     0,    97,    99,     0,     0,    75,    76,
      77,    89,     4,     0,    92,     0,     1,     3,    32,     0,
       0,    73,     0,     0,     0,     0,    56,    55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    22,     0,
      21,    23,    40,     0,    39,   103,   107,     0,   102,   104,
       0,     0,     0,     0,    94,    96,    95,    43,     0,    98,
      81,     0,    90,     0,     0,    52,    31,    30,     0,    64,
      57,    60,     0,    72,    65,    70,    67,    68,    66,    69,
      71,    28,    25,     0,    40,     0,   106,     0,     0,     0,
       0,     0,     0,   100,    20,    91,    93,    63,    58,     0,
      40,     0,     0,     4,   105,    34,     0,    36,    48,    44,
      59,    61,     0,    40,     4,   108,     0,     0,    35,     0,
       0,    48,     0,     0,     0,   101,    33,     0,     0,    45,
      48,    47,    37,     0,    19,     4,     4,     0,    38,    49,
      50,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -174,  -174,     0,   -10,  -134,  -174,  -174,  -174,   200,     5,
    -174,   142,    10,  -174,  -174,  -174,   -51,  -174,  -174,  -174,
    -174,  -173,  -174,  -174,   -47,   -15,  -174,   207,  -174,  -174,
      -7,  -174,  -174,  -174,  -174,   129,  -174,  -174,  -174,  -174,
     148,   106,  -174,    81
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    21,   175,    23,    24,    25,    26,    27,    28,    47,
      48,    97,    29,    30,    31,    32,   103,    33,    34,    35,
     169,   180,   181,   190,    36,    37,    38,    86,   132,    39,
      40,    41,    42,    43,    73,    74,    75,    44,    66,    45,
     107,   108,   109,   176
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    62,    55,    62,   104,    51,    52,   110,   191,    63,
      72,    67,    49,    50,   188,   165,    78,   197,   149,   158,
      79,    79,   159,    77,     3,     4,     5,    65,   114,   115,
     116,    59,   122,   123,   189,    53,   128,     3,     4,     5,
      46,    62,    62,   186,    59,   114,   115,   116,   192,   112,
     113,   143,    17,    18,    54,   104,    61,    58,    56,   198,
      64,    71,    57,    76,    85,    17,    18,    60,   118,    61,
     119,    96,   121,    62,    62,    62,    62,    62,    62,    62,
      62,   133,   134,   135,   136,   137,   138,   139,   140,   125,
     126,    98,   127,   161,    79,   131,   157,   104,    99,   100,
     101,     3,     4,     5,   142,    81,   141,   105,    59,   172,
       3,     4,     5,   104,   106,    83,   111,    59,    53,   124,
      80,    81,   183,    82,    84,   129,   104,   144,   153,    17,
      18,    83,   130,    61,   156,    62,    79,   147,    17,    18,
      84,   167,    61,   166,     1,     2,    68,    69,    70,     6,
       7,     8,     9,    10,    11,   148,    12,    13,    14,    88,
     150,    15,    16,   154,    62,    93,    94,    95,    88,   171,
     162,   160,   187,   173,    17,    18,    19,   163,    20,    71,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,   168,    12,    13,    14,   199,   200,    15,    16,   174,
       3,     4,     5,     6,     7,     8,   177,    59,   179,   182,
      17,    18,    19,   185,    20,     3,     4,     5,     6,     7,
       8,     9,    59,    11,   193,    12,    13,    14,    17,    18,
      15,    16,    61,     3,     4,     5,   194,   196,   -82,   -82,
      59,   -82,   201,    17,    18,    19,    87,    20,   146,   -82,
     -82,   102,   155,   145,   164,   184,   -94,     0,   -82,     0,
       0,    17,    18,     0,   170,    61,   -83,   -83,     0,   -83,
     -84,   -84,     0,   -84,     0,     0,     0,   -83,   -83,     0,
       0,   -84,   -84,     0,   -96,     0,   -83,     0,   -95,     0,
     -84,   -82,   -82,     0,   -82,   -83,   -83,     0,   -83,     0,
       0,     0,   -82,   -82,     0,     0,   -83,   -83,     0,   -84,
     -84,   -82,   -84,   -86,   -86,   -83,   -86,     0,     0,     0,
     -84,   -84,     0,     0,   -86,   -86,     0,   -87,   -87,   -84,
     -87,   -85,   -85,   -86,   -85,     0,     0,     0,   -87,   -87,
       0,     0,   -85,   -85,     0,   -88,   -88,   -87,   -88,     0,
       0,   -85,     0,     0,     0,     0,   -88,   -88,     0,     0,
       0,     0,     0,     0,    88,   -88,    89,    90,    91,    92,
      93,    94,    95,     0,     0,     0,     0,     0,     0,    88,
     195,    89,    90,    91,    92,    93,    94,    95,     0,     0,
      88,   120,    89,    90,    91,    92,    93,    94,    95,     0,
       0,    88,   151,    89,    90,    91,    92,    93,    94,    95,
       0,     0,    88,   152,    89,    90,    91,    92,    93,    94,
      95,     0,     0,    88,   178,    89,    90,    91,    92,    93,
      94,    95,     0,    88,   117,    89,    90,    91,    92,    93,
      94,    95,    88,     0,   -97,   -97,    91,    92,    93,    94,
      95
};

static const yytype_int16 yycheck[] =
{
       0,    16,    12,    18,    51,    34,     5,    54,   181,    16,
      20,    18,     7,     8,    18,   149,    35,   190,    36,    36,
      39,    39,    39,    23,     5,     6,     7,    17,     5,     6,
       7,    12,    38,    39,    38,    34,    83,     5,     6,     7,
       5,    56,    57,   177,    12,     5,     6,     7,   182,    56,
      57,   102,    33,    34,    34,   102,    37,    35,    34,   193,
      41,    38,    34,     0,    34,    33,    34,    35,    39,    37,
      41,    25,    72,    88,    89,    90,    91,    92,    93,    94,
      95,    88,    89,    90,    91,    92,    93,    94,    95,    79,
      80,    35,    82,   144,    39,    85,    41,   144,    39,    35,
      35,     5,     6,     7,    99,    23,    96,    34,    12,   160,
       5,     6,     7,   160,     5,    33,    16,    12,    34,    40,
      22,    23,   173,    25,    42,     5,   173,    35,   118,    33,
      34,    33,    36,    37,   124,   150,    39,    36,    33,    34,
      42,   151,    37,   150,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    39,    15,    16,    17,    24,
      34,    20,    21,    38,   179,    30,    31,    32,    24,   159,
      36,    35,   179,    35,    33,    34,    35,    37,    37,    38,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    37,    15,    16,    17,   195,   196,    20,    21,    37,
       5,     6,     7,     8,     9,    10,    14,    12,    19,    36,
      33,    34,    35,    38,    37,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    36,    15,    16,    17,    33,    34,
      20,    21,    37,     5,     6,     7,    38,    40,    22,    23,
      12,    25,    38,    33,    34,    35,    39,    37,   106,    33,
      34,    51,   123,   105,   148,   174,    40,    -1,    42,    -1,
      -1,    33,    34,    -1,    36,    37,    22,    23,    -1,    25,
      22,    23,    -1,    25,    -1,    -1,    -1,    33,    34,    -1,
      -1,    33,    34,    -1,    40,    -1,    42,    -1,    40,    -1,
      42,    22,    23,    -1,    25,    22,    23,    -1,    25,    -1,
      -1,    -1,    33,    34,    -1,    -1,    33,    34,    -1,    22,
      23,    42,    25,    22,    23,    42,    25,    -1,    -1,    -1,
      33,    34,    -1,    -1,    33,    34,    -1,    22,    23,    42,
      25,    22,    23,    42,    25,    -1,    -1,    -1,    33,    34,
      -1,    -1,    33,    34,    -1,    22,    23,    42,    25,    -1,
      -1,    42,    -1,    -1,    -1,    -1,    33,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    24,    42,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    24,
      40,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      24,    36,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    24,    36,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    24,    36,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    24,    36,    26,    27,    28,    29,    30,
      31,    32,    -1,    24,    35,    26,    27,    28,    29,    30,
      31,    32,    24,    -1,    26,    27,    28,    29,    30,    31,
      32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    15,    16,    17,    20,    21,    33,    34,    35,
      37,    44,    45,    46,    47,    48,    49,    50,    51,    55,
      56,    57,    58,    60,    61,    62,    67,    68,    69,    72,
      73,    74,    75,    76,    80,    82,     5,    52,    53,    52,
      52,    34,     5,    34,    34,    46,    34,    34,    35,    12,
      35,    37,    68,    73,    41,    55,    81,    73,     5,     6,
       7,    38,    46,    77,    78,    79,     0,    45,    35,    39,
      22,    23,    25,    33,    42,    34,    70,    70,    24,    26,
      27,    28,    29,    30,    31,    32,    25,    54,    35,    39,
      35,    35,    51,    59,    67,    34,     5,    83,    84,    85,
      67,    16,    73,    73,     5,     6,     7,    35,    39,    41,
      36,    45,    38,    39,    40,    55,    55,    55,    67,     5,
      36,    55,    71,    73,    73,    73,    73,    73,    73,    73,
      73,    55,    52,    59,    35,    83,    54,    36,    39,    36,
      34,    36,    36,    55,    38,    78,    55,    41,    36,    39,
      35,    59,    36,    37,    84,    47,    73,    46,    37,    63,
      36,    55,    59,    35,    37,    45,    86,    14,    36,    19,
      64,    65,    36,    59,    86,    38,    47,    73,    18,    38,
      66,    64,    47,    36,    38,    40,    40,    64,    47,    45,
      45,    38
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    48,    49,
      50,    51,    51,    51,    52,    52,    53,    53,    54,    55,
      55,    55,    56,    57,    57,    58,    58,    58,    58,    59,
      59,    60,    61,    61,    62,    63,    63,    64,    64,    65,
      66,    67,    67,    68,    68,    69,    69,    70,    70,    70,
      71,    71,    72,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    75,    75,    75,    75,    75,    75,    75,    76,
      76,    77,    77,    78,    79,    79,    79,    80,    80,    81,
      81,    82,    83,    83,    84,    84,    85,    85,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     8,
       4,     3,     3,     3,     1,     3,     2,     1,     2,     1,
       3,     3,     2,     7,     5,     6,     5,     8,     9,     1,
       0,     2,     2,     3,     5,     3,     5,     2,     0,     4,
       3,     1,     3,     1,     1,     2,     2,     2,     3,     4,
       1,     3,     1,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     3,     1,     3,     1,     1,     1,     2,     3,     1,
       3,     7,     1,     0,     1,     3,     2,     1,     1
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
  case 2: /* S: CMDs  */
#line 51 "npr.y"
         { imprime_codigo(  resolve_enderecos( yyvsp[0].c + ".")  ); cout << endl;}
#line 1455 "y.tab.c"
    break;

  case 3: /* CMDs: CMD CMDs  */
#line 54 "npr.y"
                { yyval.c = yyvsp[-1].c + yyvsp[0].c; }
#line 1461 "y.tab.c"
    break;

  case 4: /* CMDs: %empty  */
#line 55 "npr.y"
       {yyval.c.clear();}
#line 1467 "y.tab.c"
    break;

  case 5: /* CMD: STATEMENT  */
#line 58 "npr.y"
                { yyval.c = yyvsp[0].c; }
#line 1473 "y.tab.c"
    break;

  case 6: /* CMD: COMENTARIO  */
#line 59 "npr.y"
                 { yyval.c.clear(); }
#line 1479 "y.tab.c"
    break;

  case 7: /* CMD: ML_COMMENT  */
#line 60 "npr.y"
                  { yyval.c.clear(); }
#line 1485 "y.tab.c"
    break;

  case 8: /* CMD: DECLARATIONS  */
#line 61 "npr.y"
                   { yyval.c = yyvsp[0].c; }
#line 1491 "y.tab.c"
    break;

  case 10: /* STATEMENT: VAR_CMD  */
#line 66 "npr.y"
                    { yyval.c = yyvsp[0].c; }
#line 1497 "y.tab.c"
    break;

  case 11: /* STATEMENT: ';'  */
#line 67 "npr.y"
                { yyval.c.clear(); }
#line 1503 "y.tab.c"
    break;

  case 20: /* BLOCK: '{' CMD CMDs '}'  */
#line 82 "npr.y"
                         { yyval.c = yyvsp[-2].c + yyvsp[-1].c; }
#line 1509 "y.tab.c"
    break;

  case 22: /* VAR_CMD: LET DECL_VARs ';'  */
#line 86 "npr.y"
                            { yyval.c = yyvsp[-1].c; }
#line 1515 "y.tab.c"
    break;

  case 24: /* DECL_VARs: DECL_VAR  */
#line 90 "npr.y"
                     {yyval.c = yyvsp[0].c ;}
#line 1521 "y.tab.c"
    break;

  case 25: /* DECL_VARs: DECL_VAR ',' DECL_VARs  */
#line 91 "npr.y"
                                   { yyval.c = yyvsp[-2].c + yyvsp[0].c; }
#line 1527 "y.tab.c"
    break;

  case 26: /* DECL_VAR: ID INITIALIZER  */
#line 94 "npr.y"
                          { yyval.c = yyvsp[-1].c + "&" + yyvsp[-1].c + yyvsp[0].c +"^"; }
#line 1533 "y.tab.c"
    break;

  case 27: /* DECL_VAR: ID  */
#line 95 "npr.y"
              { yyval.c = yyvsp[0].c + "&"; }
#line 1539 "y.tab.c"
    break;

  case 28: /* INITIALIZER: '=' ASSIGNMENT_EXPRESSION  */
#line 98 "npr.y"
                                        { yyval.c.clear(); yyval.c = yyvsp[0].c + "="; }
#line 1545 "y.tab.c"
    break;

  case 30: /* ASSIGNMENT_EXPRESSION: LEFT_HAND '=' ASSIGNMENT_EXPRESSION  */
#line 102 "npr.y"
                                                            { yyval.c = yyvsp[-2].c + yyvsp[0].c + "="; }
#line 1551 "y.tab.c"
    break;

  case 31: /* ASSIGNMENT_EXPRESSION: LEFT_HAND MAIS_IGUAL ASSIGNMENT_EXPRESSION  */
#line 103 "npr.y"
                                                                   { yyval.c = yyvsp[-2].c + yyvsp[-2].c + "@" + yyvsp[0].c + "+ ="; }
#line 1557 "y.tab.c"
    break;

  case 32: /* EXPRESSION_CMD: EXPRESSION ';'  */
#line 107 "npr.y"
                                { yyval.c = yyvsp[-1].c + "^"; }
#line 1563 "y.tab.c"
    break;

  case 33: /* IF_CMD: IF '(' EXPRESSION ')' STATEMENT ELSE STATEMENT  */
#line 110 "npr.y"
                                                        {  string lbl_fim = gera_label( "fim_if" ), 
                   lbl_true = gera_label( "then" ), 
                   lbl_false = gera_label( "else" );
                   
            yyval.c = yyvsp[-4].c + lbl_true + "?" + lbl_false + "#" + 
                   (":" + lbl_true) + yyvsp[-2].c + lbl_fim + "#" +
                   (":" + lbl_false) + yyvsp[0].c + 
                   (":" + lbl_fim);
         }
#line 1577 "y.tab.c"
    break;

  case 34: /* IF_CMD: IF '(' EXPRESSION ')' STATEMENT  */
#line 119 "npr.y"
                                           {string lbl_fim = gera_label( "fim_if" ), 
                   lbl_true = gera_label( "then" );
                   
            yyval.c = yyvsp[-2].c + lbl_true + "?" + lbl_fim + "#" + 
                   (":" + lbl_true) + yyvsp[0].c + 
                   (":" + lbl_fim);
         }
#line 1589 "y.tab.c"
    break;

  case 65: /* E: E '<' E  */
#line 188 "npr.y"
            { yyval.c = yyvsp[-2].c + yyvsp[0].c + "<";}
#line 1595 "y.tab.c"
    break;

  case 66: /* E: E '*' E  */
#line 189 "npr.y"
            { yyval.c = yyvsp[-2].c + yyvsp[0].c + "*";}
#line 1601 "y.tab.c"
    break;

  case 67: /* E: E '+' E  */
#line 190 "npr.y"
            { yyval.c = yyvsp[-2].c + yyvsp[0].c + "+";}
#line 1607 "y.tab.c"
    break;

  case 68: /* E: E '-' E  */
#line 191 "npr.y"
            { yyval.c = yyvsp[-2].c + yyvsp[0].c + "-";}
#line 1613 "y.tab.c"
    break;

  case 69: /* E: E '/' E  */
#line 192 "npr.y"
            { yyval.c = yyvsp[-2].c + yyvsp[0].c + "/";}
#line 1619 "y.tab.c"
    break;

  case 70: /* E: E '>' E  */
#line 193 "npr.y"
            { yyval.c = yyvsp[-2].c + yyvsp[0].c + ">";}
#line 1625 "y.tab.c"
    break;

  case 71: /* E: E '%' E  */
#line 194 "npr.y"
            { yyval.c = yyvsp[-2].c + yyvsp[0].c + "%";}
#line 1631 "y.tab.c"
    break;

  case 72: /* E: E EQ E  */
#line 195 "npr.y"
           { yyval.c = yyvsp[-2].c + yyvsp[0].c + "==";}
#line 1637 "y.tab.c"
    break;

  case 73: /* E: LEFT_HAND INC  */
#line 196 "npr.y"
                  { yyval.c = yyvsp[-1].c + yyvsp[-1].c + "@" + "1" + "+" + "=";}
#line 1643 "y.tab.c"
    break;

  case 75: /* R_VALUES: ID  */
#line 200 "npr.y"
              { yyval.c = yyvsp[0].c + "@"; }
#line 1649 "y.tab.c"
    break;

  case 81: /* R_VALUES: '(' E ')'  */
#line 206 "npr.y"
                     { yyval.c = yyvsp[-1].c; }
#line 1655 "y.tab.c"
    break;

  case 82: /* PRIMARY_EXPRESSION: ID  */
#line 209 "npr.y"
                        { yyval.c = yyvsp[0].c; }
#line 1661 "y.tab.c"
    break;

  case 88: /* PRIMARY_EXPRESSION: '(' E ')'  */
#line 215 "npr.y"
                               { yyval.c = yyvsp[-1].c; }
#line 1667 "y.tab.c"
    break;


#line 1671 "y.tab.c"

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

#line 262 "npr.y"


  #include "lex.yy.c"

    void yyerror( const char* msg ) {
    cout << endl << "Erro: " << msg << endl
        << "Perto de : '" << yylval.c[0] << "'" << endl
        << "Linha: " << linha << ", coluna: " << coluna << endl;
    exit( 1 );
    }

    vector<string> concatena( vector<string> a, vector<string> b ) {
    a.insert( a.end(), b.begin(), b.end() );
    return a;
    }

    vector<string> operator+( vector<string> a, vector<string> b ) {
    return concatena( a, b );
    }

    vector<string> operator+( vector<string> a, string b ) {
    a.push_back( b );
    return a;
    }

    string gera_label( string prefixo ) {
    static int n = 0;
    return prefixo + "_" + to_string( ++n ) + ":";
    }

    vector<string> resolve_enderecos( vector<string> entrada ) {
    map<string,int> label;
    vector<string> saida;
    for( int i = 0; i < entrada.size(); i++ ) 
        if( entrada[i][0] == ':' ) 
            label[entrada[i].substr(1)] = saida.size();
        else
        saida.push_back( entrada[i] );
    
    for( int i = 0; i < saida.size(); i++ ) 
        if( label.count( saida[i] ) > 0 )
            saida[i] = to_string(label[saida[i]]);
        
    return saida;
    }

    void imprime_codigo( vector<string> codigo ) {
        for( int i = 0; i < codigo.size(); i++ )
            cout << codigo[i] << " ";
    }

    int main() {
    yyparse();
    cout << "Sintaxe ok" << endl;
    }
