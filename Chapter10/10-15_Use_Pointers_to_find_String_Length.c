// Function to count the characters in a string - Pointer Version

#include <stdio.h>

int stringLength(const char *string)
{
	const char *cptr = string;

	while(*cptr)
		++cptr;
	return cptr - string;
}

int main (void)
{
//	int stringLength;

	printf("%i ", stringLength("stringlength test"));
	printf("%i ", stringLength(""));
	printf("%i\n", stringLength("complete"));

	return 0;

}
