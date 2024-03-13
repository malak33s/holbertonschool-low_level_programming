#include "main.h"
/**
 * **alloc_grid - function that returns a 2 dimensional array of integers.
 *
 * @width: integers of columns.
 * @height: integers of rows.
 *
 * Return: returns a pointer for the newly array.
 */

int **alloc_grid(int width, int height)
{
	int a, b;
	int **num;

	if (width <= 0 || height <= 0)
		return (NULL);

	num = malloc(height * sizeof(int *));

	if (num == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		num[a] = malloc(width * sizeof(int));

		if (num[a] == NULL)
		{
			for (; a >= 0; a--)
				free(num[a]);
			free(num);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			num[a][b] = 0;
		}
	}
	return (num);
}
