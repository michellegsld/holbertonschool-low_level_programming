#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a new node at an index in a list
 * @head: The first node in the list
 * @index: Specifies which node to delete
 *
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int check = 0;
	dlistint_t *current = *head;
	dlistint_t *skip = NULL;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return (1);
		}
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}
	else
	{
		while (current && current->next)
		{
			if (check + 1 == index)
			{
				skip = current->next->next;
				if (skip)
					skip->prev = current;
				free(current->next);
				current->next = skip;
				return (1);
			}
			current = current->next;
			check++;
		}
	}
	return (-1);
}
