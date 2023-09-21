#include "lists.h"

/**
 * get_length - function to count str len
 * @str: str
 * Return: str len
 */
int get_length(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		continue;

	return (len);
}

/**
 * add_node_end - function to add node to the end
 * @head: pointer to a pointer
 * @str: str
 * Return: pointer to the end of str
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *mr_robot;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = get_length(str);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
	}

	mr_robot = *head;

	while (mr_robot->next != NULL)
		mr_robot = mr_robot->next;

	mr_robot->next = new_node;
	new_node->next = NULL;

	return (new_node);
}
