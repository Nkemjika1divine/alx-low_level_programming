#include "search_algos.h"

/**
 * search - this function searches for a number recursively
 * @array: pointer to the array to search
 * @l: the starting index
 * @r: the ending index
 * @value: The value being searched
 *
 * Return: index of the value or -1 otherwise
 */

int search(int *array, int l, int r, int value)
{
	int mid = (l + r) / 2;
	int i;

	if (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			printf("%d", array[i]);
			if (i < r)
				printf(", ");
			else
				printf("\n");
		}
	}

	if (array[mid] == value)
		return (mid);
	else if (array[mid] > value)
		return (search(array, l, mid - 1, value));
	else
		return (search(array, mid + 1, r, value));
}

/**
 * binary_search - this function searches for a number in a sortd array
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search
 *
 * Return: the inde of the value or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = (int)size - 1;

	if (array == NULL)
		return (-1);

	return (search(array, l, r, value));
}
