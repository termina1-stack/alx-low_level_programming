#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: the character array string
 * @c: the character to look for
 * Return: NULL if char not found, else pointer to first occurence of
 * character c
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return ('\0');
}
