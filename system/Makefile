main : main.o lib/add.o lib/sub.o lib/mul.o lib/div.o
	gcc -o main main.o lib/add.o lib/sub.o lib/mul.o lib/div.o

main.o : main.c
	gcc -c main.c

add.o : add.c
	gcc -c add.c

sub.o : sub.c
	gcc -c sub.c

mul.o : mul.c
	gcc -c mul.c

div.o : div.c
	gcc -c div.c

clean : 
	rm -f main main.o lib/add.o lib/sub.o lib/mul.o lib/div.o
