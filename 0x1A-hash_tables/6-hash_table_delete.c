#include "hash_tables.h"

/**
 * hash_table_delete - this function deletes an entire hash table
 * @ht: the hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *temp, *temp2;
	unsigned long int i;

	if (ht->size != 0)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				temp = ht->array[i];
				while (temp != NULL)
				{
					temp2 = temp->next;
					free(temp->value);
					free(temp->key);
					free(temp);
					temp = temp2;
				}
			}
		}
	}
	free(head->array);
	free(head);
}
