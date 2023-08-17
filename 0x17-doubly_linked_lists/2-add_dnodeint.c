#include "lists.h"

/**
 * add_dnodeint - This function adds a node at the beginning of a linked list
 * @head: this is a pointer to the head of the list
 * @n: the sata to add at the head
 *
 * Return: address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		temp->prev = NULL;
		temp->n = n;
		temp->next = NULL;

		*head = temp;
	}
	else
	{
		temp->prev = NULL;
		temp->n = n;
		temp->next = *head;
		(*head)->prev = temp;

		*head = temp;
	}
	return (*head);
}
