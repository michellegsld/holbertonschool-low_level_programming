#include "holberton.h"

/**
 * *create_array - Create array of chars, and initialize with specific char.
 * @size: The size of the array
 * @c: What the array is initialized with
 *
 * Return: Either pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	array = malloc(size * sizeof(char));

	if (size == 0 || array == NULL)
		return (NULL);

	for (; i <= size; i++)
		array[i] = c;

	return (array);
}
