#include <stdio.h>
/**
 *main - print the alphabet in lowercase and then in uppercase
 *
 *Return: always 0
 */

int main(void)
{
	char apt;

	for (apt = 'a'; apt <= 'z'; apt++)
	{

		putchar(apt);
	}
	for (apt = 'A'; apt <= 'Z'; apt++)
	{
		putchar(apt);

	}

	putchar('\n');

	return (0);
}
