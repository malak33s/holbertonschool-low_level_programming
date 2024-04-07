#include "main.h"

/**
 * create_file - write a function that
 * create a new file.
 * @filename: pointer to the string to print.
 * @text_content: text to copy.
 *
 * Return: 1
*/

int create_file(const char *filename, char *text_content)
{
	int file, wr;

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(file);
		return (1);
	}
	if (filename == NULL)
		return (-1);

	wr = write(file, text_content, strlen(text_content));

	if (wr == -1)
		return (-1);
	close(file);
	return (1);
}
