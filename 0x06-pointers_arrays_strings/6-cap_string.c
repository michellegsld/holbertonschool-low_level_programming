#include "holberton.h"

/**
 * cap_string - Capitalizes the first letter of every word within a string
 * @s: The string to be changed
 *
 * Return: Always the changed string.
 */
char *cap_string(char *s)
{
	int i = 0, j, len = 0;
	int p[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	while (s[len] != '\0')
		len++;

	for (len++; i < len; i++)
		for (j = 0; j < 13; j++)
			if ((i == 0) || (s[i - 1] == p[j]))
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] -= 32;
	return (s);
}
