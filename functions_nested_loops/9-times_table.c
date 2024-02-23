#include "main.h"
/**
 *times_table - print the 9 tables staring with 0.
 *
 *num: number
 *
 *
 *
 */
void times_table(void)
{
	int num, sum;
	int multi;

	for (num = 1; num < 10; num ++)
	{
		for(sum = 1; sum < 10; sum++)
		{
			multi = num * sum;
			if ( sum == 0)
			{
				_putchar(multi + 48);
			}
			
			if (multi < 10 && sum != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(multi + 48);
			}
			else if (multi >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((multi / 10) + 48);
				_putchar((multi % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
