#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 * @head: The node to delete
 *
 * Return: Always an int, either 0 or the node's data
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *node;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);

	return (n);
}
