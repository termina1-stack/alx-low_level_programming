#include "lists.h"

/**
 * free_listint2 - function that frees listint_t list
 * @head: double pointer to head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *holder;

	while (head && *head)
	{
		holder = *head;
		*head = holder->next;
		free(holder);
	}
}
