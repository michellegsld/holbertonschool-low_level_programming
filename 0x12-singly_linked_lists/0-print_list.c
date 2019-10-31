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

	if (!h)
		return (NULL);

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
		total++;
		h = h->next;
	}

	while (h)
	{
		printf("[%d] %s\n", h->len, h->str);
		total++;
		h = h->next;
	}

	return (total);
}
