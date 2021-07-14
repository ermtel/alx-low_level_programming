#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers.
 * @argc: the number of command line arguments.
 * @argv: an array containing the program command line arguments.
 * Return: 0 (success), or 1 upon error.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
