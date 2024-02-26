#include "main.h"
/**
 * print_most_numbers - function that prints the numbers.
 *
 *
 * Return:
 */
void print_most_numbers(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		if (p != 2 && p != 4)
			_putchar(p + '0');
	}
	_putchar('\n');
}
