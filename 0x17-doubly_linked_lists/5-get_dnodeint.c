#include "lists.h"

/**
 * get_dnodeint_at_index - thisfunction gets a nide at a oarticular index
 * @head: the pointer to the first node
 * @index: the index to extract
 *
 * Return: node ir null if the index dies not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int n = 0;

	if (temp == NULL)
		return (NULL);

	while (n != index)
	{
		temp = temp->next;
		n++;
	}
	return (temp);
}
