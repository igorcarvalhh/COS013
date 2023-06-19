%{

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

// protótipo para o analisador léxico (gerado pelo lex) teste2
int yylex();
void yyerror( const char* );

%}

// Tokens
%token	 ML_COMMENT COMENTARIO _ID _NUM _STRING _LET _VAR _CONST _FOR _FUNCTION IF ELSE DO WHILE SWITCH DEFAULT CASE BREAK RETURN

%start  S

%right '=' 
%nonassoc '<' '>' 
%left '+' '-'
%left '*' '/' '%'
%left '[' '('

%%

S : CMDs 
  |
  ;

CMDs : CMD
     | CMD CMDs
     ;
     
CMD : STATEMENT 
    | COMENTARIO
    | ML_COMMENT
    | DECLARATIONS
    ;


STATEMENT : BLOCK
          | VAR_CMD
          | ';'
          | EXPRESSION_CMD
          | IF_CMD
          | ITERATION_CMD
          | BREAK_CMD
          | RETURN_CMD
          | SWITCH_CMD
          ;

DECLARATIONS : FUNCTION_DECLARATION
             ;

FUNCTION_DECLARATION : _FUNCTION _ID '(' FORMAL_PARAMS ')' '{' FUNCTION_BODY '}'
                     | _FUNCTION  '(' FORMAL_PARAMS ')' '{' FUNCTION_BODY '}'
                     ;

BLOCK : '{' CMDs '}'
      ;

VAR_CMD : _VAR DECL_VARs ';'
        | _LET DECL_VARs ';'
        | _CONST DECL_VARs ';'
        ;

DECL_VARs : DECL_VAR
          | DECL_VAR ',' DECL_VARs
          ;

DECL_VAR : _ID INITIALIZER
         | _ID
         ;

INITIALIZER : '=' ASSIGNMENT_EXPRESSION
            ;

ASSIGNMENT_EXPRESSION : E
                      | LEFT_HAND '=' ASSIGNMENT_EXPRESSION
                      ;

EXPRESSION_CMD : EXPRESSION ';'
               ;

IF_CMD : IF '(' EXPRESSION ')' STATEMENT ELSE STATEMENT
       ;

ITERATION_CMD : DO CMD WHILE '(' E ')'
              | WHILE '(' E ')' CMD
              | _FOR '(' VAR_CMD FOR_E ';' FOR_E ')' STATEMENT
              | _FOR '(' FOR_E ';' FOR_E ';' FOR_E ')' STATEMENT
              | _FOR '(' FOR_E ';' FOR_E ';' FOR_E ')' '{'  '}'
              ;

FOR_E : EXPRESSION
      |
      ;

BREAK_CMD : BREAK ';'
          ;

RETURN_CMD : RETURN ';'
           | RETURN E ';'
           ;

SWITCH_CMD : SWITCH '(' E ')' CASE_BLOCK
           ;

CASE_BLOCK : '{' CASE_CLAUSES '}'
           | '{' CASE_CLAUSES DEFAULT_CASE CASE_CLAUSES '}'
           ;

CASE_CLAUSES : CASE_CLAUSE CASE_CLAUSES
             | 
             ;

CASE_CLAUSE : CASE E ':' CMDs
            ;

DEFAULT_CASE : DEFAULT ':' CMDs
             ;

EXPRESSION : ASSIGNMENT_EXPRESSION
           | EXPRESSION ',' ASSIGNMENT_EXPRESSION
           ;

LEFT_HAND : NEW_EXPRESSION
          | CALL_EXPRESSION
          ;

CALL_EXPRESSION : NEW_EXPRESSION ARGUMENTS
                | CALL_EXPRESSION ARGUMENTS
                ;

ARGUMENTS : '(' ')'
          | '(' ARGUMENT_LIST ')'
          | '(' ARGUMENT_LIST ',' ')'
          ;

ARGUMENT_LIST : ASSIGNMENT_EXPRESSION
              | ARGUMENT_LIST ',' ASSIGNMENT_EXPRESSION
              ;
        
NEW_EXPRESSION : PRIMARY_EXPRESSION
               | LEFT_HAND '[' EXPRESSION ']'
               | LEFT_HAND '.' _ID
               ;

E : E '<' E
  | E '*' E
  | E '+' E
  | E '-' E
  | E '/' E
  | E '>' E
  | E '%' E
  | E '+' '+'
  | LEFT_HAND
  ;

PRIMARY_EXPRESSION : _ID
                   | _NUM
                   | _STRING
                   | FUNCTION_EXPRESSION
                   | OBJECT_LITERAL
                   | ARRAY_LITERAL
                   | '(' E ')'
                   ;

OBJECT_LITERAL : '{' '}'
               | '{' PROPRIETY_LIST '}'
               | '{' PROPRIETY_LIST ',' '}'
               ;

PROPRIETY_LIST : PROPRIETY
               | PROPRIETY_LIST ',' PROPRIETY
               ;

PROPRIETY : _ID
          | _ID INITIALIZER
          | PROPRIETY_NAME ':' ASSIGNMENT_EXPRESSION
          ;

PROPRIETY_NAME : _ID
               | _STRING
               | _NUM
               ;

ARRAY_LITERAL : '['  ']'
              | '[' ELISION_LIST ']'
              ;
            
ELISION_LIST : ASSIGNMENT_EXPRESSION
             | ELISION_LIST ',' ASSIGNMENT_EXPRESSION
             ;

FUNCTION_EXPRESSION : _FUNCTION _ID '(' FORMAL_PARAMS ')' '{' FUNCTION_BODY '}'
                    | _FUNCTION  '(' FORMAL_PARAMS ')' '{' FUNCTION_BODY '}'
                    ;

FORMAL_PARAMS : FORMAL_PARAMS_LIST
              |
              ;

FORMAL_PARAMS_LIST : FORMAL_PARAM
                   | FORMAL_PARAM ',' FORMAL_PARAMS_LIST
                   ;

FORMAL_PARAM : _ID INITIALIZER
             | _ID
             ;

FUNCTION_BODY : CMDs
              |
              ;

%%

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