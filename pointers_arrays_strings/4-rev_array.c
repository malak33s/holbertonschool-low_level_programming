#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: integers
 * @n: the number of elements of the array.
 */

void reverse_array(int *a, int n)
{
	int tempo, first, finish;

	finish = n - 1;

	for (first = 0; first < (n / 2); first++, finish--)
	{
		tempo = a[first];
		a[first] = a[finish];
		a[finish] = tempo;
	}
}
