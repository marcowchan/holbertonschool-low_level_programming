#include "holberton.h"

/**
 * print_numbers - print numbers from 0 - 9, except 2 and 4
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
