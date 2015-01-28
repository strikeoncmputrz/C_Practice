//Program to tell you what day of the week a date falls on

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


int calcDay (int n)
{
	int day;
	day = (n - 621049) % 7;
	return day;
}

int main (void)
{
	struct date d;	
	int day;
	const char *week[7];
	week[0] = "Sunday";
	week[1] = "Monday";
	week[2] = "Tuesday";
	week[3] = "Wednesday";
	week[4] = "Thursday";
	week[5] = "Friday";
	week[6] = "Saturday";

	printf("Provide a date (mm/dd/yyyy) to determine what day of the week it falls on.\n");
	scanf("%i/%i/%i", &d.mon, &d.day, &d.year);
	day = calcDay(calcN(d));
	printf("That date is a %s.\n", week[day]);
}
	






