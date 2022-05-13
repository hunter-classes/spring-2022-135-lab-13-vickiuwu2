main: main.o recursion.o 
	g++ -o main main.o recursion.o

tests: tests.o recursion.o
	g++ -o tests tests.o recursion.o

tasks.o: tasks.cpp recursion.h
	g++ -std=c++11 -c tasks.cpp

main.o: main.cpp recursion.h
	g++ -std=c++11 -c main.cpp

tests.o: tests.cpp doctest.h recursion.h
	g++ -std=c++11 -c tests.cpp

clean:
	rm main.o recursion.o tests.o