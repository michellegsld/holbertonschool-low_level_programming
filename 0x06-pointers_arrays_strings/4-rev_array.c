#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: The amount of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = 0;
	int copy[n];

	for (; i < n; i++)
		copy[i] = a[i];

	for (i--; j < n; j++, i--)
		a[j] = copy[i];
}
