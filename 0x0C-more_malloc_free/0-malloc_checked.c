#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that alocates memory using malloc
 * @b: unsigned int memory
 * Description: If fails, terminate process with status 98
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *pt;

	pt = malloc(b);
	if (pt == NULL)
		exit(98);
	return (pt);
}
