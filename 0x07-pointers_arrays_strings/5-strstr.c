#include "holberton.h"

/**
 * *_strstr - Locates a substring
 * @haystack: The string being searched within
 * @needle: What we are searching for
 *
 * Return: Always pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int  i = 0, j = 0, counter = 0, sub_len;
	char *pointer = '\0';

	while (needle[sub_len] != '\0')
		sub_len++;

	for (; haystack[i] != '\0' && needle[j] != '\0'; i++, j++)
	{
		if (haystack[i] == needle[j])
		{
			counter++;
			if (counter == sub_len)
			{
				pointer = ((haystack + i + 1) - sub_len);
				return (pointer);
			}
		}
		else
		{
			counter = 0;
			j = -1;
		}
	}

	return ('\0');
}
