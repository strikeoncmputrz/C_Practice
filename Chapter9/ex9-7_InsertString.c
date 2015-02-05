//Inserts characters into a char array at a specific point

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

void insertString(char rSource[], char ins[], int start)
{
	int i, j, k = 0;
	char first[50];
	char second[50];
	
	//extract first part of the string
	for ( i = 0; i < start; ++i)
	{
		first[i] = rSource[i];
	}
	first[i + 1] = '\0';
	
	//extract second part of the string
	for(i = start; i < stringLength(rSource);  ++i)
	{
		second[j] = rSource[i];
		++j;
	}
	second[j] = '\0';

	//copy first to rSource
	for(i=0; first[i] != '\0'; ++i)
	{
		rSource[i] = first[i];
	}
	//Insert new string
	for(j = 0; ins[j] != '\0'; ++j)
	{
		rSource[i+j] = ins[j];
	}
	//copy second to rSource after new insertion
	for(k=0; second[k] != '\0'; ++k)
		rSource[j+i+k] = second[k];

	//terminate the concatenated string with a null char
	rSource[j+i+k] = '\0';

}

int main (void)
{
	int stringLength(const char string[]);
	char rSource[] = "the wrong son";

	insertString(rSource, "per", 10);
	printf("%s\n", rSource);

	return 0;

}
