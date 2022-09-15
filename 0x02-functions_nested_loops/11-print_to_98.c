#include <stdio.h>
/**
 * print_to_98 - Prints integers from n to 98
 * @n: Number to start from
 * Return: void
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		int a = n;

		while (a <= 98)
		{
			if (a != 98)
				printf("%d, ", a);
			else if (a == 98)
				printf("%d\n", a);
			a++;
		}
	}
	else if (n >= 98)
	{
		int b = n;

		while (b >= 98)
		{
			if (b != 98)
				printf("%d, ", b);
			else if (b == 98)
				printf("%d\n", b);
			b--;
		}
	}
}
