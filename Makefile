build : main.o check.o game.o printstr.o setword.o wtime.o timemode.o mmextras.o
	gcc -o build main.o check.o game.o printstr.o setword.o wtime.o timemode.o mmextras.o
main.o : main.c mmextras.h
	gcc -c main.c
mmextras.o : mmextras.c game.h timemode.h
	gcc -c mmextras.c
game.o : game.c setword.h printstr.h wtime.h check.h
	gcc -c game.c
timemode.o :timemode.c setword.h printstr.h wtime.h check.h
	gcc -c timemode.c
setword.o : setword.c
	gcc -c setword.c
printstr.o : printstr.c
	gcc -c printstr.c
wtime.o : wtime.c
	gcc -c wtime.c
check.o : check.c
	gcc -c check.c
.PHONY : clean
clean :
	rm *.o
