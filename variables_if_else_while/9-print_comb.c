#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible combinations of single-digit numbers.
 *
 * num: numbers
 * Return: Always 0
 */

int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
