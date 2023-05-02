#include "lists.h"

/**
 * get_nodeint_at_index - function that returns node at a certain
 *				index in a linked list
 *
 * @head: first node in list
 * @index: index of node to return
 *
 * Return: pointer to the node, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)

{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
