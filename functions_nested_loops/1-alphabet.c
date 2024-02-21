#include <stdio.h>
#include"main.h"
/**
 *print_alphabet - print the alphabet
 *
 *Return: always 0
 */
void print_alphabet(void)
{
	char apt = 'a';

	while (apt <= 'z')
	{
		_putchar(apt);
		apt++;
	}
	_putchar('\n');
}
