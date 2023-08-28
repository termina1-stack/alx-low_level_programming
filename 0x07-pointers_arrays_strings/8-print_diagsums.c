#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that print the sum of the two diagonals of a
 * square matrix of ints
 * @a: 2d array of int types
 * @size: size of array (square)
 */
void print_diagsums(int *a, int size)
{
	int i, k, sum;

	i = 0;
	sum = 0;
	k = size * size;
	while (i < k)
	{
		if (i % (size + 1) == 0)
			sum += a[i];
		i++;
	}
	printf("%d, ", sum);

	sum = 0;
	i = 0;
	while (i < k)
	{
		if (i % (size - 1) == 0 && i != (k - 1) && i != 0)
			sum += a[i];
		i++;
	}
	printf("%d\n", sum);
}
