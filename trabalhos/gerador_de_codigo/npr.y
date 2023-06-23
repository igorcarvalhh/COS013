%{

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

%}

// Tokens
%token	 ML_COMMENT COMENTARIO ID NUM STRING LET VAR CONST FOR FUNCTION IF ELSE DO WHILE SWITCH DEFAULT CASE BREAK RETURN MAIS_IGUAL

%start  S

%right '=' 
%nonassoc '<' '>' 
%left '+' '-'
%left '*' '/' '%'
%left '[' '('

%%

S : CMDs { imprime_codigo( resolve_enderecos( $1.c + "." ) ); cout << endl;}
  ;

CMDs : CMD CMDs { $$.c = $1.c + $2.c; }
     | {$$.c.clear();}
     ;
     
CMD : STATEMENT { $$.c = $1.c; }
    | COMENTARIO { $$.c.clear(); }
    | ML_COMMENT  { $$.c.clear(); }
    | DECLARATIONS { $$.c = $1.c; }
    ;


STATEMENT : BLOCK
          | VAR_CMD { $$.c = $1.c; }
          | ';' { $$.c.clear(); }
          | EXPRESSION_CMD
          | IF_CMD
          | ITERATION_CMD
          | BREAK_CMD
          | RETURN_CMD
          | SWITCH_CMD
          ;

DECLARATIONS : FUNCTION_DECLARATION
             ;

FUNCTION_DECLARATION : FUNCTION ID '(' FORMAL_PARAMS ')' '{' FUNCTION_BODY '}'
                     | FUNCTION  '(' FORMAL_PARAMS ')' '{' FUNCTION_BODY '}'
                     ;

BLOCK : '{' CMDs '}'
      ;

VAR_CMD : VAR DECL_VARs ';'
        | LET DECL_VARs ';' { $$.c = $2.c; }
        | CONST DECL_VARs ';'
        ;

DECL_VARs : DECL_VAR {$$.c = $1.c ;}
          | DECL_VAR ',' DECL_VARs { $$.c = $1.c + $3.c; }
          ;

DECL_VAR : ID INITIALIZER { $$.c = $1.c + "&" + $1.c + $2.c +"^"; }
         | ID { $$.c = $1.c + "&"; }
         ;

INITIALIZER : '=' ASSIGNMENT_EXPRESSION { $$.c.clear(); $$.c = $2.c + "="; }
            ;

ASSIGNMENT_EXPRESSION : E
                      | LEFT_HAND '=' ASSIGNMENT_EXPRESSION { $$.c = $1.c + $3.c + "="; }
                      | LEFT_HAND MAIS_IGUAL ASSIGNMENT_EXPRESSION { $$.c = $1.c + $1.c + "@" + $3.c + "+ ="; }
                      ;

RIGHT_HAND : ASSIGNMENT_EXPRESSION
           | EXPRESSION
           ;

EXPRESSION_CMD : EXPRESSION ';' { $$.c = $1.c + "^"; }
               ;

IF_CMD : IF '(' EXPRESSION ')' STATEMENT ELSE STATEMENT
       ;

ITERATION_CMD : DO CMD WHILE '(' E ')'
              | WHILE '(' E ')' CMD
              | FOR '(' VAR_CMD FOR_E ';' FOR_E ')' STATEMENT
              | FOR '(' FOR_E ';' FOR_E ';' FOR_E ')' STATEMENT
              | FOR '(' FOR_E ';' FOR_E ';' FOR_E ')' '{'  '}'
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
               | LEFT_HAND '.' ID
               ;

E : E '<' E
  | E '*' E { $$.c = $1.c + $3.c + "*";}
  | E '+' E { $$.c = $1.c + $3.c + "+";}
  | E '-' E 
  | E '/' E
  | E '>' E
  | E '%' E
  | E '+' '+'
  | R_VALUES 
  ;

R_VALUES : ID { $$.c = $1.c + "@"; }
         | NUM 
         | STRING 
         | FUNCTION_EXPRESSION
         | OBJECT_LITERAL
         | ARRAY_LITERAL
         | '(' E ')' { $$.c = $2.c; }
         ;

PRIMARY_EXPRESSION : ID { $$.c = $1.c; }
                   | NUM 
                   | STRING 
                   | FUNCTION_EXPRESSION
                   | OBJECT_LITERAL
                   | ARRAY_LITERAL
                   | '(' E ')' { $$.c = $2.c; }
                   ;

OBJECT_LITERAL : '{' '}'
               | '{' PROPRIETY_LIST '}'
               | '{' PROPRIETY_LIST ',' '}'
               ;

PROPRIETY_LIST : PROPRIETY
               | PROPRIETY_LIST ',' PROPRIETY
               ;

PROPRIETY : ID
          | ID INITIALIZER
          | PROPRIETY_NAME ':' ASSIGNMENT_EXPRESSION
          ;

PROPRIETY_NAME : ID
               | STRING 
               | NUM 
               ;

ARRAY_LITERAL : '['  ']'
              | '[' ELISION_LIST ']'
              ;
            
ELISION_LIST : ASSIGNMENT_EXPRESSION
             | ELISION_LIST ',' ASSIGNMENT_EXPRESSION
             ;

FUNCTION_EXPRESSION : FUNCTION ID '(' FORMAL_PARAMS ')' '{' FUNCTION_BODY '}'
                    | FUNCTION  '(' FORMAL_PARAMS ')' '{' FUNCTION_BODY '}'
                    ;

FORMAL_PARAMS : FORMAL_PARAMS_LIST
              |
              ;

FORMAL_PARAMS_LIST : FORMAL_PARAM
                   | FORMAL_PARAM ',' FORMAL_PARAMS_LIST
                   ;

FORMAL_PARAM : ID INITIALIZER
             | ID
             ;

FUNCTION_BODY : CMDs
              |
              ;

%%

  #include "lex.yy.c"

    void yyerror( const char* msg ) {
    cout << endl << "Erro: " << msg << endl
        << "Perto de : '" << yylval.c[0] << "'" <<endl
        << "Linha: " << linha << ", coluna: " << coluna <<endl;
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
    //cout << "Sintaxe ok" << endl;
    }
