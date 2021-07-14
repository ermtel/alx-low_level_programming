#include <stdio.h>
/**
 * main - print the number of arguments passed to it..
 * @argc: the number of command line arguments.
 * @argv: an array containing the program command line arguments.
 * Return: Always 0 (success).
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
