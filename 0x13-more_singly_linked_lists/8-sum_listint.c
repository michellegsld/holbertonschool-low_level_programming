#include "lists.h"

/**
 * sum_listint - Adds all the data from the nodes of a linked list
 * @head: The start of the list
 *
 * Return: Always an int
 */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
