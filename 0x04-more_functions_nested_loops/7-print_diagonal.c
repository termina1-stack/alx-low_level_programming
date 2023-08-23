#include "main.h"

/**
  * print_diagonal - function that draws a diagonal line
  * @n: number of times '\' will be printed
  * Description: Only use _putchar to print
  */
void print_diagonal(int n)
{
	int i = 0, num;

	while (n > 0)
	{
		num = i;
		while (num > 0)
		{
			_putchar(' ');
			num--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}
	if (i < 1)
		_putchar('\n');
}
