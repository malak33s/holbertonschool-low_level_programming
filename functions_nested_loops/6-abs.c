#include "main.h"

/**
 * _abs - Write a function that computes the absolute of an integer.
 *
 *
 * @num: the integrer
 *
 * Return: the absolute value.
 *
 *
*/

int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		return (-num);
	}
	return (num);
}
