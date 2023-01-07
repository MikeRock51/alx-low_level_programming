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

	if (ht == NULL || key == NULL || strlen(key) < 1)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size || ht->array[index] == NULL)
		return (NULL);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			value = strdup(ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	/*element = ht->array[index];*/
	if (value == NULL)
		return (NULL);

	return (value);
}
