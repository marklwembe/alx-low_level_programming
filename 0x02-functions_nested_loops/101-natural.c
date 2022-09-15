#include <stdio.h>
/**
 * main - Calculates fizz buzz numbers' sum till 1024
 * Return: 0 -success
 */

int main(void)
{
	long int result = 0;
	int i = 0;

	while (i < 1024)
	{
		if ((i % 3) == 0)
			result = result + i;
		else if ((i % 5) == 0)
			result = result + i;
		++i;
	}
	printf("%ld\n", result);

	return (0);
}
