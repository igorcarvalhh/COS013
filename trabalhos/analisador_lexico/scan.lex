%{
#include <string>
string lexema;
%}

_LETRA [a-zA-Z]
_DIGIT [0-9]
_ID ($[a-zA-Z0-9_]*(@[a-zA-Z0-9_@])?|[a-zA-Z_][a-zA-Z0-9_@]*) 
_INT {_DIGIT}+
_FLOAT ("+"|"-")?{_DIGIT}*\.?{_DIGIT}+(("e"|"E")("+"|"-")?{_DIGIT}+)?
_FOR (?i:for)
_IF (?i:if)
_MAIG ">="
_MEIG "<="
_IG "=="
_DIF "!="
_COMENTARIO (\/\*([^*]|\**[^\/\*])*\*(\*|[^\/\*][^*]*\*)*\/|\/\/.*\n)
_STRING (\"([^\"\\\n]|[""]|\\+[^n\\])*\"|\'([^\'\\\n]|['']|\\+[^n\\])*\')
_STRING2 \`[.\n]*(\$\{{_ID}\})?[.\n]*\`

%%

[ ] { }
{_STRING2} { lexema = yytext; lexema.erase(0,1); lexema.erase(lexema.end()-1,lexema.end()); return _STRING2; }
{_COMENTARIO} { lexema = yytext; lexema.erase(0,2); lexema.erase(lexema.end()-2,lexema.end()); return _COMENTARIO; }
{_STRING} { lexema = yytext; return _STRING; }
{_IF} { lexema = yytext; return _IF; }
{_FOR} { lexema = yytext; return _FOR; }
{_MAIG} { lexema = yytext; return _MAIG; }
{_MEIG} { lexema = yytext; return _MEIG; }
{_IG} { lexema = yytext; return _IG; }
{_DIF} { lexema = yytext; return _DIF; }
{_INT} { lexema = yytext; return _INT; }
{_ID} { lexema = yytext; return _ID; }
{_FLOAT} { lexema = yytext; return _FLOAT; }

%%

/*
_STRING \"([^\"\\\n]|\"\"|\\+[^n\\])*\"[^\"]
int main() {
	yylex();
	return 0;
}
*/
