#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - Print sum of two diagonals of square matrix of ints
 * @a: The array
 * @size: How big the matrix is
 */
void print_diagsums(int *a, int size)
{
	int truesize = size * size;
	int i = 0, j = size - 1;
	int tl = size + 1, tr = size - 1;
	int br = 0, bl = 0;

	while (i < truesize)
	{
		br = br + a[i];
		i = i + tl;
	}

	while (j < truesize - 1)
	{
		bl = bl + a[j];
		j = j + tr;
	}

	printf("%d, %d\n", br, bl);
}
