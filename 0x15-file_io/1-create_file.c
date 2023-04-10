#include "main.h"

/**
 * create_file - a function that creates a file
 *
 * @filename: name of file
 * @text_content: string to be written in created file
 *
 * Return: 1 on success, -1 on failure, -1 if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[count])
		count++;

	write(fd, text_content, count);

	close(fd);

	return (1);
}
