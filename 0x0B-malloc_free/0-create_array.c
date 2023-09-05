#include "main.h"

/**
 * create_array - function that creates an array of characters
 * @size: size of the array
 * @c: first character
 * Return: pointer to array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *A = (char *)malloc(size);

	if (A == NULL || size == 0)
		return ('\0');

	for (i = 0; i < size; i++)
		A[i] = c;

	return (A);
}
