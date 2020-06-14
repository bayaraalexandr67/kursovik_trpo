build : main.o check.o game.o printstr.o setword.o wtime.o
	gcc -o build main.o check.o game.o printstr.o setword.o wtime.o
main.o : main.c game.h
	gcc -c main.c
check.o : check.c
	gcc -c check.c
game.o : game.c setword.h printstr.h wtime.h
	gcc -c game.c
printstr.o : printstr.c
	gcc -c printstr.c
setword.o : setword.c
	gcc -c setword.c
wtime.o : wtime.c
	gcc -c wtime.c
