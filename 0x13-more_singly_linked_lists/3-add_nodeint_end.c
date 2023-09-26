#include "lists.h"

/**
 * add_nodeint_end - func that adds a new node at the end of listint_t list
 * @head: beginning of list
 * @n: data to be added
 * Return: address of the element, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newer_node;
	listint_t *tem;

	newer_node = malloc(sizeof(listint_t));

	if (!newer_node)
		return (NULL);

	newer_node->n = n;

	if (*head == NULL)
	{
		*head = newer_node;
		newer_node->next = NULL;
	}

	tem = *head;

	while (tem->next != NULL)
		tem = tem->next;

	tem->next = newer_node;
	newer_node->next = NULL;

	return (newer_node);
}
