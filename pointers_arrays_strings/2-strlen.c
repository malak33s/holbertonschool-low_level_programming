#include "main.h"
/**
 * _strlen - function that returns the length of a string.
 *
 *@s: the string.
 *
 * Return: the length of a string.
 */

int _strlen(char *s)
{
	int str;

	for (str = 0; s[str] != '\0'; str++)
		return (str);
}
