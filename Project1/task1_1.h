#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>

//Calculating
void task_1_1() {
	float z, t, x, y;

	printf("\nx = 4*y^2/(4*z - 2*t^3)\n");
	printf("y = sin(t)\n");

	printf("Enter z:\n");
	z = valid_float_values();

	printf("Enter t:\n");
	t = valid_float_values();

	y = sin(t);
	x = 4 * pow(y, 2) / (4 * z - 2 * pow(t, 3));
	printf("x = %f\n", x);
}
