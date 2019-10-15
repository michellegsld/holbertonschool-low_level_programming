#include "holberton.h"

/**
 * *str_concat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;
	char *str;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	str = malloc((len1 + len2 + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (; i < len1; i++, j++)
		str[j] = s1[i];

	for (i = 0; i <= len2; i++, j++)
		str[j] = s2[i];

	return (str);
}
