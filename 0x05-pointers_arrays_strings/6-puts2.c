#include "holberton.h"

/**
 * puts2 - print every second character of string
 * @str: string to print characters from
 */
void puts2(char *str)
{
	if (*str == '\0')
	{
		_putchar('\n');
		return;
	}
	do {
		_putchar(*str);
		if (!*(str + 1))
			break;
		str += 2;
	} while (*str);
	_putchar('\n');
}
