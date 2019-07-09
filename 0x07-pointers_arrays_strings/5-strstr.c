#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search for
 * Return: pointer to located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i] && haystack[i] && needle[i] == haystack[i]; i++)
			;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
