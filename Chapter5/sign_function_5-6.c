//This program implements the sign function
#include <stdio.h>
int main(void){
	int test;
	printf("Enter a number to test its sign: ");
	scanf("%i", &test);
	if(test > 0)
		printf("%i is positive.\n", test);
	else if(test < 0)
		printf("%i is negative.\n", test);
	else
		printf("%i is zero.\n", test);
	




	return 0;
}
