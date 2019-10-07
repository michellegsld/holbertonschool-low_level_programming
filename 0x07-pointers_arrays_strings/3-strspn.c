#include "holberton.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The strong to get the number of bytes from initial segment
 * @accept: What bytes the function is checking for
 *
 * Return: Always number of bytes in initial segment of s
 */
unsigned int  _strspn(char *s, char *accept)
{
	unsigned int j, i, count = 0;

	for (i = 0; s[i] != ' '; i++)
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				count++;
	return (count);
}
