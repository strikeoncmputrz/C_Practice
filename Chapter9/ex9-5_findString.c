//Determines if a string exists in another string

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

//determines if strings are equal
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
//Iterates through sting one to see if string2 matches
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

int main (void)
{
	int stringLength(const char string[]);
	bool equalStrings(const char s1[], const char s2[]);
	void subString(const char source[], int start, int count, char result[]);
	int findString(const char st1[], const char st2[]);
	const char stra[] = "a chatterbox hat";
	const char strb[] = "hat";


	printf("%i\n", findString(stra, strb));
	printf("%i\n", findString("asshat","ass"));
	printf("%i\n", findString("notyour day, dick", "string"));

	return 0;

}
