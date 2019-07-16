#include <stdlib.h>

/**
 * create_array - create and initialize a char array
 * @size: size of array to create
 * @c: initial value to fill array
 * Return: pointer to created array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = NULL;

	if (size > 0)
		p = malloc(size);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
