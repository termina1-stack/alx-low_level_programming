#include "main.h"

/**
  * print_square - function that prints a square
  * @size: its the size of square
  * Description: Only use _putchar to print and '#' to print square
  */
void print_square(int size)
{
	int x, y = 0;

	if (size < 1)
		_putchar('\n');

	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}
