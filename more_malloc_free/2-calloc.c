#include "main.h"
/**
 * *_calloc - function that allocates memory for an array and init to 0.
 * @nmemb: number of elements in the array.
 * @size: size of the type.
 *
 * Return: pointer to the allocat memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int num;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(nmemb * size);

	if (a == NULL)
		return (NULL);

	for (num = 0; num < (nmemb * size); num++)
		(a[num] = '\0');

	return (a);
}
