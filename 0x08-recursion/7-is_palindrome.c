#include "holberton.h"

int _strlen_recursion(char *s);

int palindrome_check(char *s, int f, int b, int end, int flag);

/**
 * is_palindrome - Determines if a string is a palindrome
 * @s: The string
 *
 * Return: Either 1 or 0.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int end, flag;

	if (len > 1)
	{
		if (len % 2 == 0)
			flag = 0;
		else
			flag = 1;
		end = (len - flag) / 2;
		return (palindrome_check(s, 0, len - 1, end, flag));
	}
	return (0);
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string length to be determined
 *
 * Return: Always an int, the length of s.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * palindrome_check - Moves through the string
 * @s: The string
 * @f: Stands for forwards, check from front
 * @b: Stands for backwards, checks from back
 * @end: The midpoint of the word
 * @flag: Determines if the length was even or odd
 *
 * Return: Either 1 or 0.
 */
int palindrome_check(char *s, int f, int b, int end, int flag)
{
	int check = 0;

	if (s[f] != s[b])
		return (0);
	if (flag == 0)
		check = 1;
	if (f + check == end && b == end)
		return (1);

	return (palindrome_check(s, f + 1, b - 1, end, flag));
}
