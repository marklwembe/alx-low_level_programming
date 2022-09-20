#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of in given array
 * @a: Pointer to string input
 * @n: Number of elements
 * Return: no return.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i < n;)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
