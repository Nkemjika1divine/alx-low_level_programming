#include "hash_tables.h"

/**
 * hash_table_create - this function creates a hash table
 * @size: the size of the hash table to create
 *
 * Return: a oointer to the hash tble create
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (new == NULL) /*if memory alocation fails*/
		return (NULL);

	new->size = size;
	new->array = malloc(sizeof(hash_table_t *) * size);
	/*this creates an arrayof pointers that point to each table*/
	if (new->array == NULL)
	{
		free(new);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		new->array[i] = NULL; /*set all those pointers to null*/

	return (new);
}
