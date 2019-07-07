/**
 * cap_string - capitalize all words of a string
 * @s: string with words to capitalize
 */
char *cap_string(char *)
{
	char *r = s;
	int i;
	char a[] = " \t\n,.!?\"(){}";
	int capitalize = 1;

	while (*s)
	{
		if (cap && *s >= 'a' && *s <= 'z')
			*s -= 32;
		cap = 0;
		for (i = 0; i < 12; i++)
		{
			if (*s == a[i])
				cap = 1;
		}
		s++;
	}
	return (r);
}
