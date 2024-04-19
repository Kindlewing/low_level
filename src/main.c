#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "defs.h"

int main() {
	puts("Welcome to the BrainF***k interpreter");

	char *tape;
	char *program;

	tape = malloc(MEMORY_SIZE);
	program = malloc(MEMORY_SIZE);

	if (tape == NULL) {
		fprintf(stderr, "Tape memory allocation failed\n");
		return 1; // Exit with an error code
	}
	if (program == NULL) {
		fprintf(stderr, "Program memory allocation failed\n");
		return 1;
	}

	memset(tape, 0, MEMORY_SIZE);

	char code[MEMORY_SIZE] = ">>++";
	for (int i = 0; i < MEMORY_SIZE; i++) {
	}

	for (int i = 0; i < MEMORY_SIZE; i++) {
		printf("%d", tape[i]);
	}
	printf("\n");

	free(tape);
	free(program);
	return 0;
}
