#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to b created
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 success, -1 failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	write(fd, text_content, len);

	close(fd);
	return (1);
}
