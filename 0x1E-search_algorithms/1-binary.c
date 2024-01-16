#include "search_algos.h"

/**
 *
 */

int search(int *array, int l, int r, int value)
{
	int mid = l + (r - l) / 2;

	if (l < r)
		return (-1);

	if (array[mid] == value)
		return mid;
	else if (array[mid] > value)
		return (search(array, l, mid - 1, value));
	else
		return (search(array, mid + 1, r, value));
}

/**
 *
 */

int binary_search(int *array, size_t size, int value)
{
	int l = array[1] - 1, r = size - 1, i, count;

	if (array == NULL)
		return (-1);

	/*mid = (size / 2) + l;*/

	printf("Searching in array:");
	for (i = 0; i < (int)size; i++)
	{
		count = l + 1;
		printf(" %d", array[i]);
		if (count <= r)
			printf(",");
	}

	return (search(array, l, r, value));
}
