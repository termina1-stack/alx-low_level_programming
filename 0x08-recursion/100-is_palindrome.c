#include "main.h"

int _check(char *s, int len);

/**
 * is_palindrome - function that returns 1 if string is palindrome & 0 if not
 * @s: string
 * Return: return 1 if string is palindrome.
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);

	if (l <= 1)
	{
		return (1);
	}

	return (_check(s, l));
}

/**
 * _strlen_recursion - string length
 * @s: takes in string
 * Return: return string length func
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}

/**
 * _check - checks if palindrome
 * @s: takes in string
 * @len: length
 * Return: check if palindrome
 */
int _check(char *s, int len)
{
	if (len <= 1)
	{
		return (1);
	}
	if (*s != s[len - 1])
	{
		return (0);
	}
	else
	{
		return (_check(s + 1, len - 2));
	}
}
