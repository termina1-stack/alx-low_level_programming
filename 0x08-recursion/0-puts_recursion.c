#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a newline
 * @s: takes in a string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
