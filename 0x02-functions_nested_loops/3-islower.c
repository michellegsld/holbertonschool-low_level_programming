#include "holberton.h"

/**
 * _islower - Determines whether the parameter is a lowercase letter or not.
 * @c: is supposed to be a lowercase letter, returns 1 in that case, else is 0.
 *
 * Return: Either 1 or 0.
 */
int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return(1);
	return(0);
}
