#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list
 * @head: The first node in the list
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
