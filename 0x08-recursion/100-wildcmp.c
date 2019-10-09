#include "holberton.h"

/**
 * wildcmp - Compares two strings to determine if they are identical
 * @s1: First string to be compared
 * @s2: Second string being compared to
 *
 * Return: Either 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 != '\0') && (*s2 != '\0'))
	{
		if (*s2 == '*')
		{
			if (*(s1 + 1) == '\0')
				return (1);
			else if (*(s1 + 1) != *(s2 + 1))
				return (wildcmp(s1 + 1, s2));
			else
				return (wildcmp(s1 + 1, s2 + 1));
		}
		if (*s1 == *s2)
			return (wildcmp(s1 + 1, s2 + 1));
	}
	else if ((*s1 == '\0') && *s2 == '\0')
		return (1);

	return (0);
}
