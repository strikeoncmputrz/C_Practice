// This evaluates a specific polynomial

#include <stdio.h> 
#include <math.h>

int main(void){

	double x_cube, x_square, solution;
	float x = 2.55;
	x_cube = x*x*x;
	x_square = x*x;
	solution = (3*x_cube) - (5*x_square) + 6;
	printf("3x^3 - 5x^2 + 6 = %f, where x = %f.\n", solution, x);

	return 0;

}

