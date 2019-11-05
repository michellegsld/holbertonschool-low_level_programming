#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: The beginning of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
}
