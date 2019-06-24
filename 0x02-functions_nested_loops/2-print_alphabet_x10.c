#include "holberton.h"

/**
 * print_alphabet_x10 - Print alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int count;
	char c;

	for (count = 0; count < 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');
	}
}
