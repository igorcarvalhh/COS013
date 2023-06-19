D	[0-9]
L	[a-zA-Z_]

/* whitespace: espaco, tab ou \n */
WS	[ \t\n]

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

{WS}		{ /* ignora espaços, tabs e '\n' */ }

{COMENTARIO} 	{ yylval.v = yytext; return COMENTARIO; }
{ML_COMMENT} 	{ yylval.v = yytext; return ML_COMMENT; }
{STRING} 	    { yylval.v = yytext; return _STRING; }
{NUM}   	    { yylval.v = yytext; return _NUM; }
{LET}           { yylval.v = yytext; return _LET;}
{VAR}           { yylval.v = yytext; return _VAR;}
{CONST}         { yylval.v = yytext; return _CONST;}
{FOR}           { yylval.v = yytext; return _FOR;}
{FUNCTION}      { yylval.v = yytext; return _FUNCTION;}
{IF}            { yylval.v = yytext; return IF;}
{ELSE}          { yylval.v = yytext; return ELSE;}
{DO}            { yylval.v = yytext; return DO;}
{WHILE}         { yylval.v = yytext; return WHILE;}
{BREAK}         { yylval.v = yytext; return BREAK;}
{RETURN}        { yylval.v = yytext; return RETURN;}
{SWITCH}        { yylval.v = yytext; return SWITCH;}
{CASE}          { yylval.v = yytext; return CASE;}
{DEFAULT}       { yylval.v = yytext; return DEFAULT;}
{ID}		    { yylval.v = yytext; return _ID; }

.       	    { yylval.v = yytext; return *yytext; }

%%
