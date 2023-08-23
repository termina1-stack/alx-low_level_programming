#include "main.h"

/**
  * print_numbers - function that prints number 0 to 9
  * Description: Only use _putchar twice
  */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
