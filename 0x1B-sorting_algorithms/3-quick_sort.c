#include "sort.h"

/**
 * partition - partitions array between low and high index
 * @arr: input array
 * @low: index of start of array
 * @high: index of end of array
 * @size: length of array
 * Return: starting index plus one
 */
int partition(int *arr, int low, int high, size_t size)
{
	int pivot = arr[high], i = low - 1, j;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= pivot)
		{
			i++;
			if (i != j)
			{
				swap(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	if ((i + 1) != high)
	{
		swap(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}
	return (i + 1);
}

/**
 * qs - quick sort with extra parameter size
 * @arr: input array
 * @low: index of start of array
 * @high: index of end of array
 * @size: length of array
 */
void qs(int arr[], int low, int high, size_t size)
{
	int p;

	if (low < high)
	{
		p = partition(arr, low, high, size);

		qs(arr, low, p - 1, size);
		qs(arr, p + 1, high, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order using
 * the Quick sort algorithm
 * @array: input array
 * @size: length of array
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	qs(array, 0, size - 1, size);
}

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
