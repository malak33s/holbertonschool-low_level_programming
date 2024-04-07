#include "main.h"

/**
 * flip_bits - write a function that
 * returns the number of bits you would need to flip.
 * @n: the first number to flip.
 * @m: the second number to flip.
 *
 * Return:number of bits.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int diff = n ^ m;

	while (diff)
	{
		count += (diff & 1);
		diff >>= 1;
	}

	return (count);
}
