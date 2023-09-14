#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_strings - function that prints a string followed by a newline
  * @separator: string to be printed
  * @n: the number of strings
  * Description: If separator is NULL, it will not be printed.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list list;
	char *s;

	va_start(list, n);
	for (index = 0; index < n; index++)
	{
		s = va_arg(list, char*);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
