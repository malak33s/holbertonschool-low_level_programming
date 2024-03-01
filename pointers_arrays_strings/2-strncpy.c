#include "main.h"

/**
 * _strncpy - function that copies a string
 *@src: input pointer
 *
 *@dest: output pointer
 *
 *@n: numnber of bytes (size)
 *
 * Return: dest value
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
