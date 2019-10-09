#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string length to be determined
 *
 * Return: Always an int, the length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
