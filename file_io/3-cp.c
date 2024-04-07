#include "main.h"

/**
* close_file - function that closes files
* @file: file to be closed
*/
void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}
/**
* main - Copies the content of a file into another file
* @argc: number of arguments
* @argv: agrument vector
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
	int from, op, re, wr;
	char *buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	from = open(argv[1], O_RDONLY);
	re = read(from, buff, 1024);
	op = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (from == -1 || re == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (re > 0)
	{
		wr = write(op, buff, re);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		re = read(from, buff, 1024);
	}
	close_file(from);
	close_file(op);

	return (0);
}
