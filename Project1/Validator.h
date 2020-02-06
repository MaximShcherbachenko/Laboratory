#include <stdio.h>
#include <stdlib.h>


float valid_float_values() {
	float value;
	while (!scanf_s(" %f", &value)) {
		rewind(stdin);
		printf("\nTry again:\n");
		fflush(stdin);
	}
	return value;
}


int valid_int_values() {
	int value;
	while (!scanf_s(" %d", &value)) {
		rewind(stdin);
		printf("\nTry again:\n");
		fflush(stdin);
	}
	return value;
}
