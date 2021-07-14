#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints  minimum number of coins th change..
 * @argc: the number of command line arguments.
 * @argv: an array containing the program command line arguments.
 * Return: 0 (success), or 1 for Error.
 */

int main(int argc, char *argv[])
{

	int i, dig;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	dig = atoi(argv[1]);
	for (i = 0; dig > 0; i++)
	{
		if (dig >= 25)
			dig -= 25;
		else if (dig >= 10)
			dig -= 10;
		else if (dig >= 2)
			dig -= 2;
		else if (dig >= 1)
			dig -= 1;
	}
	printf("%d\n", i);
	return (0);
}
