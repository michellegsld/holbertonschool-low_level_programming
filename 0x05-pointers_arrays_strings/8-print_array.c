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

	while (i != n)
	{
		if (i + 1 != n)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
		i++;
	}
}
