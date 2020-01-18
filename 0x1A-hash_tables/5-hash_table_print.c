#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, j = 0;
	hash_node_t *current = NULL;

	putchar('{');

	if (ht)
		while (i < ht->size)
		{
			current = ht->array[i];
			while (current)
			{
				if (j)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				current = current->next;
				j = 1;
			}
			i++;
		}

	putchar('}');
	putchar('\n');
}
