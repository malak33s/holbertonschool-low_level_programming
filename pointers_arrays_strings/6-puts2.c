#include "main.h"

/**
 *puts2 - function for print eveyr other character of a string.
 *
 *@str: pointeur qui pointe sur string.
 */

void puts2(char *str)
{
	int mystr;

	for (mystr = 0; str[mystr] != '\0'; mystr++)
	{
		if (mystr % 2 == 0)
		{
			_putchar(str[mystr]);
		}
	}
	_putchar('\n');
}
