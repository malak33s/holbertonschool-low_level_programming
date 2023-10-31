#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s: string a parameter
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	int a = 0;

	if (*(s + a))
	{
		putchar(*(s + a));
		a++;
		_puts_recursion(s + a);
	}
	else
	{
		putchar('\n');
	}
}
