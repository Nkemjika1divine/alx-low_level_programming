#include "hash_tables.h"

/**
 * key_index - this function generates the index of a key
 * @key: the key whose index is to be generated
 * @size: the size of the array/hash table
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k, index;

	if (key == NULL)
		return (0);

	if (size == 0)
		return (0);

	k = hash_djb2(key);
	index = k % size;

	return (index);
}
