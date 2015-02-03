//Program that counts words
#include <stdio.h>
#include <stdbool.h>

//Function to determine if a character is alphanumeric
bool alphabetic(const char c)
{
	if(( c >= 'a' && c <= 'z') || (c>= 'A' && c <= 'Z') || c == '\'' || c == '.' ||  c== '-' || (c >= '0' && c<= '9'))
		return true;
	else 
		return false;
}

/* Function to count the number of words in a string */

int countWords(const char string[])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic (const char c);

	for(i = 0; string[i] != '\0'; ++i)
	{
		if(alphabetic(string[i]))
		{
			if(lookingForWord)
			{
				++wordCount;
				lookingForWord = false;
			}
		}
		else 
			lookingForWord = true;
	}

	return wordCount;
}

int main (void)
{

	const char text1[] = "Well, here goes.";
	const char text2[] = "And here we go... again.";
	const char text3[] = "And here'd we go... again.";
	const char text4[] = "And here'd we go... .-255";
	//const char text2[] = "And here we go... again.";
	int countWords(const char stringp[]);

	printf("%s - words = %i\n", text1, countWords(text1));
	printf("%s - words = %i\n", text2, countWords(text2));
	printf("%s - words = %i\n", text4, countWords(text4));

	return 0;
}

