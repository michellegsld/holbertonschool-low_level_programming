#include "lists.h"

/**
 * get_dnodeint_at_index - Returns a specified node in a list
 * @head: The start of a doubly liked list
 * @index: The specified index of the node to return
 *
 * Return: The index of the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int check = 0;

	while (head)
	{
		if (check == index)
			return (head);
		head = head->next;
		check++;
	}

	return (NULL);
}
