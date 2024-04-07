#include "main.h"

/**
 * binary_to_uint - write a function that
 * converts a bniary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number or 0.
*/

unsigned int binary_to_uint(const char *b)
{
	int num;
	unsigned int sum = 0, binary = 1;

	if (b == NULL)
		return (0);
	for (num = 0; b[num] != '\0'; num++)
	{
		if (b[num] != '0' && b[num] != '1')
			return (0);
	}
	num--;

	while (num >= 0)
	{
		if (b[num] == '1')
			sum = sum + binary;
		binary = binary * 2;
		num--;
	}
	return (sum);
}
