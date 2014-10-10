//This program outputs the first n factorials

#include <stdio.h>

int main(void){
	int w, orig, n, fact_sum, run = 0;
	printf("Input the number that you would like the factorial of:");
	scanf("%i", &orig);
	while(run < 10){	
		w = orig + run; 
		fact_sum = w;
		for(n = 1; n < w; n++){
			fact_sum = fact_sum*n;
		}		
		printf("\n%i 	is 	%i factorial\n", fact_sum, w);
		run++;
	}
	return 0;
}
