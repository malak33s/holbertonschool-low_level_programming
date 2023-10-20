#include "main.h"

/**
 * times_table - print the the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int num1, num2, m;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			m = num1 * num2;

			if (num2 == 0)
			{
				_putchar(m + '0');
			}
			if (m < 10 &&  num2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
			_putchar('\n');
	}
}
