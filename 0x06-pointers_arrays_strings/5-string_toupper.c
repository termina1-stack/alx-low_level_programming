#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @str: string
 * Return: The string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
