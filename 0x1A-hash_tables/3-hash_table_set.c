#include "hash_tables.h"

/**
 * hash_table_set - function adds an element to the hash table
 * @ht: hash table we are adding the element to
 * @key: the key
 * @value: value associated with the key
 *
 * Return: 1 is succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int slot;
	hash_node_t *entry, *new_node;

	if (key == NULL || ht == NULL || value == NULL)
		return (0);

	slot = key_index((const unsigned char *)key, ht->size);

	entry = ht->array[slot];

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);

			entry->value = strdup(value);
				if (entry->value == NULL)
					return (0);

			return (1);
		}
		entry = entry->next;
	}
	new_node = malloc(sizeof(hash_node_t));
		if (new_node == NULL)
			return (0);

	new_node->value = strdup(value);
		if (new_node->value == NULL && value != NULL)
			return (0);

	new_node->key = strdup(key);
	new_node->next = NULL;

	if (ht->array[slot] == NULL)
		ht->array[slot] = new_node;
	else
	{
		new_node->next = ht->array[slot];
		ht->array[slot] = new_node;
	}
	return (1);
}
