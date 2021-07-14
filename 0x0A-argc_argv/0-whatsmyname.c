#include <stdio.h>
/**
 * main - print the name of the file.
 * @argc: the number of command line arguments.
 * @argv: an array containing the program command line arguments.
 * Return: Always 0 (success).
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
