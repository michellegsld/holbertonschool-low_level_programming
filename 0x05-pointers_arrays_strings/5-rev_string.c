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

	while (i < len)
	{
		rev[i] = s[i];
		i++;
	}

	while (j < len)
	{
		s[i - 1] = rev[j];
		i--;
		j++;
	}
}
