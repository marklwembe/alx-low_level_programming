#include <stdio.h>
/**
 * main - Prints sum of even Fibonacci nums till 4,000,000
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int t1 = 1, t2 = 2, t3, even_sum = 0;

	while (t1 <= 4000000)
	{
		if (t1 % 2 == 0)
			even_sum += t1;
		t3 = t1 + t2;
		t1 = t2;
		t2 = t3;
	}
	printf("%ld\n", even_sum);
	return (0);
}
