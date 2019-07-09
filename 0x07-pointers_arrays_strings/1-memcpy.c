/**
 * _memcpy - copy a memory area
 * @dest: memory area place copy
 * @src: memory area to copy
 * @n: number of bytes to copy
 * Return: pointer to copied bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *r = dest;

	while (n)
	{
		*dest++ = *src++;
		n--;
	}
	return (r);
}
