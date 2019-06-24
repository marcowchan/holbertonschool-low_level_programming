#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - print from starting num to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			printf(", ");
		}
	}
	putchar('\n');
}
