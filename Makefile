CC = g++
CFLAGS = -c -Wall
OBJECTS = monkeyKing.o

all: monkeyKing

monkeyKing: monkeyKing.o
	$(CC) -o monkeyKing monkeyKing.o
monkeyKing.o: monkeyKing.cpp
	$(CC) $(CFLAGS) monkeyKing.cpp

clean:
	-rm monkeyKing $(OBJECTS)
.PHONY: clean
