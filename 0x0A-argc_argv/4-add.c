#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive number.
 * @argc: the number of command line arguments.
 * @argv: an array containing the program command line arguments.
 * Return: 0 (success), or 1 for Error.
 */

int main(int argc, char *argv[])
{

	int i, j, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
