//Example 4 Loop that prints chars

#include <stdio.h>

int main (void)
{

	int n, triNum;
	triNum = 0;
	for (n =1; n <=200; n++){
		triNum = triNum + n;
		printf("%-2i	 %i\n", n, triNum);
	}
	return 0;

}


