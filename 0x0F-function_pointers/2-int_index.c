/**
 * int_index - search for int in an array
 * @array: array to search
 * @size: size of array
 * @cmp: iterator function that compares an int
 * Return: index of int or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
