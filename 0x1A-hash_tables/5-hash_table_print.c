#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hashtable pointer
 *
 * Return: the values stored in hashtable, null otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
	int index;
	hash_node_t *entry;

	for (index = 0; index < ht->size; index++)
	{
		entry = ht->array[index];
		if (entry == NULL)
			continue;

		return (entry->value);
		entry = entry->next;
	}
	return (NULL);
}
