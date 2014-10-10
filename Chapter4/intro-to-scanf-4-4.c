// Asks the user for input

#include <stdio.h>

int main (void)
{
	int n, counter, number, triNum;
	for( counter = 1; counter <=  5; ++counter){

		printf("What traingular number do you want?");
	
		scanf("%i", &number);
		triNum = 0;

		for(n=1; n <= number; n++){
			triNum += n;
		}		

		printf("Triangular number %i is %i\n", number, triNum);
	}
	return 0;
}
