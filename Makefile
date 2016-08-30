#Name: Kenneth Devon Gaston and Anthony Stewart
#Name: Makefile
#Purpose: Makefile for the main.cpp program

#Complier version
CC = g++

#Target
TARGET = main

#Flags
CFLAGS = -c -Wall

all: $(TARGET)

$(TARGET): main.o 
	$(CC) main.o -o $(TARGET)

main.o: main.cpp 
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o $(TARGET) *~
