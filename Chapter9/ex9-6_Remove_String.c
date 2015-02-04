//Removes a specifed number of characters from a char array

#include <stdio.h>
#include <stdbool.h>

//returns length of string
int stringLength(const char string[])
{
	int count = 0;

	while( string[count] != '\0')
		++count;

	return count;
}

//Creates a substing from source and puts it in result
void subString(const char source[], int start, int count, char result[])
{
	int length = stringLength(source);
	int i;

	//Check for when count is longer than length
	if(start + count > length)
		count = length%count;
	
	//Cycle through source from start to start + count -1
	for(i = 0; i < count; ++i)
	{
		result[i] = source[start];
		++start;
	}
	result[count] = '\0';
}


//Function to concatenate two char strings
void concat(char result[], const char str1[], const char str2[])
{
	int i, j;

	//copy string1 to result
	for(i=0; str1[i] != '\0'; ++i)
		result[i] = str1[i];
	//copy string1 to result
	for(j = 0; str2[j] != '\0'; ++j)
		result[i + j] = str2[j];

	//terminate the concatenated string with a null char
	result[i+j] = '\0';
}

//Removes a specifed number of characters from a char array
void removeString(char rSource[], int start, int count)
{
	int i, j = 0;
	char newSt1[50];
	char newSt2[50];
	
	//extract first part of the string
	for ( i = 0; i < start; ++i)
	{
		newSt1[i] = rSource[i];
	}
	newSt1[i + 1] = '\0';
	
	//extract second part of the string
	for(i = start + count; i < stringLength(rSource);  ++i)
	{
		newSt2[j] = rSource[i];
		++j;
	}
	newSt2[j] = '\0';

	//copy newSt1 to rSource
	for(i=0; newSt1[i] != '\0'; ++i)
		rSource[i] = newSt1[i];

	//copy newSt2 to rSource
	for(j=0; newSt2[j] != '\0'; ++j)
		rSource[i+j] = newSt2[j];

	//terminate the concatenated string with a null char
	rSource[i+j] = '\0';

}

int main (void)
{
	int stringLength(const char string[]);
	char rSource[] = "the wrong son";

	removeString(rSource, 4, 6);
	printf("%s\n", rSource);

	return 0;

}
