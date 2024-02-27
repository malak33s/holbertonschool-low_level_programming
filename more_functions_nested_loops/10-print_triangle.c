#include "main.h"
/**
 * print_triangle - function that prints a triangle.
 *@size: the size of the triangle
 *
 */

void print_triangle(int size)
{
	int a, b, s;

	a = 0;
	s = size - 1;
	while (a < size)
	{
		s = size - 1 - a;
		b = a + 1;
		while (s > 0)
		{
			_putchar(' ');
			s--;
		}
		while (b > 0)
		{
			_putchar('#');
			b--;
		}
		_putchar('\n');
		a++;
	}
	if (size <= 0)
		_putchar('\n');
}
