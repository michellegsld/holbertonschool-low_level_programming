#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints 'n' amount of elements in an array
 * @a: the array
 * @n: the element number
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}

	putchar('\n');
}
