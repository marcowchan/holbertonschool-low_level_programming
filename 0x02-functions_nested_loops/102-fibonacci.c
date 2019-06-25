#include <stdio.h>

/**
 * main - print first 50 nums of fibonacci
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long cur;
	int i;

	for (i = 0; i < 50; i++)
	{
		cur = a + b;
		printf("%lu", cur);
		if (i != 49)
			printf(", ");
		a = b;
		b = cur;
	}
	putchar('\n');
	return (0);
}
