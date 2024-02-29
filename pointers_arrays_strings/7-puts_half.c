#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: pointer to string.
 *
 *
 */

void puts_half(char *str)
{
	int  value, size;

	size = 0;
	for (value = 0; str[value] != 0; value++)
	{
		size++;
	}
	if (size % 2 == 0)
	{
		for (value = size / 2; value < size; value++)
		{
			_putchar(str[value]);
		}
	}
	else
	{
		for (value= (size + 1) / 2; value< size; value++)
		{
			_putchar(str[value]);
		}
	}
	_putchar('\n');
}

