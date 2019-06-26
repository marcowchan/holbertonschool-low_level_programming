#include "holberton.h"

/**
 * print_times_table - print nxn times table
 * @n: number to create n by n times table
 */
void print_times_table(int n)
{

	int first;
	int second;
	int product = 0;

	if (n > 15 || n < 0)
		return;
	for (first = 0; first <= n; first++)
	{
		for (second = 0; second <= n; second++)
		{
			product = first * second;
			if (second > 0)
			{
				_putchar(',');
				if (product < 100)
					_putchar(' ');
				if (product < 10)
					_putchar(' ');
				_putchar(' ');
			}
			if (product >= 100)
				_putchar('0' + product / 100);
			if (product >= 10)
				_putchar('0' + product / 10 % 10);
			_putchar('0' + product % 10);
		}
		_putchar('\n');
	}
}
