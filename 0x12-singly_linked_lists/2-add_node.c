#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node - function that adds new node at the beginning of linked list
 *
 * @head: double pointer to list_t list
 * @str: new string to add in the node
 *
 * Return: address of new element, or NULL
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new;
	unsigned int a = 0;

	while (str[a])
		a++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = a;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
