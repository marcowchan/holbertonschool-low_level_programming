#include <stdio.h>

/**
 * main - print the program name
 * @argv: strings containing the program name and arguments
 * @argc: number of strings in argv
 * Return: Always Success 0
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
