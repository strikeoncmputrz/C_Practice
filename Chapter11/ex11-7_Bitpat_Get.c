/*Function that extracts a specified set of bits from an unsigned int.
  Takes 3 args: unsigned int source, starting bit index (0 is leftmost), and 
  bit count
*/

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


unsigned int bitpat_get(unsigned int src, int index, int cnt)
{
	int size = int_size();
	unsigned int extracted;
	extracted = src << index;
	extracted >>= (size - cnt);
	return extracted;


}

int main(void)
{

	unsigned int src;
	int index, cnt;
	int int_size();
	unsigned int bitpat_get(unsigned int src, int index, int cnt);

	printf("Input the src, index, and count for extraction (space separated).\n");
	scanf("%u %i %i", &src, &index, &cnt);
	printf("\n");
	
	printf("Extracted bits in decimal: %u.\n", bitpat_get(src, index, cnt));
	
};
