#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data in a list
 * @head: The first node of a list
 *
 * Return: The sum of all data in a list
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}
