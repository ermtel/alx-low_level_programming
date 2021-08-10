#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to
 *                 the POSIX standard output.
 * @filename: the file name of the file to be read.
 * @letters: the number of letters it should read and print.
 * Return: the actual number of letters it could read and write.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;
	ssize_t rd, wr;

	if (!filename)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (!c)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	rd = read(fd, c, letters);
	wr = write(STDOUT_FILENO, c, rd);
	if (wr == -1 || wr != rd)
		return (0);
	close(fd);
	free(c);
	return (wr);
}
