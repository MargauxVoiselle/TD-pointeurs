main : main.o chaines.o listes.o structures.o
	gcc -o main main.o chaines.o listes.o structures.o

main.o : main.c
	gcc -c main.c

chaines.o : chaines.c chaines.h
	gcc -c chaines.c

listes.o : listes.c listes.h
	gcc -c listes.c

structures.o : structures.c structures.h
	gcc -c structures.c

run : main
	./main

clean :
	rm -f main *.o