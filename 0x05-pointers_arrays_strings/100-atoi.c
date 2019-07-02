#include <stdio.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: converted integer
 */
int _atoi(char *s)
{
	char sign = 0;
	int num = 0;

	while (!(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
			sign++;
		s++;
	}
	if (sign % 2 == 1 && *s >= '0' && *s <= '9')
	{
		num = (*s - '0') * -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		if (num < 0)
			num = num * 10 - (*s - '0');
		else
			num = num * 10 + (*s - '0');
		s++;
	}
	return (num);
}
