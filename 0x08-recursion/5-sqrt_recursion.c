#include "holberton.h"

int findsqrt(int x, int y);

/**
 * _sqrt_recursion -function that returns the natural square root of a number
 * @n: integer
 * Return: a natural square root of a number
 */
int _sqrt_recursion(int n)
{
	return (findsqrt(1, n));
}

/**
 * helper - function that finds square root
 * @x: integer
 * @y: integer to test for square root
 * Return: return x compared to y
 */
int findsqrt(int x, int y)
{
	if (x * x == y)
		return (x);
	else if (x * x > y)
		return (-1);
	else
		return (helper(x += 1, y));
}
