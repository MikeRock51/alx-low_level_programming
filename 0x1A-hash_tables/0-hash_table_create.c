#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the created hash table
 * Or NULL if something goes wrong
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL)
		return (NULL);

	new_hash->size = size;
	new_hash->array = malloc(sizeof(hash_node_t) * size);

	if (new_hash->array == NULL)
		return (NULL);

	return (new_hash);
}
