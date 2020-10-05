build : main.o check.o game.o printstr.o setword.o wtime.o timemode.o mmextras.o
	gcc -o build main.o check.o game.o printstr.o setword.o wtime.o timemode.o mmextras.o
.PHONY : clean test debug
test : test_app
	./test_app
debug : build_debug
	gdb ./build_debug
build_debug : main.c check.c game.c printstr.c setword.c wtime.c timemode.c mmextras.c check.h game.h mmextras.h printstr.h setword.h timemode.h wtime.h
	gcc -O0 -g -o build_debug main.c check.c game.c printstr.c setword.c wtime.c timemode.c mmextras.c
test_app : test.o test_main.o
	gcc -o test_app test.o test_main.o
test.o : test.c
	gcc -c test.c
test_main.o : test_main.c
	gcc -c test_main.c
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
clean :
	rm *.o
