#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list
 * @head: The last element
 * @str: The string
 *
 * Return: The address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	while (str[len] != '\0')
		len++;

	new->len = len;
	new->next = *head;

	*head = new;

	return (*head);
}
