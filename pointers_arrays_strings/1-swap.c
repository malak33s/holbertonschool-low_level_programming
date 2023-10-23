#include <stdio.h>

/**
 * swip the values of two integers.
 *
 *@a: An integer to swap
 *@b: Another integer to swap
 *
 * return: void
 */
void swap_int(int *a, int *b)
{

	int c = *a;
	*a = *b;
	*b = c;
}
