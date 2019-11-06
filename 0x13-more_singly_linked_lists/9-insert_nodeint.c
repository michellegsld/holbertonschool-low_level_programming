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
	unsigned int current = 0;
	listint_t *temp = *head;
	listint_t *new;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idex == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		while ((temp != NULL) && (current < idex - 1))
		{
			current++;
			temp = temp->next;
		}
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		new->next = temp->next;
		temp->next = new;
	}

	return (new);
}
