static: main.o func1.o func2.o libfunc.a
	gcc main.o -L. -lfunc -o result

dynamic: main.o func1.o func2.o libfuncdyn.so
	gcc main.o -L. -lfuncdyn -o resultdyn

dynamicload: main_dyn.c
	gcc main_dyn.c -o resultdyn_load -ldl

main.o: main.c
	gcc -c main.c

func1.o: func1.c
	gcc -c func1.c

func2.o: func2.c
	gcc -c func2.c

libfunc.a: func1.o func2.o
	ar rc libfunc.a func1.o func2.o
	ranlib libfunc.a

libfuncdyn.so: func1.o func2.o
	gcc -shared -o libfuncdyn.so func1.o func2.o

clean:
	rm -rf *.o
