#include <stdlib.h>
#include <stdio.h>

/**
 * main - print product of two numbers
 * @argv: two string numbers
 * @argc: number of arguments in argv
 * Return: Success (0), Not 3 Arguments Error (1)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
