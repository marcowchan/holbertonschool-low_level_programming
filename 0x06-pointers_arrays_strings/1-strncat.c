/**
 * _strncat - concatenates two strings with n bytes
 * @dest: string to concate with src
 * @src: string to concate to dest
 * @n: number of characters to copy from src
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *p = dest;
	int count = 0;

	while (*dest++)
		;
	dest--;
	while (*src && count < n)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	*dest = '\0';
	return (p);
}
