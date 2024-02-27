#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 *
 *@s: the string.
 *
 * Return: length of a string.
 */

int _strlen(char *s)
{
	int stri;

	for (stri = 0; s[stri] != '\0'; stri++)
		;
	return (stri);
}
