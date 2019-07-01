#include "holberton.h"

/**
 * _strlen - return length of string
 * @s: string to get length from
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * puts_half - print last half of a string
 * @str: string to print last half of
 */
void puts_half(char *str)
{
	int len = _strlen(str);
	int i = (len % 2 == 0) ? len / 2 : len / 2 + 1;

	for (; i < len; i++)
		_putchar(*(str + i));
	_putchar('\n');
}
