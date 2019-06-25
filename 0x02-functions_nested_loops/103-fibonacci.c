#include <stdio.h>

/**
 * main - print first 50 nums of fibonacci
 * Return: 0
 */
int main(void)
{
	unsigned long long int a = 0;
	unsigned long long int b = 1;
	unsigned long long cur;
	unsigned long long sum = 0;
	int i;

	for (i = 0; i < 50; i++)
	{
		cur = a + b;
		if (cur > 4000000)
			break;
		if (cur % 2 == 0)
			sum += cur;
		a = b;
		b = cur;
	}
	printf("%llu", sum);
	putchar('\n');
	return (0);
}
