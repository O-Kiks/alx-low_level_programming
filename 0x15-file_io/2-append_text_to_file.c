#include "main.h"
/**
* append_text_to_file - appends text at the end of a file
* @filename: name of a text file
* @text_content: content of file
* Return: 1
* On error, 0 is returned.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, count = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

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
