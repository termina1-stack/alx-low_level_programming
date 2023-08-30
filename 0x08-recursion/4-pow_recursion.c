#include "main.h"

/**
 * _pow_recursion - function that returns the value x raised to the power of y
 * @x: takes in an integer value
 * @y: takes in an integer power
 * Return: x to the power of y
 */
int _pow_recursion(int x, int y)
{

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
