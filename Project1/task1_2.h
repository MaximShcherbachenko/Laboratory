#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

//Calculating equilateral triangle area
void task_1_2() {
	float triangleSideLength, area;

	do {
		printf("\nEnter the length of triangle side(must be above zero):\n");
		triangleSideLength = valid_float_values();
	} while (triangleSideLength < 0);
	

	area = (sqrt(3) * pow(triangleSideLength, 2)) / 4;
	printf("\nTriangle area = %f\n", area);
}