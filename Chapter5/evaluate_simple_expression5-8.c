/* This program evaluates a simple expression of the form float (+ | - | * | /) float and returns the answer 
*/

#include <stdio.h>

int main(void){
	float f1, f2;
	char operator;
	printf("Please type in a simple expression of the form float operator float, where the operator may be +, -, *, / : ");
	scanf("%f %c %f", &f1, &operator, &f2);
	if(operator == '+'){
		printf("The answer is %.2f.\n", f1 + f2);
	} else if(operator == '-'){
		printf("The answer is %.2f.\n", f1 - f2);
	} else if(operator == '*'){
		printf("The answer is %.2f.\n", f1 * f2);
	} else if(operator == '/'){
		printf("The answer is %.2f.\n", f1 / f2);
	}

	return 0;
}
