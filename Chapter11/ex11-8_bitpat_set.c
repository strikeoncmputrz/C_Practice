/*Funtion to set a specified number of bits to a particular value. 
  The function takes 4 args: a pointer to the unsigned int to be 
  set, an unsigned int containing the value to which the specified 
  bits are to be set (right adjusted), a third int that specifies 
  the starting index (leftmost being 0), and a fourth int specifying
  the size of the field. 
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


void bitpat_set(unsigned int *sethere, unsigned int val, int index, int field_size)
{
	int size = int_size();
	//set field for insertion to zero create mask of ones the same length as field_size
	unsigned int mask = (1 << field_size) - 1; 
	*sethere &= ~(mask << (size - index - field_size)); 
	printf("Sethere with zero'd out field = %u\n", *sethere);
	*sethere |= val << (size - index - field_size);

}



int main (void)
{

	int int_size();
	void bitpat_set(unsigned int *sethere, unsigned int val, int index, int field_size);
	int sethere = 32767;
	bitpat_set(&sethere, 55, 16, 8);
	printf("Sethere with bitstring inserted = %i\n.", sethere);

};
