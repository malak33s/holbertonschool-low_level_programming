#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack
 * Bauer from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int heure, min;

	for (heure = 0; heure <= 23; heure++)
	{
	for (min = 0; min <= 59; min++)
	{
	_putchar((heure / 10) + '0');
	_putchar((heure % 10) + '0');
	_putchar(':');
	_putchar((min / 10) + '0');
	_putchar((min % 10) + '0');
	_putchar('\n');
	}

	}

}
