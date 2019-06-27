#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	if (n % 10 < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n < 10)
		_putchar('0' + n % 10);
	else
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
