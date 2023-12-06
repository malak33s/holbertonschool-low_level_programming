#include <stdio.h>
#include <stdlib.h>
#incl6ude "main_h"

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, lett, w;
	char *tx;

	tx = malloc(letters);
	if (tx == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(tx);
		return (0);
	}

	lett = read(file, tx, letters);
	w = write(STDOUT_FILENO, tx, lett);

	fclose(file);

	return (w);
}
