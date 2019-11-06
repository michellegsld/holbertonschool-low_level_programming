#include "lists.h"

/**
 * insert_nodeint_at_index - Adds a new node at a given positon
 * @head: The beginning of the list
 * @idex: The index of where the new node should be
 * @n: The data to go within the new node
 *
 * Return: The address of the new element or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idex, int n)
{
	unsigned int curidex = 0;
	listint_t *current = *head;
	listint_t *new;

	while (current)
	{
		if (curidex == idex)
		{
			new = malloc(sizeof(listint_t));

			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = current->next;
			current->next = new;

			return (new);
		}
		curidex++;
		current = current->next;
	}

	return (NULL);
}
