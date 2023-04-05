#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
/**
 * checker - checks the characters are the same
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, otherwise 0
 */
int checker(char *s, int i, int len)
{
	if (s[i] != s[len])
		return (0);
	if (i >= len)
		return (1);
	return (checker(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (*s == 0)
		return (1);
	return (checker(s, 0, length - 1));
}
