#include "holberton.h"

/**
 * leet - Encodes a string into 1337
 * @s: The string to be encoded
 *
 * Return: Always the encoded string.
 */
char *leet(char *s)
{
	int i = 0, j, len = 0;
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char lett[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};

	while (s[len] != '\0')
		len++;

	for (len++; i < len; i++)
		for (j = 0; j < 10; j++)
		if (s[i] == lett[j])
			s[i] = num[j];
	return (s);
}
