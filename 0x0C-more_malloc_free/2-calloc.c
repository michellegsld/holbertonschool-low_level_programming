#include "holberton.h"

char *_memset(char *s, char b, unsigned int n);

/**
 * *_calloc - Allocate memory for an array.
 * @nmemb: How many elements to be in the array
 * @size: The bytes of each
 *
 * Return: Either pointer to array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;

	if (size == 0 || nmemb == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	_memset(array, size, nmemb);
}

/**
 * *_memset - Fills memory with a constant byte.
 * @s: Pointer
 * @b: Constant byte
 * @n: The first bytes of the memory area
 *
 * Return: Always the pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		s[i] = b;

	return (s);
}
