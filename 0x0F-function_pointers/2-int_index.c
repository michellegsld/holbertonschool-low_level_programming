#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array to search through
 * @size: The number of elements within the array
 * @cmp: The pointer to the function comparing values
 *
 * Return: Either -1 or an index number within the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, check = 0;

	if (size <= 0)
		return (-1);

	if (array && cmp)
		for (i = 0; i < size; i++)
		{
			check = cmp(array[i]);
			if (check != 0)
				return (i);
		}

	return (-1);
}
