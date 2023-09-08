#include "hash_tables.h"

/**
 * hash_table_print - this function prints the content of a hashtable
 * @ht: the hashtable
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i, tracker = 0;

	if (ht == NULL)
		printf("{}\n");
	else
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			temp = ht->array[i];
			while (temp != NULL)
			{
				if (tracker > 0) /*for the comma and space*/
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				tracker += 1;
				temp = temp->next;
			}
		}
		printf("}\n");
	}
}
