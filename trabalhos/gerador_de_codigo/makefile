all: saida entrada.js
	./saida < entrada.js

saida: lex.yy.c y.tab.c
	g++ -w -std=c++11 y.tab.c -o saida -ll	
	
lex.yy.c: npr.lex
	lex npr.lex
	
y.tab.c: npr.y
	yacc npr.y
	
clean: 
	rm -f lex.yy.c y.tab.c saida
