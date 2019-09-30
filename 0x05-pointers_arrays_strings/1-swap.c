#include "holberton.h"

/**
 * swap_int - Swaps the values of 2 integers.
 * @a: First value to be swapped, with b.
 * @b: Second value to be swapped, with a.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
