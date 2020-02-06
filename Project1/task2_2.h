#include <stdio.h>


void task_2_2() {
	char n, p;
	unsigned int u, unitStateWord;

	printf("\nEnter the state word:\n");
	scanf_s(" %x", &unitStateWord);

	n = (unitStateWord >> 12) & 0xF;
	p = (unitStateWord >> 8) & 0x7;
	u = unitStateWord & 0xFF;

	printf("\nNode number = %d\n", n);
	printf("Message priority = %d\n", p);
	printf("User identifier = %d\n", u);
}