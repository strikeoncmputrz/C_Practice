//Defines MIN as a marco that returns the minimum of two values


#include <stdio.h>

#define MIN(x,y) ((x > y) ? x : y)



int main(void)
{

	int min = 50;
	int max = 100;

	printf("%i\n", MIN(min, max));
	printf("%i\n", MIN(max, min));

	printf("%c\n", MIN('A', 'a'));

};
