//This Calculates the absolute value of an Integer

#include <stdio.h>

int main (void){

	int num;
	
	printf("Type in your number here: ");
	scanf("%i", &num);
	
	if(num < 0)
		num = -num;
	
	printf("The absolute value is %i.\n", num);
	
	return 0;
}
