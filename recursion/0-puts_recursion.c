#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s: string a parameter
 *
 * Return:
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*(s + i))
	{
		putchar(*(s + i));
		i++;
		_puts_recursion(s + i);
	}
	else
	{
		putchar('\n');
	}
}
