/**
 * reverse_array - reverse contents of an array
 * @a: array to reverse
 * @n: number of elements in a
 */
void reverse_array(int *a, int n)
{
	int tmp;
	int *end = a + n - 1;

	while (a != end && n > 0)
	{
		tmp = *a;
		*a = *end;
		*end = tmp;
		if (a + 1 == end)
			break;
		a++;
		end--;
	}
}
