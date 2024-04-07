#include "main.h"

/**
 * read_textfile - write a function
 * reads a text file and prints it to the POSIX stdout.
 * @filename: pointer to the string to print.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it should read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, re, wi;
	char *i;

	if (filename == NULL)
		return (0);

	i = malloc(sizeof(char) * letters);
	if (i == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	re = read(file, i, letters);
	wi = write(STDOUT_FILENO, i, re);

	if (file == -1 || re == -1 || wi == -1)
	{
		return (0);
	}

	free(i);
	close(file);
	return (wi);
}
