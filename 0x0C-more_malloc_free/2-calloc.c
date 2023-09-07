#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: no of array elements
 * @size: no of bytes
 *
 * Return: NULL if error, or pointer to alocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptn;
	unsigned int k;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptn = malloc(nmemb * size);
	if (ptn == NULL)
		return (NULL);
	for (k = 0; k < nmemb * size; k++)
		ptn[k] = 0;

	return (ptn);
}
