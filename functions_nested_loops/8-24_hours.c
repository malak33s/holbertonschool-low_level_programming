#include "main.h"
/**
 *jack_bauer - print every minute of the day staring from 00:00 to 23:59
 *
 *h1: first hour
 *
 *h2: second hour number2
 *
 * m1: fisrt minute
 * m2: second minute
 */
void jack_bauer(void)
{
	char h1;
	char h2;

	int m1 = 0;
	int m2 = 0;

	for (h1 = '0'; h1 <= '2'; h1++)
	{
		for (h2 = '0'; (h1 < '2' && h2 <= '9') || (h1 == '2' && h2 <= '3');
				h2++)
		{
			for (m1 = '0'; m1 <= '5'; m1++)
			{
				for (m2 = '0'; m2 <= '9'; m2++)
				{
					_putchar(h1);
					_putchar(h2);
					_putchar(':');
					_putchar(m1);
					_putchar(m2);
					_putchar('\n');
				}
			}
		}
	}
}
