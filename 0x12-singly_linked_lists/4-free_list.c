#include "lists.h"

/**
 * free_list - Frees a list
 * @head: The first node
 */
void free_list(list_t *head)
{
	if (head)
	{
		free(head->str);
		free_list(head->next);
		free(head);
	}
}
