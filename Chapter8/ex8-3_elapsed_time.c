//Program to calculate the elapsed time between two dates 
#include <stdio.h>

struct time 
{
	int hour, min, sec;

};

//Takes in two time structures as arguments and calculates their difference
struct elapsed_time (struct time fT, struct time sT)
{
	struct time eT;

	return eT;

}
	


//Instantiates the program and requests two times as input. Returns the elapsed time between them.
int main (void)
{
	struct eTime, firstT, lastT;
	//int fT, sT, days_between;


	printf("Program to calculate the elapsed time between two times.\n");
	printf("Please type earlier time (hh:mm:ss) \n");
	scanf("%i %i %i", &firstT.hour, &firstT.min, &firstT.sec);
//	printf("Month = %i Day = %i Year = %i\n", firstD.mon, firstD.day, firstD.year);
	printf("Please type in the later time (hh:mm:ss) \n");
	scanf("%i %i %i", &lastT.hour, &lastT.min, &lastT.sec);	
//	printf("Month = %i Day = %i Year = %i\n", lastD.mon, lastD.day, lastD.year);
	
	eTime = elapsed_time(firstT, lastT);


	
//	printf("There are %i days between those two dates.\n", days_between);

	return 0;

}
