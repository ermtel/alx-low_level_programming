#include "holberton.h"

/**
 * cap_string - capitalize all words of a string.
 *
 * @s: the string to be converted.
 *
 * Return: the converted string.
 */

char *cap_string(char *s)
{

	int i;
	char *buffer = s;

	if ((s[0] < 123) && (s[0] > 96))
		s[0] = s[0] - 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == ' ') || (s[i] == '\t') || (s[i] == '\n') ||
		    (s[i] == ','))
		{
			if ((s[i + 1] < 123) && (s[i + 1] > 96))
				s[i + 1] = s[i + 1] - 32;
		}
		else if ((s[i] == ';') || (s[i] == '.') || (s[i] == '!') ||
			 (s[i] == '?'))
		{
			if ((s[i + 1] < 123) && (s[i + 1] > 96))
				s[i + 1] = s[i + 1] - 32;
		}
		else if ((s[i] == '"') || (s[i] == '(') || (s[i] == ')'))
		{
			if ((s[i + 1] < 123) && (s[i + 1] > 96))
				s[i + 1] = s[i + 1] - 32;
		}
		else if  ((s[i] == '{') || (s[i] == '}'))
		{
			if ((s[i + 1] < 123) && (s[i + 1] > 96))
				s[i + 1] = s[i + 1] - 32;
		}
	}
	return (buffer);
}
