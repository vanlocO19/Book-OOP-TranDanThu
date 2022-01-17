CC = g++

all: Figure.o Rectangle.o Square.o main.o
	$(CC) Rectangle.o Square.o main.o -o main

Figure.o: Figure.cpp Figure.h
	$(CC) -g -c Figure.cpp

Rectangle.o: Rectangle.cpp Rectangle.h
	$(CC) -g -c Rectangle.cpp

Square.o: Square.cpp Square.h
	$(CC) -g -c Square.cpp

main.o: Rectangle.h Square.h main.cpp
	$(CC) -g -c main.cpp

clean: 
	rm *.o
	rm main
