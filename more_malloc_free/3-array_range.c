#include "main.h"
/**
 * *array_range - function that creates an array of integers.
 * @min: input value.
 * @max: output value.
 *
 * Return: pointer to the newly memory created array.
 */

int *array_range(int min, int max)
{
	int *a;
	int b, c = 0;

	if (min > max)
		return (NULL);

	a = malloc((max - min + 1) * sizeof(int));

	if (a == NULL)
		return (NULL);

	for (b = min; b <= max; b++)
	{
		a[c] = b;
		c++;
	}
	return (a);
}
