#include <stdio.h>

/**
 * main - print 2 numbers with range of 00 to 99, but only unique combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 0;
	int second = 0;

	for (first = 0; first < 100; first++)
	{
		for (second = first + 1; second < 100; second++)
		{
			putchar(48 + first/10);
			putchar(48 + first%10);
			putchar(' ');
			putchar(48 + second/10);
			putchar(48 + second%10);
			if (!(first == 98 && second == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

