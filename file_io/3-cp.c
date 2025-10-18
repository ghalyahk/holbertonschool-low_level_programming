#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * close_or_die - closes a file descriptor or exits with code 100
 * @fd: file descriptor to close
 */
static void close_or_die(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * read_retry - reads from a file descriptor, retrying if interrupted
 * @fd: source file descriptor
 * @buf: buffer to store read data
 * @n: number of bytes to read
 * @name: filename for error messages
 * Return: number of bytes read (>= 0)
 */
static ssize_t read_retry(int fd, char *buf, size_t n, const char *name)
{
	ssize_t r;

	do {
		r = read(fd, buf, n);
	} while (r == -1 && errno == EINTR);

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", name);
		exit(98);
	}
	return (r);
}

/**
 * write_all - writes all bytes, handling short writes and EINTR
 * @fd: destination file descriptor
 * @name: destination filename for error messages
 * @buf: data buffer
 * @n: number of bytes to write
 */
static void write_all(int fd, const char *name, const char *buf, ssize_t n)
{
	ssize_t off = 0, w;

	while (off < n)
	{
		do {
			w = write(fd, buf + off, n - off);
		} while (w == -1 && errno == EINTR);

		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", name);
			exit(99);
		}
		off += w;
	}
}

/**
 * main - copies content from file_from to file_to
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int f_from, f_to;
	ssize_t r;
	char buf[BUF_SIZE];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f_from = open(av[1], O_RDONLY);
	if (f_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	f_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close_or_die(f_from);
		exit(99);
	}

	while ((r = read_retry(f_from, buf, BUF_SIZE, av[1])) > 0)
		write_all(f_to, av[2], buf, r);

	close_or_die(f_from);
	close_or_die(f_to);
	return (0);
}

