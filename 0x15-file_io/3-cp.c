#include "main.h"

/**
 * op_cl - checks if a fiel can be opened or closed.
 *
 * @file_open: file description of the file to be opened
 * @cl_op: closin or openning
 * @fd: file descriptor
 *
 * Return: Nothing
 */

void op_cl(int file_open, int fd, const char *filename, char mode)
{
	const char *error_msg = NULL;
	int exit_code = 0;

	switch (mode)
	{
		case 'C':
			error_msg = "Error: Can't close fd %d\n";
			exit_code = 100;
			break;
		case 'O':
			error_msg = "Error: Can't read from file %d\n";
			exit_code = 98;
			break;
		case 'W':
			error_msg = "Error: Can't write to %s\n";
			exit_code = 99;
			break;
		default:
			return;
	}

	if (file_open == -1)
	{
		dprintf(STDERR_FILENO, error_msg, (filename ? filename : fd));
		exit(exit_code);
	}
}


/**
 * main - copies the content to another file.
 *
 * @argc: argument count.
 * @argv: argument passed.
 *
 * Return: Always zero.
 */

int main(int argc, char *argv[])
{
	const int BUFFER_SIZE;
	const unsigned int MODE;
	int src_fd;
	int d_fd;
	char buffer[BUFFER_SIZE];
	ssize_t nread;
	ssize_t nwritten;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp filr_from filr_to\n");
		exit(97);
	}

	src_fd = open(argv[1], O_RDONLY);
	op_cl(src_fd, -1, argve[1], '0');

	d_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, MODE);
	op_cl(d_fd, -1, argv[2], 'W');

	BUFFER_SIZE = 1024;

	nwritten = write(d_fd, buffer, nread);

	while ((nread = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		if (nwritten == -1)
		{
			op_cl(-1, -1, argv[2], 'W');
		}
	}

	if (nread == -1)
	{
		op_cl(-1, -1, argv[1], 'O');
	}

	if (close(src_fd) == -1)
	{
		op_cl(-1, src_fd, NULL, 'C');
	}

	if (close(d_fd) == -1)
	{
		op_cl(-1, d_fd, NULL, 'C');
	}

	return (0);
}
