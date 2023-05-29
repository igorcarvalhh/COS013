D	[0-9]
L	[a-zA-Z_]

/* whitespace: espaco, tab ou \n */
WS	[ \t\n]

STRING	\"(\"\"|\\\"|[^\"])*\"

INT	{D}+
NUM	{INT}("."{INT})?([Ee]("+"|"-")?{INT})?
ID	{L}({L}|{D})*
PRINT	[Pp][Rr][Ii][Nn][Tt]
LET     let
VAR     var
CONST   const
FOR     for
FUNCTION    function
%%

{WS}		{ /* ignora espaços, tabs e '\n' */ }

{STRING} 	{ yylval.v = yytext; return _STRING; }
{NUM}   	{ yylval.v = yytext; return _NUM; }
{PRINT} 	{ yylval.v = yytext; return _PRINT; }

{LET} 	    { yylval.v = yytext; return _LET; }
{VAR} 	    { yylval.v = yytext; return _VAR; }
{CONST} 	{ yylval.v = yytext; return _CONST; }
{FOR} 	    { yylval.v = yytext; return _FOR; }
{FUNCTION} 	{ yylval.v = yytext; return _FUNCTION; }

{ID}		{ yylval.v = yytext; return _ID; }

.       	{ yylval.v = yytext; return *yytext; }

%%