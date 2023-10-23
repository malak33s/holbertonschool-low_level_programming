#include "main.h"
#include <stdio.h>
/**
 * strln - function returns the length or a string
 *
 * int _strlen(char *s);
 */
int _strlen(char *s)
{
	int length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
