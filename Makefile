all: calculator

calculator: main.o function.o
	g++ main.o function.o -o calculator

main.o: main.cpp
	g++ -c main.cpp

function.o: function.cpp
	g++ -c function.cpp

