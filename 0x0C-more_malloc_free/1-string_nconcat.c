#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat- fucntion that concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes of s2
 * Return: NULL if fail, or the pointer to malloc memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0, l = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i++])
		len++;

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; s1[i]; i++)
		str[len++] = s1[i];
	for (i = 0; s2[i] && i < n; i++)
		str[len++] = s2[i];
	str[len] = '\0';
	return (str);
}
