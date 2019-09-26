#include "holberton.h"

/**
 * _isdigit - Checks for if variable is a number from 0 to 9.
 * @c: The variable being checked if it's a single digit.
 *
 * Return: Either 1 or 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
