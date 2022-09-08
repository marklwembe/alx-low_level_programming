#include<stdio.h>
/**
 *
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char first;
	int second;
	long int third;
	long long int fourth;
	float fifth;

	printf("Size of a char: %d byte(s)\n", sizeof(first));
	printf("Size of an int: %d byte(s)\n", sizeof(second));
	printf("Size of a long int: %d byte(s)\n", sizeof(third));
	printf("Size of a long long int: %d byte(s)\n" sizeof(fourth));
	printf("Size of a float: %d byte(s)\n", sizeof(fifth));
	
	return (0);
}
