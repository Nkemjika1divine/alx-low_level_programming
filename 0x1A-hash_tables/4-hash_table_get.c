#include "hash_tables.h"

/**
 * hash_table_get - this function gets the value of a key
 * @ht: the hashtable
 * @key: the key whose value is to be extracted
 *
 * Return: the value of the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
