#include "holberton.h"

/**
 * _abs - Returns the absolute value of the parameter.
 * @a: Parameter is an int, returns the positive version.
 *
 * Return: Either -a or a.
 */
int _abs(int a)
{
	if (a < 0)
		return (-a);
	return (a);
}
