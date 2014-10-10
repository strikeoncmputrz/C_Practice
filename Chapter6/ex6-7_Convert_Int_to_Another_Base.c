// Program to convert a positive integer to another base
#include <stdio.h>

int main(void) 
{
	const char baseDigits[16] = 
	{
		'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'
	};
	int convertedNum[64];
	long int numToConv;
	int nextDigit, base, index = 0;

	//Get number and base
	printf("Number to be Converted? ");
	scanf("%ld", &numToConv);
	printf("Base? ");
	scanf("%i", &base);
	
	//Conver to indicated base
	do 
	{
		convertedNum[index] = numToConv % base;
		++index;
		numToConv = numToConv / base;
	}while (numToConv != 0);

	//display the results in revers order

	printf("Converted Number = ");
	for(--index; index >= 0; --index){
		nextDigit = convertedNum[index];
		printf("%c", baseDigits[nextDigit]);
	}
	printf("\n");
	return 0;
}

