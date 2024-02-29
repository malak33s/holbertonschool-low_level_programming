#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers.
 *
 *@a: element of array
 *
 *
 * @n: string need to be checked
 *
*/

void print_array(int *a, int n)
{
	int v;

	for (v = 0; v < n; v++)
	{
		if (v == 0)
		{
			printf("%d", a[v]);
		}
		else
		{
			printf(", %d", a[v]);
		}
	}
	printf("\n");
}
