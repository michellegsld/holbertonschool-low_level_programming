#include "holberton.h"

/**
 * *string_toupper - Changes all lowercase letters of a string to upper..
 * @s: The string to be converted
 *
 * Return: Always the new string.
 */
char *string_toupper(char *s)
{
	int i = 0, len = 0;

	while (s[len] != '\0')
		len++;

	for (len++; i < len; i++)
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;


	return (s);
}
