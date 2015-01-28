//Program takes in a date and time structure and updates the time. If the time reaches midnight, it updates the date
#include <stdio.h>
#include <stdbool.h>
struct date
{
	int month, day, year;
};

struct time
{
	int hour, min, sec;

};

struct dateAndTime
{
	struct date dtDate;
	struct time dtTime;

};


struct time timeUpdate (struct time now)
{
	++now.sec;
	
	if(now.sec == 60)		//next minute
	{
		now.sec = 0;
		++now.min;

		if(now.min == 60) 	 //next hour
		{	
			now.min = 0;
			++now.hour;

			if(now.hour == 24) //midnight
			{
				now.hour = 0;
			}
		}
	}
	return now;
}

//Function to calculate tomorrows date
struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date today);
	
	if (today.day != numberOfDays (today))
	{
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if (today.month == 12) //end of year
	{
		tomorrow.day = 1;
		tomorrow.month = 1; 
		tomorrow.year = today.year + 1;
	}
	else 			     //end of month
	{
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
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
//Function to update the date by one second
struct dateAndTime clockKeeper(struct dateAndTime old)
{
	struct dateAndTime new;

	new.dtTime = timeUpdate(old.dtTime);
	
	if (new.dtTime.hour == 0 && new.dtTime.min == 0 && new.dtTime.sec == 0)
	{
		new.dtDate = dateUpdate(old.dtDate);
	}else
	{
		new.dtDate = old.dtDate;
	}

	return new;

}

int main (void)
{

//	struct date dateUpdate(struct date today);
	struct date thisDay;
	struct time thisTime;
	struct dateAndTime thisTandD, nextTandD; 
	
	printf("This program updates the date and time by one second.\n");
	printf("Enter today's date and time (mm/dd/yyyy hh:mm:ss).\n");
	scanf("%i/%i/%i %i:%i:%i", &thisDay.month, &thisDay.day, &thisDay.year, &thisTime.hour, &thisTime.min, &thisTime.sec);

	thisTandD.dtDate = thisDay;
	thisTandD.dtTime = thisTime;
	
	nextTandD = clockKeeper(thisTandD);
	printf("Updated time and date by one second is: %i/%i/%i %i:%i:%i .\n", nextTandD.dtDate.month, nextTandD.dtDate.day, nextTandD.dtDate.year, nextTandD.dtTime.hour, nextTandD.dtTime.min, nextTandD.dtTime.sec);

	return 0;
}
