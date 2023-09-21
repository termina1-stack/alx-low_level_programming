#include "lists.h"

/**
 * list_len - function that returns the elements of a list
 * @h: pointer
 * Return: number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
