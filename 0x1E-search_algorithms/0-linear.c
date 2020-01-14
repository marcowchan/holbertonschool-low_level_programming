#include "search_algos.h"

/**
 * linear_search - Searches an array in linear time.
 * @array: The pointer to the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index of the value or (-1)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; array && i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
