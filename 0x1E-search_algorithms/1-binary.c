#include "search_algos.h"

/**
 * print_array - Prints an array.
 * @array: The pointer to the array to print.
 * @left: The index to start printing.
 * @right: The index to stop printing.
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array:");
	for (i = left; i < right; i++)
		printf(" %d,", array[i]);
	printf(" %d\n", array[right]);
}

/**
 * binary_search - Binary searches an array.
 * @array: The pointer to an asending-sorted array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: The index of the value or (-1)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, mid, right = size - 1;

	while (array && left <= right)
	{
		mid = (left + right) / 2;
		print_array(array, left, right);
		if (value < array[mid])
			right = mid - 1;
		else if (value > array[mid])
			left = mid + 1;
		else
			return (mid);
	}
	return (-1);
}
