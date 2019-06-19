#include <stdio.h>
#include <string.h>

/**
 * main - Entry point, Print to stderr
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	char *str  = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	strerror(1);
	perror(str);
	return (1);
}
