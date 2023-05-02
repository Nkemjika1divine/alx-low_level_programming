#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 *
 * @h: points to the first node
 *
 * Return: no of elements in free list
 */

size_t free_listint_safe(listint_t **h)

{
	size_t len = 0;
	int a;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		a = *h - (*h)->next;
		if (a > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
