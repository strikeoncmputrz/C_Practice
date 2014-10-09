//This programn recursively calculates the factorial of a number j

#include <stdio.h>


int main(void)
{
	unsigned int j;
	unsigned long int factorial (unsigned int n);

	for(j = 0; j < 11; ++j)
		printf("%2u! = %lu\n", j, factorial(j));
	return 0;
}


//This function recursively calculates the factorial of a number
unsigned long int factorial(unsigned int n)
{
	unsigned long int result;

	if(n == 0)
		result = 1;
	else
		result = n * factorial(n -1);

	return result;
}
