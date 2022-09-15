#include <stdio.h>
/**
 * main - Prints first 50 fibonacci numbers start at 1 then 2
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	long int t1 = 1, t2 = 2, sum;

	while (i < 50)
	{
		if (i != 49)
			printf("%ld, ", t1);
		else
			printf("%ld\n", t1);
		sum = t1 + t2;
		t1 = t2;
		t2 = sum;
		++i;
	}
	return (0);
}
