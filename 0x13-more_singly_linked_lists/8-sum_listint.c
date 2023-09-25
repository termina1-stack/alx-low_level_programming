#include "lists.h"

/**
 * sum_listint - function that sums the values of list.
 * @head: A pointer to the first node of list
 * Return: the sum, else 0
 */
int sum_listint(listint_t *head)
{
	int count = 0;

	listint_t *node_index = head;

	if (!head)
		return (0);

	while (head != NULL)
	{
		count += head->n;
		node_index = head->next;
		head = node_index;
	}
	return (count);
}
