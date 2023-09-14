#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_numbers - function thatprints numbers with separator,
  * followed by a newline
  * @separator: the string to be printed between numbers
  * @n: number of arguments to be passed
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list list;

	va_start(list, n);
	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(list, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
