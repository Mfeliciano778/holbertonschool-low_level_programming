#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 *
 * Return: the index of the key/value stored in the hashtable
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index_of_key;

	index_of_key = hash_djb2(key) % size;

	return (index_of_key);
}
