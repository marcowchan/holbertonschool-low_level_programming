#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print the digits of base 10 with only putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	for (c = 48; c <= 57; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

