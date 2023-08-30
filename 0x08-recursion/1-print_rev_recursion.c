#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse
 * @s: takes in a string to be reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
