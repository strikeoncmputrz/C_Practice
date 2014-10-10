//Example 4 Loop

#include <stdio.h>

int main (void)
{

	int n, triNum;
	triNum = 0;
	for (n =1; n <=200; n++)
		triNum = triNum + n;

	printf("The 200th Triangle Number is %i\n", triNum);
	return 0;

}


