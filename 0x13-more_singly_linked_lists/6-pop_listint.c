#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: head node of the list
 * Return: data of the head node, else 0
 */
int pop_listint(listint_t **head)
{
	int num;
	listint_t *holder;

	if (*head == NULL)
		return (0);

	holder = *head;
	*head = holder->next;
	num = holder->n;
	free(holder);
	return (num);
}
