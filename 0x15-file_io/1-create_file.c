#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file with text content.
 * @filename: the file name of the file to be created.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success or -1 upon failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wr, length;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (length = 0; text_content[length] != '\0'; length++)
		;
	wr = write(fd, text_content, length);
	if (wr != length)
		return (-1);
	}
	close(fd);
	return (1);
}
