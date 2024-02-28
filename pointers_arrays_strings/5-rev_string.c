#include "main.h"
/**
 * rev_string - function for reverses a string.
 *
 * @s: pointeur to a string.
 *
 */

void rev_string(char *s)
{
	int deb, mil, fin, size;
	char temp;

	for (size = 0; s[size]; size++)
		;

	mil = size / 2;
	fin = size - 1;

	for (deb = 0; deb < mil; deb++)
	{
		temp = s[deb];
		s[deb] = s[fin];
		s[fin] = temp;
		fin--;
	}
}
