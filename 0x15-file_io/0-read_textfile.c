#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 *
 * @filename: name of file to be read
 * @letters: numbers of the letters to be read and printed.
 *
 * Return: numbers of letters print or
 *         it fails, return o.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lnrd;
	ssize_t lnwr;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters));

	if (buffer == NULL)
	{
		return (0);
	}

	lnrd = read(fd, buffer, letters);
	lnwr = write(STDOUT_FILENO, buffer, lnrd);

	close(fd);

	free(buffer);

	return (0);
}
