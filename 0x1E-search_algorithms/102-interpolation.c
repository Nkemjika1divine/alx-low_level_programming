#include "search_algos.h"

/**
 * search - goes deeper into the interpolation search
 * @array: the array
 * @low: the lowpoint
 * @high: the highpoint
 * @pos: the current position
 * @size: the size of the array
 * @value: the value to seek
 *
 * Return: index
 */

int search(int *array, int low, int high, int pos, int size, int value)
{
	double diff;
	int new_pos;

	if (low > high)
		return (-1);
	if (array[pos] > value)
	{
		diff = (double)((pos - 1) - low);
		new_pos = low + (diff / (array[pos - 1] - array[low]) * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", new_pos, array[new_pos]);
		if (array[new_pos] == value)
			return (new_pos);
		else if (array[new_pos] < value)
			return (search(array, pos + 1, high, new_pos, size, value));
		else
			return (search(array, low, pos - 1, new_pos, size, value));
	}
	else if (array[pos] < value)
	{
		diff = (double)(high - (pos + 1));
		new_pos = (pos + 1) + (diff / (array[high] - array[pos + 1] ) * (value - array[pos + 1]));
		printf("Value checked array[%d] = [%d]\n", new_pos, array[new_pos]);
		if (array[new_pos] == value)
			return (new_pos);
		else if (array[new_pos] < value)
			return (search(array, pos + 1, high, new_pos, size, value));
		else if (array[new_pos] > value)
			return (search(array, low, pos - 1, new_pos, size, value));
	}

	return (-1);
}

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
		if (array[pos] != value)
			return (search(array, low, high, pos, (int)size, value));
		return ((int)pos);
	}
	else
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	return (-1);
}
