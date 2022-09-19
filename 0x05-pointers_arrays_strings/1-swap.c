/**
 * swap_int - Swaps the values of two integers
 * @a: first integer
 * @b: second integer
 * Returns : nothing
 */

void swap_int(int *a, int *b)
{
	int c = &a;
	*a = &b;
	*b = c;
}
