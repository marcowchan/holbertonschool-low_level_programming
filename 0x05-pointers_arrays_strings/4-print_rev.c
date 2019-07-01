#include "holberton.h"

/**
 * recursive_print - Recursively print string in reverse
 * @s: string to print
 */
void recursive_print(char *s)
{
	if (*s)
	{
		recursive_print(s + 1);
		_putchar(*s);
	}
}

/**
 * print_rev - Print string in reverse and newline
 * @s: string to print in reverse
 */
void print_rev(char *s)
{
	recursive_print(s);
	_putchar('\n');
}
