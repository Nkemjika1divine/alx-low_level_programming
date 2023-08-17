#include "lists.h"

/**
 * dlistint_len - this function returns the lenght of a linked list
 * @h: the furst node of the linked list
 *
 * Return: the lenght of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}

	return (count);
}

