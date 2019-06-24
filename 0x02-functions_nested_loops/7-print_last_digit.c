#include "holberton.h"

/**
 * print_last_digit - print the last digit
 * Return: last digit
 * @i: number to extract last digit
 */
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
		i = -i;
	_putchar('0' + i);
	return (i);
}
