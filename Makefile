TARGET=main
SRC=src
SRC_FILES=$(wildcard *.c)

CFLAGS = -Wall -Wextra -std=c11 -pedantic
CC=gcc

OBJECTS=$(patsubst %.c, %.o, $(wildcard *.c))
HEADERS=$(wildcard *.h)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CC) $(OBJECTS) -o $@ 

