#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list
 * @head: The last node
 * @str: The string
 *
 * Return: The address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0, i = 0;
	list_t *last = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (*head != NULL)
	{
		for (; last->next != NULL; i++)
			last = last->next;
		last->next = new;
	}
	else
		*head = new;

	while (str[len] != '\0')
		len++;

	new->str = strdup(str);	
	new->len = len;
	new->next = NULL;

	return (new);
}
