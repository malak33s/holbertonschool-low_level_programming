#include "main.h"
/**
 * free_grid - function that Frees a 2 dimensional array of integers.
 * @grid: a dimensional array
 * @height: a integers of rows.
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
