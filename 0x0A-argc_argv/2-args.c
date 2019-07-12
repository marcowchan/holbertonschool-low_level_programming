#include <stdio.h>

/**
 * main - print all arguments
 * @argv: strings containing the program name and arguments
 * @argc: number of strings in argv
 * Return: Always Success 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
