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
	int  i = 0, j = 0, counter = 0, sub_len, start;
	char *pointer = '\0';

	if (*needle == '\0')
		return (haystack);

	while (needle[sub_len] != '\0')
		sub_len++;

	for (; haystack[i] != '\0' && needle[j] != '\0'; i++, j++)
	{
		if (haystack[i] == needle[j])
		{
			counter++;
			if (counter == 1)
				start = i;
			if (counter == sub_len)
			{
				pointer = (haystack + start);
				return (pointer);
			}
		}
		else
		{
			counter = 0;
			start = 0;
			j = -1;
		}
	}

	return ('\0');
}
