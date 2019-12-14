#include "lists.h"

/**
 * *add_dnodeint_end - Adds a new node at the end of a list
 * @head: The head of a doubly linked list
 * @n: The element for the new node
 *
 * Return: Either NULL or the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = *head;
	new->next = NULL;

	if (*head)
	{
		while (current->next)
		{
			current = current->next;
			new->prev = current;
		}
		current->next = new;
	}
	else
		*head = new;

	return (new);
}
