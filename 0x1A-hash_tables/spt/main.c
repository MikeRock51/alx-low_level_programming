#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "mentioner");
    hash_table_set(ht, "heliotropes", "neurospora");
    hash_table_set(ht, "depravement", "serafins");

    printf("%s\n", ht->array[key_index((unsigned char *)"betty", 1024)]->value);
    printf("%s\n", ht->array[key_index((unsigned char *)"hetairas", 1024)]->value);
    printf("%s\n", ht->array[key_index((unsigned char *)"heliotropes", 1024)]->value);
    printf("%s\n", ht->array[key_index((unsigned char *)"depravement", 1024)]->value);
    return (EXIT_SUCCESS);
}