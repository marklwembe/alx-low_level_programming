/**
 * reverse_array - Revereses the content of an array.
 * @a: Pointer to .
 * @n: Number of elements in the array.
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int hold, i = 0;

	--n;
	while (i <= n)
	{
		hold = a[i];
		a[i++] = a[n];
		a[n--] = hold;
	}
}
