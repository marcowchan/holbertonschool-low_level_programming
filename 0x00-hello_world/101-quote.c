#include <stdio.h>
#include <string.h>

/**
 * main - Entry point, Prints without fprintf or fputs
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *str = "and that piece of art is useful\"" +
	" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(*str), strlen(str), stdout);
	return (0);
}
