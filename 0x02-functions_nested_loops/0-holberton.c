#include "holberton.h"

/**
 * main - print Holberton
 * Return: On success 1
 */
int main(void)
{
	int i;
	char c[] = "Holberton\n";

	for (i = 0; i < sizeof(c); i++)
	{
		_putchar(*(c + i));
	}
}
