#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: the string
 * @needle: the strings substring
 * Return: A pointer to beginning of substring else NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	int k;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		a = 0;
		if (haystack[k] == needle[k])
		{
			do {
				if (needle[k + 1] == '\0')
					return (haystack);
				k++;
			} while (haystack[k] == needle[k]);
		}
		haystack++;
	}
	return ('\0');
}
