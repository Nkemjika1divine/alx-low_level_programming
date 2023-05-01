#include "lists.h"

/**
 * add_nodeint - this function adds a new node at beginning of a linked list
 *
 * @head: pointer to first node
 *
 * @n: data to fix in new node
 *
 * Return: pointer to new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
