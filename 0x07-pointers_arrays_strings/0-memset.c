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
	unsigned int i = 0, length = 0;

	while (s[length] != '\0')
		length++;

	for (; i < n; i++)
		s[length + i] = b;

	return (s);
}
