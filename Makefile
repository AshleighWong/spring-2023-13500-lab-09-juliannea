main: main.o funcs.o
	g++ -o main -std=c++11 main.o funcs.o

tests: tests.o funcs.o
	g++ -o tests -std=c++11 tests.o funcs.o

poem: poem.o 
	g++ -o poem -std=c++11 poem.o 


main.o: main.cpp funcs.h 
	g++ -c -std=c++11 main.cpp

tests.o: tests.cpp doctest.h funcs.h 
	g++ -c -std=c++11 tests.cpp

poem.o: poem.cpp 
	g++ -c -std=c++11 poem.cpp

clean:
	rm -f main.o funcs.o main 
