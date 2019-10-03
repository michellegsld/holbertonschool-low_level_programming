#include "holberton.h"

/**
 * _strcmp - Compares two strings.
 * @s1: The first string to be compared
 * @s2: The second string to be compared
 *
 * Return: Always an integer showing the comparison between strings
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
		return (0);

	else
		return (*s1 - *s2);
}
