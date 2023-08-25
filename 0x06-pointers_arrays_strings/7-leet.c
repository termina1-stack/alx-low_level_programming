#include "main.h"

/**
 * leet - function that encodes a string to 1337
 * @s: takes in a string
 * Return: s, the string
 */
char *leet(char *s)
{
	int i, j;

	char ltrs[] = "aeotlAEOTL";
	char nmbrs[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; ltrs[j] != '\0'; j++)
		{
			if (s[i] == ltrs[j])
			{
				s[i] = nmbrs[j];
			}
		}
	}

	return (s);
}
