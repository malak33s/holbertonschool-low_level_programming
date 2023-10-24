#include "main.h"
#include <stdio.h>
/**
 * _puts - function prints a string 
 *
 * @s: string to prints stdout
 *
 */
void _puts(char *str)
{
	int a = 0;

	if (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
