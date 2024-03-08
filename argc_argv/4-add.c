#include "main.h"
/**
 * main - function for add two positive numbers
 *
 * @argc: integer of arguments
 * @argv: a array of arguments
 *
 * Return: 1 if the number contains a non digit symbol,
 * otherwise 0
 */

int main(int argc, char *argv[])
{
	int sum, num, a, b, c;

	sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] > '9' || argv[a][b] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (c = 1; c < argc; c++)
	{
		num = atoi(argv[c]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
