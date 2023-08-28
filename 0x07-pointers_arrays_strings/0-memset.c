#include "main.h"

/**
 * _memset - Function that fills memory with a constant n bytes
 * @s: the memory address to be filled
 * @b: the constant byte
 * @n: the number of bytes of memory to be filled
 * Description: fill the first n bytes of the memory area pointed to by s
 * with the constant byte b.
 * Return: The pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (n > 0)
	{
		s[k] = b;
		k++;
		n--;
	}
	return (s);
}
