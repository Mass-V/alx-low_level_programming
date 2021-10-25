#include "main.h"
void close_fd(int fd);

/**
 * main - copies the content of a file to another file
 * @argc: no of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	while (rd >= 1024)
	{
		rd = read(file_from, buff, 1024);
		if (rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		wr = write(file_to, buff, rd);
		if (wr == -1)
		{
		dprintf(2, "Error: Can't write to %s\n", argv[2]);
		exit(99);
		}
	}
	close_fd(file_from);
	close_fd(file_to);
	return (0);
}

/**
 * close_fd - close file desriptor
 * @fd: file descriptor
 */
void close_fd(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
