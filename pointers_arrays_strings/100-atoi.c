#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 *@s: string.
 *
 * Return: value of posi
*/

int _atoi(char *s)
{
	int var, negat, posi, boolean;

	var = negat = posi = boolean = 0;

	negat = -1;

	while (s[var] != '\0')
	{
		if (s[var] == '-')
			negat *= -1;
		if (s[var] >= '0' && s[var] <= '9')
		{
			posi *= 10;
			posi -= (s[var] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
			break;
		var++;
	}
	posi *= negat;
	return (posi);
}
