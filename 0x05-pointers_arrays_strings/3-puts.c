#include "main.h"

/**
 * _puts - this print a string to standard output
 * @str: char array string type
 * Return: Nothing
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		++a;
	}
	_putchar('\n');
}
