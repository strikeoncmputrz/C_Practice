//This generates every 5th triangle number between 5 and 50

#include <stdio.h>

int main(void){

	int tri;
	for(int n = 5; n <=50; n = n + 5){
		tri = n*(n+1)/2;
		printf("The Triangle number for %i is %i.\n",  n, tri);

	}

	return 0;
}
