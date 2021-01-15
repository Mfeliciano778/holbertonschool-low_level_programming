#include "hash_tables.h"

/**
 * hash_table_create - creates an empty hashtable
 * @size: size of the array
 *
 * Return: new hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;
	unsigned long int index;

	/* allocate table*/
	new_hash = malloc(sizeof(hash_table_t));
	if (!new_hash)
	{
		return (NULL);
	}

	/* allocate table entries*/
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_hash->array)
	{
		return (NULL);
	}
	new_hash->size = size;
	/*set each entry to null*/
	for (index = 0; index < size; index++)
	{
		new_hash->array[index] = NULL;
	}
	return (new_hash);
}
