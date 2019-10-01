#include "holberton.h"

/**
 * *_strcpy - Copies the string pointed to by src into dest
 * @dest: String being copied over
 * @src: String being copied from
 *
 * Return: Always the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = src[i];

	return (dest);
}
