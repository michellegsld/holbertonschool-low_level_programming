#include "lists.h"

/**
 * *insert_dnodeint_at_index - Inserts a new node at an index in a list
 * @h: The first node in the list
 * @idx: The specified place to insert the new node
 * @n: An element of the new node
 *
 * Return: The address of the new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int check = 0;
	dlistint_t *current = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *h;

	if (idx == 0)
	{
		if (*h)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	else if (*h)
	{
		while (current)
		{
			if (check + 1 == idx)
			{
				new->next = current->next;
				new->prev = current;
				current->next = new;
				if (new->next)
					new->next->prev = new;
				return (new);
			}
			current = current->next;
			check++;
		}
	}
	free(new);
	return (NULL);
}
