#include "holberton.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int i, j = 0;
	char copy[10];

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
