#include <stdio.h>
/**
 *main - print all single numbers of base 10 staring from 0
 *
 * num: number
 *Return: always 0
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
