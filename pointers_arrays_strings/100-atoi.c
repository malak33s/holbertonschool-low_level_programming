#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 *
 *
 *
*/

int _atoi(char *s)
{
	short boolean;
	int var, negat, posi;
	var = negat = posi = 0;
	posi = -1;

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
