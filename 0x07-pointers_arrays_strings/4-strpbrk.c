#include <stddef.h>

/**
 * _strpbrk - locate first matching character
 * @s: string to search
 * @accept: set of characters to match
 * Return: pointer to matching character or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
