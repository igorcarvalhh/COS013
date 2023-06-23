FLAGS=-Wall -std=c++17

run: lex.yy.c	
	g++ ${FLAGS} main.cc -ll
	./a.out

teste: lex.yy.c
	g++ main.cc -ll
	./a.out

lex.yy.c: scan.lex
	lex scan.lex
