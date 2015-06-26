rm: exe
	rm *.o

exe: stack.o
	g++ main.cpp stack.o -o exe

satck.o:
	g++ -c stack.cpp