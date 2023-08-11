#include <stdio.h>

/**
  * main - program that prints all combinations of single-digit numbers.
  * must be seperated by a comma followed by a space
  * should be printed in ascending order
  * use putchar function four times maximum
  *
  * Return: 0
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);

		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
