/**
 * _isdigit - check if character is a digit between 0-9
 * Return: digit 1, everything else 0
 * @c: ASCII value of character
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
