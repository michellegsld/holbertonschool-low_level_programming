#include "holberton.h"

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
