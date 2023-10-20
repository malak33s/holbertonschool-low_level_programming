#include "main.h"
/**
 * _abs - Entry point,computes the absolute variable of num
 * @num: character to compute
 *
 * Return: 0
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	return (num);
}
