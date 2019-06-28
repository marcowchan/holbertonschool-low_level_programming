#include "holberton.h"

/**
 * print_number - Prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	int lastDigit;

	if (n < 0)
	{
		_putchar('-');
		lastDigit = n % 10 * -1;
		n = n / -10;
		print_number(n);
		_putchar('0' + lastDigit);
	}
	else if (n < 10)
		_putchar('0' + n % 10);
	else
	{
		print_number(n / 10);
		_putchar('0' + n % 10);
	}
}
