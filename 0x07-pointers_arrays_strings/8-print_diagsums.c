#include <stdio.h>

/**
 * print_diagsums - print sum of 2d square array of ints
 * @a: pointer to 2d array
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * (size + 1)];
		sum2 += a[(i + 1) * (size - 1)];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
