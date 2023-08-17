#include "main.h"

/**
  * times_table - prints the 9 times table, starting with 0
  */
void times_table(void)
{
	int i, mul, result;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (mul = 1; mul <= 9; mul++)
		{
			_putchar(',');
			_putchar(' ');
			result = i * mul;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
