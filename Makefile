all:	fib
fib:	fib.o main.o
	gcc -o fib fib.o main.o
fib.o:	fib.c
	gcc -c fib.c
main.o:	main.c
	gcc -c main.c
