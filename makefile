all: 9.o
	gcc -o 9 9.o
9.o: 9.c
	gcc -c 9.c
run:
	./9
