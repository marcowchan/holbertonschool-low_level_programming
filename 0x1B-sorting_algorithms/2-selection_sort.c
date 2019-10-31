#include "sort.h"

/**
 * swap - swaps two integers
 * @a: first integer
 * @b: second integer
 */
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - selection sorts an array of integers
 * @array: input array
 * @size: length of array
 */
void selection_sort(int *array, size_t size)
{
	register unsigned int i, j, min;

	if (!array)
		return;
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
			if (array[min] > array[j])
				min = j;
		if (i != min)
		{
			swap(&array[i], &array[min]);
			print_array(array, size);
		}
	}
}
