#include <stdio.h>

/**
 * swap_int - swap the values of two integers.
 *
 * @a: An integer to swap
 * @b: Another integer to swap
 */
void swap_int(int *a, int *b)
{

	int c = *a;
	*a = *b;
	*b = c;
}
