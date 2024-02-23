#include "main.h"
/**
 * add - function that adds two integers.
 *
 *sum: sum of adds
 *
 *@num1: first integers.
 *
 *@num2: second integers.
 * Return: the results
 */
int add(int num1, int num2)
{
	int sum;

	sum = num1 + num2;

	num1 = 'Y';

	num2 = 57;

	if (sum <= 48)
	{
		_putchar(sum);
	}
	return (sum);
}
