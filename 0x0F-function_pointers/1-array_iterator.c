#include <stddef.h>

/**
 * array_iterator - execute a function for each element of an array
 * @array: array to iterate
 * @size: size of the array
 * @action: iterator function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
