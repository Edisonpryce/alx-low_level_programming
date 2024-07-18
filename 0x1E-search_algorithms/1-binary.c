#include "search_algos.h"

/**
 * binary_search - Function implements the binary search algorithm function.
 * @array: Pointer first element in array.
 * @size: Array size.
 * @value: Value to search.
 *
 * Return: -1 if array is NULL or value can't be found. Otherwise
 * return value index location.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t st, en, mid_item, i;

	if (array == NULL)
		return (-1);

	st = 0;
	en = size - 1;
	while (st <= en)
	{
		printf("Searching in array: ");
		for (i = st; i <= en; i++)
		{
			if (i != en)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid_item = (st + en) / 2;
		if (array[mid_item] == value)
			return (mid_item);

		else if (array[mid_item] < value)
			st = mid_item + 1;
		else if (array[mid_item] > value)
			en = mid_item - 1;
	}
	return (-1);
}
