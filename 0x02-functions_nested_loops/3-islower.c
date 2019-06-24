#include "holberton.h"

/**
 * _islower - check if ascii value is lowercase
 * Return: lowercase returns 1, anything else 0
 * @c: ascii value to test
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
