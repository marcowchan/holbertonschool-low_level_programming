#include <stdio.h>
#include <limits.h>

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: converted integer
 */
int _atoi(char *s)
{
	char sign = 0;
	unsigned int num = 0;

	while (!(*s >= '0' && *s <= '9'))
	{
		if (*s == '-')
			sign = !sign;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
		if (!sign && num >= INT_MAX)
			return (INT_MAX);
		else if (sign && num > INT_MAX)
			return (INT_MIN);
	}
	if (sign)
		return (-num);
	return (num);
}
