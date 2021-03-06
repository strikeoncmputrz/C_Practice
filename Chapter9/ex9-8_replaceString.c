//Replaces s1 with s2 in source

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
	//printf("%i\n", count);
	if(start + count > length)
		count = length%count;
//	printf("%i\n", count);
	//Cycle through source from start to start + count -1
	for(i = 0; i < count; ++i)
	{
		result[i] = source[start];
		++start;
	}
	result[count] = '\0';
}

//Determines if strings are equal
bool equalStrings(const char s1[], const char s2[])
{
	int i = 0;
	bool areEqual;

	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;
	if(s1[i] == '\0' && s2[i] == '\0')
		areEqual = true;
	else
		areEqual = false;

	return areEqual;
}


//Iterates through sting one to see if string2 matches and if so, returns the index of where, if not, reutrns -1
int findString(const char st1[], const char st2[])
{
	int i;
	int len1 = stringLength(st1);
	int len2 = stringLength(st2);
	char sub[50];
	for(i = 0; i < len1; ++i)
	{
		subString(st1, i, len2, sub);
		if(equalStrings(sub, st2))
			return i;
	}
	return -1;

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
//Inserts ins into rSource at index = start
void insertString(char rSource[], char ins[], int start)
{
	int i = 0;
	int j = 0;
	int k = 0;
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

//Replaces s1 with s2 in source
void replaceString(char source[], char s1[], char s2[])
{
	int found = findString(source, s1);
	if (found >= 0)
	{
		removeString(source, found, stringLength(s1));
		insertString(source, s2, found);
	}
}
	


int main (void)
{
	//int stringLength(const char string[]);
	char rSource[] = "the w*rong one";
	replaceString(rSource, "*", "");
	printf("%s\n", rSource);

	return 0;

}
