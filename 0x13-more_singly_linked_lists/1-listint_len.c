#include "lists.h"

/**
 * listint_len - Goes through a listint_t list
 * @h: The list
 *
 * Return: Always an unsigned int, the total number of nodes
 */
size_t listint_len(const listint_t *h)
{
	unsigned int total = 0;

	while (h)
	{
		total++;
		h = h->next;
	}

	return (total);
}
