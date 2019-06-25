#include "holberton.h"

/**
 * main - print Holberton
 * Return: On success 0
 */
int main(void)
{
	int i;
	char c[] = "Holberton\n";

	for (i = 0; i < (int)sizeof(c); i++)
	{
		_putchar(*(c + i));
	}
	return (0);
}
