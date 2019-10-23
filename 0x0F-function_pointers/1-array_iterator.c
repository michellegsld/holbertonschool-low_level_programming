#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Is the array
 * @size: The size of the array
 * @action: The pointer to the function needed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if ((array && size > 0) && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
