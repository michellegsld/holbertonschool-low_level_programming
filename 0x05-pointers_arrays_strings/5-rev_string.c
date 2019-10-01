#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i, len = 0, j = 0;

	while (s[len] != '\0')
		len++;

	char copy[len];

	for (i = 0; s[i] != '\0'; i++)
		copy[i] = s[i];

	i = i - 1;

	while (s[j] != '\0')
	{
		s[j] = copy[i];
		i--;
		j++;
	}
}
