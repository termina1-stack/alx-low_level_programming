#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: integer
 * Return: factorial of a given number
 */
int factorial(int n)
{
	int result;

	if (n < 0)
		return (-1);
	else if (n == 1 || n == 0)
		result = 1;
	else
		result = n * factorial(n - 1);

	return (result);

}
