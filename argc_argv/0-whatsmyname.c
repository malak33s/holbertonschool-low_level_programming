#include "main.h"

/**
 * main - function that prints the name of the program
 *
 * @argc: integer of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
