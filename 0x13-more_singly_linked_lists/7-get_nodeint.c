#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the linked list
 * @head: pointer to head node
 * @index: index of node
 * Return: data at the nth node, else NULL if node doe not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current;
	unsigned int count = 0;

	current = head;
	while (current)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (current);
}
