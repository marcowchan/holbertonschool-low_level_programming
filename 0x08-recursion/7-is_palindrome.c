/**
 * recurse - palindrome check
 * @start: character to check with end
 * @end: character to check with start
 * Return: Palindrome 1, Not 0
 */
int recurse(char *start, char *end)
{
	if (start == end)
		return (1);
	if (*start == *end && start + 1 == end)
		return (1);
	if (*start == *end)
		return (recurse(start + 1, end - 1));
	return (0);
}

/**
 * end - return a pointer at the end of a string
 * @s: string reach end of
 * Return: pointer to end of string
 */
char *end(char *s)
{
	if (*s)
		return (end(s + 1));
	return (s);
}

/**
 * is_palindrome - check if string is a palindrome
 * @s: string to check
 * Return: True 1, False 0
 */
int is_palindrome(char *s)
{
	return (recurse(s, end(s) - 1));
}
