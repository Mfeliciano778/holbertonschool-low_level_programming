#include "hash_tables.h"

/**
 * hash_table_get -
 *
 * Return: 
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *entry;
	unsigned long int bucket;

	if (key == NULL || ht == NULL || !(*key))
		return (NULL);

	bucket = key_index((const unsigned char *) key, ht->size);
	entry = ht->array[bucket];

	while (entry != NULL)
	{
		if (!strcmp(key, entry->key))
			return (entry->value);
		entry = entry->next;	
	}
	return (NULL);
}