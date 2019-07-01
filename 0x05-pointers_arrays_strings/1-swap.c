/**
 * swap_int - swap values of two int
 * @a: pointer to swap with b
 * @b: pointer to swap with a
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
