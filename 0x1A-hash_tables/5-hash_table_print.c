#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table to print
 *
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, first = 1;
	hash_node_t *element;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			element = ht->array[i];
			if (!first)
				printf(", ");
			while (element != NULL)
			{
				printf("'%s': '%s'", element->key, element->value);
				element = element->next;
				if (element != NULL)
					printf(", ");
			}
			first = 0;
		}
		i++;
	}
	printf("}\n");
}
