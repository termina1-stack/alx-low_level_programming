#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to new aray,
 * NULL if min > max, else NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int *ar, k;

	if (min > max)
		return (NULL);

	ar = malloc(sizeof(*ar) * (max - min + 1));
	if (ar == NULL)
		return (NULL);

	for (k = 0; min <= max; k++, min++)
		ar[k] = min;
	return (ar);
}
