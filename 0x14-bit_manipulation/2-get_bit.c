#include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number to whose bit must be returned
 * @index: Gives the position of what bit to return
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned long int len = 10000000000000000000;
	const char str[65];

	for (i = 0; i != 65; i++)
		str[i] = '\0';
	
	for (i = 0; len != 0;)
	{
		if (var >= len)
		{
			str[i] = ((var / len) % 10) + '0';
			i++;
		}
		len = len / 10;
	}
}
