#include "holberton.h"

/**
 * _strlen_recursion - measures the length of a string recursively.
 *
 * @s: the string to be measured.
 *
 * Return: the length of the string.
 */

int _strlen_recursion(char *s)
{

	int i = 1;

	if (*s == 0)
		return (0);
	else
		return (i += _strlen_recursion(s + 1));
}
/**
 * palindrome_wrapper - chaeck if a string is palindrome.
 * @s: the string.
 * @first: first value of the character array.
 * @last: last value of the character array.
 *
 * Return: 1 if palindrome or else 0.
 */

int palindrome_wrapper(char *s, int first, int last)
{
	if (first >= last)
		return (1);
	else if (s[first] != s[last])
		return (0);
	else
		return (palindrome_wrapper(s, first + 1, last - 1));
}

/**
 * is_palindrome - checks if a string is palindrome.
 * @s: the string.
 *
 * Return: 1 if palindrome or else 0.
 */

int is_palindrome(char *s)
{
	return (palindrome_wrapper(s, 0, _strlen_recursion(s) - 1));
}
