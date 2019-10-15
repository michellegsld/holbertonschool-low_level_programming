#include "holberton.h"

/**
 * *_strdup - Returns a pointer to a newly allocated space in memory
 * @str: The string to copy
 *
 * Return: Pointer to new space in memory
 */
char *_strdup(char *str)
{
	unsigned int i = 0, len = 0;
	char *newstr;

	while (str[len] != '\0')
		len++;
	len++;

	newstr = malloc(len * sizeof(char));

	if (len == 0 || newstr == NULL || str == NULL)
		return (NULL);

	for (; i <= len; i++)
		newstr[i] = str[i];

	return (newstr);
}
