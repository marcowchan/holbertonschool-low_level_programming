#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * printSign - Print the sign of a given integer
 * @number: integer to be tested
 */
void printSign(int number)
{
	if (number > 0)
		printf("%i is positive\n", number);
	else if (number == 0)
		printf("%i is zero\n", number);
	else
		printf("%i is negative\n", number);
}

/**
 * main - Generate random number
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printSign(n);
	return (0);
}
