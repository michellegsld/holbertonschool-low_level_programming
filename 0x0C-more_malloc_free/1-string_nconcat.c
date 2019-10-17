#include "holberton.h"

/**
 * *string_nconcat - Concatenates two strings
 * @s1: First string
 * @s2: Second string
 * @n: The amount of bytes to copy from s2
 *
 * Return: Pointer to new space in memory or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
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

	lenb = len1 + n + 1;

	str = malloc(lenb * sizeof(char));

	if (str == NULL)
		return (NULL);

	if (len1 == 0 && len2 == 0)
		str = '\0';
	else
	{
		for (; i < len1; i++)
			str[i] = s1[i];
		for (; (j < n) && (j <= len2); j++)
			str[i + j] = s2[j];
	}

	return (str);
}
