#include "variadic_functions.h"

/**
  * sum_them_all - fnx that returns the sum of all its parameters
  * @n: number of arguments
  * @...: number of parameters to calculate the sum of
  * Return: 0 if n == 0, or the sum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int index, sum = 0;
	va_list list;

	va_start(list, n);
	for (index = 0, sum = 0; index < n; index++)
		sum = sum + va_arg(list, int);
	va_end(list);
	return (sum);
}
