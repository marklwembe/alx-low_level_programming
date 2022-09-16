#include "main.h"
/**
 * _isdigit - Checks if the given value is a digit.
 * @c: integer value given
 * Return: int
 */
int _isdigit(int c)
{
	if (c >= 0 && c <=9)
		return (1);
	else
		return (0);
}
