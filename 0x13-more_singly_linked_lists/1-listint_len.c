#include "lists.h"

/**
 * listint_len - this function returns the number of elements in a linked lists
 *
 * @h: listint_t type list to work with
 *
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		a++;
		h = h->next;
	}

	return (a);
}
