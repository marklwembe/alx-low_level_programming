#include<stdio.h>
/**
 * main - The fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int t1 = 1, t2 = 2;
	long int nextTerm = t1 + t2;

	printf("%lu, %lu, ", t1, t2);
	for (i = 3; i <= 98; ++i)
	{
		printf("%lu, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("\n");
	return (0);
}
