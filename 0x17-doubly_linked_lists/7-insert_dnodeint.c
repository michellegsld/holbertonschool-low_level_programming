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
	unsigned int check;
	dlistint_t *current = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *h;

	if (!current)
	{
		if (idx == 0)
			*h = new;
		else
		{
			free(new);
			return (NULL);
		}
	}
	else
	{
		while (current && check != idx)
		{
			new->prev = current;
			current = current->next;
			check++;
		}
		if (check != idx)
		{
			free(new);
			return (NULL);
		}
		new->prev->next = new;
		current->prev = new;
		new->next = current;
	}

	return (new);
}
