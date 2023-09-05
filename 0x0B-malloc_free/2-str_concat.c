#include "main.h"

/**
  * str_concat - function that concatenates two strings
  * @s1: string 1
  * @s2: string 2
  * Return: a pointer to the newly allocated space in memory
  * containing the concatenated strings.
  */
char *str_concat(char *s1, char *s2)
{
	int index, concat_index = 0, len = 0;
	char *join_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (index = 0; s1[index] || s2[index]; index++)
		len++;
	join_str = malloc(sizeof(char) * len);

	if (join_str == NULL)
		return (NULL);
	for (index = 0; s1[index]; index++)
		join_str[concat_index++] = s1[index];
	for (index = 0; s2[index]; index++)
		join_str[concat_index++] = s2[index];
	return (join_str);
}
