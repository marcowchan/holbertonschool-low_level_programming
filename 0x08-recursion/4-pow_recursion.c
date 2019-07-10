/**
 * _pow_recursion - compute x to the power of y
 * @x: base
 * @y: exponent
 * Return: exponential result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
