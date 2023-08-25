#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: pointer to the destination
 * @src: pointer to the source
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, l = 0;

	while (dest[i++])
		l++;

	for (i = 0; src[i]; i++)
	{
		dest[l++] = src[i];
	}
	return (dest);
}
