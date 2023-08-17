#include "lists.h"

/**
 * insert_dnodeint_at_index - this function inserts a new node at a position
 * @idx: the index to add the node
 * @n: 5he ekement to add
 *
 * Return: The pointer to the first node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (new == NULL || *h == NULL)
		return (NULL);

	while (i != (idx - 1) && temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	if ((i + 1) != idx)
		return (NULL);
	new->next = temp->next;
	new->n = n;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;

	new = temp;

	return (new);
}
