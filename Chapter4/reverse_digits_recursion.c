// This program reverses the digits of the input number

#include <stdio.h>

int main(void){

	int num, right_digit;
	printf("Enter your Number:\n");
	scanf("%i", &num);
	while(num != 0){
		right_digit = num % 10;
		printf("%i", right_digit);
		num = num/10;
	}
	printf("\n");
	return 0;
}

