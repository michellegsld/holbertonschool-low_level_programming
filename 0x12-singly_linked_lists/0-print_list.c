#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h: The list
 *
 * Return: Always an unsigned int, the total number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int total = 0;

	if (h == NULL)
		return (0);

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		total++;
		h = h->next;
	}

	return (total);
}
