#include "main.h"

/**
 * print_last_digit - Prints last digit in a number
 * @n: Integer number given
 * Return: The last digit in the number given
 */

int print_last_digit(int n)
{
	if (n < 0)
		return(-n % 10);
	else if (n > 0)
		return (n % 10);
	else 
		return (0);
}