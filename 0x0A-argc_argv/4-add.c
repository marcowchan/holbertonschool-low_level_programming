#include <stdlib.h>
#include <stdio.h>

/**
 * main - print the sum of positive numbers
 * @argv: strings of positive numbers
 * @argc: number of strings in argv
 * Return: Always Success 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
