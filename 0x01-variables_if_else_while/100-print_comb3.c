#include <stdio.h>

/**
 * main - print 00 to 99, but only unique combinations
 * Return: Always 0 (Success)
 */
int main(void)
{
	int firstDigit;
	int secondDigit;
	int offset = 0;

	for (firstDigit = '0'; firstDigit <= '8'; firstDigit++)
	{
		for (secondDigit = '1' + offset; secondDigit <= '9'; secondDigit++)
		{
			if (firstDigit == secondDigit)
				continue;

			putchar(firstDigit);
			putchar(secondDigit);
			if (!(firstDigit == '8' && secondDigit == '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
		offset++;
	}
	putchar('\n');
	return (0);
}

