#include "main.h"

/**
 * number - function that calculates number of words
 * @str: string
 *
 * Return: The number of words
 */
int number(char *str)
{
	int i, num = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[i] != ' ' && str[i] != '\0'; i++)
				str++;
			num++;
		}
	}
	return (num);
}

/**
 * free_everything - function that frees the memory
 * @string: string pointer
 * @i: index
 */
void free_everything(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}

/**
 * strtow - function that splits string
 * @str: string
 * Return: null if string is empty, null or failure
 */
char **strtow(char *str)
{
	int total = 0, b = 0, c = 0, len = 0;
	char **words, *f_word;

	if (str == 0 || *str == 0)
		return (NULL);
	total = number(str);
	if (total == 0)
		return (NULL);
	words = malloc((total + 1) * sizeof(char *));
	if (words == 0)
		return (NULL);
	for (; *str != '\0' &&  b < total;)
	{
		if (*str == ' ')
			str++;
		else
		{
			f_word = str;
			for (; *str != ' ' && *str != '\0';)
			{
				len++;
				str++;
			}
			words[b] = malloc((len + 1) * sizeof(char));
			if (words[b] == 0)
			{
				free_everything(words, b);
				return (NULL);
			}
			while (*f_word != ' ' && *f_word != '\0')
			{
				words[b][c] = *f_word;
				f_word++;
				c++;
			}
			words[b][c] = '\0';
			b++; c = 0; len = 0; str++;
		}
	}
	return (words);
}
