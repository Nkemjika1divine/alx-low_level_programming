#include "hash_tables.h"

/**
 * hash_table_set - this adds a key and value to an index
 * @ht: tbe hashtable
 * @key: the key to add
 * @value: the value attached to the key
 *
 * Return: 0 if an error occurs and 1 if succesful
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	hash_node_t *temp;
	unsigned long int index;

	if (node == NULL || ht == NULL || key == NULL) /*error checking*/
		return (0);

	index = key_index((const unsigned char *)key, ht->size); /*find the index of the key*/

	node->key = strdup(key); /*strdup automatically calls malloc*/
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key); /*free the key that has already been created*/
		free(node);
		return (0);
	}
	node->next = NULL;

	if (ht->array[index] == NULL) /*if that index is empty*/
		ht->array[index] = node; /*assign the node to it*/
	else
	{
		temp = ht->array[index];
		while (temp->next != NULL)
		{
			if (strcmp(key, temp->key) == 0) /*if key already is*/
			{
				free(temp->value);
				temp->value = strdup(value);
				free(node->value);
				free(node->key);
				free(node);
				return (1);
			}
			temp = temp->next;
		}
		temp->next = node;
	}
	return (1);
}
