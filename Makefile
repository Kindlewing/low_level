SRC=src

SRC_FILES=$(wildcard *.c)


CFLAGS = -Wall -Wextra -std=c11 -pedantic
CC=gcc
LIBS=

main: $(SRC)/$(SRC_FILES)
	$(CC) $(CFLAGS) -o main $(SRC)/$(SRC_FILES) $(LIBS)

