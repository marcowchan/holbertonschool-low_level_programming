#include <stdio.h>

/**
 * main - print 000 to 999, but only unique combinations and digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first;
	int second;
	int third;

	for (first = '0'; first <= '9'; first++)
	{
		for (second = first + 1; second <= '9'; second++)
		{
			for (third = second; third <= '9'; third++)
			{
				if (first == second || second == third || first == third)
					continue;
				putchar(first);
				putchar(second);
				putchar(third);

				if (!(first == '7' && second == '8' && third == '9'))
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');
	return (0);
}

