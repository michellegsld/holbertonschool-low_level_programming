#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: The beginning of the list
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
