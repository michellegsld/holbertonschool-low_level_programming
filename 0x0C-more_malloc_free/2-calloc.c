#include "holberton.h"

/**
 * *_calloc - Allocate memory for an array.
 * @nmemb: How many elements to be in the array
 * @size: The bytes of each
 *
 * Return: Either pointer to array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;

	array = malloc(nmemb * sizeof(size));

	if (size == 0 || array == NULL)
		return (NULL);

	return (array);
}
