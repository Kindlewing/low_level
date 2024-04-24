SRC=src
CFLAGS = -Wall -Wextra -std=c11 -pedantic
CC=gcc
LIBS=
main: $(SRC)/*.c
	$(CC) $(CFLAGS) -o main $(SRC)/*.c $(LIBS)

