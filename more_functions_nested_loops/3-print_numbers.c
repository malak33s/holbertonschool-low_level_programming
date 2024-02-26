#include "main.h"
/**
 * print_numbers - function that prints the numbers.
 *
 *
 * Return:
 */
void print_numbers(void)
{
	int p;

	for (p = 0; p <= 9; p++)
	{
		_putchar(p + '0');
	}
	_putchar('\n');
}
