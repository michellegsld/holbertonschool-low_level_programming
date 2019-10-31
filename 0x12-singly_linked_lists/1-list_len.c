#include "lists.h"

/**
 * list_len - Goes through a list_t list
 * @h: The list
 *
 * Return: Always an unsigned int, the total number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int total = 0;

	if (!h)
		return (NULL);

	if (h->str == NULL)
	{
		total++;
		h = h->next;
	}

	while (h)
	{
		total++;
		h = h->next;
	}

	return (total);
}
