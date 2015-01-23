//Program to calculate the number of days between two dates 
#include <stdio.h>

//Date structure
struct date
{
	int mon, day, year;
};

//calculates f function
int getf(int yr, int mo)
{
	int f;

	if(mo <= 2)
	{
		f = yr - 1;
	}
	else 
	{
		f = yr;
	}
//	printf("F = %i\n", f);
	return f;
}
//calculates g function
int getg(int mo)
{
	int g;

	if(mo <= 2)
	{
		g = mo + 13;
	}
	else 
	{
		g = mo + 1;
	}
//	printf("G = %i\n", g);
	return g;
}

//Formula for diffing dates
int calcN (struct date ndate)
{
	int n, f, g;

	f = getf(ndate.year, ndate.mon);
	g = getg(ndate.mon);
	n = 1461 * f / 4 + 153 * g / 5 + ndate.day;
//	printf("N = %i\n", n);
	return n;

}
	


//Instantiates the program and requests two dates as input. Returns the number of days between them.
int main (void)
{
	struct date firstD, lastD;
	int fN, sN, days_between;


	printf("Program to calculate the number of days between two dates.\n");
	printf("Please type in the earlier date (mm dd yyyy) \n");
	scanf("%i %i %i", &firstD.mon, &firstD.day, &firstD.year);
//	printf("Month = %i Day = %i Year = %i\n", firstD.mon, firstD.day, firstD.year);
	printf("Please type in the later date (mm dd yyyy) \n");
	scanf("%i %i %i", &lastD.mon, &lastD.day, &lastD.year);	
//	printf("Month = %i Day = %i Year = %i\n", lastD.mon, lastD.day, lastD.year);


	fN = calcN(firstD);
	
	sN = calcN(lastD);


	days_between = sN - fN;

	printf("There are %i days between those two dates.\n", days_between);

	return 0;

}
	



