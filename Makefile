main: main.o funcs.o
	g++ -o main main.o funcs.o


indent: indent.o funcs.o
	g++ -o indent indent.o funcs.o


unindent: unindent.o funcs.o
	g++ -o unindent unindent.o funcs.o

indent.o: indent.cpp funcs.h
	g++ -c indent.cpp

unindent.o: unindent.cpp funcs.h
	g++ -c unindent.cpp

main.o: main.cpp funcs.h
	g++ -c main.cpp

funcs.o: funcs.cpp
	g++ -c funcs.cpp


clean:
	rm main.o funcs.o

