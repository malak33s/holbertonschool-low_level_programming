#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * creates an array of chars, and initializes it with a specific char.
 * @size: size of array
 * @c: specific char
 * Returns a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int a;
	
	if (size == 0)
		return (NULL);

	m = malloc (size* sizeof(*m));
	if (m == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		m[a] = c;
	return (m);
}
