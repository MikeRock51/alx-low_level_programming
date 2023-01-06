#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: Hash table to delete
 *
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *element, *nav;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			element = ht->array[i];
			while (element != NULL)
			{
				nav = element;
				element = element->next;
				free(nav->key);
				free(nav->value);
				free(nav);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}