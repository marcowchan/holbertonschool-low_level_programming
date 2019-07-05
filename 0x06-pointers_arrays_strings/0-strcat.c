/**
 * _strcat - concatenates two strings
 * @dest: string to concate with src
 * @src: string to concate to dest
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*dest++)
		;
	dest--;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p);
}
