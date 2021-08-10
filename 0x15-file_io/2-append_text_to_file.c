#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the file name of the file to be created.
 * @text_content: a NULL terminated string to add at the end of the file.
 * Return: 1 on success or -1 upon failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, length;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (length = 0; text_content[length] != '\0'; length++)
			;
		wr = write(fd, text_content, length);
		if (wr == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
