#include "main.h"

/**
  * main - program that prints _putchar.
  *
  * Return: 0 (Success)
  */
int main(void)
{
	char *main = "_putchar";

	while (*main)
	{
		_putchar(*main);
		main++;
	}
	_putchar('\n');
	return (0);
}
