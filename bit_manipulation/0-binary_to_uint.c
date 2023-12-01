#include "main.h"

/**
 * binary_to_uint - converts a bniary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number or 0.
*/

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int sum = 0, binary = 1;

	if (b == NULL)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	a--;

	while (a >= 0)
	{
		if (b[a] == '1')
			sum = sum + binary;
		binary = binary * 2;
		a--;
	}
	return (sum);
}
