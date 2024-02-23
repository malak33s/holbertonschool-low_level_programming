#include "main.h"

/**
 *times_table - print the 9 tables staring with 0.
 *
 *num: number
 */
void times_table(void)
{
	int num, sum;
	int fois;

	for (num = 0; num <= 9; num++)
	{
		for (sum = 0; sum <= 9; sum++)
		{
			fois = num * sum;
			if (sum == 0)
			{
				_putchar(48);
				if (sum < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				if (fois < 10)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((fois / 10) + 48);
				}
				_putchar((fois % 10) + 48);
				if (sum < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
