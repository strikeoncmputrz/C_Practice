//Function bitpat_search looks for the occurence of a specified pattern of bits inside an unsigned int. It takes three args. source, pattern, and n. It searches the integer source, starting at the leftmost non-zero bit, to see if the rightmost n bits of pattern occur in source. If the pattern is found, bitpat_search returns the index of the bit (0 being leftmost) at which the pattern begins. If not found, return -1. 

#include <stdio.h>

//Calculate size of int as implemented by compiler
int int_size()
{

	int x = ~0;
	int count = 1;
	while( x <<= 1)
		count++;
	return count;
}

//See line 1
int bitpat_search(unsigned int source, unsigned int pattern, int n)
{
	int size = int_size();
	int index = 0;
	unsigned int buffer = 0; //buffer for pattern comparisons
	
	//Creates bitmask with most significant bit set regardless of int size	
	unsigned int most_significant_bit = 1 << (size - 1);
	
	//n leftmost ones are created by taking the two's compliment of an n bit mask
	unsigned int ones_compliment_mask = ~0 << (size - n);
	
	//Obtain righmost n bits of pattern by left shifting int size - n
	pattern <<= (size - n); 

	
	//Left shift source until significant bit has a value, i.e. beginning of bit field
	while((source & most_significant_bit) == 0)
	{
		source <<= 1;
	}
	
	//Check if pattern is in source with rightmost (size - n) bits masked, iterate source by right shifting. 
	while(source)
	{
		//Create a buffer containing only the left n bits set by anding it with ones_compliment_mask.
		buffer = source & ones_compliment_mask;
		if(buffer == pattern)
			return index;
		index++;
		source <<= 1;
	}
	return -1;
}

int main(void)
{

	int int_size();
	int bitpat_search(unsigned int source, unsigned int pattern, int n);
	int s = 0xe1f4;
	int p = 0x5;
	int n = 3;
	printf("Bitpat_search result = %i \n", bitpat_search(s, p, n));
	printf("Bitpat_search result = %i \n", bitpat_search(0xfffef, 0xffef, 16));
	
};
