#include "main.h"

/**
 * puts_half - function that print second half of a string
 * @str: char array string type
 * Description: For odd number of chararacters, print (length - 1) / 2
 */

void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;

	for (index = n ; index < len ; index++)
		_putchar(str[index]);
	_putchar('\n');
}
