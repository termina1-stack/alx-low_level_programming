#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locate a substring
 * @haystack: string
 * @needle: string substring
 * Return: Pointer to beginning of substring, or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		a = 0;
		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
					return (haystack);
				a++;
			} while (haystack[a] == needle[a]);
		}
		haystack++;
	}
	return ('\0');
}
