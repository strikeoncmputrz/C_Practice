//This program deterines if a single character is alphabetic or other

#include <stdio.h>  

int main(void)
{
	char c;
	
	printf("Enter a single char to see if it's alphabetic, a number, or special: ");
	scanf("%c", &c);
	
	if(  (c >= 'a' && c <= 'z')  || ( c >= 'A' && c <= 'Z') ){
		printf("%c is alphabetic.\n",c);
	} else if ( c >= '0' && c <= '9'){
		printf("%c is numeric.\n",c);
		
	} else 
		printf("%c is a special character.\n", c);


	return 0;
}
