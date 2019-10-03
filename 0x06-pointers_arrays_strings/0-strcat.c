#include "holberton.h"

/**
 * *_strcat - Concatenates two strings, changing placement of '\0'
 * @*dest: The resulting string being added to
 * @*src: The string that will be adding to
 *
 * Return: Always the pointer to resulting string, dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, length = 0;

	while (dest[length] != '\0')
		length++;

	for (; src[i] != '\0'; i++)
		dest[length + i] = src[i];
	
	dest[length + i] = '\0';

	return (dest);
}
