//Program to determine the size of an int on this machine
#include <stdio.h>


int int_size()
{

	int x = ~0;
	int count = 1;
	while( x <<= 1)
		count++;
	return count;
}

int main (void)
{
	int int_size();
	int x = int_size();
	printf("Regular int size = %i \n", x);

	return 0;

};
