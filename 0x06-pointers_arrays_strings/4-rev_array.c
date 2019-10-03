#include "holberton.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: The amount of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int tmp;

	for (; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
