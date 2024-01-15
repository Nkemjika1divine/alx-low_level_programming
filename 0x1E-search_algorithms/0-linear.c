#include "search_algos.h"

/**
 * linear_search - this function uses the linear algorithm to search for data
 * @array: the pointer to the first element of the array to search
 * @size: the size of the array
 * @value: the value to look for
 *
 * Return: index found or -1 if value is not present or array is null
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
