/**
 * _isupper - check if character is uppercase
 * Return: Uppercase 1, everything else 0
 * @c: ASCII value of character
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
