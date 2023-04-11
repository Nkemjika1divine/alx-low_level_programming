#include "main.h"
#include <stdlib.h>


/**
 * create_array - create array of size size and assign char c
 *
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail
 */

/* this function prototype creates an aray and assigns char*/
char *create_array(unsigned int size, char c)

{
	/*variables*/
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
