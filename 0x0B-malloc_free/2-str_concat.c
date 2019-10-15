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
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0, lenb = 0;
	char *str;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	lenb = len1 + len2 + 1;
	str = malloc((lenb) * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (lenb == 1)
		str[0] = '\0';
	else
	{
		for (; i < len1; i++, j++)
			str[j] = s1[i];
		for (i = 0; i <= len2; i++, j++)
			str[j] = s2[i];
	}

	return (str);
}
