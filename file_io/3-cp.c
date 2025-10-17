#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * close_file - Closes a file descriptor and checks for errors
 * @fd: File descriptor to close
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of one file to another
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, or exit codes on error
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, read_count, write_count;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_file(from_fd);
		exit(99);
	}

	while ((read_count = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		write_count = write(to_fd, buffer, read_count);
		if (write_count == -1 || write_count != read_count)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close_file(from_fd);
			close_file(to_fd);
			exit(99);
		}
	}

	if (read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close_file(from_fd);
		close_file(to_fd);
		exit(98);
	}

	close_file(from_fd);
	close_file(to_fd);

	return (0);
}

