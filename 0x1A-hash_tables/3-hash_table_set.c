#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to update
 * @key: The key of the element to add
 * @value: The value associated with key
 *
 * Return: 1 on success or 0 on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_element = malloc(sizeof(hash_node_t));

	if (new_element == NULL || strlen(key) < 1)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_element->key = strdup(key);
	new_element->value = strdup(value);

	if (ht->array[index] != NULL)
		new_element->next = ht->array[index];
	else
		new_element->next = NULL;

	ht->array[index] = new_element;
	return (1);
}
