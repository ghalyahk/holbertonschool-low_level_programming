#include "main.h"
#include <fcntl.h>      /* for open() flags */
#include <unistd.h>     /* for write() and close() */
#include <sys/stat.h>   /* for file permissions */

/**
 * create_file - Creates a file with specific content and permissions.
 * @filename: name of the file to create
 * @text_content: NULL-terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;  /* file descriptor */
	ssize_t wlen = 0, len = 0;

	if (filename == NULL)
		return (-1);

	/* Open file: create if not exist, truncate if exist */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* If there’s text_content, write it */
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		wlen = write(fd, text_content, len);
		if (wlen == -1 || wlen != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
