//This program prompts the user for two numbers and then divides them and prints the answer to three decimal points of accuracy 

#include <stdio.h>

int main(void){
	

	int first, last;

	printf("Provide two numbers to divide them: ");
	scanf("%i %i", &first, &last);
	if(last == 0){
		printf("%i is zero!.\n", last);
	} else 
		printf("%i divided  by %i is %.3f\n", first, last, (float) first/last);
	return 0;

}
