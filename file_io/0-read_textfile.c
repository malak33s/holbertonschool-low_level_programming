#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout.
 * @filename: pointer to the string to print.
 * @letters: the number of letters it should read and print.
 *
 * Return: the actual number of letters it should read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fo, re, w;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fo = open(filename, O_RDONLY);
	re = read(fo, buf, letters);
	w = write(STDOUT_FILENO, buf, re);


	if (fo == -1 || re == -1 || w == -1)
	{
		return (0);
	}

	free(buf);
	close(fo);
	return (w);
}
