#include "holberton.h"

/**
 * *malloc_checked - Allocates memory using malloc.
 * @b: Amount of memory to allocate
 *
 * Return: Either pointer to allocated memory or 98
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
