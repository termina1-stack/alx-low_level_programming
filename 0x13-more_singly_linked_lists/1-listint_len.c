#include "lists.h"

/**
 * listint_len - func that returns the number of elements in linked
 * listint_t list
 * @h: pointer to start of list
 * Return: Number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	if (!h)
		return (0);

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
