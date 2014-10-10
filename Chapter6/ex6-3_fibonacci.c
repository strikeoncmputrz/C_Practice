//Generates the first 15 Fibonacci #s

#include <stdio.h>

int main(void)
{
	int Fib[15], i;
	Fib[0] = 0;
	Fib[1] = 1;
	for(i = 2; i < 15; i++)
		Fib[i] = Fib[i-2] + Fib[i-1];
	for(i = 0; i < 15; i++)
		printf("%i\n", Fib[i]);
	return 0;
}
