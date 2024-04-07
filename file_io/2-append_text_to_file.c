#include "main.h"
/**
 * append_text_to_file - create a function that
 * appends text at the end of a file.
 * @filename: pointer to the string to print.
 * @text_content: text to copy.
 *
 * Return: 1.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, wr;
	unsigned int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[len]; len++)
			;
	}
	else
	{
		return (1);
	}

	file = open(filename, O_APPEND | O_WRONLY);
	wr = write(file, text_content, len);

	if (file == -1 || wr == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}
