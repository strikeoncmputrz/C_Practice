// This program reverses the digits of the input number

#include <stdio.h>
#include <stdbool.h>
int main(void){

	int num, right_digit;
	bool isNeg = false;
	printf("Enter your Number:\n");
	scanf("%i", &num);
	while(num != 0){
		if(num > 0){
			right_digit = num % 10;
			printf("%i", right_digit);
			num = num/10;
		}else{ 
			num *=-1;
			isNeg = true;
		}
	
	}
	if(isNeg)
		printf("-");
	printf("\n");
	return 0;
}

