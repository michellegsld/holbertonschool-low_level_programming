#include "holberton.h"

/**
 * *_strpbrk - Searches a string for any of a set of bytes
 * @s: The string being searched in
 * @accept: What bytes being searched for
 *
 * Return: Always the location of the first byte
 */
char *_strpbrk(char *s, char *accept)
{
	int  i, j;
	char *pointer = '\0';

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				pointer = (s + i);
				return (pointer);
			}

	return ('\0');
}
