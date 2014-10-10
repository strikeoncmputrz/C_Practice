// Program to convert a positive integer to another base
#include <stdio.h>

int main(void) 
{
	int i, numFibs;
	printf("How many Fibonacci numbers do you want? Limit 1 - 100. \n ");
	//Get number
	scanf("%ld", &numFibs);
	//Reject index out of bounds
	if (numFibs < 1 || numFibs > 100)
	{
		printf("Fuck off. You are out of bounds.\n");
		return 1;
	}
	unsigned long long int Fibonacci[numFibs];
	Fibonacci[0] = 0;
	Fibonacci[1] = 1;
	for(i = 2; i < numFibs; ++i){
		Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
	}
	for(i = 0; i < numFibs; ++i){
		printf("%llu ", Fibonacci[i]);
	}


	printf("\n");
	return 0;
}

