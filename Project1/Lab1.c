#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include "Validator.h"
#include "task1_1.h"
#include "task1_2.h"
#include "task2_1.h"
#include "task2_2.h"

void helloPrintOne() {
	printf("\nChoose the number of subtask:\n");
	printf("1. x = 4*y^2 / (4*z - 2*t^3)\n");
	printf("2. The second cathet and the radius of the inscribed circle of the triangle\n");
	printf("3. Exit\n");
}


void helloPrintTwo() {
	printf("\nChoose the number of subtask:\n");
	printf("1. Packing\n");
	printf("2. Unpacking\n");
	printf("3. Exit\n");
}

int main() {
	int firstUserInput;
    int secondUserInput;

	while(1) {
		printf("\nChoose the number of task:\n");
		printf("1. First\n");
		printf("2. Second\n");
		printf("3. Exit\n");
		firstUserInput = valid_int_values();

		if (firstUserInput == 1) {
			helloPrintOne();

			secondUserInput = valid_int_values();

			if (secondUserInput == 1) {
				task_1_1();
			}
			else if (secondUserInput == 2) {
				task_1_2();
			}
			else if (secondUserInput == 3) {
				continue;
			}
			else {
				printf("\nThere is no such option. Try again.\n");
			}
		}

		else if (firstUserInput == 2) {
			helloPrintTwo();

			secondUserInput = valid_int_values();

			if (secondUserInput == 1) {
				task_2_1();
			}
			else if (secondUserInput == 2) {
				task_2_2();
			}
			else if (secondUserInput == 3) {
				continue;
			}
			else {
				printf("\nThere is no such option. Try again.\n");
			}
		}

		else if (firstUserInput == 3) {
			break;
		}

		else {
			printf("\nThere is no such option. Try again.\n");
		}
	}
	return 0;
}
