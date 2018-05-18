all: main

main: main.o Solution.o
	g++ -o main main.o Solution.o

main.o: main.cpp
	g++ -c main.cpp

Solution.o: Solution.cpp
	g++ -c Solution.cpp

clean:
	rm *.o main
