#include "main.h"
/**
 * print_rev - function for print a string in reverse.
 * @s: pointeur to string.
 *
 *
 */

void print_rev(char *s)
{
	int temp;

	for (temp = 0; s[temp]; temp++);

	for (temp = temp - 1; temp >= 0; temp--)
		_putchar(s[temp]);

	_putchar('\n');
}
