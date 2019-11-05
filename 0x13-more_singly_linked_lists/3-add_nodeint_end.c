#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: The beginning of the list
 * @n: The integer to go within the new node
 *
 * Return: The address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;

	new->n = n;
	new->next = NULL;

	return (new);
}
