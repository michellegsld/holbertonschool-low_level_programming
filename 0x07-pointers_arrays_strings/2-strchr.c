#include "holberton.h"

/**
 * *_strchr - Locates a character in a string.
 * @s: The string
 * @c: The character
 *
 * Return: Either a pointer or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *pointer = s;

	for (; s[i] != '\0'; i++)
	{	pointer = (s + i);
		if (s[i] == c)
			return (pointer);
	}
	return ('\0');
}
