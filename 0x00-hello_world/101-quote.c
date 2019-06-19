#include <stdio.h>
#include <string.h>

/**
 * main - Entry point, Print to stderr
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(*str), strlen(str), stderr);
	return (1);
}
