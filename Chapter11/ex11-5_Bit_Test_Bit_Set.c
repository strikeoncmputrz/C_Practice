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
	ans = test >> (size - n -1);
	if((ans & 1) > 0)
		return 1;
	else 
		return 0;
}

int set_bit(unsigned int set, int position)
{
	return set | (1 << position);
	
}

int main (void)
{
	unsigned int x = 255;
	unsigned int ans;
	int bit_test(unsigned int test, int n);
	int set_bit(unsigned int set, int n);	
	ans = bit_test(x, 23);
	printf("%u", ans);
	ans = bit_test(x, 24);
	printf("%u", ans);
	ans = bit_test(x, 25);
	printf("%u", ans);
	ans = bit_test(x, 26);
	printf("%u", ans);
	ans = bit_test(x, 27);
	printf("%u", ans);
	ans = bit_test(x, 28);
	printf("%u", ans);
	ans = bit_test(x, 29);
	printf("%u", ans);
	ans = bit_test(x, 30);
	printf("%u", ans);
	ans = bit_test(x, 31);
	printf("%u\n", ans);

	printf("%u\n", set_bit(2, 3));
	
	




	return 0;
};
