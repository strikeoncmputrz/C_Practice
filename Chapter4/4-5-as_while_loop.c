// Asks the user for input

#include <stdio.h>

int main (void)
{
	int n, counter = 1, number, triNum;
	while(counter < 6){
		printf("What traingular number do you want?");
		scanf("%i", &number);
		
		triNum = 0;
		n = 1;
		while(n <= number){
			triNum += n;
			n++;
		}		

		printf("Triangular number %i is %i\n", number, triNum);
		counter++;
	}
	return 0;
}
