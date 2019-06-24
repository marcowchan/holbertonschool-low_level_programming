#include "holberton.h"

/**
 * print_sign - Check and print sign of number
 * Return: Positive 1, Zero 0, Negative -1
 * @n: number to test
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
