#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a list
 * @head: The first node at the start of the list
 * @n: The integer to be within the node
 *
 * Return: The address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (*head);
}
