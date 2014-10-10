//This program determines if a year is a leap year

#include <stdio.h>

int main(void){
	int yr, rem_4, rem_100, rem_400;
	printf("Please enter a year to detrmine if it is a leap year: ");
	scanf("%i", &yr);
	rem_4 = yr % 4;
	rem_100 = yr % 100;
	rem_400 = yr % 400;
	if( (rem_4 == 0 && rem_100 != 0)  ||  (rem_400 == 0) )
		printf("%i is a leapyear!\n", yr);
	else 
		printf("Nope, %i is not a leapyear.\n", yr);

	return 0;
}
