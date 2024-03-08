#include "main.h"
/**
 * main - function that prints the number of arguments passed into
 *
 * @argc: integer of arguments
 * @argv: a array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
