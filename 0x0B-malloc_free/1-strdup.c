#include "main.h"

/**
 * get_len - function that counts length of string
 * @str: the string
 * Return: length of string
 */
int get_len(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
		continue;

	return (l);
}

/**
 * _strdup - function that returns pointer to a new string
 * @str: the string
 * Return: pointer to new string, or NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i;

	if (str == NULL)
		return ('\0');

	dup = (char *)malloc((get_len(str) + 1) * sizeof(char));

	if (dup == NULL)
		return ('\0');

	for (i = 0; str[i] != '\0'; i++)
		dup[i] = str[i];

	dup[i] = '\0';

	return (dup);
}
