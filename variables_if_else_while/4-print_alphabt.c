#include <stdio.h>
/**
 *main - print alphabet exept E and Q
 *
 *Return: always 0
 */

int main(void)
{
	int apt;

	for (apt = 'a'; apt <= 'z'; apt++)
	{
		if (apt != 'e' && apt != 'q')
		putchar(apt);
	}

	putchar('\n');

	return (0);
}
