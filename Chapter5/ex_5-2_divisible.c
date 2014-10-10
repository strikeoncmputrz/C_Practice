//This program prompts the user for two numbers and then tests to see if the first is evenly divisible by the second

#include <stdio.h>

int main(void){
	

	int first, last;

	printf("Provide two numbers to test if the first is evenly divisible by the second: ");
	scanf("%i %i", &first, &last);
	if(first % last == 0){
		printf("%i is evenly divisible by %i.\n", first, last);
	} else 
		printf("%i is not evenly divisible by %i.\n", first, last);
	return 0;

}
