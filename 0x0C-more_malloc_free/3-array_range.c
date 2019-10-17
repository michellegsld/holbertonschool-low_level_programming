#include "holberton.h"

/**
 * *array_range - Creates an array of integers
 * @min: Start of the range
 * @max: End of the range
 *
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	int i = 0, range = (max - min) + 1;
	int *array;

	if (min > max)
		return (NULL);

	array = malloc((range + 1) * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (; min <= max; min++, i++)
	{
		array[i] = min;
	}

	return (array);
}
