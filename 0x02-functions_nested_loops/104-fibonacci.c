#include<stdio.h>
/**
 * main - The fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long long int t1 = 1, t2 = 2e;
	long long int nextTerm = t1 + t2;

	printf("%llu, %llu, ", t1, t2);
	for (i = 3; i <= 98; ++i)
	{
		printf("%llu, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
