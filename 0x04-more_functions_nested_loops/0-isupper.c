#include "holberton.h"

/**
 * _isupper - Checks for an uppercase character.
 * @c: The variable being checked if it's uppercase.
 *
 * Return: Either 1 or 0.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}
