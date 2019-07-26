#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers and newline
 * @separator: string to print between numbers
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(params, int));
		if (separator && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
