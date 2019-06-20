#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * printLastDigit - print whether or not the last digit
 * is greater than 5 or less than 6 or zero
 * @n: the integer to be displayed along with its last digit
 */
void printLastDigit(int n)
{
	int digit = n % 10;

	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
}

/**
 * main - Randomly print positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printLastDigit(n);
	return (0);
}
