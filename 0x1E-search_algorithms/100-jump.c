#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array
 * of integers using the jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: The index of the value if found, -1 otherwise
 */

int jump_search(int array[], size_t size, int value)
{
	size_t i = 0, start = 0, end = sqrt(size);

	while (array[end] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", start, array[start]);
		start = end;
		end = end + sqrt(size);
		if (end > size - 1)
			break;
	}

	printf("Value checked array[%ld] = [%d]\n", start, array[start]);
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);

	for (i = start; i <= end; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (end > size)
			break;
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
