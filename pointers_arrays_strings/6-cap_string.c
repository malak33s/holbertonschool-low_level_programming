#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: pointer to one string.
 *
 * Return: value of string
 */

char *cap_string(char *str)
{
	int a = 0;

	if (str[a] >= 'a' && str[a] <= 'z')
	{
		str[a] = str[a] - 32;
	}

	for (a = 1; str[a] != '\0'; a++)
	{
		if (str[a] == ' ' ||
		    str[a] == '\t' ||
		    str[a] == '\n' ||
		    str[a] == ',' ||
		    str[a] == ';' ||
		    str[a] == '.' ||
		    str[a] == '!' ||
		    str[a] == '?' ||
		    str[a] == '"' ||
		    str[a] == '(' ||
		    str[a] == ')' ||
		    str[a] == '{' ||
		    str[a] == '}')
		{
			if (str[a + 1] >= 'a' && str[a + 1] <= 'z')
			{
				str[a + 1] = str[a + 1] - 32;
			}
		}
	}
	return (str);
}
