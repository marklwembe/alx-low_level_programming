#include "main.h"

/**
* is_prime - Test if number is prime
* @n: Int to to check if prime
* @div: Number to divide against
* Return: 1 if prime 0 otherwise
*/

int is_prime(int n, int div)
{
	if (n == div)
		return (1);

	if (n % div == 0)
		return (0);

	return (is_prime(n, div + 1));
}

/**
* is_prime_number - Test if number is prime
* @n: Int value to test
* Return: 1 if prime 0 otherwise
*/
int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (is_prime(n, divisor));
}
