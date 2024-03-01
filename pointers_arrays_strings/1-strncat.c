#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *@src: input pointer
 *@dest: pointer output
 *@n: input of byte (size)
 *
 * Return: value is result dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a])
	{
		a++;
	}
	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
