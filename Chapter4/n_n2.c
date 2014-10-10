//This prints a table of n and n^2 for n = 1 -- 10. 

#include <stdio.h>

int main(void){

	printf("N	N^2\n\n");
	printf("--	--\n");
	for(int n = 1; n < 11; n++){
		printf("%2i	%i\n", n, n*n);
	}
	return 0;
}
