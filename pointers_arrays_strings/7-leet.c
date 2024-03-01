#include "main.h"
/**
 * leet - function that encodes a string
 *@s: string
 * Return: s's value
*/

char *leet(char *s)
{
	int a, b;

	char *letters = "aeotlAEOTL";

	char *numbers = "4307143071";

	for (a = 0; s[a]; a++)
	{
		for (b = 0; letters[b]; b++)
		{
			if (s[a] == letters[b])
			{
				s[a] = numbers[b];
			}
		}
	}
	return (s);
}
