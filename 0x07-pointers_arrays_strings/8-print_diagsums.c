#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix of integers
 * @a: The array
 * @size: How big the matrix is
 */
void print_diagsums(int *a, int size)
{
	int i, j, lc, rc;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				rc = rc + a[j];
			if (i + j == size)
				lc = lc + a[j];
		}
	}
	printf("%d, %d\n", lc, rc);
}
