#include "lists.h"

/**
 * get_nodeint_at_index - Goes through a list to get to a certain node
 * @head: The start of the list
 * @index: Which node within the list to return
 *
 * Return: Either the node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int current = 0;

	while (head)
	{
		if (current == index)
			return (head);
		current++;
		head = head->next;
	}

	return (NULL);
}
