#include "main.h"
/**
 * print_diagsums - prints sum of two diagonals of a square matrix of integers
 * @a: pointer the first sum
 * @size: size of the diagonals of a square matrix
 *
 * Return: the sum of two diagonals of a square matrix
 */
void print_diagsums(int *a, int size)
{
	int b, c, sm1 = 0, sm2 = 0;

	for (b = 0; b <= (size * size); b = b + size + 1)
	{
		(sm1 = sm1 + a[b]);
		printf("%d", sm1);
	}

	for (c = size; c <= ((size * size) - size); c = c + size - 1)
	{
		(sm2 = sm2 + a[c]);
		printf("%d", sm2);
	}
	printf("\n");
}
