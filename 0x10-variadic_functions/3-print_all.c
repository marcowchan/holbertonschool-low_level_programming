#include <stdarg.h>
#include <stdio.h>

/**
 * countValid - count number of valid characters
 * @s: string to check characters
 * Return: sum of valid characters
 */
int countValid(const char *s)
{
	int i = 0, count = 0;

	if (!format)
	{
		printf("\n");
		exit(0);
	}
	while (s[i])
	{
		switch (s[i])
		{
			case 'c':
			case 'i':
			case 'f':
			case 's':
				count++;
		}
		i++;
	}
	return (count);
}

/**
 * print_all - print all char, int, float, and string parameters
 * @format: contains data types of parameters in order
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, count = 0, f;
	va_list params;
	char *s;

	va_start(params, format);
	count = countValid(format);
	while (format[i])
	{
		f = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(params, int));
				count--;
				f = 1;
				break;
			case 'i':
				printf("%d", va_arg(params, int));
				count--;
				f = 1;
				break;
			case 'f':
				printf("%f", va_arg(params, double));
				count--;
				f = 1;
				break;
			case 's':
				s = va_arg(params, char *);
				count--;
				f = 1;
				if (!s)
					s = "(nil)";
				printf("%s", s);
		}
		if (f && count)
			printf(", ");
		i++;
	}
	va_end(params);
	printf("\n");
}
