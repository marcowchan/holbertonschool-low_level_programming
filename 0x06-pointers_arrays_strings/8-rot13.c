/**
 * rot13 - Encode a string to rot13
 * @s: string to encode
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	char *r = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s = (*s - 'a' + 13) % 26 + 'a';
		else if (*s >= 'A' && *s <= 'Z')
			*s = (*s - 'A' + 13) % 26 + 'A';
		s++;
	}
	return (r);
}
