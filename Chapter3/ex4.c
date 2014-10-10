// Convert 27 from F to C

#include <stdio.h>

int main (void)
{

	float fdegrees = 27.00, cdegrees;
	cdegrees = (fdegrees - 32)/ 1.8;
	printf("%f Celcius is the same as %f Farenheight\n", cdegrees, fdegrees);

	return 0;
}
