#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Hash table to look into
 * @key: The key to retrieve
 *
 * Return: The value associated with the element
 * Return NULL if key couldn't be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	char *value;
	hash_node_t *element;

	if (ht == NULL || key == NULL || strlen(key) < 1)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	element = ht->array[index];
	if (element == NULL)
		return (NULL);
	value = strdup(element->value);
	if (value == NULL)
		return (NULL);

	return (value);
}
