#include <stdio.h>
#include <string.h>
/**
 * main - print the digits of base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex[] = "0123456789abcdef\n";
	int i;

	for (i = 0; i < strlen(hex); i++)
		putchar(hex[i]);
	return (0);
}

