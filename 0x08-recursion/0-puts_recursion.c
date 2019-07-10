#include "holberton.h"

/**
 * _puts_recursion - print a string
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(++s);
	}
	else
	{
		_putchar('\n');
	}
}
