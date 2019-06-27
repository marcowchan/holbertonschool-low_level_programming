#include <stdio.h>
#include <math.h>

/**
 * main - Print largest prime number factor
 * Return: Success 0
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long largestPrime = -1;
	unsigned long i;

	while (num % 2 == 0)
		num /= 2;

	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			largestPrime = i;
			num /= i;
		}
	}
	if (largestPrime < num)
		largestPrime = num;
	printf("%lu\n", largestPrime);
	return (0);
}
