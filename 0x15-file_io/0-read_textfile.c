#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: text file
 * @letters: number of letters function should read and print
 *
 * Return: actual number of letters it could read and print
 * 0 if the file can not be opened or read, if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nr, nw;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	
	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);

	nr = read(fd, buffer, letters);
	nw = write(STDOUT_FILENO, buffer, nr);

	close(fd);

	free(buffer);

	return (nw);
}
