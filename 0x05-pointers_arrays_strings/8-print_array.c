#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Prints the 'n' element of an array, followed by a newline.
 * @a: the array
 * @n: the element number
 */
void print_array(int *a, int n)
{
	int i = 0;

	do {
		printf("%d", a[i]);
		if (i < n)
			printf("%d, ", a[i]);
		i++;
	} while (i < n);

	putchar('\n');
}
