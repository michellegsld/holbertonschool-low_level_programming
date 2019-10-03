#include "holberton.h"

/**
 * *_strncat - Concatenates two strings, uses a certain amount of bytes
 * @dest: The resulting string being added to
 * @src: The string that will be adding to
 * @n: The amount of bytes to be used
 *
 * Return: Always the pointer to resulting string, dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, length = 0;

	while (dest[length] != '\0')
		length++;

	for (; i < n && src[i] != '\0'; i++)
		dest[length + i] = src[i];

	dest[length + i] = '\0';

	return (dest);
}
