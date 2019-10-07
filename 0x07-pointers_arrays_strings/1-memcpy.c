#include "holberton.h"

/**
 * *_memcpy - Copies memory area.
 * @dest: The memory area being copied to
 * @src: The memory area copied from
 * @n: The amount of bytes being copied
 *
 * Return: Always dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
