//Defines MAX3 which returns the max of three values
//Important example of when a definition can be used to 
//decrease typing!

#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? x : y)
#define MAX3(i, j, k) (((MAX(i, j)) > (k) ? MAX(i, j) : k))

int main(void)
{
	int x = 30;
	int y = 31;
	int z = 32;

	printf("%i\n", MAX3(x, y, z));
	printf("%i\n", MAX3(y, z, x));
};
