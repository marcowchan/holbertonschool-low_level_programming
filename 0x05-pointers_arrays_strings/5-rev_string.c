/**
 * _strlen - return length of string
 * @s: string to get length from
 * Return: length of string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * rev_string - reverse a string
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i;
	int len = _strlen(s);
	char c;

	for (i = 0; i < len / 2; i++)
	{
		c = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = c;
	}
}
