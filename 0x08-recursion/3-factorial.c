/**
 * factorial- compute factorial
 * @n: number to compute factorial of
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
