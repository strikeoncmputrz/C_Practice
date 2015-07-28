//Function to sort three integers
#include <stdio.h>

void swop(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}

void sort3(int a, int b, int c)
{

	if(a > c)
		swop(&a, &c);

	if(a > b)
		swop(&a, &b);
	if(b > c)
		swop(&b, &c);

	printf("A = %i, B = %i, C = %i\n", a, b, c);

}


int main (void)
{
	int a = 50, b = 34, c = 42;
	void swop(int *x, int *y);
	void sort3(int a, int b, int c);
	sort3(a, b, c);

};
