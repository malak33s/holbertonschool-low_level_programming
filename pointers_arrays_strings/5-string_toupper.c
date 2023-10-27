#include "main.h"

/**
 * string_toupper - changing string to upper function
 * @strs : string pointer
 * Return: Always 0.
 */
char *string_toupper(char *strs)
{
	int i;

	for (i = 0; strs[i] != '\0'; i++)
	{
		if (strs[i] >= 'a' && strs[i] <= 'z')
		{
			strs[i] = strs[i] - 32;
		}
	}
	return (strs);
}
