// Program to update the Time by One Second

#include <stdio.h>

struct time
{
	int hour, min, sec;
};

int main (void)
{
	struct time timeUpdate (struct time now);
	struct time currentTime, nextTime;

	printf("Enter the time (hh:mm:ss) ");
	scanf ("%i:%i:%i", &currentTime.hour, &currentTime.min, &currentTime.sec);

	nextTime = timeUpdate (currentTime);

	printf("Updated time is %.2i:%.2i:%.2i\n", nextTime.hour,nextTime.min, nextTime.sec);

	return 0;
}

//Function to update the time by one second

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
