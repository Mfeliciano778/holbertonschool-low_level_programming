#include "hash_tables.h"

/**
 * hash_table_create -
 *
 * Return: 
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_hash;
    unsigned int index;

    /* allocate table*/
    new_hash = malloc(sizeof(hash_table_t) * 1);

    /* allocate table entries*/
    new_hash->array = malloc(sizeof(hash_node_t) * size);

    /*set each entry to null*/
    for(index = 0; index < size; index++)
    {
        new_hash->array[index] = NULL;
    }
    return(new_hash);
}