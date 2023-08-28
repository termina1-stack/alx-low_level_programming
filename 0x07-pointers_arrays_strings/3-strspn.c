#include "main.h"

/**
 * _strspn - function that searches a string for a set of bytes
 * @s: the character string array
 * @accept: the character array to check bytes
 * Return: The number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
			if (*s == accept[l])
			{
				i++;
				break;
			}
			else if (accept[l + 1] == '\0')
				return (i);
		}
		s++;
	}
	return (i);
}
