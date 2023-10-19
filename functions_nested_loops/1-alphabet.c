#include <stdio.h>
#include "main.h"
/**
 * n - prints _putchar in lowercase by new line.
 *  Return: 0
 */
void print_alphabet(void)
{
	char a = 'a';
	
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}

	putchar('\n');

}
