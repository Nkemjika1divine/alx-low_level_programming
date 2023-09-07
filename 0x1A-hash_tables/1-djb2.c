#include "hash_tables.h"

/**
 * hash_djb2 - this is an implementatuon of the djb2 algorithm.
 * it analyzes strings to get their indexes
 * @str: the string to analyze
 *
 * Return: the index of the string in the hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
