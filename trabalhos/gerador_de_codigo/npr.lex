%{
void acerta_coluna();    
    
%}

D	[0-9]
L	[a-zA-Z_]

/* whitespace: espaco, tab ou \n */
/*
WS	[ \t\n]
*/

STRING	\"(\"\"|\\\"|[^\"])*\"

COMENTARIO "//".*
ML_COMMENT [/][*][^*]*[*]+([^*/][^*]*[*]+)*[/] 

INT	{D}+
NUM	{INT}("."{INT})?([Ee]("+"|"-")?{INT})?
ID	{L}({L}|{D})*

LET let
VAR var
CONST const
FOR for
FUNCTION function
IF if
ELSE else
DO do
WHILE while
BREAK break
RETURN return 
SWITCH switch
CASE case
DEFAULT default

%%

" "		{ coluna++; }

"\t"	{ coluna += 4; }

"\n"    { linha++; coluna = 1; }

{COMENTARIO} 	{ acerta_coluna(); return COMENTARIO; }
{ML_COMMENT} 	{ acerta_coluna(); return ML_COMMENT; }
{STRING} 	    { acerta_coluna(); return STRING; }
{NUM}   	    { acerta_coluna(); return NUM; }
{LET}           { acerta_coluna(); return LET;}
{VAR}           { acerta_coluna(); return VAR;}
{CONST}         { acerta_coluna(); return CONST;}
{FOR}           { acerta_coluna(); return FOR;}
{FUNCTION}      { acerta_coluna(); return FUNCTION;}
{IF}            { acerta_coluna(); return IF;}
{ELSE}          { acerta_coluna(); return ELSE;}
{DO}            { acerta_coluna(); return DO;}
{WHILE}         { acerta_coluna(); return WHILE;}
{BREAK}         { acerta_coluna(); return BREAK;}
{RETURN}        { acerta_coluna(); return RETURN;}
{SWITCH}        { acerta_coluna(); return SWITCH;}
{CASE}          { acerta_coluna(); return CASE;}
{DEFAULT}       { acerta_coluna(); return DEFAULT;}
{ID}		    { acerta_coluna(); return ID; }
"+="            { acerta_coluna(); return MAIS_IGUAL; }
.       	    { acerta_coluna(); return *yytext; }

%%

void acerta_coluna() {
    coluna += strlen( yytext ); 
    yylval.c.clear();
    yylval.c.push_back( yytext );
}