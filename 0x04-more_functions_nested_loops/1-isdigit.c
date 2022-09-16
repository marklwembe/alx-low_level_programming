#include "main.h"
/**
 * _isdigit - Checks if the given value is a digit.
 * @c: integer value given
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
