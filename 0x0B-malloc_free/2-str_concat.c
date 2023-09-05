#include "main.h"

/**
 * get_len - function that counts length of the string
 * @str: the string
 * Return: length of the string
 */
int get_len(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
		continue;

	return (l);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer to concatenated string, followed by null
 */
char *str_concat(char *s1, char *s2)
{
	char *join;
	int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	else
		len1 = get_len(s1);

	if (s2 == NULL)
		s2 = "";
	else
		len2 = get_len(s2);

	join = (char *)malloc((len1 * sizeof(char)) + (len2 * sizeof(char)) + 1);

	if (join == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		join[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		join[i + j] = s2[j];

	join[i + j] = '\0';
	return (join);
}
