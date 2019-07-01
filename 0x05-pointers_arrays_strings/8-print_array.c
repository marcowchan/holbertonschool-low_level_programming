#include <stdio.h>

/**
 * print_array - print n elements
 * @a: array of integer
 * @n: number of integers to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	putchar('\n');
}
