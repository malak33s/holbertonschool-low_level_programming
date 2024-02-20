#include <stdio.h>
/**
 *main - print the alphabet
 *
 *Return: always 0
 */

int main(void)
{
	char apt = 'a';

	while (apt <= 'z')
	{
		putchar(apt);
		apt++;
	}
	putchar('\n');

	return (0);
}
