#include "hash_tables.h"

/**
 * hash_table_get - function retrieves a value associated with a key
 * @ht: hashtable pointer
 * @key: the key
 *
 * Return: the value associated with element, Null otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int slot;
	hash_node_t *entry;

	if (key == NULL || ht == NULL)
		return (0);

	slot = key_index((const unsigned char *) key, ht->size);

	entry = ht->array[slot];
		if (entry == NULL)
			return (0);
	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
			return (entry->value);
		entry = entry->next;
	}
	return (NULL);
}
