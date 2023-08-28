#include "main.h"

/**
 * _strpbrk - Function that searches a string for any set of bytes
 * @s: the string
 * @accept: the string to match
 * Return: a pointer to the byte in s that matches one of the bytes in
 * accept else NULL..
 */
char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s)
	{
		for (count = 0; accept[count]; count++)
		{
			if (*s == accept[count])
				return (s);
		}
		s++;
	}
	return ('\0');
}
