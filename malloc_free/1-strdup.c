#include "main.h"
/**
 * *_strdup - write a return a pointer with a copy of a string.
 * @str: string copied
 *
 * Return: pointer to new string.
 */

char *_strdup(char *str)
{
	char *a;
	unsigned int b, size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
		size++;

	a = malloc((size + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (b = 0; b <= size; b++)
		a[b] = str[b];
	return (a);
}
