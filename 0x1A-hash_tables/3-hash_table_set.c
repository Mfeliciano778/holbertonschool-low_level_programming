#include "hash_tables.h"

/**
 * hash_table_set -
 *
 * Return: 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int bucket;
	hash_node_t *entry, *prev;

	if (key == NULL || ht == NULL || value == NULL || !(*key))
		return (0);

	bucket = key_index((const unsigned char *) key, ht->size);
	entry = ht->array[bucket];
	/*check if index is already there and set it if not*/
	if (!entry)
	{
		ht->array[bucket] = ht_pair(key, value);
		return (1);
	}
	/*index through entry until the end is reached or a match is found*/
	while (entry != NULL)
	{
		/*check key*/
		if(strcmp(entry->key, key) == 0)
		{
			/*match found, replace value*/
			free(entry->value);
			entry->value = malloc(strlen(value) + 1);
			strcpy(entry->value, value);
			return (1);
		}
		/*move to the next entry*/
		prev = entry;
		entry = prev->next;
	}
	/*got to the end and adding a new entry*/
	prev->next = ht_pair(key, value);
	return (1);
}

/**
 * ht_pair - pairs the 
 * 
 * 
 * Return:
 */
hash_node_t *ht_pair(const char *key, const char *value)
{
	hash_node_t *entry = malloc(sizeof(hash_node_t) * 1);
	if (!entry)
	{
		return (NULL);
	}
	entry->key = malloc(strlen(key) + 1);
	entry->value = malloc(strlen(value) + 1);

	strcpy(entry->key, key);
	strcpy(entry->value, value);
	entry->next = NULL;

	return (entry);
}