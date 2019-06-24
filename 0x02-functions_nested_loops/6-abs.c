#include "holberton.h"

/**
 * _abs - compute the absolute value
 * Return: absolute value
 * @i: integer to compute with
 */
int _abs(int i)
{
	if (i < 0)
		return (0 - i);
	return (i);
}
