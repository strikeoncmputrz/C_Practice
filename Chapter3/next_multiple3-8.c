//Rounds of int i to the next largest even(?) multiple of int j

#include <stdio.h>

int main (void)
{
	int i, j, Next_Multiple;
	
	i = 365;
	j=7;
	printf("Next Multiple = %i.\n", i + j - i % j);
	
	i = 12258;
	j=23;
	printf("Next Multiple = %i.\n", i + j - i % j);

	i = 996;
	j=4;
	printf("Next Multiple = %i.\n", i + j - i % j);

	return 0;


}
