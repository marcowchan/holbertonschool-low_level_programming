/**
 * string_toupper - change all lowercase to uppercase
 * @s: string to transform
 * Return: pointer to transformed string
 */
char *string_toupper(char *s)
{
	char *r = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (r);
}
