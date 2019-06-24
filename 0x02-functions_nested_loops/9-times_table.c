#include "holberton.h"

/**
 * times_table - print 9x9 times table
 */
void times_table(void)
{
	int first;
	int second;
	int product = 0;

	for (first = 0; first <= 9; first++)
	{
		for (second = 0; second <= 9; second++)
		{
			product = first * second;
			if (second != 0 && product < 10)
				_putchar(' ');
			else if (second != 0)
				_putchar('0' + product / 10);
			_putchar('0' + product % 10);
			if (second != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
