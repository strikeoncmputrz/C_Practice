// Experimal program with  decimal point before field width specification

#include <stdio.h>

int main(void){

	int dollars, cents, count;

	for ( count =1; count <= 10; ++count){
		printf("Enter Dollars: ");
		scanf("%i", &dollars);
		printf("Enter Cents: ");
		scanf("%i", &cents);
		printf("$%i.%.2i\n\n", dollars, cents);
	}
	return 0;
}
		

