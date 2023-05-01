#include "lists.h"

/**
 * print_listint - prints all members of a linked list
 * @h: listint_t type to print
 *
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)

{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		a++;
		h = h->next;
	}

	return (a);
}
