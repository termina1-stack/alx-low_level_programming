#include "lists.h"

/**
 * add_nodeint - fun that adds new node at the beginning of a
 * listint_t list
 * @head: head node of the list
 * @n: data to add to the node
 * Return: address of the new element, or NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newer;

	if (!head)
		return (0);

	new = malloc(sizeof(listint_t));

	if (!newer)
		return (NULL);

	newer->n = n;
	newer->next = *head;
	*head = newer;

	return (*head);
}
