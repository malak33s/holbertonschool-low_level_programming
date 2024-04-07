#include "main.h"

/**
 * get_bit - write a function
 * returns the value of a bit at a given index.
 * @n: unsigned integer.
 * @index: index to return.
 *
 * Return: value of the bit at index or -1 if an error occured.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	n = n >> index;

	if (n & 1)
		return (1);

	return (0);
}
