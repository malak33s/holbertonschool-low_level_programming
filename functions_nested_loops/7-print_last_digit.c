#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - print the last digit of a number.
 *
 *@lsd: last digit of a number.
 *
 *
 * Return: The last digit of a number
 *
 *
 * */
int print_last_digit(int num)
{
	int lsd = num % 10;

	if (lsd < 0)
	{
		lsd *= -1;
	}
	_putchar(lsd + '0');
	
	return (lsd);
}
