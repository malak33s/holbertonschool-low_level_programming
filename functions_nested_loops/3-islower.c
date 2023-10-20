#include "main.h"

/**
 *_islower - Entry point,checks for lowercase
 *character
 *@a: character to check
 *
 *Return: 1 if c is lowercase else 0
 */

int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
	{
	return (1);
	}

	else
	{
	return (0);
	}


}
