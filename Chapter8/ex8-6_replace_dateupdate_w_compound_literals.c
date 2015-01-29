//Program for determining tomorrow's date
#include <stdio.h>
#include <stdbool.h>
struct date
{
	int month, day, year;
};


//Function to calculate tomorrows date using compound literals
struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date today);
	
	if (today.day != numberOfDays (today))
	{
		
		tomorrow = (struct date) {today.month, today.day + 1, today.year};
		//tomorrow.day = today.day + 1;
		//tomorrow.month = today.month;
		//tomorrow.year = today.year;
	}
	else if (today.month == 12) //end of year
	{
		
		tomorrow = (struct date) { 1, 1, today.year + 1}; 
		//tomorrow.day = 1;
		//tomorrow.month = 1; 
		//tomorrow.year = today.year + 1;
	}
	else 			     //end of month
	{
		tomorrow = (struct date) {1, today.month + 1, today.year};
		
//		tomorrow.day = 1;
//		tomorrow.month = today.month + 1;
//		tomorrow.year = today.year;
	}

	return tomorrow;
}

//Function to determine the number of days in a month
int numberOfDays(struct date d)
{

	int days;
	bool isLeapYear (struct date d);
	const int daysPerMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	
	if (isLeapYear(d) == true && d.month == 2)
		days = 29;
	else
		days = daysPerMonth[d.month - 1];
	return days;
}

// Function to determine is it's a leap year
bool isLeapYear (struct date d)
{
	bool leapYearFlag;

	if ( (d.year % 4 == 0 && d.year % 100 != 0) || d.year % 400 == 0 )
		leapYearFlag = true; //It's a leap year
	else 
		leapYearFlag = false; // Not a leap year

	return leapYearFlag;

}

int main (void)
{

	struct date dateUpdate(struct date today);
	struct date thisDay, nextDay;

	printf("Enter today's date (mm dd yyyy): ");
	scanf("%i%i%i", &thisDay.month, &thisDay.day, &thisDay.year);

	nextDay = dateUpdate (thisDay);
	printf("Tomorrow's date is %i/%i/%.2i.\n", nextDay.month, nextDay.day, nextDay.year % 100);

	return 0;
}
