#include "search_algos.h"

/**
 * linear_search - Linear search algorithm function
 * @array: Pointer to first element.
 * @size: Array size.
 * @value: Element to search.
 *
 * Return: -1 if value not found, or array empty.  Otherwise
 * return value index.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
