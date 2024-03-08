#include "main.h"
/**
 * main - function for multiplies two arguments
 *
 * @argc: integer of arguments
 * @argv: a array of arguments
 *
 * Return: 1 if the program does'nt receive 2 arguments, otherwise 0
 */

int main(int argc, char *argv[])
{
	int nu1;
	int nu2;
	int res = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	nu1 = atoi(argv[1]);
	nu2 = atoi(argv[2]);
	res = nu1 * nu2;

	printf("%d\n", res);

	return (0);
}
