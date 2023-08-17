#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a linkd list
 * @head: the pointer ti the firat element if thw list
 * @n: tge elemenr to add at the last node
 *
 * Return: the addrrss to the first node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		*head = new;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new;
		new->prev = temp;
		new->n = n;
		new->next = NULL;
	}

	return (*head);
}
