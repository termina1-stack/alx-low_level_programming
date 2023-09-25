#include "lists.h"

/**
 *insert_nodeint_at_index - function that inserts a new node at index
 *@head: double pointer to head node
 *@idx: index of the list where the new node should be added
 *@n: the data to enter for the new node
 *Return: address of the new node, else NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tem;
	listint_t *current;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	tem = malloc(sizeof(listint_t));
	if (tem == NULL)
		return (NULL);

	tem->n = n;

	if (head && idx == 0)
	{
		tem->next = *head;
		*head = tem;
		return (tem);
	}

	current = *head;

	while (current)
	{
		if (count + 1 == idx)
		{
			tem->next = current->next;
			current->next = temp;
			return (tem);
		}
		current = current->next;
		count++;
	}
	free(tem);
	return (NULL);
}
