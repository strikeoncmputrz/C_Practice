//Program to calculate the elapsed time between two dates 
#include <stdio.h>

struct time 
{
	int hour, min, sec;

};

//Takes in two time structures as arguments and calculates their difference
struct time elapsed_time (struct time fT, struct time sT)
{
	struct time eT;
	
	if(sT.sec >= fT.sec)	//diff sec
	{
		eT.sec = sT.sec - eT.sec;
	}else 
	{
		--fT.min;
		fT.sec = fT.sec + 60;
		eT.sec = sT.sec - fT.sec;

	}

	if(sT.min >= fT.min)	//diff minutes
	{
		eT.min = sT.min - eT.min;
	}else 
	{
		--sT.hour;
		fT.min = fT.min + 60;
		eT.min = sT.min - fT.min;

	}
	if(fT.hour > sT.hour)
	{
		sT.hour = sT.hour + 12;
		eT.hour = sT.hour - fT.hour;
	}else
	{
		eT.hour = sT.hour - sT.hour; 
	
	}
	
	return eT;

}
	


//Instantiates the program and requests two times as input. Returns the elapsed time between them.
int main (void)
{
	struct time eTime, firstT, lastT;
	//int fT, sT, days_between;


	printf("Program to calculate the elapsed time between two times.\n");
	printf("Please type earlier time (hh:mm:ss) \n");
	scanf("%i %i %i", &firstT.hour, &firstT.min, &firstT.sec);
	printf("Hour = %i Min = %i Sec = %i\n", firstT.hour, firstT.min, firstT.sec);
	printf("Please type in the later time (hh:mm:ss) \n");
	scanf("%i %i %i", &lastT.hour, &lastT.min, &lastT.sec);	
	printf("Hour = %i Min = %i Sec = %i\n", lastT.hour, lastT.min, lastT.sec);
	
	eTime = elapsed_time(firstT, lastT);


	
	printf("There are %i hours %i minutes and %i seconds have elapsed.\n" eT.hour, eT.min, eT.sec);

	return 0;

}
