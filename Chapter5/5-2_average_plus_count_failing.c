//This program counts failing grades

#include <stdio.h>

int main(void){

	int numGrades, i, grade;
	int gradeTotal = 0;
	int failCount = 0;
	float average; 

	printf("How many grades will you be entering? ");
	scanf("%i", &numGrades);

	for (i = 1; i <= numGrades; i++){
		printf("Enter Grade #%i: ", i);
		scanf("%i", &grade);

		gradeTotal += grade;

		if (grade < 65)
			++failCount;
	}

	average = (float) gradeTotal / numGrades;
	 
	printf("\nGrade average = %.2f.\n", average);
	printf("Number of failures = %i.\n", failCount);

	return 0;

}

