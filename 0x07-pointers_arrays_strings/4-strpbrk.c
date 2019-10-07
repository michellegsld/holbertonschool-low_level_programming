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
	int  i, j, length_s = 0, length_a = 0;
	char *pointer = '\0';

	while (s[length_s] != '\0')
		length_s++;

	length_s++;

	while (s[length_a] != '\0')
		length_a++;

	length_a++;

	for (i = 0; i < length_s; i++)
		for (j = 0; j < length_a; j++)
			if (s[i] == accept[j])
			{
				pointer = (s + i);
				return (pointer);
			}

	return ('\0');
}
