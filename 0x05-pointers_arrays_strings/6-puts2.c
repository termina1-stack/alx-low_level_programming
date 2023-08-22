#include "main.h"

/**
 * puts2 - function that prints one char out of 2 of a string
 * @str: char array string type
 * Description: Print 1st char, then 3rd and so on
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
