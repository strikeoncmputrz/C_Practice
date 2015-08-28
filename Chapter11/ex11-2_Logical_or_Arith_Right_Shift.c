//Program to determine how this PC implements bitwise right shift
//For signed negative int, if 1s shifted in, gcc implements arithmetic shift.
//If 0's shifted in, gcc implements a logical shift.
#include <stdio.h>

int main (void)
{
	
	int w1;
	printf("Provide a signed int: \n");
	scanf("%i", &w1);
	printf("%i \n", w1);
	printf("%i \n", w1 >> 1);

	return 0;

};
