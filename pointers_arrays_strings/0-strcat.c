#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: pointeur to output.
 * @src: pointeur to input.
 *
 * Return: dest's stringg
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
