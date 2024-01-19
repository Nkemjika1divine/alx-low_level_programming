#include "search_algos.h"

/**
 * interpolation_search - This function finds the index of an element
 * @array: the pointer to the array to seatrch
 * @size: the size of the array
 * @value: the element to search for
 *
 * Return: index of the element or -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	int low = 0, high = (int)size - 1;
	size_t pos;
	double diff = (double)(high - low);

	if (array == NULL)
		return (-1);

	pos = low + (diff / (array[high] - array[low]) * (value - array[low]));
	if ((pos <= (size_t)high) && (pos >= (size_t)low))
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
	}
	else
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	return ((int)pos);
}
