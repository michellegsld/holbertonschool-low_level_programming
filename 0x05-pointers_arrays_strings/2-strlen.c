#include "holberton.h"

/**
 * _strlen - Function similar to strlen, returns string length
 * @s: The string that the length must be determined of
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
