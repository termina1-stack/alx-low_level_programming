#include <stdio.h>

/**
  * main -program that prints all single digit numbers of base 10
  * starting from 0 then a newline.
  * You are not allowed to use any varibale of type char
  *
  * Return: 0
  */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
