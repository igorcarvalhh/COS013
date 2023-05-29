 %{
// Includes em C/C++ e outras definições.
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

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

%}

// Tokens
%token	 _ID _NUM _STRING _LET _VAR _CONST _FOR _FUNCTION _PRINT

%start  S

%right '=' 
%nonassoc '<' '>' 
%left '+' '-'
%left '*' '/' '%'
%left '[' '('

%%

S : CMDs 
  ;

CMDs : CMD CMDs
     | DECL_VAR ';' CMDs   
     | DECL_FUN CMDs
     | 
     ;
     
CMD : CMD_FOR
    | ATRIB ';'
    | E ';'
    | '{' CMDs '}'
    | ';'
    ;
    
CMD_FOR : _FOR '(' E_OPC ';' E_OPC ';' E_OPC ')' CMD     
        | _FOR '(' DECL_VAR ';' E_OPC ';' E_OPC ')' CMD     
        ;
        
E_OPC : E
      | ATRIB
      |
      ;
  
DECL_VAR : _LET VARs 
         | _VAR VARs 
         | _CONST CTEs 
         ;
         
DECL_FUN : _FUNCTION _ID '(' ')' '{' CMDs '}' 
         | _FUNCTION _ID '(' PARAMs ')' '{' CMDs '}'
         ;
         
PARAMs : PARAM ','PARAMs
       | PARAM
       ;
       
PARAM : _ID '=' E
      | _ID
      ;
     
VARs : VAR ',' VARs
     | VAR
     ;

VAR : _ID '=' E
    | _ID
    ;
    
CTEs : _ID '=' E ',' CTEs
     | _ID '=' E
     ;
  
ATRIB : _ID '=' E
      ;

E : E '<' E
  | E '*' E
  | E '+' E
  | E '-' E
  | E '/' E
  | E '>' E
  | E '%' E
  | E '[' E ']'
  | E '(' ')'
  | E '(' ARGs ')'
  | F
  ;

F : _ID
  | _NUM
  | '(' E ')'
  ;


ARGs : E ',' ARGs
     | E
     ;
  
%%

#include "lex.yy.c"

void yyerror( const char* msg ) {
  cout << endl << "Erro: " << msg << endl
       << "Perto de : '" << yylval.v << "'" <<endl;
  exit( 1 );
}

int main() {
  yyparse();
  cout << endl;
}