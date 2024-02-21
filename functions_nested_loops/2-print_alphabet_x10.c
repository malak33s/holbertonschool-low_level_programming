#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet
 * apt: alphabet
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char apt;
	int i = 0;

	while (i++ < 10)
	{
		for (apt = 'a'; apt <= 'z'; apt++)
		{
			_putchar(apt);
		}
		_putchar('\n');
	}
}
