#include "holberton.h"

/**
 * rot13 - Encodes a string into 1337
 * @s: The string to be encoded
 *
 * Return: Always the encoded string.
 */
char *rot13(char *s)
{
	int i, j;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == alpha[j])
			{
				s[i] = rot[j];
				break;
			}
	return (s);
}
