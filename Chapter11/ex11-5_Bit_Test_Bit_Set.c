//Functions to determine if Bit N is set to 1 and to set bit N to on and return result

#include <stdio.h>


int int_size()
{

	int x = ~0;
	int count = 1;
	while( x <<= 1)
		count++;
	return count;
}


int bit_test(unsigned int test, int n)
{
	int ans;
	int size = int_size();
	
	if(test &= (1 << (size - n - 1)))
		return test;
	else 
		return 0;
}

int set_bit(unsigned int set, int position)
{
	int size = int_size();
	return set |= (1 << (size - position -1));
	
}

int main (void)
{
	unsigned int x, bitnum;
	unsigned int ans;
	int bit_test(unsigned int test, int n);
	int set_bit(unsigned int set, int n);	

	printf("\nEnter an unsinged int and a bit number (bit number 0 is leftmost bit).\nBit test returns 1 bit number n if the nth bit of the unsigned int is set to 1.\n");
	scanf("%u %i", &x, &bitnum);

	ans = bit_test(x, bitnum);
	printf("\n%u\n", ans);

	printf("\nEnter an unsigned int and a bit number (bit num 0 is the leftmost bit).\nThe bit_set function returns the result of setting bit n.\n");
	scanf("%u %i", &x, &bitnum);
	printf("%u\n", set_bit(x,bitnum));


	return 0;
};
