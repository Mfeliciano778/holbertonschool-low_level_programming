#include "hash_tables.h"

/**
 * hash_table_print - prints the hashtable
 * @ht: the pointer to the hashtable
 *
 * Return: Always nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *entry;
	unsigned long int i;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			entry = ht->array[i];
			if (entry)
			{
				printf("'%s': '%s'", entry->key, entry->value);
				while(entry->next)
				{
					entry = entry->next;
					printf("'%s': '%s'", entry->key, entry->value);
					printf(", ");
				}
				if (i != ht->size - 1)
				{
					printf("Here");
					printf(", ");
				}
			}
		}
		printf("}\n");
	}
}