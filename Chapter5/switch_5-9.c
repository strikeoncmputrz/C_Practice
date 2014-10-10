/* This program evaluates a simple expression of the form float (+ | - | * | /) float and returns the answer 
*/

#include <stdio.h>

int main(void){
	float f1, f2;
	char operator;
	printf("Please type in a simple expression of the form float operator float, where the operator may be +, -, *, / : ");
	scanf("%f %c %f", &f1, &operator, &f2);
	
	switch (operator){
		case '+':
			printf("The answer is %.2f.\n", f1 + f2);
			break;
		case  '-':
			printf("The answer is %.2f.\n", f1 - f2);
			break;
		case '*':
			printf("The answer is %.2f.\n", f1 * f2);
			break;	
		case '/':
			if(f2 != 0){
				printf("The answer is %.2f.\n", f1 / f2); 
			} else		
				printf("You can't divide by zero!\n");
			break;
		default:
			printf("You did not type in an eligable operator.\n");
			break;
	}
	return 0;
}
