// This program calculates the sum of the digits of a positive integer

#include <stdio.h>

int main(void){
	int sum, input, orig;
	printf("Please Enter an Integer:  ");
	scanf("%i", &input);
	orig = input;
	do{
		sum += input % 10;
		input = input/10;
	} while(input != 0);

	printf("The Sum of the digits in %i is %i.\n", orig, sum);
	return 0;
}

