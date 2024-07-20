#include "search_algos.h"
/**
 * jump_search - Searches for a value in a sorted array
 * of integers using the jump search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 * @start: A number representation of the beginning of the jump
 * @end: A number representation of the end of the jump
 *
 * Return: -1, if value is not present in array or array is NULL. Otherwise
 * return the index where the value is.
 */

int jump_search(int *array, size_t size, int value)
{
	int i = 0, start, end = sqrt(size);
	for(; array[end] < value; )
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		start = end;
		end = end + sqrt(size);
		if ( end > size - 1) end = size;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", start, end);
	for (i = start; i < end; i++)
	{
		if (array[i] == value)
			return i;
	}
	return (-1);
}
