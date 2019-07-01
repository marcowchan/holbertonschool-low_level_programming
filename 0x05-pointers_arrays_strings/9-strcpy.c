#include "holberton.h"

/**
 * _strcpy - copy string into a buffer
 * @dest: buffer to hold the copy
 * @src: the string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
