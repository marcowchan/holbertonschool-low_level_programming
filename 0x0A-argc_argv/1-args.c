#include <stdio.h>

/**
 * main - print number of arguments
 * @argv: strings containing program name and arguments
 * @argc: number of strings in argv
 * Return: Always Success 0
 */
int main(int argc, char *argv[])
{
	if (*argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
