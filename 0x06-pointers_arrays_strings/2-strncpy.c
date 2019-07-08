/**
 * _strncpy - copy a string
 * @dest: pointer to array to copy string into
 * @src: pointer to string to copy
 * @n: number of characters to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;
	int count = 0;

	while (count < n)
	{
		if (*src)
		{
			*dest = *src;
			src++;
		}
		else
			*dest = *src;
		dest++;
		count++;
	}
	return (p);
}
