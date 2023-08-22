#include "main.h"
#include <string.h>

/**
 * print_rev - function that prints a string in reverse
 * @s: char array string type
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
