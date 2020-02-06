#include <stdio.h>


void task_2_1() {
	int n, p;
	unsigned int u, unitStateWord;

	
	do {
		printf("Enter the node number(0 - 15):\n");
		n = valid_int_values();
	} while (n < 0 || n > 15);

	
	do {
		printf("Enter the message priority(0 - 7):\n");
		p = valid_int_values();
	} while (p < 0 || p > 7);

	
	do {
		printf("Enter the user identifier(0 - 255):\n");
		u = valid_int_values();
	} while (u < 0 || u > 255);


	unitStateWord = (n & 0xF) << 12;
	unitStateWord |= (p & 0x7) << 8;
	unitStateWord |= u & 0xFF;

	printf("\nState word is %04x\n", unitStateWord);
}