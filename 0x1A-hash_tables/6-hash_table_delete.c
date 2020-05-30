#include "hash_tables.h"

/**
 * hash_table_delete -
 *
 * Return: 
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			delete_hash(ht->array[index]);
		}
	}
	free(ht->array);
	free(ht);
}
/**
 * delete_hash - deletes a hash table
 * @ht: Hashtable pointer
 */
void delete_hash(hash_node_t *ht)
{
	if (ht == NULL)
		return;

	if (ht->next != NULL)
		delete_hash(ht->next);

	free(ht->value);
	free(ht->key);
	free(ht);
}