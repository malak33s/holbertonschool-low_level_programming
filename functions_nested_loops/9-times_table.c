#include "main.h"
/**
 *times_table - print the 9 tables staring with 0.
 *
 *num: number
 */
void times_table(void)
{
	int num, sum;
	int multi;

	for (num = 0; num <= 9; num++)
	{
		for (sum = 0; sum <= 9; sum++)
		{
			multi = num * sum;

			if (sum == 0)
			{
				if (num == 0)
				{
					_putchar(48);
				}
				else
				{
					_putchar(48);
					_putchar(',');
					_putchar(' ');
				}
			}
				else
				{
					_putchar(',');
					_putchar(' ');

					if (multi < 10)
					{
						_putchar(' ');
					}
					else
					{
						_putchar((multi / 10) + 48);
					}
				_putchar((multi % 10) + 48);
				}
		}
		_putchar('\n');
	}
}
