#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	int i = 0, j = 0;

	while (s[len] != '\0')
		len++;

	char rev[len];

	rev[len] = '\0';

	while (i < len)
	{
		rev[i] = s[i];
		i++;
	}

	i -= 1;

	while (j < len)
	{
		s[i] = rev[j];
		i--;
		j++;
	}
}
