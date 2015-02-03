//Function to return a substing

#include <stdio.h>

//Creates a substing from source and puts it in result
void subString(const char source[], int start, int count, char result[])
{
	int length = stringLength(source);
	int i;
	//printf("%i\n", count);
	if(start + count > length)
		count = length%count;
	//printf("%i\n", count);
	//Cycle through source from start to start + count -1
	for(i = 0; i < count; ++i)
	{
		result[i] = source[start];
		++start;
	}
	result[i+1] = '\0';


}

//Determines a string's length
int stringLength(const char string[])
{
	int count = 0;

	while( string[count] != '\0')
		++count;

	return count;
}

int main (void)
{
//	int stringLength(const char string[]);
	void subString(const char source[], int start, int count, char result[]);
	char result[50];
	subString("character", 4, 3, result);
	printf("%s\n", result);
	subString("two words", 4, 200, result);
	printf("%s\n", result);

	
	return 0;
}
