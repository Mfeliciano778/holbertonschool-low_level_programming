#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hashtable pointer
 *
 * Return: the values stored in hashtable, null otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *entry;
	unsigned int after_array_comma = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		entry = ht->array[index];
		while (entry)
		{
			if (!after_array_comma)
				printf(", ");
			printf("\'%s\': \'%s\'", entry->key, entry->value);
			entry = entry->next;
			after_array_comma = 0;
		}
	}
	printf("}\n");
}
