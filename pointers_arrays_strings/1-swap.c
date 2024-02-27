#include "main.h"
/**
 * swap_int - function swaps the values of two integers
 *
 *@a: fisrt integers.
 *@b: second integers.
 */
void swap_int(int *a, int *b)
{
	int swit;

	swit = *a;

	*a = *b;

	*b = swit;
}
