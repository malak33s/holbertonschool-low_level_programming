#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy the string pointed to by src
 * including the terminating null byte '\0'
 * to the buffer pointed to by dest
 *
 * @dest: the pointer to the destination array
 * where the content is to be copied
 *
 * @src: the string to be copied
 *
 * Return: the pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
