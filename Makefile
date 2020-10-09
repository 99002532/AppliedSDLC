
CC=g++
CFLAGS=-c -wall

all: calculator

calculator: main.o function.o
	$(CC) main.o function.o -o calculator

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

function.o: function.cpp
	$(CC) $(CFLAGS) function.cpp

clean:
	rm -rf *o hello

