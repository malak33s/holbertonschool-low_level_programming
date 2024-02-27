#include "main.h"

/**
 * _puts - function that prints a string followed by  new line, to sdout.
 *
 *@str: string
 *
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
