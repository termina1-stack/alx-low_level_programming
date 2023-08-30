#include "main.h"

int prime(int i, int n);

/**
 * is_prime_number - determine if a number is a prime number
 * @n: integer
 * Return: return 2 instead of 1
 */
int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	return (prime(2, n));
}

/**
 * prime - function to chek whether it is a prime number
 * @i: integer
 * @n: integer
 * Return: increment i and compare to n
 */
int prime(int i, int n)
{
	if (n == i)
		return (1);
	else if (n % i == 0)
		return (0);
	return (prime(i + 1, n));
}
