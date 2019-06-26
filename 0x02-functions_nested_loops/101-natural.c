#include <stdio.h>

/**
 * main - sum of all nums divisible by 3 or 5 from 0-1024
 * Return: Success 0
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0)
			sum += n;
		else if (n % 5 == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
