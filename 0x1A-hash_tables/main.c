#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(30);
	hash_table_set(ht, "Canada", "Ottawa");
	hash_table_set(ht, "Australia", "Canberra");

    printf("A: %lu\n", hash_djb2((unsigned char *)"Australia") % 30);
    printf("Ca: %lu\n", hash_djb2((unsigned char *)"Canada") % 30);
    /*printf("C: %lu\n", hash_djb2((unsigned char *)"China") % 30);
    printf("J: %lu\n", hash_djb2((unsigned char *)"Japan") % 30);
    printf("I: %lu\n", hash_djb2((unsigned char *)"Iceland") % 30);
    printf("S: %lu\n", hash_djb2((unsigned char *)"Sweden") % 30);
    printf("Br: %lu\n", hash_djb2((unsigned char *)"Brazil") % 30);
    printf("Ba: %lu\n", hash_djb2((unsigned char *)"Bahrain") % 30);
    printf("R: %lu\n", hash_djb2((unsigned char *)"Russia") % 30);*/
	hash_table_print(ht);
	return (EXIT_SUCCESS);
}