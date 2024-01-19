#include "search_algos.h"
#include <math.h>

/**
 * jump_search - this function uses the jump search to search for an element
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the index oe -1 if otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	int low = 0, high = 0, key = sqrt((int)size), i;

	if (array == NULL)
		return (-1);

	while (low < (int)size)
	{
		high = high + key;
		if (array[high] > value)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, high);
			for (i = low; i <= high; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
		}
		else
		{
			if (high > (int)size)
				high = (int)size - 1;
			printf("Value checked array[%d] = [%d]\n", high, array[high]);
			low = low + key;
		}
	}
	return (-1);
}
