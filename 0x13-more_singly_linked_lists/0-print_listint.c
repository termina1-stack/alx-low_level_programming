#include "lists.h"

/**
 * print_listint - func that prints all the elements of a listint_t list
 * @h: const struct type *h
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	if (!h)
		return (0);

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
