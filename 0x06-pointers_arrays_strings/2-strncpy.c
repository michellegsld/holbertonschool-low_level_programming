#include "holberton.h"

/**
 * *_strncpy - Copies a string.
 * @dest: The resulting string, copied to
 * @src: The string to be copied from
 * @n: The amount of byte
 *
 * Return: Always the pointer to resulting string, dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
