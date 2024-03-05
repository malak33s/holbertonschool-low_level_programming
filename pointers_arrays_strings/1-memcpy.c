#include "main.h"

/**
 * _memcpy - function that copies bytes from  memory area to memory area
 *
 *@dest: copy destination
 *@src: memory copy
 *@n: bytes number
 *
 * Return: dest value
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num < n; num++)
	{
		dest[num] = src[num];
	}
	return (dest);
}
