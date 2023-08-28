#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: the character array to copy into
 * @src: the character array to copy from
 * @n: the number of elements to copy
 * Return: the pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		*(dest + k) = *(src + k);
		k++;
	}
	return (dest);
}
