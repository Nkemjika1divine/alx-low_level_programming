#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a linked list
 * @head: points to first element in linked list
 *
 * Return: deleted element or 0 if list is empty
 */

int pop_listint(listint_t **head)

{
	listint_t *temp;
	int a;

	if (!head || !*head)
		return (0);

	a = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (a);
}
