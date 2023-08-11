#include <stdio.h>

/**
  * main -program that prints the alphabet in lowercase, except e and q
  * followed by a newline
  * Return: 0
  */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');

	return (0);
}
