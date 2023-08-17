#include "lists.h"

/**
 * add_dnodeint - This function adds a node at the beginning of a linked list
 * @head: this is a pointer to the head of the list
 * @n: the sata to add at the head
 *
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n);
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	temp->prev = NULL;
	temp->n = n;
	temp->prev = *head;
	*head->prev = temp;

	*head = temp;
	if (*head == NULL)
		return (NULL);
	return (*head);
}
