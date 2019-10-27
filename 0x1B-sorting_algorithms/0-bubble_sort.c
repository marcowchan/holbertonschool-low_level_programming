#include "sort.h"

/**
 * bubble_sort - sorts an array using the bubble sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
	bool isUnsorted = true;
	size_t i = 0;
	int tmp;

	if (array == NULL || size < 2)
		return;
	while (isUnsorted)
	{
		isUnsorted = false;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				isUnsorted = true;
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}
