#include "lists.h"

/**
 * free_listint - frees the listint_t list
 * @head: struct type listint_t *head
 */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = tem->next;
		free(tem);
	}
}
