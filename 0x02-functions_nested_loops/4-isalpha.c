#include "holberton.h"

/**
 * _isalpha - Determines if the parameter is an alphabet letter.
 * @c: If is alphabet letter will return 1, else 0.
 *
 * Return: Either 1 or 0.
 */
int _isalpha(int c)
{
	if (((c > 64) && (c < 91)) || ((c > 96) && (c < 123)))
		return (1);
	return (0);
}
