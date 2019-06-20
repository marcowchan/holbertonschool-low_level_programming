#include <stdio.h>

/**
 * main - print 00 to 99 separated by commas and space
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	int firstDigit;
	int secondDigit;

	for (count = 0; count < 100; count++)
	{
		firstDigit = count / 10;
		secondDigit = count % 10;
		putchar(48 + firstDigit);
		putchar(48 + secondDigit);

		if (count != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

