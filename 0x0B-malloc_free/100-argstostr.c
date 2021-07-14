#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program.
 *
 * @ac: the number of arguments.
 * @av: the argument string array.
 *
 * Return: a pointer to a new string or NULL if @ac is 0 or @av is NULL.
 */

char *argstostr(int ac, char **av)
{

	int i, j, k, length = 0;
	char *buffer;

	if (ac == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}
	buffer = (char *)malloc(sizeof(char) * (length + 1));
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}
	for (i = j = k = 0; k < length - 1; j++, k++)
	{
		if (av[i][j] == '\0')
		{
			buffer[k] = '\n';
			i++;
			k++;
			j = 0;
		}
		buffer[k] = av[i][j];
	}
	buffer[k] = '\n';
	buffer[k + 1] = '\0';
	return (buffer);
}
