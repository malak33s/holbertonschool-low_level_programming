#include "main.h"

/**
 * *string_toupper - function for change lowercase of a string to uppercase.
 * @str: pointer to string.
 *
 * Return: string to be pointed
 */

char *string_toupper(char *str)
{
	int chg;

	for (chg = 0; str[chg] != '\0'; chg++)
		if (str[chg] >= 'a' && str[chg] <= 'z')
		{
			str[chg] = str[chg] - 32;
		}
	return (str);
}
