#include "main.h"
/**
 * print_numbers - function that prints the numbers.
 *
 *@n: the numbers.
 *
 * Return: 
 */
void print_numbers(void)
{
	int n;
	
	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
